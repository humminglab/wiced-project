/*
 * Copyright (C) 2018 HummingLab - All Rights Reserved.
 *
 * This software is confidential and proprietary to Telesign.
 * No Part of this software may be reproduced, stored, transmitted, disclosed
 * or used in any form or by any means other than as expressly provide by the 
 * written license agreement between Telesign and its licensee.
 */
#pragma once

int cmd_fast_charge(int argc, char* argv[]);
int cmd_usb_detect(int argc, char* argv[]);
int cmd_usb_test(int argc, char* argv[]);

#define BUS_USB_COMMANDS \
 { "fast_charge", cmd_fast_charge, 1, NULL, NULL, "1/0", "Enable Fast Charge" }, \
 { "usb_detect", cmd_usb_detect, 0, NULL, NULL, NULL, "USB Detect" }, \
 { "usb_test", cmd_usb_test, 0, NULL, NULL, NULL, "USB Test" },