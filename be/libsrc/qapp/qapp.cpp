#include "qapp.h"

using namespace std;

void stopRunningHandler(int signo)
{
    cout << "[QAPP] Stopping Application...\n";
    QappLauncher::running = false;
}

int BaseApp::run()
{
    signal(SIGINT, stopRunningHandler);

    int err;
    err = this->OnInit();
    if (err)
    {
        cout << "[QAPP] Error Calling OnInit()\n";
        return err;
    }

    QappLauncher::running = true;
    while (QappLauncher::running)
    {
        OnUpdate();
        usleep(10 * 1000);
    }

    err = OnExit();
    if (err)
    {
        cout << "[QAPP] Error Calling OnExit()\n";
        return err;
    }

    return 0;
}

void QappLauncher::Run(BaseApp *app)
{
    int ret = app->run();
    cout << "Qapp exit with code " << ret << endl;
}

bool QappLauncher::running = false;