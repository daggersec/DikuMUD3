/*
 $Author: tperry $
 $RCSfile: mplex.h,v $
 $Date: 2001/04/10 21:11:37 $
 $Revision: 2.0 $
 */
#pragma once

#include "color.h"
#include "essential.h"
#include "hook.h"
#include "network.h"
#include "protocol.h"
#include "queue.h"

#include <cstring>

class cMotherHook : public cHook
{
public:
    void Unhook(void);
    void Input(int nFlags);
    int IsHooked(void);
};

class cMudHook : public cHook
{
public:
    void Unhook(void);
    int read_mud(void);
    void Input(int nFlags);
};

void Control(void);
void test_mud_up(void);
void mud_went_down(void);

// I think this is the open socket from the main listening telnet port
extern cMotherHook g_MotherHook;
// Connection to and from the MUD server
extern cMudHook g_MudHook;
extern int g_nConnectionsLeft;
extern class color_type g_cDefcolor;
