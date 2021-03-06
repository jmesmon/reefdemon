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

#ifndef __twi_master_h__
#define __twi_master_h__

extern uint8_t twi_data;

void twi_master_init(void);
void twi_add_device(void (* begin)(void), void (* end)(void));
void twi_ping(void);
void twi_send(uint8_t addr, uint8_t data);
void twi_read_reg(uint8_t addr, uint8_t reg);

#endif /* __twi_master_h__ */
