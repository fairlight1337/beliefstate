/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2013, Institute for Artificial Intelligence,
 *  Universität Bremen.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Institute for Artificial Intelligence,
 *     Universität Bremen, nor the names of its contributors may be
 *     used to endorse or promote products derived from this software
 *     without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

/** \author Jan Winkler */

#ifndef __ARBITRARY_MAPPINGS_HOLDER_H__
#define __ARBITRARY_MAPPINGS_HOLDER_H__


// System
#include <cstdlib>
#include <mutex>
#include <list>
#include <string>
#include <sstream>

// Config++
#include <libconfig.h++>

// Designator Integration
#include <designators/CDesignator.h>

// Private
#include <Types.h>
#include <ForwardDeclarations.h>
#include <UtilityBase.h>

using namespace std;
using namespace libconfig;


namespace beliefstate {
  class ArbitraryMappingsHolder : public UtilityBase {
  private:
    list<CKeyValuePair*> m_lstArbitraryMappings;
    
  protected:
  public:
    ArbitraryMappingsHolder();
    ~ArbitraryMappingsHolder();
    
    void parseBranch(Setting& sBranch);
    bool loadArbitraryMappingsFile(string strFilepath);
    list<CKeyValuePair*> arbitraryMappings();
  };
}


#endif /* __ARBITRARY_MAPPINGS_HOLDER_H__ */
