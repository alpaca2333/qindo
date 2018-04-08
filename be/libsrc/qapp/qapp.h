/**
 * 服务器的基类。
 * @author  qwertysun
 * @date    2018/04/02
 */

#pragma once

#include <unistd.h>
#include <iostream>
#include <cstdio>
#include <sys/wait.h>

class QappLauncher;

class BaseApp
{
public:
    virtual int OnInit() = 0;

    virtual int OnUpdate() = 0;

    virtual int OnTick() = 0;

    virtual int OnExit() = 0;

private:
    friend class QappLauncher;
    int run();
};

class QappLauncher
{
public:
    static bool running;
    static void Run(BaseApp *app);
};


