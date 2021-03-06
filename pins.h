/*
 * Copyright 2010 Erik Gilling
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __pins_h__
#define __pins_h__

#define B_DQ		PB0
#define B_DAY_PWM	PB1
#define B_ACTINIC_PWM	PB2
#define B_IN0		PB3
#define B_IN1		PB4
#define B_JOY_SEL	PB5
/* XTAL			PB6 */
/* XTAL			PB7 */

#define C_JOY_VERT	PC0
#define C_JOY_HORIZ	PC1
#define C_BUZZER	PC2
/* unused		PC3 */
#define C_SDA		PC4
#define C_SCL		PC5
#define C_PH		PC6
/* unused		PC7 */

#define D_RXD		PD0
#define D_TXD		PD1
#define D_LCD_BL	PD2
#define D_LCD_SEL	PD3
#define D_LCD_SCK	PD4
#define D_LCD_MOSI	PD5
#define D_LCD_RESET	PD6
#define D_ALERT		PD7

#endif /* __pins_h__ */
