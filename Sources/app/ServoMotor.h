/*
 * ServoMotor.h
 *
 *  Created on: Nov 20, 2015
 *      Author: JAVR
 */

#ifndef SERVOMOTOR_H_
#define SERVOMOTOR_H_

/*============================================================================*/
/*                     AVR - EMBEDDED SYSTEMS SOFTWARE                        */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
 * C Include:       ServoMotor.h
 * version:         1.0 
 * created_by:      AVR
 * date_created:    Nov 20, 2015 
 *=============================================================================*/
/* DESCRIPTION :                                                              */
/*============================================================================*/
/* FUNCTION COMMENT : This header must be placed anywhere scheduler is        */
/* required.                                                                  */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |  AUTHOR  | Comment     						  */
/*----------------------------------------------------------------------------*/
//   1.0       20/10/2015    AVR		First revision.
//	 1.1       21/10/2015    AVR		Test the servo, function good.
//	 1.2       07/12/2015    AVR		Add functions to improve the servo stering.
//   1.3	   25/06/2016	 AVR		implement functions for use the push button to center the servo
/*============================================================================*/
/*============================================================================*/

/* Includes */
/* -------- */
#include "stdtypedef.h"
#include "derivative.h"

#include "../app/LineScanCamera.h"
#include "../app/PushButtons.h"
#include "../Sources/mcl/TPM.h"
#include "../Sources/mcl/ADC.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */


/*======================================================*/
/* Declaration of exported constants                    */
/*======================================================*/

/*======================================================*/
/* Definition of RAM variables                          */
/*======================================================*/

/*======================================================*/
/* close variable declaration sections                  */
/*======================================================*/

/* Exported functions prototypes and macros */
/* ---------------------------------------- */
void vfn_SteeringServoController(void);

/* Functions prototypes */

/**************************************************************
 *  Name                 :
 *  Description          : 
 *  Parameters           : void
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/

#endif /* SERVOMOTOR_H_ */
