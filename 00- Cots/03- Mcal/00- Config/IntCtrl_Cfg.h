/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl_Cfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTCTRL_CFG_H
#define INTCTRL_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CINFIG MACROS
 *********************************************************************************************************************/
/*
  >Priority is described by 3 bits in CORTEX-M4
  >Num of Priorty levels increases as bits increases
  >Ex: n bits give 2power(n) levels
*/
#define GROUP_PRIORITY_BITS 2
#define SUB_PRIORITY_BITS   1

/*
  >ENABLE : Enables priority assigning functions
  >DISALE : Priority is assigned acording to configured priorities when NVIC is initialized
*/
#define EDIT_PRIORITY_RUN_TIME ENABLE
#if EDIT_PRIORITY_RUN_TIME == DISABLE
//Please, fill this section with needed interrupts periorities to be called in initialization
//Please, be aware for for bits choosen for sup/group periorities

	#define PRIORITY_INIT_CODE \
	ASSIGN_PRIORITY(GPIOA_IRQ_ID,Group_Pri,SupPri);\
	ASSIGN_PRIORITY(TIMER0B_IRQ_ID,Group_Pri,SupPri)
	
	//#define PRIORITY_INIT_CODE ASSIGN_PRIORITY(GPIOA_IRQ_ID,Group_Pri,SupPri);ASSIGN_PRIORITY(TIMER0B_IRQ_ID,Group_Pri,SupPri)
	
	
#endif
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


 
#endif  /* INTCTRL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Cfg.h
 *********************************************************************************************************************/
