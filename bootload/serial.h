#ifndef _SERIAL_H_INCLUDED_
#define _SERIAL_H_INCLUDED_

int serial_init(int index);	// デバイスの初期化
int serial_is_send_enable(int index);
int serial_send_byte(int index, unsigned char b);

#endif