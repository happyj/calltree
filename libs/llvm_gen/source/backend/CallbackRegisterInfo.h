/*******************************************************************************
 * Copyright (c) 2010-04-16 Joacim Jacobsson.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    Joacim Jacobsson - first implementation
 *******************************************************************************/


#ifndef CALLBACKREGISTERINFO_H_INCLUDED
#define CALLBACKREGISTERINFO_H_INCLUDED

#include <llvm/Target/TargetRegisterInfo.h>
#include "CallbackRegisterInfo.h.inc"

namespace llvm
{

class TargetInstrInfo;

class CallbackRegisterInfo : public CallbackGenRegisterInfo
{
public:
  CallbackRegisterInfo( const TargetInstrInfo& tii );

private:
  const TargetInstrInfo& m_TII;
};

}

#endif /* CALLBACKREGISTERINFO_H_INCLUDED */
