/*******************************************************************************
 * Copyright (c) 2010-04-03 Joacim Jacobsson.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    Joacim Jacobsson - first implementation
 *******************************************************************************/

#include <cb_gen/cb_gen.h>

namespace cb_gen {

void init( Program* p )
{
  p->m_Memory = 0;
}

void init( Function* f )
{
  f->m_Memory = 0;
}

void destroy( Program* p )
{
  FunctionList::iterator it, it_e( p->m_F.end() );
  for( it = p->m_F.begin(); it != it_e; ++it )
  {
    destroy( it->m_Function );
    delete it->m_Function;
  }
}

void destroy( Function* f )
{

}

void generate( BehaviorTreeContext ctx, Program* p )
{

}

}

