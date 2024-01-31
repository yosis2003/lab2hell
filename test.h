/*
 * test.h
 *
 *  Created on: Jan 30, 2024
 *      Author: harri
 */

#ifndef TEST_H_
#define TEST_H_

void delay(unsigned long ulCount);
void helloworld();
void horizontal();
void vertical();
void characterSet();
void testfastlines(unsigned int color1, unsigned int color2);
void testdrawrects(unsigned int color);
void testfillrects(unsigned int color1, unsigned int color2);
void testfillcircles(unsigned char radius, unsigned int color);
void testdrawcircles(unsigned char radius, unsigned int color);
void testtriangles();
void testroundrects();
void testlines(unsigned int color);
void lcdTestPattern(void);
void lcdTestPattern2(void);



#endif // TEST_H_
