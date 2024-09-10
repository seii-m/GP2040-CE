/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Seii-m_LITE Configuration"

// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_UP		 // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_DOWN	 // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_RIGHT // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_LEFT	 // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B1		 // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_B2		 // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_R2		 // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_L2		 // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_B3		 // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_B4		 // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_R1		 // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_L1		 // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_S1		 // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_17 GpioAction::BUTTON_PRESS_S2		 // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_L3		 // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_19 GpioAction::BUTTON_PRESS_R3		 // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_A1		 // A1     | Guide  | Home    | PS       | 13     | ~      |
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_A2		 // A2     | ~      | Capture | ~        | 14     | ~      |

// Setting GPIO pins to assigned by add-on
//
#define GPIO_PIN_00 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_01 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_14 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_15 GpioAction::ASSIGNED_TO_ADDON

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP HID_KEY_ARROW_UP			 // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN HID_KEY_ARROW_DOWN	 // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT HID_KEY_ARROW_RIGHT // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT HID_KEY_ARROW_LEFT	 // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1 HID_KEY_SHIFT_LEFT	 // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2 HID_KEY_Z						 // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2 HID_KEY_X						 // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2 HID_KEY_V						 // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3 HID_KEY_CONTROL_LEFT // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4 HID_KEY_ALT_LEFT		 // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1 HID_KEY_SPACE				 // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1 HID_KEY_C						 // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1 HID_KEY_5						 // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2 HID_KEY_1						 // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3 HID_KEY_EQUAL				 // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3 HID_KEY_MINUS				 // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1 HID_KEY_9						 // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2 HID_KEY_F2					 // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN -1									 // Hotkey Function                                        |

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL

#define HAS_I2C_DISPLAY 1
#define I2C0_ENABLED 1
#define I2C0_PIN_SDA 0
#define I2C0_PIN_SCL 1

#define BUTTON_LAYOUT BUTTON_LAYOUT_BOARD_DEFINED_A
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_BOARD_DEFINED_B

//   00030609121518212427303336394245485154576063666972757881848790939699X2X5X8
// 00·············┌─┐□┌─┐□┌─┐┏━━━┳━━━┓□□□□00
// 03□□□□□□□□□□□□□│A2│□│A1│□│S2│┃┌─┐┃┌─┐┣━━━┓03
// 06□□□□┏━━━┳━━━┓└─┘□└─┘┏┷━┷┫│B4│┃│L3│┃┌─┐┃06
// 09┏━━━┫┌─┐┃┌─┐┃□□□□□□□┃┌─┐┃└─┘┃└─┘┃│L1│┃09
// 12┃┌─┐┃│DL│┃│DD│┣━━━┓□□□┃│B3│┣━━━╋━━━┫└─┘┃12
// 15┃│L2│┃└─┘┃└─┘┃┌─┐┃□□□┃└─┘┃┌─┐┃┌─┐┣━━━┫15
// 18┃└─┘┣━━━┻━━━┫│DR│┃□□□┣━━━┫│B2│┃│R3│┃┌─┐┃18
// 21┗━━━┛□□□□□□□┃└─┘┃□□□┃┌─┐┃└─┘┃└─┘┃│R1│┃21
// 24□□□□□□□□□□□□┗━━━┛□□□┃│B1│┣━━━┻━━━┫└─┘┃24
// 27□□□□□□□□□□□□□□□□□□□□┃└─┘┃□□□□□□□┗━━━┛27
// 30□□□□□□□□□□□□□□□□□□□□┗━━━┛□□□□□□□□□□□□30
// 33□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□33
// 36□□□□□□□□□□□□□□□□□□□□□□┏━━━┓□□□□□□□□□□36
// 39□□□□□□□□□□□□□□□□□□□□□□┃┌─┐┃□□□□□□□□□□39
// 42□□□□□□□□□□□□□□┏━━━┳━━━┫│S1│┃□□□□□□□□□□42
// 45□□□□□□□□□□□□□□┃┌─┐┃┌─┐┃└─┘┃□□□□□□□□□□45
// 48□□□□□□□□□□□□□□┃│DU│┃│R2│┣━━━┛□□□□□□□□□□48
// 51□□□□□□□□□□□□□□┃└─┘┃└─┘┃□□□□□□□□□□□□□□51
// 54□□□□□□□□□□□□□□┗━━━┻━━━┛□□□□□□□□□□□□□□54
//   00030609121518212427303336394245485154576063666972757881848790939699X2X5X8

//   00030609121518212427303336394245485154576063666972757881848790939699
// 00□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□00
// 03□□□□□□□□□□□□□□□□□┌─┐□┌─┐□┌─┐□┌─┐□03
// 06□□□□□□□□□□□□□□□□□│A2│□│A1│□│S1│□│S2│□06
// 09□□□□□□□□□□□□□□□□□└─┘□└─┘□└─┘□└─┘□09
// 12□□□□□□□□□□□□□□□□□□□□┏━━━┳━━━┓□□□□12
// 15□□□□□□□□□□□□□□□□□□□□┃┌─┐┃┌─┐┃□□□□15
// 18□□□□┏━━━┳━━━┓□□□┏━━━┫│B4│┃│L3│┃□□□□18
// 21┏━━━┫┌─┐┃┌─┐┃□□□┃┌─┐┃└─┘┃└─┘┣━━━┓21
// 24┃┌─┐┃│DL│┃│DD│┣━━━┫│B3│┣━━━╋━━━┫┌─┐┃24
// 27┃│L2│┃└─┘┃└─┘┃┌─┐┃└─┘┃┌─┐┃┌─┐┃│R2│┃27
// 30┃└─┘┣━━━┻━━━┫│DR│┣━━━┫│B2│┃│R3│┃└─┘┃30
// 33┗━━━┛□□□□□□□┃└─┘┃┌─┐┃└─┘┃└─┘┣━━━┛33
// 36□□□□□□□□□□□□┗━━━┫│B1│┣━━━┻━━━┛□□□□36
// 39□□□□□□□□□□□□□□□□┃└─┘┃□□□□□□□□□□□□39
// 42□□□□□□□□□□□□□□□□┗━━━┛□□□□□□□□□□□□42
// 45□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□45
// 48□□□□□□□□□□┏━━━┓□□□┏━━━┓□□□□□□□□□□48
// 51□□□□□□□□□□┃┌─┐┃□□□┃┌─┐┃□□□□□□□□□□51
// 54□□□□□□□□□□┃│L1│┣━━━┫│R1│┃□□□□□□□□□□54
// 57□□□□□□□□□□┃└─┘┃┌─┐┃└─┘┃□□□□□□□□□□57
// 60□□□□□□□□□□┗━━━┫│DU│┣━━━┛□□□□□□□□□□60
// 63□□□□□□□□□□□□□□┃└─┘┃□□□□□□□□□□□□□□63
// 66□□□□□□□□□□□□□□┗━━━┛□□□□□□□□□□□□□□66
//   00030609121518212427303336394245485154576063666972757881848790939699

#define DEFAULT_BOARD_LAYOUT_A                                                             \
	{                                                                                        \
			{GP_ELEMENT_DIR_BUTTON, {48, 60, 6, 6, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},    \
			{GP_ELEMENT_DIR_BUTTON, {30, 24, 6, 6, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
			{GP_ELEMENT_DIR_BUTTON, {42, 30, 6, 6, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_DIR_BUTTON, {18, 24, 6, 6, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},  \
			{GP_ELEMENT_BTN_BUTTON, {78, 6, 3, 3, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},     \
			{GP_ELEMENT_BTN_BUTTON, {90, 6, 3, 3, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE}},     \
			{GP_ELEMENT_BTN_BUTTON, {66, 6, 3, 3, 1, 1, GAMEPAD_MASK_A1, GP_SHAPE_ELLIPSE}},     \
			{GP_ELEMENT_BTN_BUTTON, {54, 6, 3, 3, 1, 1, GAMEPAD_MASK_A2, GP_SHAPE_ELLIPSE}},     \
	}

#define DEFAULT_BOARD_LAYOUT_B                                                          \
	{                                                                                     \
			{GP_ELEMENT_BTN_BUTTON, {54, 36, 6, 6, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {66, 30, 6, 6, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {90, 27, 6, 6, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {6, 27, 6, 6, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}},  \
			{GP_ELEMENT_BTN_BUTTON, {54, 24, 6, 6, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {66, 18, 6, 6, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {60, 54, 6, 6, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {36, 54, 6, 6, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {78, 18, 6, 6, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}}, \
			{GP_ELEMENT_BTN_BUTTON, {78, 30, 6, 6, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE}}, \
	}

#endif
