/**
 * \file control_demo.h
 * \author Alexander Entinger, MSc
 * \copyright LXRobotics GmbH
 * \brief This class demonstrates a simple mixer where the four inputs are 1:1 mixed to four outputs (OUT1 = IN1, OUT2 = IN2, ...) including how to implement a failsafe
 * \license 
 */

#ifndef CONTROLDEMO_H_
#define CONTROLDEMO_H_

/************************************************************************/
/* INCLUDES                                                             */
/************************************************************************/

#include <stdbool.h>

#include "config.h"

#ifdef CONFIG_USE_CONTROL_DEMO

/************************************************************************/
/* PUBLIC PROTOTYPES                                                    */
/************************************************************************/

class ControlDemo
{

public:

	/** 
	 * \brief this function returns true when all signals used in this specific mixer are good
	 */
	static bool isGoodFunc();
	
	/** 
	 * \brief this function implements the failsafe behavior of this specific mixer
	 */
	static void failsafeFunc();
	
	/** 
	 * \brief this function implements the mixing behavior (function fOUT(IN1, IN2, ...) of this specific mixer
	 */
	static void mixingFunc();
	
	/** 
	 * \brief this function implements the behaviour if a transition from mixing to failsafe is taking place
	 */
	static void transitionToFailsafeFunc();
	
	/** 
	 * \brief this function implements the behaviour if a transition from failsafe to mixing is taking place
	 */
	static void transitionToMixingFunc();
	
private:

	/** 
	 * \brief No public constructing
	 */
	ControlDemo() { }

};

#endif

#endif /* CONTROLDEMO_H_ */