#pragma once
/*-------------------------------------------------------------------------
 * This source code is confidential proprietary information which is
 * Copyright (c) 2017 by Great Hill Corporation.
 * All Rights Reserved
 *
 * The LICENSE at the root of this repo details your rights (if any)
 *------------------------------------------------------------------------*/
 /*
  *
  * This code was generated automatically from grabABI and makeClass You may
  * edit the file, but keep your edits inside the 'EXISTING_CODE' tags.
  *
  */
#include "etherlib.h"
#include "tokenlib.h"
#ifndef NOWALLETLIB
#include "walletlib.h"
#endif

#include "cancelevent.h"
#include "depositevent.h"
#include "orderevent.h"
#include "tradeevent.h"
#include "withdrawevent.h"
#include "cancelorder.h"
#include "changeaccountlevelsaddr.h"
#include "changeadmin.h"
#include "changefeeaccount.h"
#include "changefeemake.h"
#include "changefeerebate.h"
#include "changefeetake.h"
#include "deposit.h"
#include "deposittoken.h"
#include "order.h"
#include "trade.h"
#include "withdraw.h"
#include "withdrawtoken.h"
#include "processing.h"

//------------------------------------------------------------------------
extern void parselib_init(QUITHANDLER qh=defaultQuitHandler);
extern const CTransaction *promoteToFunc(const CTransaction *p);
extern const CLogEntry *promoteToEvent(const CLogEntry *p);

//-----------------------------------------------------------------------------
extern string_q sigs[];
extern string_q topics[];

extern size_t nSigs;
extern size_t nTopics;

// EXISTING_CODE
// EXISTING_CODE
