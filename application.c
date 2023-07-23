/* 
 * File     : application.c
 * Author   : Mohamed Ahmed Abdel Wahab
 * LinkedIn : https://www.linkedin.com/in/mohamed-abdel-wahab-162413253/
 * Github   : https://github.com/moabdelwahab6611
 * Created on May 21, 2023, 5:38 PM
 */

/**************************Includes-Section*****************************/
#include "application.h"
/***********************************************************************/

/***********************************************************************/
uint8 lcd_counter = ZERO_INT;
uint8 lcd_counter_txt[4];

const uint8 customChar1[] = {0x0E, 0x0A, 0x11, 0x11, 0x11, 0x11, 0x1F, 0x00};
const uint8 customChar2[] = {0x0E, 0x0A, 0x11, 0x11, 0x11, 0x1F, 0x1F, 0x00};
const uint8 customChar3[] = {0x0E, 0x0A, 0x11, 0x11, 0x1F, 0x1F, 0x1F, 0x00};
const uint8 customChar4[] = {0x0E, 0x0A, 0x11, 0x1F, 0x1F, 0x1F, 0x1F, 0x00};
const uint8 customChar5[] = {0x0E, 0x0A, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00};
const uint8 customChar6[] = {0x0E, 0x0E, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00};
/***********************************************************************/

/***********************Main Function-Section***************************/
int main() 
{ 
    Std_ReturnType ret = E_NOT_OK;
    application_intialize();
    
    while(1)
    {   
        ret = lcd_8bit_send_custom_char(&lcd_2, 1, 20, customChar1, 0);
        __delay_ms(200);
        ret = lcd_8bit_send_custom_char(&lcd_2, 1, 20, customChar2, 0);
        __delay_ms(200);
        ret = lcd_8bit_send_custom_char(&lcd_2, 1, 20, customChar3, 0);
        __delay_ms(200);
        ret = lcd_8bit_send_custom_char(&lcd_2, 1, 20, customChar4, 0);
        __delay_ms(200);
        ret = lcd_8bit_send_custom_char(&lcd_2, 1, 20, customChar5, 0);
        __delay_ms(200);
        ret = lcd_8bit_send_custom_char(&lcd_2, 1, 20, customChar6, 0);
        __delay_ms(200);
    }
    return (EXIT_SUCCESS);
}
/***********************************************************************/

/*************************Functions-Section*****************************/
void application_intialize(void)
{
    Std_ReturnType ret = E_NOT_OK;       
    ecu_layer_intialize();
}
/***********************************************************************/