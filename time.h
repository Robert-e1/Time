/**
 * @file time.h
 * @brief Biblioteka za upravljanje vremenom
 */
#ifndef TIME_H_
#define TIME_H_

#include <avr/io.h>
#include <avr/interrupt.h>

/**
 * Inicijalizacija Tajmera 0, T = 1ms
 */
void init_Time();

/**
 * Funkcija vraca sistemsko vreme/vreme proteklo od restarta mcu-a u [ms]
 * @return sistemsko vreme tipa unsigned long u [ms]
 */
unsigned long millis();

/**
 * Funkcija zaustavlja tekuci program za d [ms]
 *@param d
 */
void delay_ms(unsigned long d);

#endif /* TIME_H_ */
