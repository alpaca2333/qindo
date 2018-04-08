//
// Created by qwertysun on 4/3/18.
//

#pragma once

#include "qapp.h"

class GameServer : public BaseApp
{
public:
    int OnInit();

    int OnUpdate();

    int OnTick();

    int OnExit();

};