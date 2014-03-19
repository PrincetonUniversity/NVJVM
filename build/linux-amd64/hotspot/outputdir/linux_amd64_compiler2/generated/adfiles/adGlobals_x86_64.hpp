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


#ifndef GENERATED_ADFILES_ADGLOBALS_HPP
#define GENERATED_ADFILES_ADGLOBALS_HPP


// the number of reserved registers + machine registers.
#define REG_COUNT    65

// the number of save_on_entry + always_saved registers.
#define MAX_SAVED_ON_ENTRY_REG_COUNT    12
#define     SAVED_ON_ENTRY_REG_COUNT    0
#define   C_SAVED_ON_ENTRY_REG_COUNT    12

// Enumerate machine register numbers starting after reserved regs.
// in the order of occurrence in the register block.
enum MachRegisterNumbers {
  R10_num,		// 0
  R10_H_num,		// 1
  R11_num,		// 2
  R11_H_num,		// 3
  R8_num,		// 4
  R8_H_num,		// 5
  R9_num,		// 6
  R9_H_num,		// 7
  R12_num,		// 8
  R12_H_num,		// 9
  RCX_num,		// 10
  RCX_H_num,		// 11
  RBX_num,		// 12
  RBX_H_num,		// 13
  RDI_num,		// 14
  RDI_H_num,		// 15
  RDX_num,		// 16
  RDX_H_num,		// 17
  RSI_num,		// 18
  RSI_H_num,		// 19
  RAX_num,		// 20
  RAX_H_num,		// 21
  RBP_num,		// 22
  RBP_H_num,		// 23
  R13_num,		// 24
  R13_H_num,		// 25
  R14_num,		// 26
  R14_H_num,		// 27
  R15_num,		// 28
  R15_H_num,		// 29
  RSP_num,		// 30
  RSP_H_num,		// 31
  XMM0_num,		// 32
  XMM0_H_num,		// 33
  XMM1_num,		// 34
  XMM1_H_num,		// 35
  XMM2_num,		// 36
  XMM2_H_num,		// 37
  XMM3_num,		// 38
  XMM3_H_num,		// 39
  XMM4_num,		// 40
  XMM4_H_num,		// 41
  XMM5_num,		// 42
  XMM5_H_num,		// 43
  XMM6_num,		// 44
  XMM6_H_num,		// 45
  XMM7_num,		// 46
  XMM7_H_num,		// 47
  XMM8_num,		// 48
  XMM8_H_num,		// 49
  XMM9_num,		// 50
  XMM9_H_num,		// 51
  XMM10_num,		// 52
  XMM10_H_num,		// 53
  XMM11_num,		// 54
  XMM11_H_num,		// 55
  XMM12_num,		// 56
  XMM12_H_num,		// 57
  XMM13_num,		// 58
  XMM13_H_num,		// 59
  XMM14_num,		// 60
  XMM14_H_num,		// 61
  XMM15_num,		// 62
  XMM15_H_num,		// 63
  RFLAGS_num,		// 64
  _last_Mach_Reg	// 65
};

// Size of register-mask in ints
#define RM_SIZE 6
// Unroll factor for loops over the data in a RegMask
#define FORALL_BODY BODY(0) BODY(1) BODY(2) BODY(3) BODY(4) BODY(5) 

class RegMask;

#endif // GENERATED_ADFILES_ADGLOBALS_HPP
