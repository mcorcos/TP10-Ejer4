/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   registros.h
 * Author: mcorcos
 *
 * Created on 21 de octubre de 2019, 18:21
 */

#ifndef REGISTROS_H
#define REGISTROS_H

typedef struct{  //registro D (reg A + reg B) 
        uint16_t d;    
    }portd_t;
    typedef struct{ //registro A y B
        uint8_t a;
        uint8_t b;
    }ports_t;
    typedef struct{ //16 bits (los dos registros)
        uint8_t a0 :1;
        uint8_t a1 :1;
        uint8_t a2 :1;
        uint8_t a3 :1;
        uint8_t a4 :1;
        uint8_t a5 :1;
        uint8_t a6 :1;
        uint8_t a7 :1;
        uint8_t b0 :1;
        uint8_t b1 :1;
        uint8_t b2 :1;
        uint8_t b3 :1;
        uint8_t b4 :1;
        uint8_t b5 :1;
        uint8_t b6 :1;
        uint8_t b7 :1;
        
        

    }bit;
    typedef union{  //creo la union para poder trabajar a nivel bit(bi), a nivel byte(px)(registro A o B)
        portd_t pd;  //o 2 bytes(pd)(registro D)
        ports_t px;
        bit bi;
    }registros_t;

#endif /* REGISTROS_H */

