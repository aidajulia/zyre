/*  =========================================================================
    zyre_classes - private header file

    Copyright (c) the Contributors as noted in the AUTHORS file.           
                                                                           
    This file is part of Zyre, an open-source framework for proximity-based
    peer-to-peer applications -- See http://zyre.org.                      
                                                                           
    This Source Code Form is subject to the terms of the Mozilla Public    
    License, v. 2.0. If a copy of the MPL was not distributed with this    
    file, You can obtain one at http://mozilla.org/MPL/2.0/.               
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef ZYRE_CLASSES_H_INCLUDED
#define ZYRE_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/zyre.h"

//  Internal API
#include "zre_msg.h"
#include "zyre_peer.h"
#include "zyre_group.h"
#include "zyre_node.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef ZYRE_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zre_msg_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zyre_peer_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zyre_group_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
ZYRE_PRIVATE void
    zyre_node_test (bool verbose);

//  Self test for private classes
ZYRE_PRIVATE void
    zyre_private_selftest (bool verbose);

#endif // ZYRE_BUILD_DRAFT_API

//  Private constants
#define REAP_INTERVAL	1000 //                   Once per second
#endif
