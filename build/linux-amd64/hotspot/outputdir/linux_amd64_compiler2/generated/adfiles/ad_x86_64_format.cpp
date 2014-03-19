//
// Copyright (c) 2003, 2011, Oracle and/or its affiliates. All rights reserved.
// DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
//
// This code is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License version 2 only, as
// published by the Free Software Foundation.
//
// This code is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// version 2 for more details (a copy is included in the LICENSE file that
// accompanied this code).
//
// You should have received a copy of the GNU General Public License version
// 2 along with this work; if not, write to the Free Software Foundation,
// Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
//
// Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
// or visit www.oracle.com if you need additional information or have any
// questions.
//
//

// Machine Generated File.  Do Not Edit!

#include "precompiled.hpp"
#include "adfiles/ad_x86_64.hpp"

#ifndef PRODUCT
void UniverseOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("$$univ");
}
void UniverseOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("$$univ");
}
#endif

#ifndef PRODUCT
void sRegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void immIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_M1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI_M1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI2Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI2Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI8Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI8Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI16Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI16Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI_32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_64Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI_64Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
_c0->dump_on(st);
}
void immPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
_c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immP0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
_c0->dump_on(st);
}
void immP0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
_c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immP_pollOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
_c0->dump_on(st);
}
void immP_pollOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
_c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immNOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
_c0->dump_on(st);
}
void immNOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
_c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immN0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
_c0->dump_on(st);
}
void immN0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
_c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immP31Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
_c0->dump_on(st);
}
void immP31Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
_c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL8Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL8Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immUL32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immUL32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL_M1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL_M1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL10Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL10Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL_127Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL_127Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL_32bitsOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL_32bitsOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immF0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%f", _c0);
}
void immF0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%f", _c0);
}
void immFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immD0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%f", _c0);
}
void immD0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%f", _c0);
}
void immDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immI_16Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI_16Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_24Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI_24Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_255Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI_255Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_65535Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%d", _c0);
}
void immI_65535Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immL_255Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL_255Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void immL_65535Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
st->print("#%lld", _c0);
}
void immL_65535Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
st->print("#%lld", _c0);
}
#endif

#ifndef PRODUCT
void rRegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rRegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rax_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RAX");
}
void rax_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RAX");
}
#endif

#ifndef PRODUCT
void rbx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RBX");
}
void rbx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RBX");
}
#endif

#ifndef PRODUCT
void rcx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RCX");
}
void rcx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RCX");
}
#endif

#ifndef PRODUCT
void rdx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RDX");
}
void rdx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RDX");
}
#endif

#ifndef PRODUCT
void rdi_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RDI");
}
void rdi_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RDI");
}
#endif

#ifndef PRODUCT
void no_rcx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rcx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void no_rax_rdx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rax_rdx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void any_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void any_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rRegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rRegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rRegNOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rRegNOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void no_rax_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rax_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void no_rbp_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rbp_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void no_rax_rbx_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rax_rbx_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rax_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rax_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rax_RegNOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rax_RegNOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rbx_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rbx_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rsi_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rsi_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rdi_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rdi_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rbp_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rbp_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void r15_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void r15_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rRegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rRegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void no_rax_rdx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rax_rdx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void no_rax_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rax_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void no_rcx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void no_rcx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rax_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RAX");
}
void rax_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RAX");
}
#endif

#ifndef PRODUCT
void rcx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rcx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rdx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void rdx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void rFlagsRegOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RFLAGS");
}
void rFlagsRegOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RFLAGS");
}
#endif

#ifndef PRODUCT
void rFlagsRegUOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RFLAGS_U");
}
void rFlagsRegUOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RFLAGS_U");
}
#endif

#ifndef PRODUCT
void rFlagsRegUCFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("RFLAGS_U_CF");
}
void rFlagsRegUCFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("RFLAGS_U_CF");
}
#endif

#ifndef PRODUCT
void regFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void regFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void regDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
}
void regDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
{ char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
}
#endif

#ifndef PRODUCT
void indirectOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void indirectOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void indOffset8Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (8-bit)]");
}
void indOffset8Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (8-bit)]");
}
#endif

#ifndef PRODUCT
void indOffset32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (32-bit)]");
}
void indOffset32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (32-bit)]");
}
#endif

#ifndef PRODUCT
void indIndexOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void indIndexOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void indIndexOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void indIndexOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
void indIndexScaleOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
void indIndexScaleOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
#endif

#ifndef PRODUCT
void indPosIndexScaleOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
void indPosIndexScaleOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
#endif

#ifndef PRODUCT
void indCompressedOopOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[R12 + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << 3 + ");
  st->print("#%lld", _c0);
  st->print("] (compressed oop addressing)");
}
void indCompressedOopOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[R12 + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << 3 + ");
  st->print("#%lld", _c0);
  st->print("] (compressed oop addressing)");
}
#endif

#ifndef PRODUCT
void indirectNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void indirectNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void indOffset8NarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (8-bit)]");
}
void indOffset8NarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (8-bit)]");
}
#endif

#ifndef PRODUCT
void indOffset32NarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (32-bit)]");
}
void indOffset32NarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" (32-bit)]");
}
#endif

#ifndef PRODUCT
void indIndexOffsetNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void indIndexOffsetNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c0);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void indIndexNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void indIndexNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
void indIndexScaleNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleOffsetNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
void indIndexScaleOffsetNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
#endif

#ifndef PRODUCT
void indPosIndexScaleOffsetNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
void indPosIndexScaleOffsetNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" + ");
  st->print("#%lld", _c1);
  st->print(" + ");
  { char reg_str[128];
      ra->dump_register(node->in(idx+1),reg_str);
      tty->print("%s",reg_str);
    }
  st->print(" << ");
  st->print("#%d", _c0);
  st->print("]");
}
#endif

#ifndef PRODUCT
void stackSlotPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void stackSlotPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void stackSlotIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void stackSlotIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void stackSlotFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void stackSlotFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void stackSlotDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void stackSlotDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void stackSlotLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node,reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
void stackSlotLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("[");
  { char reg_str[128];
      ra->dump_register(node->in(idx),reg_str);
      tty->print("%s",reg_str);
    }
  st->print("]");
}
#endif

#ifndef PRODUCT
void cmpOpOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("le");
    else if( _c0 == BoolTest::ge ) st->print("ge");
    else if( _c0 == BoolTest::lt ) st->print("l");
    else if( _c0 == BoolTest::gt ) st->print("g");
}
void cmpOpOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("le");
    else if( _c0 == BoolTest::ge ) st->print("ge");
    else if( _c0 == BoolTest::lt ) st->print("l");
    else if( _c0 == BoolTest::gt ) st->print("g");
}
#endif

#ifndef PRODUCT
void cmpOpUOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
}
void cmpOpUOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
}
#endif

#ifndef PRODUCT
void cmpOpUCFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
}
void cmpOpUCFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
}
#endif

#ifndef PRODUCT
void cmpOpUCF2Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
}
void cmpOpUCF2Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("");
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
}
#endif
#ifndef PRODUCT
void loadBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movsbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# byte");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadB2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movsbq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# byte -> long");
  }
#endif
#ifndef PRODUCT
void loadUBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ubyte");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadUB2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movzbq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ubyte -> long");
  }
#endif
#ifndef PRODUCT
void loadUB2L_immI8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzbq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ubyte & 8-bit mask -> long\n\t");
    st->print("andl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // mask
  }
#endif
#ifndef PRODUCT
void loadSNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movswl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# short");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadS2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movsbl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# short -> byte");
  }
#endif
#ifndef PRODUCT
void loadS2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movswq ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# short -> long");
  }
#endif
#ifndef PRODUCT
void loadUSNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movzwl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ushort/char");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadUS2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movsbl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ushort -> byte");
  }
#endif
#ifndef PRODUCT
void loadUS2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movzwq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ushort/char -> long");
  }
#endif
#ifndef PRODUCT
void loadUS2L_immI_255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzbq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ushort/char & 0xFF -> long");
  }
#endif
#ifndef PRODUCT
void loadUS2L_immI16Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzwq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ushort/char & 16-bit mask -> long\n\t");
    st->print("andl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // mask
  }
#endif
#ifndef PRODUCT
void loadINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadI2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movsbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int -> byte");
  }
#endif
#ifndef PRODUCT
void loadI2UBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int -> ubyte");
  }
#endif
#ifndef PRODUCT
void loadI2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movswl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int -> short");
  }
#endif
#ifndef PRODUCT
void loadI2USNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzwl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int -> ushort/char");
  }
#endif
#ifndef PRODUCT
void loadI2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movslq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int -> long");
  }
#endif
#ifndef PRODUCT
void loadI2L_immI_255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzbq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int & 0xFF -> long");
  }
#endif
#ifndef PRODUCT
void loadI2L_immI_65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzwq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int & 0xFFFF -> long");
  }
#endif
#ifndef PRODUCT
void loadI2L_immINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# int & 32-bit mask -> long\n\t");
    st->print("andl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // mask
  }
#endif
#ifndef PRODUCT
void loadUI2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# uint -> long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadRangeNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# range");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# compressed ptr");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadKlassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# class");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadNKlassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# compressed klass ptr");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movss   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# float");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadD_partialNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movlpd  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# double");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movsd   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# double");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadA8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("MOVQ  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t! packed8B");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadA4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("MOVQ  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t! packed4S");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadA4CNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("MOVQ  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t! packed4C");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void load2IUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("MOVQ  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t! packed2I");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadA2FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("MOVQ  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t! packed2F");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void leaP8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr 8");
  }
#endif
#ifndef PRODUCT
void leaP32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr 32");
  }
#endif
#ifndef PRODUCT
void leaPIdxOffNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr idxoff");
  }
#endif
#ifndef PRODUCT
void leaPIdxScaleNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr idxscale");
  }
#endif
#ifndef PRODUCT
void leaPIdxScaleOffNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr idxscaleoff");
  }
#endif
#ifndef PRODUCT
void leaPPosIdxScaleOffNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr posidxscaleoff");
  }
#endif
#ifndef PRODUCT
void leaPCompressedOopOffsetNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr compressedoopoff32");
  }
#endif
#ifndef PRODUCT
void leaP8NarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr off8narrow");
  }
#endif
#ifndef PRODUCT
void leaP32NarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr off32narrow");
  }
#endif
#ifndef PRODUCT
void leaPIdxOffNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr idxoffnarrow");
  }
#endif
#ifndef PRODUCT
void leaPIdxScaleNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr idxscalenarrow");
  }
#endif
#ifndef PRODUCT
void leaPIdxScaleOffNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr idxscaleoffnarrow");
  }
#endif
#ifndef PRODUCT
void leaPPosIdxScaleOffNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr posidxscaleoffnarrow");
  }
#endif
#ifndef PRODUCT
void loadConINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void loadConI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void loadConLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void loadConL0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void loadConUL32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long (unsigned 32-bit)");
  }
#endif
#ifndef PRODUCT
void loadConL32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long (32-bit)");
  }
#endif
#ifndef PRODUCT
void loadConPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // con
    st->print("\t# ptr");
  }
#endif
#ifndef PRODUCT
void loadConP0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t# ptr");
  }
#endif
#ifndef PRODUCT
void loadConP_pollNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t!ptr");
  }
#endif
#ifndef PRODUCT
void loadConP31Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# ptr (positive 32-bit)");
  }
#endif
#ifndef PRODUCT
void loadConFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movss   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(1)->ext_format(ra, this,idx1, st); // con
  }
#endif
#ifndef PRODUCT
void loadConN0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# compressed NULL ptr");
  }
#endif
#ifndef PRODUCT
void loadConNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# compressed ptr");
  }
#endif
#ifndef PRODUCT
void loadConF0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorps   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t# float 0.0");
  }
#endif
#ifndef PRODUCT
void loadConDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movsd   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(1)->ext_format(ra, this,idx1, st); // con
  }
#endif
#ifndef PRODUCT
void loadConD0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorpd   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t# double 0.0");
  }
#endif
#ifndef PRODUCT
void loadSSINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int stk");
  }
#endif
#ifndef PRODUCT
void loadSSLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long stk");
  }
#endif
#ifndef PRODUCT
void loadSSPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# ptr stk");
  }
#endif
#ifndef PRODUCT
void loadSSFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movss   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# float stk");
  }
#endif
#ifndef PRODUCT
void loadSSDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movsd   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# double stk");
  }
#endif
#ifndef PRODUCT
void prefetchrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHR ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# Prefetch into level 1 cache");
  }
#endif
#ifndef PRODUCT
void prefetchrNTANode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHNTA ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# Prefetch into non-temporal cache for read");
  }
#endif
#ifndef PRODUCT
void prefetchrT0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHT0 ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# prefetch into L1 and L2 caches for read");
  }
#endif
#ifndef PRODUCT
void prefetchrT2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHT2 ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# prefetch into L2 caches for read");
  }
#endif
#ifndef PRODUCT
void prefetchwNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHW ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# Prefetch into level 1 cache and mark modified");
  }
#endif
#ifndef PRODUCT
void prefetchwNTANode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHNTA ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# Prefetch to non-temporal cache for write");
  }
#endif
#ifndef PRODUCT
void prefetchwT0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHT0 ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# Prefetch to level 1 and 2 caches for write");
  }
#endif
#ifndef PRODUCT
void prefetchwT2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("PREFETCHT2 ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# Prefetch to level 2 cache for write");
  }
#endif
#ifndef PRODUCT
void storeBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movb    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# byte");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeCNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movw    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# char/short");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storePNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# ptr");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmP0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# ptr (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# ptr");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# compressed ptr");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmN0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# compressed ptr (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# compressed ptr");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# int (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmL0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# long (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmC0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movw    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# short/char (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmI16Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movw    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# short/char");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmB0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movb    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# short/char (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movb    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# byte");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeA8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("MOVQ  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t! packed8B");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeA4CNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("MOVQ  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t! packed4C");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeA2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("MOVQ  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t! packed2I");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmCM0_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movb    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# CMS card-mark byte 0 (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeImmCM0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movb    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# CMS card-mark byte 0");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeA2FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("MOVQ  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t! packed2F");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# float");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeF0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# float 0. (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# float");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# double");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeD0_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# double 0.");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeD0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", R12\t# double 0. (R12_heapbase==0)");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storeSSINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int stk");
  }
#endif
#ifndef PRODUCT
void storeSSLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long stk");
  }
#endif
#ifndef PRODUCT
void storeSSPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# ptr stk");
  }
#endif
#ifndef PRODUCT
void storeSSFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movss   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# float stk");
  }
#endif
#ifndef PRODUCT
void storeSSDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movsd   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# double stk");
  }
#endif
#ifndef PRODUCT
void bytes_reverse_intNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bswapl  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void bytes_reverse_longNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bswapq  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void bytes_reverse_unsigned_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bswapl  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\n\t");
    st->print("shrl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(",16\n\t");
  }
#endif
#ifndef PRODUCT
void bytes_reverse_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bswapl  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\n\t");
    st->print("sar     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(",16\n\t");
  }
#endif
#ifndef PRODUCT
void countLeadingZerosINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("lzcntl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# count leading zeros (int)");
  }
#endif
#ifndef PRODUCT
void countLeadingZerosI_bsrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bsrl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# count leading zeros (int)\n\t");
    st->print("jnz     skip\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", -1\n");
    st->print("skip:\n\t");
    st->print("negl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("addl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", 31");
  }
#endif
#ifndef PRODUCT
void countLeadingZerosLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("lzcntq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# count leading zeros (long)");
  }
#endif
#ifndef PRODUCT
void countLeadingZerosL_bsrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bsrq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# count leading zeros (long)\n\t");
    st->print("jnz     skip\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", -1\n");
    st->print("skip:\n\t");
    st->print("negl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("addl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", 63");
  }
#endif
#ifndef PRODUCT
void countTrailingZerosINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bsfl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# count trailing zeros (int)\n\t");
    st->print("jnz     done\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", 32\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void countTrailingZerosLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("bsfq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# count trailing zeros (long)\n\t");
    st->print("jnz     done\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", 64\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void popCountINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("popcnt  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void popCountI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("popcnt  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  }
#endif
#ifndef PRODUCT
void popCountLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("popcnt  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void popCountL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("popcnt  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  }
#endif
#ifndef PRODUCT
void membar_acquireNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("MEMBAR-acquire ! (empty encoding)");
  }
#endif
#ifndef PRODUCT
void membar_acquire_lockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("MEMBAR-acquire (prior CMPXCHG in FastLock so empty encoding)");
  }
#endif
#ifndef PRODUCT
void membar_releaseNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("MEMBAR-release ! (empty encoding)");
  }
#endif
#ifndef PRODUCT
void membar_release_lockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("MEMBAR-release (a FastUnlock follows so empty encoding)");
  }
#endif
#ifndef PRODUCT
void membar_volatileNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    if (os::is_MP()) {
          st->print("lock addl [rsp + #0], 0\t! membar_volatile");
    } else {
          st->print("MEMBAR-volatile ! (empty encoding)");
    }
    }
#endif
#ifndef PRODUCT
void unnecessary_membar_volatileNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("MEMBAR-volatile (unnecessary so empty encoding)");
  }
#endif
#ifndef PRODUCT
void castX2PNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long->ptr");
  }
#endif
#ifndef PRODUCT
void castP2XNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# ptr -> long");
  }
#endif
#ifndef PRODUCT
void encodeHeapOopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("encode_heap_oop ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void encodeHeapOop_not_nullNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("encode_heap_oop_not_null ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void decodeHeapOopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("decode_heap_oop ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void decodeHeapOop_not_nullNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("decode_heap_oop_not_null ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void jumpXtnd_offsetNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("leaq    ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dest
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\n\t");
    st->print("jmp     [");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dest
    st->print(" + ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // switch_val
    st->print(" << ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    st->print("]\n\t");
  }
#endif
#ifndef PRODUCT
void jumpXtnd_addrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("leaq    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // dest
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\n\t");
    st->print("jmp     [");
    opnd_array(4)->ext_format(ra, this,idx4, st); // dest
    st->print(" + ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // switch_val
    st->print(" << ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    st->print(" + ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // offset
    st->print("]\n\t");
  }
#endif
#ifndef PRODUCT
void jumpXtndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("leaq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dest
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\n\t");
    st->print("jmp     [");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dest
    st->print(" + ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // switch_val
    st->print("]\n\t");
  }
#endif
#ifndef PRODUCT
void cmovI_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovl");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# signed, int");
  }
#endif
#ifndef PRODUCT
void cmovI_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovl");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# unsigned, int");
  }
#endif
#ifndef PRODUCT
void cmovI_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovl");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# signed, int");
  }
#endif
#ifndef PRODUCT
void cmovI_memUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovl");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# unsigned, int");
  }
#endif
#ifndef PRODUCT
void cmovI_memUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovN_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovl");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# signed, compressed ptr");
  }
#endif
#ifndef PRODUCT
void cmovN_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovl");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# unsigned, compressed ptr");
  }
#endif
#ifndef PRODUCT
void cmovN_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovP_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovq");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# signed, ptr");
  }
#endif
#ifndef PRODUCT
void cmovP_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovq");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# unsigned, ptr");
  }
#endif
#ifndef PRODUCT
void cmovP_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovL_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovq");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# signed, long");
  }
#endif
#ifndef PRODUCT
void cmovL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovq");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# signed, long");
  }
#endif
#ifndef PRODUCT
void cmovL_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovq");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# unsigned, long");
  }
#endif
#ifndef PRODUCT
void cmovL_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovL_memUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("cmovq");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(" ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\t# unsigned, long");
  }
#endif
#ifndef PRODUCT
void cmovL_memUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("jn");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print("    skip\t# signed cmove float\n\t");
    st->print("movss     ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\n");
    st->print("skip:");
  }
#endif
#ifndef PRODUCT
void cmovF_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("jn");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print("    skip\t# unsigned cmove float\n\t");
    st->print("movss     ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\n");
    st->print("skip:");
  }
#endif
#ifndef PRODUCT
void cmovF_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("jn");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print("    skip\t# signed cmove double\n\t");
    st->print("movsd     ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\n");
    st->print("skip:");
  }
#endif
#ifndef PRODUCT
void cmovD_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("jn");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print("    skip\t# unsigned cmove double\n\t");
    st->print("movsd     ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // dst
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // src
    st->print("\n");
    st->print("skip:");
  }
#endif
#ifndef PRODUCT
void cmovD_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void addI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void addI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void addI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void addI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void addI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void addI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void addI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void incI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("incl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void incI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("incl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void decI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("decl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void decI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("decl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void leaI_rReg_immINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addr32 leal ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src0
    st->print(" + ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src1
    st->print("]\t# int");
  }
#endif
#ifndef PRODUCT
void addL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void addL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void addL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void addL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void addL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void addL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void addL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void incL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("incq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void incL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("incq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void decL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("decq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void decL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("decq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void leaL_rReg_immLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src0
    st->print(" + ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src1
    st->print("]\t# long");
  }
#endif
#ifndef PRODUCT
void addP_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# ptr");
  }
#endif
#ifndef PRODUCT
void addP_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# ptr");
  }
#endif
#ifndef PRODUCT
void leaP_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("leaq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src0
    st->print(" + ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src1
    st->print("]\t# ptr");
  }
#endif
#ifndef PRODUCT
void checkCastPPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("# checkcastPP of ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void castPPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("# castPP of ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void castIINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("# castII of ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void loadPLockedNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr locked");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void loadLLockedNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# long locked");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void storePConditionalNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmpxchgq ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // heap_top_ptr
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print("\t# (ptr) ");
    st->print("If rax == ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // heap_top_ptr
    st->print(" then store ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print(" into ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // heap_top_ptr
  }
#endif
#ifndef PRODUCT
void storeIConditionalNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmpxchgl ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print("\t# If rax == ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(" then store ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print(" into ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  }
#endif
#ifndef PRODUCT
void storeLConditionalNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmpxchgq ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print("\t# If rax == ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(" then store ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print(" into ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  }
#endif
#ifndef PRODUCT
void compareAndSwapPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmpxchgq ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print("\t# ");
    st->print("If rax == ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(" then store ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print(" into ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print("\n\t");
    st->print("sete    ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // res
  }
#endif
#ifndef PRODUCT
void compareAndSwapLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmpxchgq ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print("\t# ");
    st->print("If rax == ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(" then store ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print(" into ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print("\n\t");
    st->print("sete    ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // res
  }
#endif
#ifndef PRODUCT
void compareAndSwapINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmpxchgl ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print("\t# ");
    st->print("If rax == ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(" then store ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print(" into ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print("\n\t");
    st->print("sete    ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // res
  }
#endif
#ifndef PRODUCT
void compareAndSwapNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmpxchgl ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print("\t# ");
    st->print("If rax == ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print(" then store ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // newval
    st->print(" into ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
    st->print("\n\t");
    st->print("sete    ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // res
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // res
  }
#endif
#ifndef PRODUCT
void subI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void subI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void subI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void subI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void subI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void subL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void subL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void subL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void subL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void subL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void subP_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("subq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // src
    st->print("\t# ptr - int");
  }
#endif
#ifndef PRODUCT
void negI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("negl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void negI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("negl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void negL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("negq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void negL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("negq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void mulI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imull   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void mulI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imull   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // imm
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void mulI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imull   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void mulI_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imull   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void mulI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imull   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // imm
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void mulL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imulq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void mulL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imulq   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // imm
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void mulL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imulq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void mulL_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imulq   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void mulL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imulq   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // imm
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void mulHiL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imulq   RDX:RAX, RAX, ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# mulhi");
  }
#endif
#ifndef PRODUCT
void divI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    rax, 0x80000000\t# idiv\n\t");
    st->print("jne,s   normal\n\t");
    st->print("xorl    rdx, rdx\n\t");
    st->print("cmpl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print(", -1\n\t");
    st->print("je,s    done\n");
    st->print("normal: cdql\n\t");
    st->print("idivl   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void divL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    rdx, 0x8000000000000000\t# ldiv\n\t");
    st->print("cmpq    rax, rdx\n\t");
    st->print("jne,s   normal\n\t");
    st->print("xorl    rdx, rdx\n\t");
    st->print("cmpq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print(", -1\n\t");
    st->print("je,s    done\n");
    st->print("normal: cdqq\n\t");
    st->print("idivq   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void divModI_rReg_divmodNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    rax, 0x80000000\t# idiv\n\t");
    st->print("jne,s   normal\n\t");
    st->print("xorl    rdx, rdx\n\t");
    st->print("cmpl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print(", -1\n\t");
    st->print("je,s    done\n");
    st->print("normal: cdql\n\t");
    st->print("idivl   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void divModL_rReg_divmodNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    rdx, 0x8000000000000000\t# ldiv\n\t");
    st->print("cmpq    rax, rdx\n\t");
    st->print("jne,s   normal\n\t");
    st->print("xorl    rdx, rdx\n\t");
    st->print("cmpq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print(", -1\n\t");
    st->print("je,s    done\n");
    st->print("normal: cdqq\n\t");
    st->print("idivq   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void loadConL_0x6666666666666667Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #0x666666666666667\t# Used in div-by-10");
  }
#endif
#ifndef PRODUCT
void mul_hiNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("imulq   rdx:rax, rax, ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# Used in div-by-10");
  }
#endif
#ifndef PRODUCT
void sarL_rReg_63Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", #63\t# Used in div-by-10");
  }
#endif
#ifndef PRODUCT
void sarL_rReg_2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", #2\t# Used in div-by-10");
  }
#endif
#ifndef PRODUCT
void divL_10Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void modI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    rax, 0x80000000\t# irem\n\t");
    st->print("jne,s   normal\n\t");
    st->print("xorl    rdx, rdx\n\t");
    st->print("cmpl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print(", -1\n\t");
    st->print("je,s    done\n");
    st->print("normal: cdql\n\t");
    st->print("idivl   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void modL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    rdx, 0x8000000000000000\t# lrem\n\t");
    st->print("cmpq    rax, rdx\n\t");
    st->print("jne,s   normal\n\t");
    st->print("xorl    rdx, rdx\n\t");
    st->print("cmpq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print(", -1\n\t");
    st->print("je,s    done\n");
    st->print("normal: cdqq\n\t");
    st->print("idivq   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // div
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void salI_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sall    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void salI_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sall    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    st->print("\t");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void salI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sall    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void salI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sall    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void salI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sall    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void salI_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sall    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void sarI_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void sarI_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void sarI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void sarI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void sarI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void sarI_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void shrI_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void shrI_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void shrI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void shrI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void shrI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void shrI_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void salL_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("salq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void salL_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("salq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void salL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("salq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void salL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("salq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void salL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("salq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void salL_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("salq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void sarL_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void sarL_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void sarL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void sarL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void sarL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void sarL_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void shrL_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void shrL_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void shrL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void shrL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void shrL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void shrL_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("shrq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void i2bNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movsbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2b");
  }
#endif
#ifndef PRODUCT
void i2sNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movswl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2s");
  }
#endif
#ifndef PRODUCT
void rolI_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("roll    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void rolI_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("roll    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rolI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("roll    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rolI_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolI_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolI_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolI_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C32_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("rorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void rorI_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("rorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rorI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("rorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rorI_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C32_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("rolq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void rolL_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("rolq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rolL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("rolq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rolL_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C64Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C64_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("rorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void rorL_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("rorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rorL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("rorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  }
#endif
#ifndef PRODUCT
void rorL_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C64Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C64_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void andI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void andI_rReg_imm255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzbl  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# int & 0xFF");
  }
#endif
#ifndef PRODUCT
void andI2L_rReg_imm255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int & 0xFF -> long");
  }
#endif
#ifndef PRODUCT
void andI_rReg_imm65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzwl  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# int & 0xFFFF");
  }
#endif
#ifndef PRODUCT
void andI2L_rReg_imm65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzwl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int & 0xFFFF -> long");
  }
#endif
#ifndef PRODUCT
void andI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void andI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void andI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void andI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void andI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void andI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void orI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orl     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void orI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orl     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void orI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orl     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void orI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orl     ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void orI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orl     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void orI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orl     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void orI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orl     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void xorI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void xorI_rReg_im1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("not    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void xorI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void xorI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void xorI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# int");
  }
#endif
#ifndef PRODUCT
void xorI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void xorI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void xorI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# int");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void andL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void andL_rReg_imm255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzbq  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# long & 0xFF");
  }
#endif
#ifndef PRODUCT
void andL_rReg_imm65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movzwq  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\t# long & 0xFFFF");
  }
#endif
#ifndef PRODUCT
void andL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void andL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void andL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void andL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void andL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void andL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("andq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void orL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void orL_rReg_castP2XNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void orL_rReg_castP2X_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void orL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void orL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void orL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void orL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void orL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void orL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("orq     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void xorL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void xorL_rReg_im1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("notq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  }
#endif
#ifndef PRODUCT
void xorL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void xorL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void xorL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorq    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void xorL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void xorL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void xorL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("xorq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# long");
    if (ra->C->alias_type(adr_type())->field() != NULL) {
      st->print(" ! Field ");
      if( ra->C->alias_type(adr_type())->is_volatile() )
        st->print(" Volatile");
      ra->C->alias_type(adr_type())->field()->holder()->name()->print_symbol_on(st);
      st->print(".");
      ra->C->alias_type(adr_type())->field()->name()->print_symbol_on(st);
    } else
    if( ra->C->alias_type(adr_type())->is_volatile() )
      st->print(" Volatile!");
  }
#endif
#ifndef PRODUCT
void convI2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("testl   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# ci2b\n\t");
    st->print("setnz   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
  }
#endif
#ifndef PRODUCT
void convP2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("testq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# cp2b\n\t");
    st->print("setnz   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
  }
#endif
#ifndef PRODUCT
void cmpLTMaskNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // p
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // q
    st->print("\t# cmpLTMask\n\t");
    st->print("setlt   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("negl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
  }
#endif
#ifndef PRODUCT
void cmpLTMask0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("sarl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", #31\t# cmpLTMask0");
  }
#endif
#ifndef PRODUCT
void cadd_cmpLTMaskNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // p
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // q
    st->print("\t# cadd_cmpLTMask1\n\t");
    st->print("sbbl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print("\n\t");
    st->print("andl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // y
    st->print("\n\t");
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // p
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
  }
#endif
#ifndef PRODUCT
void cadd_cmpLTMask_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // p
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // q
    st->print("\t# cadd_cmpLTMask1\n\t");
    st->print("sbbl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print("\n\t");
    st->print("andl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // y
    st->print("\n\t");
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // p
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
  }
#endif
#ifndef PRODUCT
void cadd_cmpLTMask_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("subl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // p
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // q
    st->print("\t# cadd_cmpLTMask1\n\t");
    st->print("sbbl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print("\n\t");
    st->print("andl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // y
    st->print("\n\t");
    st->print("addl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // p
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
  }
#endif
#ifndef PRODUCT
void cadd_cmpLTMask_2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("subl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // p
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // q
    st->print("\t# cadd_cmpLTMask1\n\t");
    st->print("sbbl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print("\n\t");
    st->print("andl    ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // y
    st->print("\n\t");
    st->print("addl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // p
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp
  }
#endif
#ifndef PRODUCT
void cmpF_cc_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("jnp,s   exit\n\t");
    st->print("pushfq\t# saw NaN, set CF\n\t");
    st->print("andq    [rsp], #0xffffff2b\n\t");
    st->print("popfq\n");
    st->print("exit:   nop\t# avoid branch to branch");
  }
#endif
#ifndef PRODUCT
void cmpF_cc_reg_CFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  }
#endif
#ifndef PRODUCT
void cmpF_cc_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("jnp,s   exit\n\t");
    st->print("pushfq\t# saw NaN, set CF\n\t");
    st->print("andq    [rsp], #0xffffff2b\n\t");
    st->print("popfq\n");
    st->print("exit:   nop\t# avoid branch to branch");
  }
#endif
#ifndef PRODUCT
void cmpF_cc_memCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  }
#endif
#ifndef PRODUCT
void cmpF_cc_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
    st->print("\n\t");
    st->print("jnp,s   exit\n\t");
    st->print("pushfq\t# saw NaN, set CF\n\t");
    st->print("andq    [rsp], #0xffffff2b\n\t");
    st->print("popfq\n");
    st->print("exit:   nop\t# avoid branch to branch");
  }
#endif
#ifndef PRODUCT
void cmpF_cc_immCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void cmpD_cc_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("jnp,s   exit\n\t");
    st->print("pushfq\t# saw NaN, set CF\n\t");
    st->print("andq    [rsp], #0xffffff2b\n\t");
    st->print("popfq\n");
    st->print("exit:   nop\t# avoid branch to branch");
  }
#endif
#ifndef PRODUCT
void cmpD_cc_reg_CFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print(" test");
  }
#endif
#ifndef PRODUCT
void cmpD_cc_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("jnp,s   exit\n\t");
    st->print("pushfq\t# saw NaN, set CF\n\t");
    st->print("andq    [rsp], #0xffffff2b\n\t");
    st->print("popfq\n");
    st->print("exit:   nop\t# avoid branch to branch");
  }
#endif
#ifndef PRODUCT
void cmpD_cc_memCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  }
#endif
#ifndef PRODUCT
void cmpD_cc_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
    st->print("\n\t");
    st->print("jnp,s   exit\n\t");
    st->print("pushfq\t# saw NaN, set CF\n\t");
    st->print("andq    [rsp], #0xffffff2b\n\t");
    st->print("popfq\n");
    st->print("exit:   nop\t# avoid branch to branch");
  }
#endif
#ifndef PRODUCT
void cmpD_cc_immCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void cmpF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #-1\n\t");
    st->print("jp,s    done\n\t");
    st->print("jb,s    done\n\t");
    st->print("setne   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void cmpF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #-1\n\t");
    st->print("jp,s    done\n\t");
    st->print("jb,s    done\n\t");
    st->print("setne   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void cmpF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomiss ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
    st->print("\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #-1\n\t");
    st->print("jp,s    done\n\t");
    st->print("jb,s    done\n\t");
    st->print("setne   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void cmpD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #-1\n\t");
    st->print("jp,s    done\n\t");
    st->print("jb,s    done\n\t");
    st->print("setne   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void cmpD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #-1\n\t");
    st->print("jp,s    done\n\t");
    st->print("jb,s    done\n\t");
    st->print("setne   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void cmpD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("ucomisd ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
    st->print("\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #-1\n\t");
    st->print("jp,s    done\n\t");
    st->print("jb,s    done\n\t");
    st->print("setne   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void addF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void addF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void addF_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addss   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void addF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void addD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void addD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void addD_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addsd   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void addD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("addsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void subF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void subF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void subF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void subD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void subD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void subD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("subsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void mulF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void mulF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void mulF_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulss   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void mulF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void mulD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void mulD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void mulD_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulsd   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void mulD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("mulsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void divF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("divss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void divF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("divss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void divF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("divss   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void divD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("divsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void divD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("divsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
  }
#endif
#ifndef PRODUCT
void divD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("divsd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void sqrtF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("sqrtss  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void sqrtF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("sqrtss  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void sqrtF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("sqrtss  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: float=");
    opnd_array(1)->ext_format(ra, this,idx1, st); // con
  }
#endif
#ifndef PRODUCT
void sqrtD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("sqrtsd  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void sqrtD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("sqrtsd  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void sqrtD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("sqrtsd  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [");
    st->print("constant table base + #%d", constant_offset());
    st->print("]\t# load from constant table: double=");
    opnd_array(1)->ext_format(ra, this,idx1, st); // con
  }
#endif
#ifndef PRODUCT
void absF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("andps   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [0x7fffffff]\t# abs float by sign masking");
  }
#endif
#ifndef PRODUCT
void absD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("andpd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [0x7fffffffffffffff]\t");
    st->print("# abs double by sign masking");
  }
#endif
#ifndef PRODUCT
void negF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorps   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [0x80000000]\t# neg float by sign flipping");
  }
#endif
#ifndef PRODUCT
void negD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("xorpd   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", [0x8000000000000000]\t");
    st->print("# neg double by sign flipping");
  }
#endif
#ifndef PRODUCT
void cosD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("dcos   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\n\t");
  }
#endif
#ifndef PRODUCT
void sinD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("dsin   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\n\t");
  }
#endif
#ifndef PRODUCT
void tanD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("dtan   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print("\n\t");
  }
#endif
#ifndef PRODUCT
void log10D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("fldlg2\t\t\t#Log10\n\t");
    st->print("fyl2x\t\t\t# Q=Log10*Log_2(x)\n\t");
  }
#endif
#ifndef PRODUCT
void logD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("fldln2\t\t\t#Log_e\n\t");
    st->print("fyl2x\t\t\t# Q=Log_e*Log_2(x)\n\t");
  }
#endif
#ifndef PRODUCT
void roundFloat_nopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void roundDouble_nopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void convF2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvtss2sd ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void convF2D_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("cvtss2sd ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void convD2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvtsd2ss ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void convD2F_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("cvtsd2ss ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void convF2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvttss2sil ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# f2i\n\t");
    st->print("cmpl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #0x80000000\n\t");
    st->print("jne,s   done\n\t");
    st->print("subq    rsp, #8\n\t");
    st->print("movss   [rsp], ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("call    f2i_fixup\n\t");
    st->print("popq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:   ");
  }
#endif
#ifndef PRODUCT
void convF2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvttss2siq ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# f2l\n\t");
    st->print("cmpq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [0x8000000000000000]\n\t");
    st->print("jne,s   done\n\t");
    st->print("subq    rsp, #8\n\t");
    st->print("movss   [rsp], ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("call    f2l_fixup\n\t");
    st->print("popq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:   ");
  }
#endif
#ifndef PRODUCT
void convD2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvttsd2sil ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# d2i\n\t");
    st->print("cmpl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", #0x80000000\n\t");
    st->print("jne,s   done\n\t");
    st->print("subq    rsp, #8\n\t");
    st->print("movsd   [rsp], ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("call    d2i_fixup\n\t");
    st->print("popq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:   ");
  }
#endif
#ifndef PRODUCT
void convD2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvttsd2siq ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# d2l\n\t");
    st->print("cmpq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", [0x8000000000000000]\n\t");
    st->print("jne,s   done\n\t");
    st->print("subq    rsp, #8\n\t");
    st->print("movsd   [rsp], ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("call    d2l_fixup\n\t");
    st->print("popq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n");
    st->print("done:   ");
  }
#endif
#ifndef PRODUCT
void convI2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvtsi2ssl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2f");
  }
#endif
#ifndef PRODUCT
void convI2F_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("cvtsi2ssl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2f");
  }
#endif
#ifndef PRODUCT
void convI2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvtsi2sdl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2d");
  }
#endif
#ifndef PRODUCT
void convI2D_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("cvtsi2sdl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2d");
  }
#endif
#ifndef PRODUCT
void convXI2F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movdl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("cvtdq2psl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t# i2f");
  }
#endif
#ifndef PRODUCT
void convXI2D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movdl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("cvtdq2pdl ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t# i2d");
  }
#endif
#ifndef PRODUCT
void convL2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvtsi2ssq ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# l2f");
  }
#endif
#ifndef PRODUCT
void convL2F_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("cvtsi2ssq ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# l2f");
  }
#endif
#ifndef PRODUCT
void convL2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("cvtsi2sdq ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# l2d");
  }
#endif
#ifndef PRODUCT
void convL2D_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    st->print("cvtsi2sdq ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# l2d");
  }
#endif
#ifndef PRODUCT
void convI2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movslq  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2l");
  }
#endif
#ifndef PRODUCT
void convI2L_reg_reg_zexNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2l zero-extend\n\t");
  }
#endif
#ifndef PRODUCT
void convI2L_reg_mem_zexNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# i2l zero-extend\n\t");
  }
#endif
#ifndef PRODUCT
void zerox_long_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# zero-extend long");
  }
#endif
#ifndef PRODUCT
void convL2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# l2i");
  }
#endif
#ifndef PRODUCT
void MoveF2I_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveF2I_stack_reg");
  }
#endif
#ifndef PRODUCT
void MoveI2F_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movss   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveI2F_stack_reg");
  }
#endif
#ifndef PRODUCT
void MoveD2L_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveD2L_stack_reg");
  }
#endif
#ifndef PRODUCT
void MoveL2D_stack_reg_partialNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movlpd  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveL2D_stack_reg");
  }
#endif
#ifndef PRODUCT
void MoveL2D_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movsd   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveL2D_stack_reg");
  }
#endif
#ifndef PRODUCT
void MoveF2I_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movss   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveF2I_reg_stack");
  }
#endif
#ifndef PRODUCT
void MoveI2F_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveI2F_reg_stack");
  }
#endif
#ifndef PRODUCT
void MoveD2L_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movsd   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveL2D_reg_stack");
  }
#endif
#ifndef PRODUCT
void MoveL2D_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movq    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveL2D_reg_stack");
  }
#endif
#ifndef PRODUCT
void MoveF2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movd    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveF2I");
  }
#endif
#ifndef PRODUCT
void MoveD2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movd    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveD2L");
  }
#endif
#ifndef PRODUCT
void MoveI2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movd    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveI2F");
  }
#endif
#ifndef PRODUCT
void MoveL2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("movd    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# MoveL2D");
  }
#endif
#ifndef PRODUCT
void Repl8B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("MOVDQA  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("PUNPCKLBW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("PSHUFLW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",0x00\t! replicate8B");
  }
#endif
#ifndef PRODUCT
void Repl8B_rRegINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("MOVD    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("PUNPCKLBW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("PSHUFLW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",0x00\t! replicate8B");
  }
#endif
#ifndef PRODUCT
void Repl8B_immI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PXOR  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t! replicate8B");
  }
#endif
#ifndef PRODUCT
void Repl4S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PSHUFLW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(",0x00\t! replicate4S");
  }
#endif
#ifndef PRODUCT
void Repl4S_rRegINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("MOVD    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("PSHUFLW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",0x00\t! replicate4S");
  }
#endif
#ifndef PRODUCT
void Repl4S_immI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PXOR  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t! replicate4S");
  }
#endif
#ifndef PRODUCT
void Repl4C_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PSHUFLW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(",0x00\t! replicate4C");
  }
#endif
#ifndef PRODUCT
void Repl4C_rRegINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("MOVD    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("PSHUFLW ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",0x00\t! replicate4C");
  }
#endif
#ifndef PRODUCT
void Repl4C_immI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PXOR  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t! replicate4C");
  }
#endif
#ifndef PRODUCT
void Repl2I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PSHUFD ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(",0x00\t! replicate2I");
  }
#endif
#ifndef PRODUCT
void Repl2I_rRegINode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("MOVD   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\n\t");
    st->print("PSHUFD ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",0x00\t! replicate2I");
  }
#endif
#ifndef PRODUCT
void Repl2I_immI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PXOR  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t! replicate2I");
  }
#endif
#ifndef PRODUCT
void Repl2F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PSHUFD ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(",0xe0\t! replicate2F");
  }
#endif
#ifndef PRODUCT
void Repl2F_regFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PSHUFD ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(",0xe0\t! replicate2F");
  }
#endif
#ifndef PRODUCT
void Repl2F_immF0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("PXOR  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(",");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\t! replicate2F");
  }
#endif
#ifndef PRODUCT
void rep_stosNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("xorl    rax, rax\t# ClearArray:\n\t");
    st->print("rep stosq\t# Store rax to *rdi++ while rcx--");
  }
#endif
#ifndef PRODUCT
void string_compareNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    unsigned idx5 = idx4 + opnd_array(4)->num_edges();
    st->print("String Compare ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // str1
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // str2
    st->print(",");
    opnd_array(4)->ext_format(ra, this,idx4, st); // cnt2
    st->print(" -> ");
    opnd_array(0)->int_format(ra, this, st); // result
    st->print("   // KILL ");
    opnd_array(5)->ext_format(ra, this,idx5, st); // tmp1
  }
#endif
#ifndef PRODUCT
void string_indexof_conNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    unsigned idx5 = idx4 + opnd_array(4)->num_edges();
    st->print("String IndexOf ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // str1
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // str2
    st->print(",");
    opnd_array(4)->ext_format(ra, this,idx4, st); // int_cnt2
    st->print(" -> ");
    opnd_array(0)->int_format(ra, this, st); // result
    st->print("   // KILL ");
    opnd_array(5)->ext_format(ra, this,idx5, st); // vec
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
    st->print(", ");
        tty->print("RAX");
    st->print(", ");
        tty->print("RCX");
  }
#endif
#ifndef PRODUCT
void string_indexofNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    unsigned idx5 = idx4 + opnd_array(4)->num_edges();
    st->print("String IndexOf ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // str1
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // str2
    st->print(",");
    opnd_array(4)->ext_format(ra, this,idx4, st); // cnt2
    st->print(" -> ");
    opnd_array(0)->int_format(ra, this, st); // result
    st->print("   // KILL all");
  }
#endif
#ifndef PRODUCT
void string_equalsNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    unsigned idx5 = idx4 + opnd_array(4)->num_edges();
    st->print("String Equals ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // str1
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // str2
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // cnt
    st->print(" -> ");
    opnd_array(0)->int_format(ra, this, st); // result
    st->print("    // KILL ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp1
    st->print(", ");
    opnd_array(5)->ext_format(ra, this,idx5, st); // tmp2
    st->print(", ");
        tty->print("RBX");
  }
#endif
#ifndef PRODUCT
void array_equalsNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("Array Equals ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // ary1
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // ary2
    st->print(" -> ");
    opnd_array(0)->int_format(ra, this, st); // result
    st->print("   // KILL ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // tmp1
    st->print(", ");
    opnd_array(4)->ext_format(ra, this,idx4, st); // tmp2
    st->print(", ");
        tty->print("RCX");
    st->print(", ");
        tty->print("RBX");
  }
#endif
#ifndef PRODUCT
void compI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  }
#endif
#ifndef PRODUCT
void compI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  }
#endif
#ifndef PRODUCT
void compI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  }
#endif
#ifndef PRODUCT
void testI_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("testl   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void testI_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("testl   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
  }
#endif
#ifndef PRODUCT
void testI_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("testl   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  }
#endif
#ifndef PRODUCT
void testI_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("testl   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  }
#endif
#ifndef PRODUCT
void compU_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# unsigned");
  }
#endif
#ifndef PRODUCT
void compU_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# unsigned");
  }
#endif
#ifndef PRODUCT
void compU_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# unsigned");
  }
#endif
#ifndef PRODUCT
void testU_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("testl  ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# unsigned");
  }
#endif
#ifndef PRODUCT
void compP_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# ptr");
  }
#endif
#ifndef PRODUCT
void compP_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# ptr");
  }
#endif
#ifndef PRODUCT
void compP_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# raw ptr");
  }
#endif
#ifndef PRODUCT
void testP_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("testq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# ptr");
  }
#endif
#ifndef PRODUCT
void testP_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("testq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op
    st->print(", 0xffffffffffffffff\t# ptr");
  }
#endif
#ifndef PRODUCT
void testP_mem_reg0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    R12, ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# ptr (R12_heapbase==0)");
  }
#endif
#ifndef PRODUCT
void compN_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# compressed ptr");
  }
#endif
#ifndef PRODUCT
void compN_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // mem
    st->print("\t# compressed ptr");
  }
#endif
#ifndef PRODUCT
void compN_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
    st->print("\t# compressed ptr");
  }
#endif
#ifndef PRODUCT
void compN_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // mem
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# compressed ptr");
  }
#endif
#ifndef PRODUCT
void testN_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("testl   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print("\t# compressed ptr");
  }
#endif
#ifndef PRODUCT
void testN_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("testl   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print(", 0xffffffff\t# compressed ptr");
  }
#endif
#ifndef PRODUCT
void testN_mem_reg0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpl    R12, ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
    st->print("\t# compressed ptr (R12_heapbase==0)");
  }
#endif
#ifndef PRODUCT
void compL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  }
#endif
#ifndef PRODUCT
void compL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  }
#endif
#ifndef PRODUCT
void compL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // op1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  }
#endif
#ifndef PRODUCT
void testL_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("testq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
  }
#endif
#ifndef PRODUCT
void testL_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("testq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // con
    st->print("\t# long");
  }
#endif
#ifndef PRODUCT
void testL_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("testq   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  }
#endif
#ifndef PRODUCT
void testL_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 2;
    unsigned idx1 = 2;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("testq   ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print(", ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  }
#endif
#ifndef PRODUCT
void cmpL3_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("cmpq    ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // src1
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src2
    st->print("\t# CmpL3\n\t");
    st->print("movl    ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", -1\n\t");
    st->print("jl,s    done\n\t");
    st->print("setne   ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("movzbl  ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // dst
    st->print("\n\t");
    st->print("done:");
  }
#endif
#ifndef PRODUCT
void cmovI_reg_gNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmovlgt ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# min");
  }
#endif
#ifndef PRODUCT
void minI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void cmovI_reg_lNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("cmovllt ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // dst
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // src
    st->print("\t# max");
  }
#endif
#ifndef PRODUCT
void maxI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  }
#endif
#ifndef PRODUCT
void jmpDirNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("jmp     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // labl
  }
#endif
#ifndef PRODUCT
void jmpConNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print("     ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpLoopEndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print("     ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\t# loop end");
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpLoopEndUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\t# loop end");
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpLoopEndUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\t# loop end");
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpConUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u  ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpConUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u  ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpConUCF2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    if (    opnd_array(1)->ccode()     == Assembler::notEqual) {
          st->print("jp,u   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\n\t");
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    } else {
          st->print("jp,u   done\n\t");
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\n\t");
    st->print("done:");
    }
      st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void partialSubtypeCheckNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("movq    rdi, [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // sub
    st->print(" + (sizeof(oopDesc) + Klass::secondary_supers_offset_in_bytes())]\n\t");
    st->print("movl    rcx, [rdi + arrayOopDesc::length_offset_in_bytes()]\t# length to scan\n\t");
    st->print("addq    rdi, arrayOopDex::base_offset_in_bytes(T_OBJECT)\t# Skip to start of data; set NZ in case count is zero\n\t");
    st->print("repne   scasq\t# Scan *rdi++ for a match with rax while rcx--\n\t");
    st->print("jne,s   miss\t\t# Missed: rdi not-zero\n\t");
    st->print("movq    [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // sub
    st->print(" + (sizeof(oopDesc) + Klass::secondary_super_cache_offset_in_bytes())], ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // super
    st->print("\t# Hit: update cache\n\t");
    st->print("xorq    ");
    opnd_array(0)->int_format(ra, this, st); // result
    st->print(", ");
    opnd_array(0)->int_format(ra, this, st); // result
    st->print("\t\t Hit: rdi zero\n\t");
    st->print("miss:\t");
  }
#endif
#ifndef PRODUCT
void partialSubtypeCheck_vs_ZeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("movq    rdi, [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // sub
    st->print(" + (sizeof(oopDesc) + Klass::secondary_supers_offset_in_bytes())]\n\t");
    st->print("movl    rcx, [rdi + arrayOopDesc::length_offset_in_bytes()]\t# length to scan\n\t");
    st->print("addq    rdi, arrayOopDex::base_offset_in_bytes(T_OBJECT)\t# Skip to start of data; set NZ in case count is zero\n\t");
    st->print("repne   scasq\t# Scan *rdi++ for a match with rax while cx-- != 0\n\t");
    st->print("jne,s   miss\t\t# Missed: flags nz\n\t");
    st->print("movq    [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // sub
    st->print(" + (sizeof(oopDesc) + Klass::secondary_super_cache_offset_in_bytes())], ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // super
    st->print("\t# Hit: update cache\n\t");
    st->print("miss:\t");
  }
#endif
#ifndef PRODUCT
void jmpDir_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    st->print("jmp,s   ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // labl
  }
#endif
#ifndef PRODUCT
void jmpCon_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",s   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpLoopEnd_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",s   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\t# loop end");
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpLoopEndU_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",us  ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\t# loop end");
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpLoopEndUCF_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",us  ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\t# loop end");
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpConU_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",us  ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpConUCF_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",us  ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void jmpConUCF2_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    if (    opnd_array(1)->ccode()     == Assembler::notEqual) {
          st->print("jp,u,s   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\n\t");
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u,s   ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    } else {
          st->print("jp,u,s   done\n\t");
    st->print("j");
    opnd_array(1)->ext_format(ra, this,idx1, st); // cop
    st->print(",u,s  ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // labl
    st->print("\n\t");
    st->print("done:");
    }
      st->print("  P=%f C=%f",_prob,_fcnt);
  }
#endif
#ifndef PRODUCT
void cmpFastLockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    unsigned idx4 = idx3 + opnd_array(3)->num_edges();
    st->print("fastlock ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // object
    st->print(",");
    opnd_array(2)->ext_format(ra, this,idx2, st); // box
    st->print(",");
    opnd_array(3)->ext_format(ra, this,idx3, st); // tmp
    st->print(",");
    opnd_array(4)->ext_format(ra, this,idx4, st); // scr
  }
#endif
#ifndef PRODUCT
void cmpFastUnlockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 1;
    unsigned idx1 = 1;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    unsigned idx3 = idx2 + opnd_array(2)->num_edges();
    st->print("fastunlock ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // object
    st->print(", ");
    opnd_array(2)->ext_format(ra, this,idx2, st); // box
    st->print(", ");
    opnd_array(3)->ext_format(ra, this,idx3, st); // tmp
  }
#endif
#ifndef PRODUCT
void safePoint_pollNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("testl  rax, [rip + #offset_to_poll_page]\t");
    st->print("# Safepoint: poll for GC");
    st->print("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void safePoint_poll_farNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 5;
    unsigned idx1 = 5;
    st->print("testl  rax, [");
    opnd_array(1)->ext_format(ra, this,idx1, st); // poll
    st->print("]\t");
    st->print("# Safepoint: poll for GC");
    st->print("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void CallStaticJavaDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("call,static ");
    if( _method ) _method->print_short_name(st); else st->print(" wrapper for: %s", _name);
    if( !_method ) dump_trap_args(st);
    st->print_cr("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void CallStaticJavaHandleNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("call,static/MethodHandle ");
    if( _method ) _method->print_short_name(st); else st->print(" wrapper for: %s", _name);
    if( !_method ) dump_trap_args(st);
    st->print_cr("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void CallDynamicJavaDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("movq    rax, #Universe::non_oop_word()\n\t");
    st->print("call,dynamic ");
    _method->print_short_name();
    st->print_cr("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void CallRuntimeDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("call,runtime ");
    st->print(" %s", _name);    st->print_cr("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void CallLeafDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("call_leaf,runtime ");
    st->print(" %s", _name);    st->print_cr("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void CallLeafNoFPDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("call_leaf_nofp,runtime ");
    st->print(" %s", _name);    st->print_cr("");
    if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
    st->print("        # ");
    if( _jvms ) _oop_map->print_on(st);
  }
#endif
#ifndef PRODUCT
void RetNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("ret");
  }
#endif
#ifndef PRODUCT
void TailCalljmpIndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 5;
    unsigned idx1 = 5;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("jmp     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // jump_target
    st->print("\t# rbx holds method oop");
  }
#endif
#ifndef PRODUCT
void tailjmpIndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    // Start at oper_input_base() and count operands
    unsigned idx0 = 5;
    unsigned idx1 = 5;
    unsigned idx2 = idx1 + opnd_array(1)->num_edges();
    st->print("popq    rdx\t# pop return address\n\t");
    st->print("jmp     ");
    opnd_array(1)->ext_format(ra, this,idx1, st); // jump_target
  }
#endif
#ifndef PRODUCT
void CreateExceptionNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("# exception oop is in rax; no code emitted");
  }
#endif
#ifndef PRODUCT
void RethrowExceptionNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("jmp     rethrow_stub");
  }
#endif
#ifndef PRODUCT
void tlsLoadPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("# TLS is in R15");
  }
#endif
#ifndef PRODUCT
void ShouldNotReachHereNode::format(PhaseRegAlloc *ra, outputStream *st) const {
    st->print("int3\t# ShouldNotReachHere");
  }
#endif
// Check consistency of C++ compilation with ADLC options:
// Check adlc -DLINUX=1
#ifndef LINUX
#  error "LINUX must be defined"
#endif // LINUX
// Check adlc -D_GNU_SOURCE=1
#ifndef _GNU_SOURCE
#  error "_GNU_SOURCE must be defined"
#endif // _GNU_SOURCE
// Check adlc -DAMD64=1
#ifndef AMD64
#  error "AMD64 must be defined"
#endif // AMD64
// Check adlc -D_LP64=1
#ifndef _LP64
#  error "_LP64 must be defined"
#endif // _LP64
