#include <stdbool.h>
//clock setting for PWN and GPIO PORT
    /*Enable Clock to
     *
     */

/*
#define RCGCPWM (*((volatile int *) 0x400FE640))
#define RCGCGPIO (*((volatile int *) 0x400FE608))
#define RCC (*((volatile int *) 0x400FE060))
#define GPIOF (0x40025000)

#define GPIO_F_AFSEL (0x40025420)
#define GPIO_F_PCTL (0x4002552C)
#define GPIO_F_DEN (0x4002551C)

#define GPIO_E_DEN
#define GPIO_E_DIR


#define PWM1 (0x40029000)
#define PWM1_3_CTL (0x40029100)
#define PWM1_3_LOAD (0x40029110)
#define PWM1_3_CMPA (0x40029118)
#define PWM1_3_GENA (0x40029120)
#define PWM1_3_ENABLE (0x40029008)
*/

#define SYSCTL_RCGCPWM_R        (*((volatile unsigned long *)0x400FE640))
#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
//#define RCGCPWM (*((volatile int *) 0x400FE640))
#define RCGCGPIO (*((volatile int *) 0x400FE608))
#define RCC (*((volatile int *) 0x400FE060))
#define GPIOF (*((volatile int *) 0x40025000))

#define GPIO_F_AFSEL (*((volatile int *) 0x40025420))
#define GPIO_F_PCTL (*((volatile int *) 0x4002552C))
#define GPIO_F_DEN (*((volatile int *) 0x4002551C))

#define GPIO_PORTE_AFSEL_R      (*((volatile unsigned long *)0x40024420))
#define GPIO_PORTE_DATA_R       (*((volatile unsigned long *)0x400243FC))
#define GPIO_PORTE_DEN_R        (*((volatile unsigned long *)0x4002451C))
#define GPIO_PORTE_AMSEL_R      (*((volatile unsigned long *)0x40024528))


/////////////////////////////////////////////////////////////////////////////
#define PWM0_CTL_R              (*((volatile unsigned long *)0x40028000))
#define PWM0_SYNC_R             (*((volatile unsigned long *)0x40028004))
#define PWM0_ENABLE_R           (*((volatile unsigned long *)0x40028008))
#define PWM0_INVERT_R           (*((volatile unsigned long *)0x4002800C))
#define PWM0_FAULT_R            (*((volatile unsigned long *)0x40028010))
#define PWM0_INTEN_R            (*((volatile unsigned long *)0x40028014))
#define PWM0_RIS_R              (*((volatile unsigned long *)0x40028018))
#define PWM0_ISC_R              (*((volatile unsigned long *)0x4002801C))
#define PWM0_STATUS_R           (*((volatile unsigned long *)0x40028020))
#define PWM0_FAULTVAL_R         (*((volatile unsigned long *)0x40028024))
#define PWM0_ENUPD_R            (*((volatile unsigned long *)0x40028028))
#define PWM0_0_CTL_R            (*((volatile unsigned long *)0x40028040))
#define PWM0_0_INTEN_R          (*((volatile unsigned long *)0x40028044))
#define PWM0_0_RIS_R            (*((volatile unsigned long *)0x40028048))
#define PWM0_0_ISC_R            (*((volatile unsigned long *)0x4002804C))
#define PWM0_0_LOAD_R           (*((volatile unsigned long *)0x40028050))
#define PWM0_0_COUNT_R          (*((volatile unsigned long *)0x40028054))
#define PWM0_0_CMPA_R           (*((volatile unsigned long *)0x40028058))
#define PWM0_0_CMPB_R           (*((volatile unsigned long *)0x4002805C))
#define PWM0_0_GENA_R           (*((volatile unsigned long *)0x40028060))
#define PWM0_0_GENB_R           (*((volatile unsigned long *)0x40028064))
#define PWM0_0_DBCTL_R          (*((volatile unsigned long *)0x40028068))
#define PWM0_0_DBRISE_R         (*((volatile unsigned long *)0x4002806C))
#define PWM0_0_DBFALL_R         (*((volatile unsigned long *)0x40028070))
#define PWM0_0_FLTSRC0_R        (*((volatile unsigned long *)0x40028074))
#define PWM0_0_FLTSRC1_R        (*((volatile unsigned long *)0x40028078))
#define PWM0_0_MINFLTPER_R      (*((volatile unsigned long *)0x4002807C))
#define PWM0_1_CTL_R            (*((volatile unsigned long *)0x40028080))
#define PWM0_1_INTEN_R          (*((volatile unsigned long *)0x40028084))
#define PWM0_1_RIS_R            (*((volatile unsigned long *)0x40028088))
#define PWM0_1_ISC_R            (*((volatile unsigned long *)0x4002808C))
#define PWM0_1_LOAD_R           (*((volatile unsigned long *)0x40028090))
#define PWM0_1_COUNT_R          (*((volatile unsigned long *)0x40028094))
#define PWM0_1_CMPA_R           (*((volatile unsigned long *)0x40028098))
#define PWM0_1_CMPB_R           (*((volatile unsigned long *)0x4002809C))
#define PWM0_1_GENA_R           (*((volatile unsigned long *)0x400280A0))
#define PWM0_1_GENB_R           (*((volatile unsigned long *)0x400280A4))
#define PWM0_1_DBCTL_R          (*((volatile unsigned long *)0x400280A8))
#define PWM0_1_DBRISE_R         (*((volatile unsigned long *)0x400280AC))
#define PWM0_1_DBFALL_R         (*((volatile unsigned long *)0x400280B0))
#define PWM0_1_FLTSRC0_R        (*((volatile unsigned long *)0x400280B4))
#define PWM0_1_FLTSRC1_R        (*((volatile unsigned long *)0x400280B8))
#define PWM0_1_MINFLTPER_R      (*((volatile unsigned long *)0x400280BC))
#define PWM0_2_CTL_R            (*((volatile unsigned long *)0x400280C0))
#define PWM0_2_INTEN_R          (*((volatile unsigned long *)0x400280C4))
#define PWM0_2_RIS_R            (*((volatile unsigned long *)0x400280C8))
#define PWM0_2_ISC_R            (*((volatile unsigned long *)0x400280CC))
#define PWM0_2_LOAD_R           (*((volatile unsigned long *)0x400280D0))
#define PWM0_2_COUNT_R          (*((volatile unsigned long *)0x400280D4))
#define PWM0_2_CMPA_R           (*((volatile unsigned long *)0x400280D8))
#define PWM0_2_CMPB_R           (*((volatile unsigned long *)0x400280DC))
#define PWM0_2_GENA_R           (*((volatile unsigned long *)0x400280E0))
#define PWM0_2_GENB_R           (*((volatile unsigned long *)0x400280E4))
#define PWM0_2_DBCTL_R          (*((volatile unsigned long *)0x400280E8))
#define PWM0_2_DBRISE_R         (*((volatile unsigned long *)0x400280EC))
#define PWM0_2_DBFALL_R         (*((volatile unsigned long *)0x400280F0))
#define PWM0_2_FLTSRC0_R        (*((volatile unsigned long *)0x400280F4))
#define PWM0_2_FLTSRC1_R        (*((volatile unsigned long *)0x400280F8))
#define PWM0_2_MINFLTPER_R      (*((volatile unsigned long *)0x400280FC))
#define PWM0_3_CTL_R            (*((volatile unsigned long *)0x40028100))
#define PWM0_3_INTEN_R          (*((volatile unsigned long *)0x40028104))
#define PWM0_3_RIS_R            (*((volatile unsigned long *)0x40028108))
#define PWM0_3_ISC_R            (*((volatile unsigned long *)0x4002810C))
#define PWM0_3_LOAD_R           (*((volatile unsigned long *)0x40028110))
#define PWM0_3_COUNT_R          (*((volatile unsigned long *)0x40028114))
#define PWM0_3_CMPA_R           (*((volatile unsigned long *)0x40028118))
#define PWM0_3_CMPB_R           (*((volatile unsigned long *)0x4002811C))
#define PWM0_3_GENA_R           (*((volatile unsigned long *)0x40028120))
#define PWM0_3_GENB_R           (*((volatile unsigned long *)0x40028124))
#define PWM0_3_DBCTL_R          (*((volatile unsigned long *)0x40028128))
#define PWM0_3_DBRISE_R         (*((volatile unsigned long *)0x4002812C))
#define PWM0_3_DBFALL_R         (*((volatile unsigned long *)0x40028130))
#define PWM0_3_FLTSRC0_R        (*((volatile unsigned long *)0x40028134))
#define PWM0_3_FLTSRC1_R        (*((volatile unsigned long *)0x40028138))
#define PWM0_3_MINFLTPER_R      (*((volatile unsigned long *)0x4002813C))
#define PWM0_0_FLTSEN_R         (*((volatile unsigned long *)0x40028800))
#define PWM0_0_FLTSTAT0_R       (*((volatile unsigned long *)0x40028804))
#define PWM0_0_FLTSTAT1_R       (*((volatile unsigned long *)0x40028808))
#define PWM0_1_FLTSEN_R         (*((volatile unsigned long *)0x40028880))
#define PWM0_1_FLTSTAT0_R       (*((volatile unsigned long *)0x40028884))
#define PWM0_1_FLTSTAT1_R       (*((volatile unsigned long *)0x40028888))
#define PWM0_2_FLTSTAT0_R       (*((volatile unsigned long *)0x40028904))
#define PWM0_2_FLTSTAT1_R       (*((volatile unsigned long *)0x40028908))
#define PWM0_3_FLTSTAT0_R       (*((volatile unsigned long *)0x40028984))
#define PWM0_3_FLTSTAT1_R       (*((volatile unsigned long *)0x40028988))
////////////////////////////////////////////////////////////////////////////////////////

#define PWM1 (*((volatile int *) 0x40029000))
#define PWM1_3_CTL (*((volatile int *) 0x40029100))
#define PWM1_3_LOAD (*((volatile int *) 0x40029110))
#define PWM1_3_CMPA (*((volatile int *) 0x40029118))
#define PWM1_3_GENA (*((volatile int *) 0x40029120))
#define PWM1_3_ENABLE (*((volatile int *) 0x40029008))

#define ADC0_PSSI_R (*((volatile unsigned long *)0x40038028))
#define ADC0_RIS_R (*((volatile unsigned long *)0x40038004))
#define ADC0_SSFIFO3_R (*((volatile unsigned long *)0x400380A8))
#define ADC0_ISC_R (*((volatile unsigned long *)0x4003800C))

#define ADC0_ACTSS_R            (*((volatile unsigned long *)0x40038000))
#define ADC0_EMUX_R             (*((volatile unsigned long *)0x40038014))
#define ADC0_SSMUX3_R           (*((volatile unsigned long *)0x400380A0))
//#define ADC0_SSMUX0_R           (*((volatile unsigned long *)0x40038040))
#define ADC0_SSCTL3_R           (*((volatile unsigned long *)0x400380A4))

#define SYSCTL_RCGCADC_R        (*((volatile unsigned long *)0x400FE638))

//PB6
#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))
#define GPIO_PORTB_PCTL_R       (*((volatile unsigned long *)0x4000552C))


#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x40007400))
#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4000751C))
#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x40007420))
#define GPIO_PORTD_PCTL_R       (*((volatile unsigned long *)0x4000752C))

    //AFSEL |= 6th bit high
    //PCTL write 4 to PMC6
    //everything before and after needs to be zero
    //0x4000000 to PCTL_PORTB
    // convert it to digital



void delay(d){
    while(d){
        d--;
    }
}

int main(void ){


    //SYSCTL->RCGCADC
    //RCGCGPIO |= (1<<4);
    //GPIOE_AFSEL |= (1<<3);
    //GPIOE_DEN &= ~(1<<3);


    SYSCTL_RCGCADC_R |= (1<<0);
    SYSCTL_RCGCGPIO_R |= (1<<4);
    GPIO_PORTE_AFSEL_R |= (1<<3);
    GPIO_PORTE_DEN_R &= (~(1<<3));
    GPIO_PORTE_AMSEL_R |= (1<<3);

    ADC0_ACTSS_R  &= ~(1<<3);
    ADC0_EMUX_R &= ~(0xF000);
    ADC0_SSMUX3_R = 0x00;
    ADC0_SSCTL3_R |= (1<<1) | (1<<2);
    ADC0_ACTSS_R |= (1<<3);

    //RCGCGPIO = 0x20;
    //GPIOC->DIR = 0x0E;
    //GPIOC->DEN = 0x0E;
    //AMSEl is analog

    SYSCTL_RCGCPWM_R   |= (1<<0);
    SYSCTL_RCGCGPIO_R |= (1<<3);
    //delay(1000000);
    RCC &= (~(1<<20));



    GPIO_PORTD_AFSEL_R |= (1<<0);
    GPIO_PORTD_PCTL_R = 0x4;
    GPIO_PORTD_DEN_R |= (1<<0);

    /*
    GPIO_PORTB_AFSEL_R |= (1<<6);
    GPIO_PORTB_PCTL_R = 0x04000000;
    //GPIO_PORTB_DIR_R |= (1<<6);
    GPIO_PORTB_DEN_R |= (1<<6);
*/

/*
    GPIO_F_AFSEL |= (1<<2);
    GPIO_F_PCTL = 0x00000500;
    GPIO_F_DEN |= (1<<2);

*/
    PWM0_3_CTL_R &= ~(1<<0);
    PWM0_3_CTL_R &= ~(1<<1);
    PWM0_3_LOAD_R = 100;
    PWM0_3_CMPA_R = 0;
    PWM0_3_GENA_R |= (1<<2) | (1<<3) | (1<<7);
    PWM0_3_CTL_R |= (1<<0);
    PWM0_ENABLE_R |= (1<<6);





/*

    PWM1_3_CTL &= ~(1<<0);
    PWM1_3_CTL &= ~(1<<1);
    PWM1_3_LOAD = 100;
    PWM1_3_CMPA = 0;
    PWM1_3_GENA |= (1<<2) | (1<<3) | (1<<7);
    PWM1_3_CTL |= ((1<<0));
    PWM1_3_ENABLE |= (1<<6);
*/
    float adc_value;


    while(1){
        //ADCO->PSSI |= (1<<3);
        ADC0_PSSI_R |= (1<<3);
        while((ADC0_RIS_R & 0x8)== 0x0);
        adc_value = ADC0_SSFIFO3_R;

            PWM0_3_CMPA_R = (100*(adc_value/4096));



        ADC0_ISC_R  |= (1<<3);


        //int i;



        //delay(1000000);

        /*for(i=16000;i>8000;i--){
            PWM1_3_CMPA = i;
            delay(1000);
        }*/
        //delay(1000000);


    }


}
