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


#ifndef GENERATED_ADFILES_AD_HPP
#define GENERATED_ADFILES_AD_HPP

#include "memory/allocation.hpp"
#include "opto/machnode.hpp"
#include "opto/node.hpp"
#include "opto/regalloc.hpp"
#include "opto/subnode.hpp"


enum MachOperands {
  UNIVERSE, // 0
  LABEL, // 1
  SREGI, // 2
  SREGP, // 3
  SREGF, // 4
  SREGD, // 5
  SREGL, // 6
  METHOD, // 7
  IMMI, // 8
  IMMI0, // 9
  IMMI1, // 10
  IMMI_M1, // 11
  IMMI2, // 12
  IMMI8, // 13
  IMMI16, // 14
  IMMI_32, // 15
  IMMI_64, // 16
  IMMP, // 17
  IMMP0, // 18
  IMMP_POLL, // 19
  IMMN, // 20
  IMMN0, // 21
  IMMP31, // 22
  IMML, // 23
  IMML8, // 24
  IMMUL32, // 25
  IMML32, // 26
  IMML0, // 27
  IMML1, // 28
  IMML_M1, // 29
  IMML10, // 30
  IMML_127, // 31
  IMML_32BITS, // 32
  IMMF0, // 33
  IMMF, // 34
  IMMD0, // 35
  IMMD, // 36
  IMMI_16, // 37
  IMMI_24, // 38
  IMMI_255, // 39
  IMMI_65535, // 40
  IMML_255, // 41
  IMML_65535, // 42
  RREGI, // 43
  RAX_REGI, // 44
  RBX_REGI, // 45
  RCX_REGI, // 46
  RDX_REGI, // 47
  RDI_REGI, // 48
  NO_RCX_REGI, // 49
  NO_RAX_RDX_REGI, // 50
  ANY_REGP, // 51
  RREGP, // 52
  RREGN, // 53
  NO_RAX_REGP, // 54
  NO_RBP_REGP, // 55
  NO_RAX_RBX_REGP, // 56
  RAX_REGP, // 57
  RAX_REGN, // 58
  RBX_REGP, // 59
  RSI_REGP, // 60
  RDI_REGP, // 61
  RBP_REGP, // 62
  R15_REGP, // 63
  RREGL, // 64
  NO_RAX_RDX_REGL, // 65
  NO_RAX_REGL, // 66
  NO_RCX_REGL, // 67
  RAX_REGL, // 68
  RCX_REGL, // 69
  RDX_REGL, // 70
  RFLAGSREG, // 71
  RFLAGSREGU, // 72
  RFLAGSREGUCF, // 73
  REGF, // 74
  REGD, // 75
  INDIRECT, // 76
  INDOFFSET8, // 77
  INDOFFSET32, // 78
  INDINDEXOFFSET, // 79
  INDINDEX, // 80
  INDINDEXSCALE, // 81
  INDINDEXSCALEOFFSET, // 82
  INDPOSINDEXSCALEOFFSET, // 83
  INDCOMPRESSEDOOPOFFSET, // 84
  INDIRECTNARROW, // 85
  INDOFFSET8NARROW, // 86
  INDOFFSET32NARROW, // 87
  INDINDEXOFFSETNARROW, // 88
  INDINDEXNARROW, // 89
  INDINDEXSCALENARROW, // 90
  INDINDEXSCALEOFFSETNARROW, // 91
  INDPOSINDEXSCALEOFFSETNARROW, // 92
  STACKSLOTP, // 93
  STACKSLOTI, // 94
  STACKSLOTF, // 95
  STACKSLOTD, // 96
  STACKSLOTL, // 97
  CMPOP, // 98
  CMPOPU, // 99
  CMPOPUCF, // 100
  CMPOPUCF2, // 101
  // last operand
  MEMORY, // 102
  // last operand class
  _ADDP_ANY_REGP_RREGL, // 103
  _LSHIFTL_RREGL_IMMI2, // 104
  _ADDP_ANY_REGP__LSHIFTL_RREGL_IMMI2, // 105
  _CONVI2L_RREGI_, // 106
  _LSHIFTL__CONVI2L_RREGI__IMMI2, // 107
  _ADDP_ANY_REGP__LSHIFTL__CONVI2L_RREGI__IMMI2, // 108
  _DECODEN_RREGN_, // 109
  _ADDP__DECODEN_RREGN__RREGL, // 110
  _ADDP__DECODEN_RREGN___LSHIFTL_RREGL_IMMI2, // 111
  _ADDP__DECODEN_RREGN___LSHIFTL__CONVI2L_RREGI__IMMI2, // 112
  _LOADB_MEMORY_, // 113
  _LOADUB_MEMORY_, // 114
  _ANDI__LOADUB_MEMORY__IMMI8, // 115
  _LOADS_MEMORY_, // 116
  _LSHIFTI__LOADS_MEMORY__IMMI_24, // 117
  _LOADUS_MEMORY_, // 118
  _LSHIFTI__LOADUS_MEMORY__IMMI_24, // 119
  _ANDI__LOADUS_MEMORY__IMMI_255, // 120
  _ANDI__LOADUS_MEMORY__IMMI16, // 121
  _LOADI_MEMORY_, // 122
  _LSHIFTI__LOADI_MEMORY__IMMI_24, // 123
  _LSHIFTI__LOADI_MEMORY__IMMI_16, // 124
  _ANDI__LOADI_MEMORY__IMMI_255, // 125
  _ANDI__LOADI_MEMORY__IMMI_65535, // 126
  _ANDI__LOADI_MEMORY__IMMI, // 127
  _LOADL_MEMORY_, // 128
  _ADDL__LSHIFTL_RREGL_IMMI2_IMML32, // 129
  _BINARY_CMPOP_RFLAGSREG, // 130
  _BINARY_RREGI_RREGI, // 131
  _BINARY_CMPOPU_RFLAGSREGU, // 132
  _BINARY_CMPOPUCF_RFLAGSREGUCF, // 133
  _BINARY_RREGI__LOADI_MEMORY_, // 134
  _BINARY_RREGN_RREGN, // 135
  _BINARY_RREGP_RREGP, // 136
  _BINARY_RREGL_RREGL, // 137
  _BINARY_RREGL__LOADL_MEMORY_, // 138
  _BINARY_REGF_REGF, // 139
  _BINARY_REGD_REGD, // 140
  _ADDI__LOADI_MEMORY__RREGI, // 141
  _ADDI_RREGI__LOADI_MEMORY_, // 142
  _ADDI__LOADI_MEMORY__IMMI, // 143
  _ADDI__LOADI_MEMORY__IMMI1, // 144
  _ADDI__LOADI_MEMORY__IMMI_M1, // 145
  _ADDL__LOADL_MEMORY__RREGL, // 146
  _ADDL_RREGL__LOADL_MEMORY_, // 147
  _ADDL__LOADL_MEMORY__IMML32, // 148
  _ADDL__LOADL_MEMORY__IMML1, // 149
  _ADDL__LOADL_MEMORY__IMML_M1, // 150
  _BINARY_RAX_REGP_RREGP, // 151
  _BINARY_RAX_REGI_RREGI, // 152
  _BINARY_RAX_REGL_RREGL, // 153
  _BINARY_RAX_REGN_RREGN, // 154
  _SUBI__LOADI_MEMORY__RREGI, // 155
  _SUBI__LOADI_MEMORY__IMMI, // 156
  _SUBL__LOADL_MEMORY__RREGL, // 157
  _SUBL__LOADL_MEMORY__IMML32, // 158
  _SUBI_IMMI0_RREGI, // 159
  _SUBI_IMMI0__LOADI_MEMORY_, // 160
  _SUBL_IMML0__LOADL_MEMORY_, // 161
  _LSHIFTI__LOADI_MEMORY__IMMI1, // 162
  _LSHIFTI__LOADI_MEMORY__IMMI8, // 163
  _LSHIFTI__LOADI_MEMORY__RCX_REGI, // 164
  _RSHIFTI__LOADI_MEMORY__IMMI1, // 165
  _RSHIFTI__LOADI_MEMORY__IMMI8, // 166
  _RSHIFTI__LOADI_MEMORY__RCX_REGI, // 167
  _URSHIFTI__LOADI_MEMORY__IMMI1, // 168
  _URSHIFTI__LOADI_MEMORY__IMMI8, // 169
  _URSHIFTI__LOADI_MEMORY__RCX_REGI, // 170
  _LSHIFTL__LOADL_MEMORY__IMMI1, // 171
  _LSHIFTL__LOADL_MEMORY__IMMI8, // 172
  _LSHIFTL__LOADL_MEMORY__RCX_REGI, // 173
  _RSHIFTL__LOADL_MEMORY__IMMI1, // 174
  _RSHIFTL__LOADL_MEMORY__IMMI8, // 175
  _RSHIFTL__LOADL_MEMORY__RCX_REGI, // 176
  _URSHIFTL__LOADL_MEMORY__IMMI1, // 177
  _URSHIFTL__LOADL_MEMORY__IMMI8, // 178
  _URSHIFTL__LOADL_MEMORY__RCX_REGI, // 179
  _LSHIFTI_RREGI_IMMI_24, // 180
  _LSHIFTI_RREGI_IMMI_16, // 181
  _LSHIFTI_RREGI_IMMI1, // 182
  _URSHIFTI_RREGI_IMMI_M1, // 183
  _LSHIFTI_RREGI_IMMI8, // 184
  _URSHIFTI_RREGI_IMMI8, // 185
  _LSHIFTI_NO_RCX_REGI_RCX_REGI, // 186
  _SUBI_IMMI0_RCX_REGI, // 187
  _URSHIFTI_NO_RCX_REGI__SUBI_IMMI0_RCX_REGI, // 188
  _SUBI_IMMI_32_RCX_REGI, // 189
  _URSHIFTI_NO_RCX_REGI__SUBI_IMMI_32_RCX_REGI, // 190
  _URSHIFTI_RREGI_IMMI1, // 191
  _LSHIFTI_RREGI_IMMI_M1, // 192
  _URSHIFTI_NO_RCX_REGI_RCX_REGI, // 193
  _LSHIFTI_NO_RCX_REGI__SUBI_IMMI0_RCX_REGI, // 194
  _LSHIFTI_NO_RCX_REGI__SUBI_IMMI_32_RCX_REGI, // 195
  _LSHIFTL_RREGL_IMMI1, // 196
  _URSHIFTL_RREGL_IMMI_M1, // 197
  _LSHIFTL_RREGL_IMMI8, // 198
  _URSHIFTL_RREGL_IMMI8, // 199
  _LSHIFTL_NO_RCX_REGL_RCX_REGI, // 200
  _URSHIFTL_NO_RCX_REGL__SUBI_IMMI0_RCX_REGI, // 201
  _SUBI_IMMI_64_RCX_REGI, // 202
  _URSHIFTL_NO_RCX_REGL__SUBI_IMMI_64_RCX_REGI, // 203
  _URSHIFTL_RREGL_IMMI1, // 204
  _LSHIFTL_RREGL_IMMI_M1, // 205
  _URSHIFTL_NO_RCX_REGL_RCX_REGI, // 206
  _LSHIFTL_NO_RCX_REGL__SUBI_IMMI0_RCX_REGI, // 207
  _LSHIFTL_NO_RCX_REGL__SUBI_IMMI_64_RCX_REGI, // 208
  _ANDI_RREGI_IMMI_255, // 209
  _ANDI_RREGI_IMMI_65535, // 210
  _ANDI__LOADI_MEMORY__RREGI, // 211
  _ANDI_RREGI__LOADI_MEMORY_, // 212
  _ORI__LOADI_MEMORY__RREGI, // 213
  _ORI_RREGI__LOADI_MEMORY_, // 214
  _ORI__LOADI_MEMORY__IMMI, // 215
  _XORI__LOADI_MEMORY__RREGI, // 216
  _XORI_RREGI__LOADI_MEMORY_, // 217
  _XORI__LOADI_MEMORY__IMMI, // 218
  _ANDL__LOADL_MEMORY__RREGL, // 219
  _ANDL_RREGL__LOADL_MEMORY_, // 220
  _ANDL__LOADL_MEMORY__IMML32, // 221
  _CASTP2X_ANY_REGP_, // 222
  _ORL__LOADL_MEMORY__RREGL, // 223
  _ORL_RREGL__LOADL_MEMORY_, // 224
  _ORL__LOADL_MEMORY__IMML32, // 225
  _XORL__LOADL_MEMORY__RREGL, // 226
  _XORL_RREGL__LOADL_MEMORY_, // 227
  _XORL__LOADL_MEMORY__IMML32, // 228
  _CMPLTMASK_RREGI_RREGI, // 229
  _ANDI__CMPLTMASK_RREGI_RREGI_RREGI, // 230
  _SUBI_RREGI_RREGI, // 231
  _ANDI_RREGI__CMPLTMASK_RREGI_RREGI, // 232
  _LOADF_MEMORY_, // 233
  _LOADD_MEMORY_, // 234
  _CONVF2D_REGF_, // 235
  _SQRTD__CONVF2D_REGF__, // 236
  _CONVF2D__LOADF_MEMORY__, // 237
  _SQRTD__CONVF2D__LOADF_MEMORY___, // 238
  _CONVF2D_IMMF_, // 239
  _SQRTD__CONVF2D_IMMF__, // 240
  _CONVI2L__LOADI_MEMORY__, // 241
  _BINARY_RDI_REGP_RCX_REGI, // 242
  _BINARY_RSI_REGP_RDX_REGI, // 243
  _BINARY_RDI_REGP_RDX_REGI, // 244
  _BINARY_RSI_REGP_IMMI, // 245
  _BINARY_RSI_REGP_RAX_REGI, // 246
  _BINARY_RDI_REGP_RSI_REGP, // 247
  _ANDI_RREGI_IMMI, // 248
  _LOADP_MEMORY_, // 249
  _LOADN_MEMORY_, // 250
  _ANDL_RREGL_IMML32, // 251
  _PARTIALSUBTYPECHECK_RSI_REGP_RAX_REGP, // 252
  // last internally defined operand
  _LAST_MACH_OPER
};

enum MachOpcodes {
  Universe_rule, // 0
  label_rule, // 1
  sRegI_rule, // 2
  sRegP_rule, // 3
  sRegF_rule, // 4
  sRegD_rule, // 5
  sRegL_rule, // 6
  method_rule, // 7
  immI_rule, // 8
  immI0_rule, // 9
  immI1_rule, // 10
  immI_M1_rule, // 11
  immI2_rule, // 12
  immI8_rule, // 13
  immI16_rule, // 14
  immI_32_rule, // 15
  immI_64_rule, // 16
  immP_rule, // 17
  immP0_rule, // 18
  immP_poll_rule, // 19
  immN_rule, // 20
  immN0_rule, // 21
  immP31_rule, // 22
  immL_rule, // 23
  immL8_rule, // 24
  immUL32_rule, // 25
  immL32_rule, // 26
  immL0_rule, // 27
  immL1_rule, // 28
  immL_M1_rule, // 29
  immL10_rule, // 30
  immL_127_rule, // 31
  immL_32bits_rule, // 32
  immF0_rule, // 33
  immF_rule, // 34
  immD0_rule, // 35
  immD_rule, // 36
  immI_16_rule, // 37
  immI_24_rule, // 38
  immI_255_rule, // 39
  immI_65535_rule, // 40
  immL_255_rule, // 41
  immL_65535_rule, // 42
  rRegI_rule, // 43
  rax_RegI_rule, // 44
  rbx_RegI_rule, // 45
  rcx_RegI_rule, // 46
  rdx_RegI_rule, // 47
  rdi_RegI_rule, // 48
  no_rcx_RegI_rule, // 49
  no_rax_rdx_RegI_rule, // 50
  any_RegP_rule, // 51
  rRegP_rule, // 52
  rRegN_rule, // 53
  no_rax_RegP_rule, // 54
  no_rbp_RegP_rule, // 55
  no_rax_rbx_RegP_rule, // 56
  rax_RegP_rule, // 57
  rax_RegN_rule, // 58
  rbx_RegP_rule, // 59
  rsi_RegP_rule, // 60
  rdi_RegP_rule, // 61
  rbp_RegP_rule, // 62
  r15_RegP_rule, // 63
  rRegL_rule, // 64
  no_rax_rdx_RegL_rule, // 65
  no_rax_RegL_rule, // 66
  no_rcx_RegL_rule, // 67
  rax_RegL_rule, // 68
  rcx_RegL_rule, // 69
  rdx_RegL_rule, // 70
  rFlagsReg_rule, // 71
  rFlagsRegU_rule, // 72
  rFlagsRegUCF_rule, // 73
  regF_rule, // 74
  regD_rule, // 75
  indirect_rule, // 76
  indOffset8_rule, // 77
  indOffset32_rule, // 78
  indIndexOffset_rule, // 79
  indIndex_rule, // 80
  indIndexScale_rule, // 81
  indIndexScaleOffset_rule, // 82
  indPosIndexScaleOffset_rule, // 83
  indCompressedOopOffset_rule, // 84
  indirectNarrow_rule, // 85
  indOffset8Narrow_rule, // 86
  indOffset32Narrow_rule, // 87
  indIndexOffsetNarrow_rule, // 88
  indIndexNarrow_rule, // 89
  indIndexScaleNarrow_rule, // 90
  indIndexScaleOffsetNarrow_rule, // 91
  indPosIndexScaleOffsetNarrow_rule, // 92
  stackSlotP_rule, // 93
  stackSlotI_rule, // 94
  stackSlotF_rule, // 95
  stackSlotD_rule, // 96
  stackSlotL_rule, // 97
  cmpOp_rule, // 98
  cmpOpU_rule, // 99
  cmpOpUCF_rule, // 100
  cmpOpUCF2_rule, // 101
  // last operand
  memory_rule, // 102
  // last operand class
  _AddP_any_RegP_rRegL_rule, // 103
  _LShiftL_rRegL_immI2_rule, // 104
  _AddP_any_RegP__LShiftL_rRegL_immI2_rule, // 105
  _ConvI2L_rRegI__rule, // 106
  _LShiftL__ConvI2L_rRegI__immI2_rule, // 107
  _AddP_any_RegP__LShiftL__ConvI2L_rRegI__immI2_rule, // 108
  _DecodeN_rRegN__rule, // 109
  _AddP__DecodeN_rRegN__rRegL_rule, // 110
  _AddP__DecodeN_rRegN___LShiftL_rRegL_immI2_rule, // 111
  _AddP__DecodeN_rRegN___LShiftL__ConvI2L_rRegI__immI2_rule, // 112
  _LoadB_memory__rule, // 113
  _LoadUB_memory__rule, // 114
  _AndI__LoadUB_memory__immI8_rule, // 115
  _LoadS_memory__rule, // 116
  _LShiftI__LoadS_memory__immI_24_rule, // 117
  _LoadUS_memory__rule, // 118
  _LShiftI__LoadUS_memory__immI_24_rule, // 119
  _AndI__LoadUS_memory__immI_255_rule, // 120
  _AndI__LoadUS_memory__immI16_rule, // 121
  _LoadI_memory__rule, // 122
  _LShiftI__LoadI_memory__immI_24_rule, // 123
  _LShiftI__LoadI_memory__immI_16_rule, // 124
  _AndI__LoadI_memory__immI_255_rule, // 125
  _AndI__LoadI_memory__immI_65535_rule, // 126
  _AndI__LoadI_memory__immI_rule, // 127
  _LoadL_memory__rule, // 128
  _AddL__LShiftL_rRegL_immI2_immL32_rule, // 129
  _Binary_cmpOp_rFlagsReg_rule, // 130
  _Binary_rRegI_rRegI_rule, // 131
  _Binary_cmpOpU_rFlagsRegU_rule, // 132
  _Binary_cmpOpUCF_rFlagsRegUCF_rule, // 133
  _Binary_rRegI__LoadI_memory__rule, // 134
  _Binary_rRegN_rRegN_rule, // 135
  _Binary_rRegP_rRegP_rule, // 136
  _Binary_rRegL_rRegL_rule, // 137
  _Binary_rRegL__LoadL_memory__rule, // 138
  _Binary_regF_regF_rule, // 139
  _Binary_regD_regD_rule, // 140
  _AddI__LoadI_memory__rRegI_rule, // 141
  _AddI_rRegI__LoadI_memory__rule, // 142
  _AddI__LoadI_memory__immI_rule, // 143
  _AddI__LoadI_memory__immI1_rule, // 144
  _AddI__LoadI_memory__immI_M1_rule, // 145
  _AddL__LoadL_memory__rRegL_rule, // 146
  _AddL_rRegL__LoadL_memory__rule, // 147
  _AddL__LoadL_memory__immL32_rule, // 148
  _AddL__LoadL_memory__immL1_rule, // 149
  _AddL__LoadL_memory__immL_M1_rule, // 150
  _Binary_rax_RegP_rRegP_rule, // 151
  _Binary_rax_RegI_rRegI_rule, // 152
  _Binary_rax_RegL_rRegL_rule, // 153
  _Binary_rax_RegN_rRegN_rule, // 154
  _SubI__LoadI_memory__rRegI_rule, // 155
  _SubI__LoadI_memory__immI_rule, // 156
  _SubL__LoadL_memory__rRegL_rule, // 157
  _SubL__LoadL_memory__immL32_rule, // 158
  _SubI_immI0_rRegI_rule, // 159
  _SubI_immI0__LoadI_memory__rule, // 160
  _SubL_immL0__LoadL_memory__rule, // 161
  _LShiftI__LoadI_memory__immI1_rule, // 162
  _LShiftI__LoadI_memory__immI8_rule, // 163
  _LShiftI__LoadI_memory__rcx_RegI_rule, // 164
  _RShiftI__LoadI_memory__immI1_rule, // 165
  _RShiftI__LoadI_memory__immI8_rule, // 166
  _RShiftI__LoadI_memory__rcx_RegI_rule, // 167
  _URShiftI__LoadI_memory__immI1_rule, // 168
  _URShiftI__LoadI_memory__immI8_rule, // 169
  _URShiftI__LoadI_memory__rcx_RegI_rule, // 170
  _LShiftL__LoadL_memory__immI1_rule, // 171
  _LShiftL__LoadL_memory__immI8_rule, // 172
  _LShiftL__LoadL_memory__rcx_RegI_rule, // 173
  _RShiftL__LoadL_memory__immI1_rule, // 174
  _RShiftL__LoadL_memory__immI8_rule, // 175
  _RShiftL__LoadL_memory__rcx_RegI_rule, // 176
  _URShiftL__LoadL_memory__immI1_rule, // 177
  _URShiftL__LoadL_memory__immI8_rule, // 178
  _URShiftL__LoadL_memory__rcx_RegI_rule, // 179
  _LShiftI_rRegI_immI_24_rule, // 180
  _LShiftI_rRegI_immI_16_rule, // 181
  _LShiftI_rRegI_immI1_rule, // 182
  _URShiftI_rRegI_immI_M1_rule, // 183
  _LShiftI_rRegI_immI8_rule, // 184
  _URShiftI_rRegI_immI8_rule, // 185
  _LShiftI_no_rcx_RegI_rcx_RegI_rule, // 186
  _SubI_immI0_rcx_RegI_rule, // 187
  _URShiftI_no_rcx_RegI__SubI_immI0_rcx_RegI_rule, // 188
  _SubI_immI_32_rcx_RegI_rule, // 189
  _URShiftI_no_rcx_RegI__SubI_immI_32_rcx_RegI_rule, // 190
  _URShiftI_rRegI_immI1_rule, // 191
  _LShiftI_rRegI_immI_M1_rule, // 192
  _URShiftI_no_rcx_RegI_rcx_RegI_rule, // 193
  _LShiftI_no_rcx_RegI__SubI_immI0_rcx_RegI_rule, // 194
  _LShiftI_no_rcx_RegI__SubI_immI_32_rcx_RegI_rule, // 195
  _LShiftL_rRegL_immI1_rule, // 196
  _URShiftL_rRegL_immI_M1_rule, // 197
  _LShiftL_rRegL_immI8_rule, // 198
  _URShiftL_rRegL_immI8_rule, // 199
  _LShiftL_no_rcx_RegL_rcx_RegI_rule, // 200
  _URShiftL_no_rcx_RegL__SubI_immI0_rcx_RegI_rule, // 201
  _SubI_immI_64_rcx_RegI_rule, // 202
  _URShiftL_no_rcx_RegL__SubI_immI_64_rcx_RegI_rule, // 203
  _URShiftL_rRegL_immI1_rule, // 204
  _LShiftL_rRegL_immI_M1_rule, // 205
  _URShiftL_no_rcx_RegL_rcx_RegI_rule, // 206
  _LShiftL_no_rcx_RegL__SubI_immI0_rcx_RegI_rule, // 207
  _LShiftL_no_rcx_RegL__SubI_immI_64_rcx_RegI_rule, // 208
  _AndI_rRegI_immI_255_rule, // 209
  _AndI_rRegI_immI_65535_rule, // 210
  _AndI__LoadI_memory__rRegI_rule, // 211
  _AndI_rRegI__LoadI_memory__rule, // 212
  _OrI__LoadI_memory__rRegI_rule, // 213
  _OrI_rRegI__LoadI_memory__rule, // 214
  _OrI__LoadI_memory__immI_rule, // 215
  _XorI__LoadI_memory__rRegI_rule, // 216
  _XorI_rRegI__LoadI_memory__rule, // 217
  _XorI__LoadI_memory__immI_rule, // 218
  _AndL__LoadL_memory__rRegL_rule, // 219
  _AndL_rRegL__LoadL_memory__rule, // 220
  _AndL__LoadL_memory__immL32_rule, // 221
  _CastP2X_any_RegP__rule, // 222
  _OrL__LoadL_memory__rRegL_rule, // 223
  _OrL_rRegL__LoadL_memory__rule, // 224
  _OrL__LoadL_memory__immL32_rule, // 225
  _XorL__LoadL_memory__rRegL_rule, // 226
  _XorL_rRegL__LoadL_memory__rule, // 227
  _XorL__LoadL_memory__immL32_rule, // 228
  _CmpLTMask_rRegI_rRegI_rule, // 229
  _AndI__CmpLTMask_rRegI_rRegI_rRegI_rule, // 230
  _SubI_rRegI_rRegI_rule, // 231
  _AndI_rRegI__CmpLTMask_rRegI_rRegI_rule, // 232
  _LoadF_memory__rule, // 233
  _LoadD_memory__rule, // 234
  _ConvF2D_regF__rule, // 235
  _SqrtD__ConvF2D_regF___rule, // 236
  _ConvF2D__LoadF_memory___rule, // 237
  _SqrtD__ConvF2D__LoadF_memory____rule, // 238
  _ConvF2D_immF__rule, // 239
  _SqrtD__ConvF2D_immF___rule, // 240
  _ConvI2L__LoadI_memory___rule, // 241
  _Binary_rdi_RegP_rcx_RegI_rule, // 242
  _Binary_rsi_RegP_rdx_RegI_rule, // 243
  _Binary_rdi_RegP_rdx_RegI_rule, // 244
  _Binary_rsi_RegP_immI_rule, // 245
  _Binary_rsi_RegP_rax_RegI_rule, // 246
  _Binary_rdi_RegP_rsi_RegP_rule, // 247
  _AndI_rRegI_immI_rule, // 248
  _LoadP_memory__rule, // 249
  _LoadN_memory__rule, // 250
  _AndL_rRegL_immL32_rule, // 251
  _PartialSubtypeCheck_rsi_RegP_rax_RegP_rule, // 252
  // last internally defined operand
  storeSSI_rule, // 253
  storeSSL_rule, // 254
  storeSSP_rule, // 255
  storeSSF_rule, // 256
  storeSSD_rule, // 257
  leaP8_rule, // 258
  leaP32_rule, // 259
  leaPIdxOff_rule, // 260
  leaPIdxScale_rule, // 261
  leaPIdxScaleOff_rule, // 262
  leaPPosIdxScaleOff_rule, // 263
  leaPCompressedOopOffset_rule, // 264
  leaP8Narrow_rule, // 265
  leaP32Narrow_rule, // 266
  leaPIdxOffNarrow_rule, // 267
  leaPIdxScaleNarrow_rule, // 268
  leaPIdxScaleOffNarrow_rule, // 269
  leaPPosIdxScaleOffNarrow_rule, // 270
  loadConI_rule, // 271
  loadConI0_rule, // 272
  loadConL_rule, // 273
  loadConL0_rule, // 274
  loadConUL32_rule, // 275
  loadConL32_rule, // 276
  loadConP_rule, // 277
  loadConP0_rule, // 278
  loadConP_poll_rule, // 279
  loadConP31_rule, // 280
  loadConF_rule, // 281
  loadConN0_rule, // 282
  loadConN_rule, // 283
  loadConF0_rule, // 284
  loadConD_rule, // 285
  loadConD0_rule, // 286
  loadSSI_rule, // 287
  loadSSL_rule, // 288
  loadSSP_rule, // 289
  loadSSF_rule, // 290
  loadSSD_rule, // 291
  popCountI_rule, // 292
  popCountI_mem_rule, // 293
  popCountL_rule, // 294
  popCountL_mem_rule, // 295
  membar_volatile_rule, // 296
  castX2P_rule, // 297
  castP2X_rule, // 298
  checkCastPP_rule, // 299
  castPP_rule, // 300
  castII_rule, // 301
  storePConditional_rule, // 302
  storeIConditional_rule, // 303
  storeLConditional_rule, // 304
  cmpF_cc_reg_rule, // 305
  cmpF_cc_reg_CF_rule, // 306
  cmpF_cc_mem_rule, // 307
  cmpF_cc_memCF_rule, // 308
  cmpF_cc_imm_rule, // 309
  cmpF_cc_immCF_rule, // 310
  cmpD_cc_reg_rule, // 311
  cmpD_cc_reg_CF_rule, // 312
  cmpD_cc_mem_rule, // 313
  cmpD_cc_memCF_rule, // 314
  cmpD_cc_imm_rule, // 315
  cmpD_cc_immCF_rule, // 316
  absF_reg_rule, // 317
  absD_reg_rule, // 318
  negF_reg_rule, // 319
  negD_reg_rule, // 320
  roundFloat_nop_rule, // 321
  roundDouble_nop_rule, // 322
  MoveF2I_stack_reg_rule, // 323
  MoveI2F_stack_reg_rule, // 324
  MoveD2L_stack_reg_rule, // 325
  MoveL2D_stack_reg_partial_rule, // 326
  MoveL2D_stack_reg_rule, // 327
  MoveF2I_reg_reg_rule, // 328
  MoveD2L_reg_reg_rule, // 329
  MoveI2F_reg_reg_rule, // 330
  MoveL2D_reg_reg_rule, // 331
  compI_rReg_rule, // 332
  compI_rReg_imm_rule, // 333
  compI_rReg_mem_rule, // 334
  testI_reg_rule, // 335
  testI_reg_imm_rule, // 336
  testI_reg_mem_rule, // 337
  testI_reg_mem_0_rule, // 338
  compU_rReg_rule, // 339
  compU_rReg_imm_rule, // 340
  compU_rReg_mem_rule, // 341
  testU_reg_rule, // 342
  compP_rReg_rule, // 343
  compP_rReg_mem_rule, // 344
  compP_mem_rReg_rule, // 345
  testP_reg_rule, // 346
  testP_mem_rule, // 347
  testP_mem_reg0_rule, // 348
  compN_rReg_rule, // 349
  compN_rReg_mem_rule, // 350
  compN_rReg_imm_rule, // 351
  compN_mem_imm_rule, // 352
  testN_reg_rule, // 353
  testN_mem_rule, // 354
  testN_mem_reg0_rule, // 355
  compL_rReg_rule, // 356
  compL_rReg_imm_rule, // 357
  compL_rReg_mem_rule, // 358
  testL_reg_rule, // 359
  testL_reg_imm_rule, // 360
  testL_reg_mem_rule, // 361
  testL_reg_mem_0_rule, // 362
  partialSubtypeCheck_vs_Zero_rule, // 363
  cmpFastLock_rule, // 364
  cmpFastUnlock_rule, // 365
  safePoint_poll_rule, // 366
  tlsLoadP_rule, // 367
  loadB_rule, // 368
  loadB2L_rule, // 369
  loadUB_rule, // 370
  loadUB2L_rule, // 371
  loadUB2L_immI8_rule, // 372
  loadS_rule, // 373
  loadS2B_rule, // 374
  loadS2L_rule, // 375
  loadUS_rule, // 376
  loadUS2B_rule, // 377
  loadUS2L_rule, // 378
  loadUS2L_immI_255_rule, // 379
  loadUS2L_immI16_rule, // 380
  loadI_rule, // 381
  loadI2B_rule, // 382
  loadI2UB_rule, // 383
  loadI2S_rule, // 384
  loadI2US_rule, // 385
  loadI2L_rule, // 386
  loadI2L_immI_255_rule, // 387
  loadI2L_immI_65535_rule, // 388
  loadI2L_immI_rule, // 389
  loadUI2L_rule, // 390
  loadL_rule, // 391
  loadRange_rule, // 392
  loadP_rule, // 393
  loadN_rule, // 394
  loadKlass_rule, // 395
  loadNKlass_rule, // 396
  loadF_rule, // 397
  loadD_partial_rule, // 398
  loadD_rule, // 399
  loadA8B_rule, // 400
  loadA4S_rule, // 401
  loadA4C_rule, // 402
  load2IU_rule, // 403
  loadA2F_rule, // 404
  prefetchr_rule, // 405
  prefetchrNTA_rule, // 406
  prefetchrT0_rule, // 407
  prefetchrT2_rule, // 408
  prefetchw_rule, // 409
  prefetchwNTA_rule, // 410
  prefetchwT0_rule, // 411
  prefetchwT2_rule, // 412
  storeB_rule, // 413
  storeC_rule, // 414
  storeI_rule, // 415
  storeL_rule, // 416
  storeP_rule, // 417
  storeImmP0_rule, // 418
  storeImmP_rule, // 419
  storeN_rule, // 420
  storeImmN0_rule, // 421
  storeImmN_rule, // 422
  storeImmI0_rule, // 423
  storeImmI_rule, // 424
  storeImmL0_rule, // 425
  storeImmL_rule, // 426
  storeImmC0_rule, // 427
  storeImmI16_rule, // 428
  storeImmB0_rule, // 429
  storeImmB_rule, // 430
  storeA8B_rule, // 431
  storeA4C_rule, // 432
  storeA2I_rule, // 433
  storeImmCM0_reg_rule, // 434
  storeImmCM0_rule, // 435
  storeA2F_rule, // 436
  storeF_rule, // 437
  storeF0_rule, // 438
  storeF_imm_rule, // 439
  storeD_rule, // 440
  storeD0_imm_rule, // 441
  storeD0_rule, // 442
  bytes_reverse_int_rule, // 443
  bytes_reverse_long_rule, // 444
  bytes_reverse_unsigned_short_rule, // 445
  bytes_reverse_short_rule, // 446
  countLeadingZerosI_rule, // 447
  countLeadingZerosI_bsr_rule, // 448
  countLeadingZerosL_rule, // 449
  countLeadingZerosL_bsr_rule, // 450
  countTrailingZerosI_rule, // 451
  countTrailingZerosL_rule, // 452
  membar_acquire_rule, // 453
  membar_acquire_lock_rule, // 454
  membar_release_rule, // 455
  membar_release_lock_rule, // 456
  unnecessary_membar_volatile_rule, // 457
  encodeHeapOop_rule, // 458
  encodeHeapOop_not_null_rule, // 459
  decodeHeapOop_rule, // 460
  decodeHeapOop_not_null_rule, // 461
  jumpXtnd_offset_rule, // 462
  jumpXtnd_addr_rule, // 463
  jumpXtnd_rule, // 464
  cmovI_reg_rule, // 465
  cmovI_regU_rule, // 466
  cmovI_regUCF_rule, // 467
  cmovI_mem_rule, // 468
  cmovI_memU_rule, // 469
  cmovI_memUCF_rule, // 470
  cmovN_reg_rule, // 471
  cmovN_regU_rule, // 472
  cmovN_regUCF_rule, // 473
  cmovP_reg_rule, // 474
  cmovP_regU_rule, // 475
  cmovP_regUCF_rule, // 476
  cmovL_reg_rule, // 477
  cmovL_mem_rule, // 478
  cmovL_regU_rule, // 479
  cmovL_regUCF_rule, // 480
  cmovL_memU_rule, // 481
  cmovL_memUCF_rule, // 482
  cmovF_reg_rule, // 483
  cmovF_regU_rule, // 484
  cmovF_regUCF_rule, // 485
  cmovD_reg_rule, // 486
  cmovD_regU_rule, // 487
  cmovD_regUCF_rule, // 488
  addI_rReg_rule, // 489
  addI_rReg_imm_rule, // 490
  addI_rReg_mem_rule, // 491
  addI_rReg_mem_0_rule, // 492
  addI_mem_rReg_rule, // 493
  addI_mem_rReg_0_rule, // 494
  addI_mem_imm_rule, // 495
  incI_rReg_rule, // 496
  incI_mem_rule, // 497
  decI_rReg_rule, // 498
  decI_mem_rule, // 499
  leaI_rReg_immI_rule, // 500
  addL_rReg_rule, // 501
  addL_rReg_imm_rule, // 502
  addL_rReg_mem_rule, // 503
  addL_rReg_mem_0_rule, // 504
  addL_mem_rReg_rule, // 505
  addL_mem_rReg_0_rule, // 506
  addL_mem_imm_rule, // 507
  incL_rReg_rule, // 508
  incL_mem_rule, // 509
  decL_rReg_rule, // 510
  decL_mem_rule, // 511
  leaL_rReg_immL_rule, // 512
  addP_rReg_rule, // 513
  addP_rReg_imm_rule, // 514
  leaP_rReg_imm_rule, // 515
  loadPLocked_rule, // 516
  loadLLocked_rule, // 517
  compareAndSwapP_rule, // 518
  compareAndSwapL_rule, // 519
  compareAndSwapI_rule, // 520
  compareAndSwapN_rule, // 521
  subI_rReg_rule, // 522
  subI_rReg_imm_rule, // 523
  subI_rReg_mem_rule, // 524
  subI_mem_rReg_rule, // 525
  subI_mem_imm_rule, // 526
  subL_rReg_rule, // 527
  subL_rReg_imm_rule, // 528
  subL_rReg_mem_rule, // 529
  subL_mem_rReg_rule, // 530
  subL_mem_imm_rule, // 531
  subP_rReg_rule, // 532
  negI_rReg_rule, // 533
  negI_mem_rule, // 534
  negL_rReg_rule, // 535
  negL_mem_rule, // 536
  mulI_rReg_rule, // 537
  mulI_rReg_imm_rule, // 538
  mulI_mem_rule, // 539
  mulI_mem_0_rule, // 540
  mulI_mem_imm_rule, // 541
  mulL_rReg_rule, // 542
  mulL_rReg_imm_rule, // 543
  mulL_mem_rule, // 544
  mulL_mem_0_rule, // 545
  mulL_mem_imm_rule, // 546
  mulHiL_rReg_rule, // 547
  divI_rReg_rule, // 548
  divL_rReg_rule, // 549
  divModI_rReg_divmod_rule, // 550
  divModL_rReg_divmod_rule, // 551
  loadConL_0x6666666666666667_rule, // 552
  mul_hi_rule, // 553
  sarL_rReg_63_rule, // 554
  sarL_rReg_2_rule, // 555
  divL_10_rule, // 556
  modI_rReg_rule, // 557
  modL_rReg_rule, // 558
  salI_rReg_1_rule, // 559
  salI_mem_1_rule, // 560
  salI_rReg_imm_rule, // 561
  salI_mem_imm_rule, // 562
  salI_rReg_CL_rule, // 563
  salI_mem_CL_rule, // 564
  sarI_rReg_1_rule, // 565
  sarI_mem_1_rule, // 566
  sarI_rReg_imm_rule, // 567
  sarI_mem_imm_rule, // 568
  sarI_rReg_CL_rule, // 569
  sarI_mem_CL_rule, // 570
  shrI_rReg_1_rule, // 571
  shrI_mem_1_rule, // 572
  shrI_rReg_imm_rule, // 573
  shrI_mem_imm_rule, // 574
  shrI_rReg_CL_rule, // 575
  shrI_mem_CL_rule, // 576
  salL_rReg_1_rule, // 577
  salL_mem_1_rule, // 578
  salL_rReg_imm_rule, // 579
  salL_mem_imm_rule, // 580
  salL_rReg_CL_rule, // 581
  salL_mem_CL_rule, // 582
  sarL_rReg_1_rule, // 583
  sarL_mem_1_rule, // 584
  sarL_rReg_imm_rule, // 585
  sarL_mem_imm_rule, // 586
  sarL_rReg_CL_rule, // 587
  sarL_mem_CL_rule, // 588
  shrL_rReg_1_rule, // 589
  shrL_mem_1_rule, // 590
  shrL_rReg_imm_rule, // 591
  shrL_mem_imm_rule, // 592
  shrL_rReg_CL_rule, // 593
  shrL_mem_CL_rule, // 594
  i2b_rule, // 595
  i2s_rule, // 596
  rolI_rReg_imm1_rule, // 597
  rolI_rReg_imm8_rule, // 598
  rolI_rReg_CL_rule, // 599
  rolI_rReg_i1_rule, // 600
  rolI_rReg_i1_0_rule, // 601
  rolI_rReg_i8_rule, // 602
  rolI_rReg_i8_0_rule, // 603
  rolI_rReg_Var_C0_rule, // 604
  rolI_rReg_Var_C0_0_rule, // 605
  rolI_rReg_Var_C32_rule, // 606
  rolI_rReg_Var_C32_0_rule, // 607
  rorI_rReg_imm1_rule, // 608
  rorI_rReg_imm8_rule, // 609
  rorI_rReg_CL_rule, // 610
  rorI_rReg_i1_rule, // 611
  rorI_rReg_i1_0_rule, // 612
  rorI_rReg_i8_rule, // 613
  rorI_rReg_i8_0_rule, // 614
  rorI_rReg_Var_C0_rule, // 615
  rorI_rReg_Var_C0_0_rule, // 616
  rorI_rReg_Var_C32_rule, // 617
  rorI_rReg_Var_C32_0_rule, // 618
  rolL_rReg_imm1_rule, // 619
  rolL_rReg_imm8_rule, // 620
  rolL_rReg_CL_rule, // 621
  rolL_rReg_i1_rule, // 622
  rolL_rReg_i1_0_rule, // 623
  rolL_rReg_i8_rule, // 624
  rolL_rReg_i8_0_rule, // 625
  rolL_rReg_Var_C0_rule, // 626
  rolL_rReg_Var_C0_0_rule, // 627
  rolL_rReg_Var_C64_rule, // 628
  rolL_rReg_Var_C64_0_rule, // 629
  rorL_rReg_imm1_rule, // 630
  rorL_rReg_imm8_rule, // 631
  rorL_rReg_CL_rule, // 632
  rorL_rReg_i1_rule, // 633
  rorL_rReg_i1_0_rule, // 634
  rorL_rReg_i8_rule, // 635
  rorL_rReg_i8_0_rule, // 636
  rorL_rReg_Var_C0_rule, // 637
  rorL_rReg_Var_C0_0_rule, // 638
  rorL_rReg_Var_C64_rule, // 639
  rorL_rReg_Var_C64_0_rule, // 640
  andI_rReg_rule, // 641
  andI_rReg_imm255_rule, // 642
  andI2L_rReg_imm255_rule, // 643
  andI_rReg_imm65535_rule, // 644
  andI2L_rReg_imm65535_rule, // 645
  andI_rReg_imm_rule, // 646
  andI_rReg_mem_rule, // 647
  andI_rReg_mem_0_rule, // 648
  andI_mem_rReg_rule, // 649
  andI_mem_rReg_0_rule, // 650
  andI_mem_imm_rule, // 651
  orI_rReg_rule, // 652
  orI_rReg_imm_rule, // 653
  orI_rReg_mem_rule, // 654
  orI_rReg_mem_0_rule, // 655
  orI_mem_rReg_rule, // 656
  orI_mem_rReg_0_rule, // 657
  orI_mem_imm_rule, // 658
  xorI_rReg_rule, // 659
  xorI_rReg_im1_rule, // 660
  xorI_rReg_imm_rule, // 661
  xorI_rReg_mem_rule, // 662
  xorI_rReg_mem_0_rule, // 663
  xorI_mem_rReg_rule, // 664
  xorI_mem_rReg_0_rule, // 665
  xorI_mem_imm_rule, // 666
  andL_rReg_rule, // 667
  andL_rReg_imm255_rule, // 668
  andL_rReg_imm65535_rule, // 669
  andL_rReg_imm_rule, // 670
  andL_rReg_mem_rule, // 671
  andL_rReg_mem_0_rule, // 672
  andL_mem_rReg_rule, // 673
  andL_mem_rReg_0_rule, // 674
  andL_mem_imm_rule, // 675
  orL_rReg_rule, // 676
  orL_rReg_castP2X_rule, // 677
  orL_rReg_castP2X_0_rule, // 678
  orL_rReg_imm_rule, // 679
  orL_rReg_mem_rule, // 680
  orL_rReg_mem_0_rule, // 681
  orL_mem_rReg_rule, // 682
  orL_mem_rReg_0_rule, // 683
  orL_mem_imm_rule, // 684
  xorL_rReg_rule, // 685
  xorL_rReg_im1_rule, // 686
  xorL_rReg_imm_rule, // 687
  xorL_rReg_mem_rule, // 688
  xorL_rReg_mem_0_rule, // 689
  xorL_mem_rReg_rule, // 690
  xorL_mem_rReg_0_rule, // 691
  xorL_mem_imm_rule, // 692
  convI2B_rule, // 693
  convP2B_rule, // 694
  cmpLTMask_rule, // 695
  cmpLTMask0_rule, // 696
  cadd_cmpLTMask_rule, // 697
  cadd_cmpLTMask_1_rule, // 698
  cadd_cmpLTMask_0_rule, // 699
  cadd_cmpLTMask_2_rule, // 700
  cmpF_reg_rule, // 701
  cmpF_mem_rule, // 702
  cmpF_imm_rule, // 703
  cmpD_reg_rule, // 704
  cmpD_mem_rule, // 705
  cmpD_imm_rule, // 706
  addF_reg_rule, // 707
  addF_mem_rule, // 708
  addF_mem_0_rule, // 709
  addF_imm_rule, // 710
  addD_reg_rule, // 711
  addD_mem_rule, // 712
  addD_mem_0_rule, // 713
  addD_imm_rule, // 714
  subF_reg_rule, // 715
  subF_mem_rule, // 716
  subF_imm_rule, // 717
  subD_reg_rule, // 718
  subD_mem_rule, // 719
  subD_imm_rule, // 720
  mulF_reg_rule, // 721
  mulF_mem_rule, // 722
  mulF_mem_0_rule, // 723
  mulF_imm_rule, // 724
  mulD_reg_rule, // 725
  mulD_mem_rule, // 726
  mulD_mem_0_rule, // 727
  mulD_imm_rule, // 728
  divF_reg_rule, // 729
  divF_mem_rule, // 730
  divF_imm_rule, // 731
  divD_reg_rule, // 732
  divD_mem_rule, // 733
  divD_imm_rule, // 734
  sqrtF_reg_rule, // 735
  sqrtF_mem_rule, // 736
  sqrtF_imm_rule, // 737
  sqrtD_reg_rule, // 738
  sqrtD_mem_rule, // 739
  sqrtD_imm_rule, // 740
  cosD_reg_rule, // 741
  sinD_reg_rule, // 742
  tanD_reg_rule, // 743
  log10D_reg_rule, // 744
  logD_reg_rule, // 745
  convF2D_reg_reg_rule, // 746
  convF2D_reg_mem_rule, // 747
  convD2F_reg_reg_rule, // 748
  convD2F_reg_mem_rule, // 749
  convF2I_reg_reg_rule, // 750
  convF2L_reg_reg_rule, // 751
  convD2I_reg_reg_rule, // 752
  convD2L_reg_reg_rule, // 753
  convI2F_reg_reg_rule, // 754
  convI2F_reg_mem_rule, // 755
  convI2D_reg_reg_rule, // 756
  convI2D_reg_mem_rule, // 757
  convXI2F_reg_rule, // 758
  convXI2D_reg_rule, // 759
  convL2F_reg_reg_rule, // 760
  convL2F_reg_mem_rule, // 761
  convL2D_reg_reg_rule, // 762
  convL2D_reg_mem_rule, // 763
  convI2L_reg_reg_rule, // 764
  convI2L_reg_reg_zex_rule, // 765
  convI2L_reg_mem_zex_rule, // 766
  zerox_long_reg_reg_rule, // 767
  convL2I_reg_reg_rule, // 768
  MoveF2I_reg_stack_rule, // 769
  MoveI2F_reg_stack_rule, // 770
  MoveD2L_reg_stack_rule, // 771
  MoveL2D_reg_stack_rule, // 772
  Repl8B_reg_rule, // 773
  Repl8B_rRegI_rule, // 774
  Repl8B_immI0_rule, // 775
  Repl4S_reg_rule, // 776
  Repl4S_rRegI_rule, // 777
  Repl4S_immI0_rule, // 778
  Repl4C_reg_rule, // 779
  Repl4C_rRegI_rule, // 780
  Repl4C_immI0_rule, // 781
  Repl2I_reg_rule, // 782
  Repl2I_rRegI_rule, // 783
  Repl2I_immI0_rule, // 784
  Repl2F_reg_rule, // 785
  Repl2F_regF_rule, // 786
  Repl2F_immF0_rule, // 787
  rep_stos_rule, // 788
  string_compare_rule, // 789
  string_indexof_con_rule, // 790
  string_indexof_rule, // 791
  string_equals_rule, // 792
  array_equals_rule, // 793
  cmpL3_reg_reg_rule, // 794
  cmovI_reg_g_rule, // 795
  minI_rReg_rule, // 796
  cmovI_reg_l_rule, // 797
  maxI_rReg_rule, // 798
  jmpDir_rule, // 799
  jmpCon_rule, // 800
  jmpLoopEnd_rule, // 801
  jmpLoopEndU_rule, // 802
  jmpLoopEndUCF_rule, // 803
  jmpConU_rule, // 804
  jmpConUCF_rule, // 805
  jmpConUCF2_rule, // 806
  partialSubtypeCheck_rule, // 807
  jmpDir_short_rule, // 808
  jmpCon_short_rule, // 809
  jmpLoopEnd_short_rule, // 810
  jmpLoopEndU_short_rule, // 811
  jmpLoopEndUCF_short_rule, // 812
  jmpConU_short_rule, // 813
  jmpConUCF_short_rule, // 814
  jmpConUCF2_short_rule, // 815
  safePoint_poll_far_rule, // 816
  CallStaticJavaDirect_rule, // 817
  CallStaticJavaHandle_rule, // 818
  CallDynamicJavaDirect_rule, // 819
  CallRuntimeDirect_rule, // 820
  CallLeafDirect_rule, // 821
  CallLeafNoFPDirect_rule, // 822
  Ret_rule, // 823
  TailCalljmpInd_rule, // 824
  tailjmpInd_rule, // 825
  CreateException_rule, // 826
  RethrowException_rule, // 827
  ShouldNotReachHere_rule, // 828
  // last instruction
  _BEGIN_INST_CHAIN_RULE = 253,
  _END_INST_CHAIN_RULE  = 292,
  _BEGIN_REMATERIALIZE   = 258,
  _END_REMATERIALIZE    = 368,
  _last_Mach_Node  = 829 
};

// Enumerate machine registers starting after reserved regs.
// in the order of occurrence in the alloc_class(es).
enum MachRegisterEncodes {
  R10_enc = 10,
  R10_H_enc = 10,
  R11_enc = 11,
  R11_H_enc = 11,
  R8_enc = 8,
  R8_H_enc = 8,
  R9_enc = 9,
  R9_H_enc = 9,
  R12_enc = 12,
  R12_H_enc = 12,
  RCX_enc = 1,
  RCX_H_enc = 1,
  RBX_enc = 3,
  RBX_H_enc = 3,
  RDI_enc = 7,
  RDI_H_enc = 7,
  RDX_enc = 2,
  RDX_H_enc = 2,
  RSI_enc = 6,
  RSI_H_enc = 6,
  RAX_enc = 0,
  RAX_H_enc = 0,
  RBP_enc = 5,
  RBP_H_enc = 5,
  R13_enc = 13,
  R13_H_enc = 13,
  R14_enc = 14,
  R14_H_enc = 14,
  R15_enc = 15,
  R15_H_enc = 15,
  RSP_enc = 4,
  RSP_H_enc = 4,
  XMM0_enc = 0,
  XMM0_H_enc = 0,
  XMM1_enc = 1,
  XMM1_H_enc = 1,
  XMM2_enc = 2,
  XMM2_H_enc = 2,
  XMM3_enc = 3,
  XMM3_H_enc = 3,
  XMM4_enc = 4,
  XMM4_H_enc = 4,
  XMM5_enc = 5,
  XMM5_H_enc = 5,
  XMM6_enc = 6,
  XMM6_H_enc = 6,
  XMM7_enc = 7,
  XMM7_H_enc = 7,
  XMM8_enc = 8,
  XMM8_H_enc = 8,
  XMM9_enc = 9,
  XMM9_H_enc = 9,
  XMM10_enc = 10,
  XMM10_H_enc = 10,
  XMM11_enc = 11,
  XMM11_H_enc = 11,
  XMM12_enc = 12,
  XMM12_H_enc = 12,
  XMM13_enc = 13,
  XMM13_H_enc = 13,
  XMM14_enc = 14,
  XMM14_H_enc = 14,
  XMM15_enc = 15,
  XMM15_H_enc = 15,
  RFLAGS_enc = 16
};

// Pipeline Stages
enum machPipelineStages {
   stage_undefined = 0,
   stage_S0        = 1,
   stage_S1        = 2,
   stage_S2        = 3,
   stage_S3        = 4,
   stage_S4        = 5,
   stage_S5        = 6,
   stage_count     = 6
};

// Pipeline Resources
enum machPipelineResources {
   resource_D0     = 0,
   resource_D1     = 1,
   resource_D2     = 2,
   resource_MS0    = 3,
   resource_MS1    = 4,
   resource_MS2    = 5,
   resource_BR     = 6,
   resource_FPU    = 7,
   resource_ALU0   = 8,
   resource_ALU1   = 9,
   resource_ALU2   = 10,

   res_mask_D0     = 0x00000001,
   res_mask_D1     = 0x00000002,
   res_mask_D2     = 0x00000004,
   res_mask_DECODE = 0x00000007,
   res_mask_MS0    = 0x00000008,
   res_mask_MS1    = 0x00000010,
   res_mask_MS2    = 0x00000020,
   res_mask_MEM    = 0x00000038,
   res_mask_BR     = 0x00000040,
   res_mask_FPU    = 0x00000080,
   res_mask_ALU0   = 0x00000100,
   res_mask_ALU1   = 0x00000200,
   res_mask_ALU2   = 0x00000400,
   res_mask_ALU    = 0x00000700,

   resource_count = 11
};

// MACROS to inline and constant fold State::valid(index)...
// when given a constant 'index' in dfa_<arch>.cpp
//   uint word   = index >> 5;       // Shift out bit position
//   uint bitpos = index & 0x0001F;  // Mask off word bits
#define STATE__VALID(index)     (_valid[((uint)index) >> 5] &  (0x1 << (((uint)index) & 0x0001F)))

#define STATE__NOT_YET_VALID(index)   ( (_valid[((uint)index) >> 5] &  (0x1 << (((uint)index) & 0x0001F))) == 0 )

#define STATE__VALID_CHILD(state,index)   ( state && (state->_valid[((uint)index) >> 5] &  (0x1 << (((uint)index) & 0x0001F))) )

#define STATE__SET_VALID(index)   (_valid[((uint)index) >> 5] |= (0x1 << (((uint)index) & 0x0001F)))

//---------------------------State-------------------------------------------
// State contains an integral cost vector, indexed by machine operand opcodes,
// a rule vector consisting of machine operand/instruction opcodes, and also
// indexed by machine operand opcodes, pointers to the children in the label
// tree generated by the Label routines in ideal nodes (currently limited to
// two for convenience, but this could change).
class State : public ResourceObj {
public:
  int    _id;         // State identifier
  Node  *_leaf;       // Ideal (non-machine-node) leaf of match tree
  State *_kids[2];       // Children of state node in label tree
  unsigned int _cost[_LAST_MACH_OPER];  // Cost vector, indexed by operand opcodes
  unsigned int _rule[_LAST_MACH_OPER];  // Rule vector, indexed by operand opcodes
  unsigned int _valid[(_LAST_MACH_OPER/32)+1]; // Bit Map of valid Cost/Rule entries

  State(void);                      // Constructor
  DEBUG_ONLY( ~State(void); )       // Destructor

  // Methods created by ADLC and invoked by Reduce
  MachOper *MachOperGenerator( int opcode, Compile* C );
  MachNode *MachNodeGenerator( int opcode, Compile* C );

  // Assign a state to a node, definition of method produced by ADLC
  bool DFA( int opcode, const Node *ideal );

  // Access function for _valid bit vector
  bool valid(uint index) {
    return( STATE__VALID(index) != 0 );
  }

  // Set function for _valid bit vector
  void set_valid(uint index) {
    STATE__SET_VALID(index);
  }

#ifndef PRODUCT
  void dump();                // Debugging prints
  void dump(int depth);
#endif
  void  _sub_Op_RegN(const Node *n);
  void  _sub_Op_RegI(const Node *n);
  void  _sub_Op_RegP(const Node *n);
  void  _sub_Op_RegF(const Node *n);
  void  _sub_Op_RegD(const Node *n);
  void  _sub_Op_RegL(const Node *n);
  void  _sub_Op_RegFlags(const Node *n);
  void  _sub_Op_AbsD(const Node *n);
  void  _sub_Op_AbsF(const Node *n);
  void  _sub_Op_AddD(const Node *n);
  void  _sub_Op_AddF(const Node *n);
  void  _sub_Op_AddI(const Node *n);
  void  _sub_Op_AddL(const Node *n);
  void  _sub_Op_AddP(const Node *n);
  void  _sub_Op_AndI(const Node *n);
  void  _sub_Op_AndL(const Node *n);
  void  _sub_Op_AryEq(const Node *n);
  void  _sub_Op_Binary(const Node *n);
  void  _sub_Op_Bool(const Node *n);
  void  _sub_Op_ReverseBytesI(const Node *n);
  void  _sub_Op_ReverseBytesL(const Node *n);
  void  _sub_Op_ReverseBytesUS(const Node *n);
  void  _sub_Op_ReverseBytesS(const Node *n);
  void  _sub_Op_CallDynamicJava(const Node *n);
  void  _sub_Op_CallLeaf(const Node *n);
  void  _sub_Op_CallLeafNoFP(const Node *n);
  void  _sub_Op_CallRuntime(const Node *n);
  void  _sub_Op_CallStaticJava(const Node *n);
  void  _sub_Op_CastII(const Node *n);
  void  _sub_Op_CastX2P(const Node *n);
  void  _sub_Op_CastP2X(const Node *n);
  void  _sub_Op_CastPP(const Node *n);
  void  _sub_Op_CheckCastPP(const Node *n);
  void  _sub_Op_ClearArray(const Node *n);
  void  _sub_Op_CMoveD(const Node *n);
  void  _sub_Op_CMoveF(const Node *n);
  void  _sub_Op_CMoveI(const Node *n);
  void  _sub_Op_CMoveL(const Node *n);
  void  _sub_Op_CMoveP(const Node *n);
  void  _sub_Op_CMoveN(const Node *n);
  void  _sub_Op_CmpN(const Node *n);
  void  _sub_Op_CmpD(const Node *n);
  void  _sub_Op_CmpD3(const Node *n);
  void  _sub_Op_CmpF(const Node *n);
  void  _sub_Op_CmpF3(const Node *n);
  void  _sub_Op_CmpI(const Node *n);
  void  _sub_Op_CmpL(const Node *n);
  void  _sub_Op_CmpL3(const Node *n);
  void  _sub_Op_CmpLTMask(const Node *n);
  void  _sub_Op_CmpP(const Node *n);
  void  _sub_Op_CmpU(const Node *n);
  void  _sub_Op_CompareAndSwapI(const Node *n);
  void  _sub_Op_CompareAndSwapL(const Node *n);
  void  _sub_Op_CompareAndSwapP(const Node *n);
  void  _sub_Op_CompareAndSwapN(const Node *n);
  void  _sub_Op_ConN(const Node *n);
  void  _sub_Op_ConD(const Node *n);
  void  _sub_Op_ConF(const Node *n);
  void  _sub_Op_ConI(const Node *n);
  void  _sub_Op_ConL(const Node *n);
  void  _sub_Op_ConP(const Node *n);
  void  _sub_Op_Conv2B(const Node *n);
  void  _sub_Op_ConvD2F(const Node *n);
  void  _sub_Op_ConvD2I(const Node *n);
  void  _sub_Op_ConvD2L(const Node *n);
  void  _sub_Op_ConvF2D(const Node *n);
  void  _sub_Op_ConvF2I(const Node *n);
  void  _sub_Op_ConvF2L(const Node *n);
  void  _sub_Op_ConvI2D(const Node *n);
  void  _sub_Op_ConvI2F(const Node *n);
  void  _sub_Op_ConvI2L(const Node *n);
  void  _sub_Op_ConvL2D(const Node *n);
  void  _sub_Op_ConvL2F(const Node *n);
  void  _sub_Op_ConvL2I(const Node *n);
  void  _sub_Op_CosD(const Node *n);
  void  _sub_Op_CountedLoopEnd(const Node *n);
  void  _sub_Op_CountLeadingZerosI(const Node *n);
  void  _sub_Op_CountLeadingZerosL(const Node *n);
  void  _sub_Op_CountTrailingZerosI(const Node *n);
  void  _sub_Op_CountTrailingZerosL(const Node *n);
  void  _sub_Op_CreateEx(const Node *n);
  void  _sub_Op_DecodeN(const Node *n);
  void  _sub_Op_DivD(const Node *n);
  void  _sub_Op_DivF(const Node *n);
  void  _sub_Op_DivI(const Node *n);
  void  _sub_Op_DivL(const Node *n);
  void  _sub_Op_DivModI(const Node *n);
  void  _sub_Op_DivModL(const Node *n);
  void  _sub_Op_EncodeP(const Node *n);
  void  _sub_Op_FastLock(const Node *n);
  void  _sub_Op_FastUnlock(const Node *n);
  void  _sub_Op_Goto(const Node *n);
  void  _sub_Op_Halt(const Node *n);
  void  _sub_Op_If(const Node *n);
  void  _sub_Op_Jump(const Node *n);
  void  _sub_Op_LShiftI(const Node *n);
  void  _sub_Op_LShiftL(const Node *n);
  void  _sub_Op_LoadB(const Node *n);
  void  _sub_Op_LoadUB(const Node *n);
  void  _sub_Op_LoadUS(const Node *n);
  void  _sub_Op_LoadD(const Node *n);
  void  _sub_Op_LoadF(const Node *n);
  void  _sub_Op_LoadI(const Node *n);
  void  _sub_Op_LoadUI2L(const Node *n);
  void  _sub_Op_LoadKlass(const Node *n);
  void  _sub_Op_LoadNKlass(const Node *n);
  void  _sub_Op_LoadL(const Node *n);
  void  _sub_Op_LoadPLocked(const Node *n);
  void  _sub_Op_LoadLLocked(const Node *n);
  void  _sub_Op_LoadP(const Node *n);
  void  _sub_Op_LoadN(const Node *n);
  void  _sub_Op_LoadRange(const Node *n);
  void  _sub_Op_LoadS(const Node *n);
  void  _sub_Op_LogD(const Node *n);
  void  _sub_Op_Log10D(const Node *n);
  void  _sub_Op_MaxI(const Node *n);
  void  _sub_Op_MemBarAcquire(const Node *n);
  void  _sub_Op_MemBarRelease(const Node *n);
  void  _sub_Op_MemBarVolatile(const Node *n);
  void  _sub_Op_MinI(const Node *n);
  void  _sub_Op_ModI(const Node *n);
  void  _sub_Op_ModL(const Node *n);
  void  _sub_Op_MoveI2F(const Node *n);
  void  _sub_Op_MoveF2I(const Node *n);
  void  _sub_Op_MoveL2D(const Node *n);
  void  _sub_Op_MoveD2L(const Node *n);
  void  _sub_Op_MulD(const Node *n);
  void  _sub_Op_MulF(const Node *n);
  void  _sub_Op_MulHiL(const Node *n);
  void  _sub_Op_MulI(const Node *n);
  void  _sub_Op_MulL(const Node *n);
  void  _sub_Op_NegD(const Node *n);
  void  _sub_Op_NegF(const Node *n);
  void  _sub_Op_OrI(const Node *n);
  void  _sub_Op_OrL(const Node *n);
  void  _sub_Op_PartialSubtypeCheck(const Node *n);
  void  _sub_Op_PopCountI(const Node *n);
  void  _sub_Op_PopCountL(const Node *n);
  void  _sub_Op_PrefetchRead(const Node *n);
  void  _sub_Op_PrefetchWrite(const Node *n);
  void  _sub_Op_RShiftI(const Node *n);
  void  _sub_Op_RShiftL(const Node *n);
  void  _sub_Op_Rethrow(const Node *n);
  void  _sub_Op_Return(const Node *n);
  void  _sub_Op_RoundDouble(const Node *n);
  void  _sub_Op_RoundFloat(const Node *n);
  void  _sub_Op_SafePoint(const Node *n);
  void  _sub_Op_SinD(const Node *n);
  void  _sub_Op_SqrtD(const Node *n);
  void  _sub_Op_StoreB(const Node *n);
  void  _sub_Op_StoreC(const Node *n);
  void  _sub_Op_StoreCM(const Node *n);
  void  _sub_Op_StorePConditional(const Node *n);
  void  _sub_Op_StoreIConditional(const Node *n);
  void  _sub_Op_StoreLConditional(const Node *n);
  void  _sub_Op_StoreD(const Node *n);
  void  _sub_Op_StoreF(const Node *n);
  void  _sub_Op_StoreI(const Node *n);
  void  _sub_Op_StoreL(const Node *n);
  void  _sub_Op_StoreP(const Node *n);
  void  _sub_Op_StoreN(const Node *n);
  void  _sub_Op_StrComp(const Node *n);
  void  _sub_Op_StrEquals(const Node *n);
  void  _sub_Op_StrIndexOf(const Node *n);
  void  _sub_Op_SubD(const Node *n);
  void  _sub_Op_SubF(const Node *n);
  void  _sub_Op_SubI(const Node *n);
  void  _sub_Op_SubL(const Node *n);
  void  _sub_Op_TailCall(const Node *n);
  void  _sub_Op_TailJump(const Node *n);
  void  _sub_Op_TanD(const Node *n);
  void  _sub_Op_ThreadLocal(const Node *n);
  void  _sub_Op_URShiftI(const Node *n);
  void  _sub_Op_URShiftL(const Node *n);
  void  _sub_Op_XorI(const Node *n);
  void  _sub_Op_XorL(const Node *n);
  void  _sub_Op_Load8B(const Node *n);
  void  _sub_Op_Load4C(const Node *n);
  void  _sub_Op_Load4S(const Node *n);
  void  _sub_Op_Load2I(const Node *n);
  void  _sub_Op_Load2F(const Node *n);
  void  _sub_Op_Store8B(const Node *n);
  void  _sub_Op_Store4C(const Node *n);
  void  _sub_Op_Store2I(const Node *n);
  void  _sub_Op_Store2F(const Node *n);
  void  _sub_Op_Replicate8B(const Node *n);
  void  _sub_Op_Replicate4S(const Node *n);
  void  _sub_Op_Replicate4C(const Node *n);
  void  _sub_Op_Replicate2I(const Node *n);
  void  _sub_Op_Replicate2F(const Node *n);
};



// Total number of operands defined in architecture definition
#define FIRST_OPERAND_CLASS   102
#define NUM_OPERANDS          103

// Total number of instructions defined in architecture definition
#define NUM_INSTRUCTIONS   558

//----------------------------Declare classes derived from MachOper----------

class UniverseOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
public:
  UniverseOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return UNIVERSE; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "Universe";}
#endif
};

class sRegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  sRegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return SREGI; }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node));/* sReg */
  }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node, int idx) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node->in(idx)));/* sReg */
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "sRegI";}
#endif
};

class sRegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  sRegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return SREGP; }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node));/* sReg */
  }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node, int idx) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node->in(idx)));/* sReg */
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "sRegP";}
#endif
};

class sRegFOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  sRegFOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return SREGF; }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node));/* sReg */
  }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node, int idx) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node->in(idx)));/* sReg */
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "sRegF";}
#endif
};

class sRegDOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  sRegDOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return SREGD; }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node));/* sReg */
  }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node, int idx) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node->in(idx)));/* sReg */
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "sRegD";}
#endif
};

class sRegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  sRegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return SREGL; }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node));/* sReg */
  }
  virtual int            reg(PhaseRegAlloc *ra_, const Node *node, int idx) const {
    return (int)OptoReg::reg2stack(ra_->get_reg_first(node->in(idx)));/* sReg */
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "sRegL";}
#endif
};

class immIOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immIOper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI";}
#endif
};

class immI0Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI0Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI0; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI0";}
#endif
};

class immI1Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI1Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI1; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI1";}
#endif
};

class immI_M1Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI_M1Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI_M1; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI_M1";}
#endif
};

class immI2Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI2Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI2; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI2";}
#endif
};

class immI8Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI8Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI8; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI8";}
#endif
};

class immI16Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI16Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI16; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI16";}
#endif
};

class immI_32Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI_32Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI_32; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI_32";}
#endif
};

class immI_64Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI_64Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI_64; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI_64";}
#endif
};

class immPOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  const TypePtr *_c0;
public:
  immPOper(const TypePtr *c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMP; }
  virtual const Type *type() const { return _c0; }

  virtual intptr_t       constant() const { return _c0->get_con(); }
  virtual bool           constant_is_oop() const { return _c0->isa_oop_ptr(); }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    _c0->dump_on(st);
  }
  virtual const char    *Name() const { return "immP";}
#endif
};

class immP0Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  const TypePtr *_c0;
public:
  immP0Oper(const TypePtr *c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMP0; }
  virtual const Type *type() const { return _c0; }

  virtual intptr_t       constant() const { return _c0->get_con(); }
  virtual bool           constant_is_oop() const { return _c0->isa_oop_ptr(); }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    _c0->dump_on(st);
  }
  virtual const char    *Name() const { return "immP0";}
#endif
};

class immP_pollOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  const TypePtr *_c0;
public:
  immP_pollOper(const TypePtr *c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMP_POLL; }
  virtual const Type *type() const { return _c0; }

  virtual intptr_t       constant() const { return _c0->get_con(); }
  virtual bool           constant_is_oop() const { return _c0->isa_oop_ptr(); }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    _c0->dump_on(st);
  }
  virtual const char    *Name() const { return "immP_poll";}
#endif
};

class immNOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  const TypeNarrowOop *_c0;
public:
  immNOper(const TypeNarrowOop *c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMN; }
  virtual const Type *type() const { return _c0; }

  virtual intptr_t       constant() const { return _c0->get_ptrtype()->get_con(); }
  virtual bool           constant_is_oop() const { return _c0->get_ptrtype()->isa_oop_ptr(); }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    _c0->dump_on(st);
  }
  virtual const char    *Name() const { return "immN";}
#endif
};

class immN0Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  const TypeNarrowOop *_c0;
public:
  immN0Oper(const TypeNarrowOop *c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMN0; }
  virtual const Type *type() const { return _c0; }

  virtual intptr_t       constant() const { return _c0->get_ptrtype()->get_con(); }
  virtual bool           constant_is_oop() const { return _c0->get_ptrtype()->isa_oop_ptr(); }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    _c0->dump_on(st);
  }
  virtual const char    *Name() const { return "immN0";}
#endif
};

class immP31Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  const TypePtr *_c0;
public:
  immP31Oper(const TypePtr *c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMP31; }
  virtual const Type *type() const { return _c0; }

  virtual intptr_t       constant() const { return _c0->get_con(); }
  virtual bool           constant_is_oop() const { return _c0->isa_oop_ptr(); }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    _c0->dump_on(st);
  }
  virtual const char    *Name() const { return "immP31";}
#endif
};

class immLOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immLOper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL";}
#endif
};

class immL8Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL8Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML8; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL8";}
#endif
};

class immUL32Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immUL32Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMUL32; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immUL32";}
#endif
};

class immL32Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL32Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML32; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL32";}
#endif
};

class immL0Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL0Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML0; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL0";}
#endif
};

class immL1Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL1Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML1; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL1";}
#endif
};

class immL_M1Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL_M1Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML_M1; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL_M1";}
#endif
};

class immL10Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL10Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML10; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL10";}
#endif
};

class immL_127Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL_127Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML_127; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL_127";}
#endif
};

class immL_32bitsOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL_32bitsOper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML_32BITS; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL_32bits";}
#endif
};

class immF0Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jfloat         _c0;
public:
  immF0Oper(jfloat c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMF0; }
  virtual const Type *type() const { return Type::FLOAT; }

  virtual intptr_t       constant() const { ShouldNotReachHere(); return 0;  }
  virtual jfloat         constantF() const { return (jfloat)_c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#%f", _c0);
  }
  virtual const char    *Name() const { return "immF0";}
#endif
};

class immFOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jfloat         _c0;
public:
  immFOper(jfloat c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMF; }
  virtual const Type *type() const { return Type::FLOAT; }

  virtual intptr_t       constant() const { ShouldNotReachHere(); return 0;  }
  virtual jfloat         constantF() const { return (jfloat)_c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#%f", _c0);
  }
  virtual const char    *Name() const { return "immF";}
#endif
};

class immD0Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jdouble        _c0;
public:
  immD0Oper(jdouble c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMD0; }
  virtual const Type *type() const { return Type::DOUBLE; }

  virtual intptr_t       constant() const { ShouldNotReachHere(); return 0;  }
  virtual jdouble        constantD() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#%f", _c0);
  }
  virtual const char    *Name() const { return "immD0";}
#endif
};

class immDOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jdouble        _c0;
public:
  immDOper(jdouble c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return IMMD; }
  virtual const Type *type() const { return Type::DOUBLE; }

  virtual intptr_t       constant() const { ShouldNotReachHere(); return 0;  }
  virtual jdouble        constantD() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#%f", _c0);
  }
  virtual const char    *Name() const { return "immD";}
#endif
};

class immI_16Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI_16Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI_16; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI_16";}
#endif
};

class immI_24Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI_24Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI_24; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI_24";}
#endif
};

class immI_255Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI_255Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI_255; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI_255";}
#endif
};

class immI_65535Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  int32          _c0;
public:
  immI_65535Oper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMMI_65535; }
  virtual const Type *type() const { return TypeInt::INT; }

  virtual intptr_t       constant() const { return (intptr_t)_c0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "immI_65535";}
#endif
};

class immL_255Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL_255Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML_255; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL_255";}
#endif
};

class immL_65535Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
  jlong          _c0;
public:
  immL_65535Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return IMML_65535; }
  virtual const Type *type() const { return TypeLong::LONG; }

  virtual intptr_t       constant() const {  return (intptr_t)_c0; }
  virtual jlong          constantL() const { return _c0; }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "immL_65535";}
#endif
};

class rRegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rRegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RREGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rRegI";}
#endif
};

class rax_RegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rax_RegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RAX_REGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rax_RegI";}
#endif
};

class rbx_RegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rbx_RegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RBX_REGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rbx_RegI";}
#endif
};

class rcx_RegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rcx_RegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RCX_REGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rcx_RegI";}
#endif
};

class rdx_RegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rdx_RegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RDX_REGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rdx_RegI";}
#endif
};

class rdi_RegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rdi_RegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RDI_REGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rdi_RegI";}
#endif
};

class no_rcx_RegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rcx_RegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RCX_REGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rcx_RegI";}
#endif
};

class no_rax_rdx_RegIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rax_rdx_RegIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RAX_RDX_REGI; }
  virtual const Type *type() const { return TypeInt::INT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rax_rdx_RegI";}
#endif
};

class any_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  any_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return ANY_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "any_RegP";}
#endif
};

class rRegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rRegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RREGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rRegP";}
#endif
};

class rRegNOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rRegNOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RREGN; }
  virtual const Type *type() const { return TypeNarrowOop::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rRegN";}
#endif
};

class no_rax_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rax_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RAX_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rax_RegP";}
#endif
};

class no_rbp_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rbp_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RBP_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rbp_RegP";}
#endif
};

class no_rax_rbx_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rax_rbx_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RAX_RBX_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rax_rbx_RegP";}
#endif
};

class rax_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rax_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RAX_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rax_RegP";}
#endif
};

class rax_RegNOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rax_RegNOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RAX_REGN; }
  virtual const Type *type() const { return TypeNarrowOop::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rax_RegN";}
#endif
};

class rbx_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rbx_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RBX_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rbx_RegP";}
#endif
};

class rsi_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rsi_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RSI_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rsi_RegP";}
#endif
};

class rdi_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rdi_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RDI_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rdi_RegP";}
#endif
};

class rbp_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rbp_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RBP_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rbp_RegP";}
#endif
};

class r15_RegPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  r15_RegPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return R15_REGP; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "r15_RegP";}
#endif
};

class rRegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rRegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RREGL; }
  virtual const Type *type() const { return TypeLong::LONG; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rRegL";}
#endif
};

class no_rax_rdx_RegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rax_rdx_RegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RAX_RDX_REGL; }
  virtual const Type *type() const { return TypeLong::LONG; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rax_rdx_RegL";}
#endif
};

class no_rax_RegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rax_RegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RAX_REGL; }
  virtual const Type *type() const { return TypeLong::LONG; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rax_RegL";}
#endif
};

class no_rcx_RegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  no_rcx_RegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return NO_RCX_REGL; }
  virtual const Type *type() const { return TypeLong::LONG; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "no_rcx_RegL";}
#endif
};

class rax_RegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rax_RegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RAX_REGL; }
  virtual const Type *type() const { return TypeLong::LONG; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rax_RegL";}
#endif
};

class rcx_RegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rcx_RegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RCX_REGL; }
  virtual const Type *type() const { return TypeLong::LONG; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rcx_RegL";}
#endif
};

class rdx_RegLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rdx_RegLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RDX_REGL; }
  virtual const Type *type() const { return TypeLong::LONG; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rdx_RegL";}
#endif
};

class rFlagsRegOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rFlagsRegOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RFLAGSREG; }
  virtual const Type *type() const { return TypeInt::CC /*flags*/; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rFlagsReg";}
#endif
};

class rFlagsRegUOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rFlagsRegUOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RFLAGSREGU; }
  virtual const Type *type() const { return TypeInt::CC /*flags*/; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rFlagsRegU";}
#endif
};

class rFlagsRegUCFOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  rFlagsRegUCFOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return RFLAGSREGUCF; }
  virtual const Type *type() const { return TypeInt::CC /*flags*/; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "rFlagsRegUCF";}
#endif
};

class regFOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  regFOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return REGF; }
  virtual const Type *type() const { return Type::FLOAT; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "regF";}
#endif
};

class regDOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  regDOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return REGD; }
  virtual const Type *type() const { return Type::DOUBLE; }


#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "regD";}
#endif
};

class indirectOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  indirectOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return INDIRECT; }
  virtual const Type *type() const { return TypePtr::BOTTOM; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x0;  }
  virtual int            constant_disp() const { return 0x0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "indirect";}
#endif
};

class indOffset8Oper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
  jlong            _c0;
public:
  indOffset8Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDOFFSET8; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c0;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c0;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "indOffset8";}
#endif
};

class indOffset32Oper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
  jlong            _c0;
public:
  indOffset32Oper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDOFFSET32; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c0;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c0;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "indOffset32";}
#endif
};

class indIndexOffsetOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jlong            _c0;
public:
  indIndexOffsetOper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDINDEXOFFSET; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c0;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c0;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "indIndexOffset";}
#endif
};

class indIndexOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
public:
  indIndexOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return INDINDEX; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x0;  }
  virtual int            constant_disp() const { return 0x0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "indIndex";}
#endif
};

class indIndexScaleOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jint             _c0;
public:
  indIndexScaleOper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDINDEXSCALE; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { // Replacement variable: scale
    return (int)_c0;
  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x0;  }
  virtual int            constant_disp() const { return 0x0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "indIndexScale";}
#endif
};

class indIndexScaleOffsetOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jint             _c0;
  jlong            _c1;
public:
  indIndexScaleOffsetOper(int32 c0, jlong c1)  : _c0(c0), _c1(c1) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDINDEXSCALEOFFSET; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { // Replacement variable: scale
    return (int)_c0;
  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c1;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c1;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
    st->print("#" INT64_FORMAT, _c1);
  }
  virtual const char    *Name() const { return "indIndexScaleOffset";}
#endif
};

class indPosIndexScaleOffsetOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jint             _c0;
  jlong            _c1;
public:
  indPosIndexScaleOffsetOper(int32 c0, jlong c1)  : _c0(c0), _c1(c1) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDPOSINDEXSCALEOFFSET; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: idx
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { // Replacement variable: scale
    return (int)_c0;
  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c1;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c1;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
    st->print("#" INT64_FORMAT, _c1);
  }
  virtual const char    *Name() const { return "indPosIndexScaleOffset";}
#endif
};

class indCompressedOopOffsetOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
  jlong            _c0;
public:
  indCompressedOopOffsetOper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDCOMPRESSEDOOPOFFSET; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0xc;  }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            index_position() const { return 0; }
  virtual int            scale() const { return 0x3;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c0;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c0;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "indCompressedOopOffset";}
#endif
};

class indirectNarrowOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  indirectNarrowOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return INDIRECTNARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x0;  }
  virtual int            constant_disp() const { return 0x0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "indirectNarrow";}
#endif
};

class indOffset8NarrowOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
  jlong            _c0;
public:
  indOffset8NarrowOper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDOFFSET8NARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c0;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c0;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "indOffset8Narrow";}
#endif
};

class indOffset32NarrowOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
  jlong            _c0;
public:
  indOffset32NarrowOper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDOFFSET32NARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c0;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c0;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "indOffset32Narrow";}
#endif
};

class indIndexOffsetNarrowOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jlong            _c0;
public:
  indIndexOffsetNarrowOper(jlong c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDINDEXOFFSETNARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c0;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c0;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
    st->print("#" INT64_FORMAT, _c0);
  }
  virtual const char    *Name() const { return "indIndexOffsetNarrow";}
#endif
};

class indIndexNarrowOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
public:
  indIndexNarrowOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return INDINDEXNARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x0;  }
  virtual int            constant_disp() const { return 0x0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "indIndexNarrow";}
#endif
};

class indIndexScaleNarrowOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jint             _c0;
public:
  indIndexScaleNarrowOper(int32 c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDINDEXSCALENARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { // Replacement variable: scale
    return (int)_c0;
  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x0;  }
  virtual int            constant_disp() const { return 0x0;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
  }
  virtual const char    *Name() const { return "indIndexScaleNarrow";}
#endif
};

class indIndexScaleOffsetNarrowOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jint             _c0;
  jlong            _c1;
public:
  indIndexScaleOffsetNarrowOper(int32 c0, jlong c1)  : _c0(c0), _c1(c1) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDINDEXSCALEOFFSETNARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: lreg
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { // Replacement variable: scale
    return (int)_c0;
  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c1;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c1;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
    st->print("#" INT64_FORMAT, _c1);
  }
  virtual const char    *Name() const { return "indIndexScaleOffsetNarrow";}
#endif
};

class indPosIndexScaleOffsetNarrowOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 2; }
  virtual const RegMask *in_RegMask(int index) const;
  jint             _c0;
  jlong            _c1;
public:
  indPosIndexScaleOffsetNarrowOper(int32 c0, jlong c1)  : _c0(c0), _c1(c1) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual void set_con( jint c0 ) { _c0 = c0; }
  virtual uint           opcode() const { return INDPOSINDEXSCALEOFFSETNARROW; }

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    return (int)ra_->get_encode(node->in(idx));
  }
  virtual int            base_position() const { return 0; }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: idx
    return (int)ra_->get_encode(node->in(idx+1));
  }
  virtual int            index_position() const { return 1; }
  virtual int            scale() const { // Replacement variable: scale
    return (int)_c0;
  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: off
    return (int)_c1;
  }
  virtual int            constant_disp() const { // Replacement variable: off
    return (int)_c1;
  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
   st->print("#%d", _c0);
    st->print("#" INT64_FORMAT, _c1);
  }
  virtual const char    *Name() const { return "indPosIndexScaleOffsetNarrow";}
#endif
};

class stackSlotPOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  stackSlotPOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return STACKSLOTP; }
  virtual const Type    *type() const { return TypePtr::BOTTOM; } // stackSlotX

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    if( idx != 0 ) {
      // Access register number for input operand
      return ra_->reg2offset(ra_->get_reg_first(node->in(idx)));/* sReg */
    }
    // Access register number from myself
    return ra_->reg2offset(ra_->get_reg_first(node));/* sReg */
  }
  virtual int       constant_disp() const { return Type::OffsetBot; }
#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "stackSlotP";}
#endif
};

class stackSlotIOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  stackSlotIOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return STACKSLOTI; }
  virtual const Type    *type() const { return TypeInt::INT; } // stackSlotX

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    if( idx != 0 ) {
      // Access register number for input operand
      return ra_->reg2offset(ra_->get_reg_first(node->in(idx)));/* sReg */
    }
    // Access register number from myself
    return ra_->reg2offset(ra_->get_reg_first(node));/* sReg */
  }
  virtual int       constant_disp() const { return Type::OffsetBot; }
#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "stackSlotI";}
#endif
};

class stackSlotFOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  stackSlotFOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return STACKSLOTF; }
  virtual const Type    *type() const { return Type::FLOAT; } // stackSlotX

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    if( idx != 0 ) {
      // Access register number for input operand
      return ra_->reg2offset(ra_->get_reg_first(node->in(idx)));/* sReg */
    }
    // Access register number from myself
    return ra_->reg2offset(ra_->get_reg_first(node));/* sReg */
  }
  virtual int       constant_disp() const { return Type::OffsetBot; }
#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "stackSlotF";}
#endif
};

class stackSlotDOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  stackSlotDOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return STACKSLOTD; }
  virtual const Type    *type() const { return Type::DOUBLE; } // stackSlotX

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    if( idx != 0 ) {
      // Access register number for input operand
      return ra_->reg2offset(ra_->get_reg_first(node->in(idx)));/* sReg */
    }
    // Access register number from myself
    return ra_->reg2offset(ra_->get_reg_first(node));/* sReg */
  }
  virtual int       constant_disp() const { return Type::OffsetBot; }
#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "stackSlotD";}
#endif
};

class stackSlotLOper : public MachOper { 
private:
  virtual const RegMask *in_RegMask(int index) const;
public:
  stackSlotLOper() {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return STACKSLOTL; }
  virtual const Type    *type() const { return TypeLong::LONG; } // stackSlotX

  virtual int            base(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            index(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
return 0x4;  }
  virtual int            scale() const { return 0x0;  }
  virtual int            disp(PhaseRegAlloc *ra_, const Node *node, int idx) const { 
// Replacement variable: reg
    if( idx != 0 ) {
      // Access register number for input operand
      return ra_->reg2offset(ra_->get_reg_first(node->in(idx)));/* sReg */
    }
    // Access register number from myself
    return ra_->reg2offset(ra_->get_reg_first(node));/* sReg */
  }
  virtual int       constant_disp() const { return Type::OffsetBot; }
#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual const char    *Name() const { return "stackSlotL";}
#endif
};

class cmpOpOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
private:
  BoolTest::mask _c0;
public:
  virtual int ccode() const { 
    switch (_c0) {
    case  BoolTest::eq : return equal();
    case  BoolTest::gt : return greater();
    case  BoolTest::lt : return less();
    case  BoolTest::ne : return not_equal();
    case  BoolTest::le : return less_equal();
    case  BoolTest::ge : return greater_equal();
    default : ShouldNotReachHere(); return 0;
    }
  };
  virtual void negate() { 
    _c0 = (BoolTest::mask)((int)_c0^0x4); 
  };
public:
  cmpOpOper(BoolTest::mask c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return CMPOP; }
  virtual const Type *type() const { ShouldNotCallThis(); return Type::BOTTOM; }

  virtual int            equal() const { return 0x4;  }
  virtual int            not_equal() const { return 0x5;  }
  virtual int            less() const { return 0xC;  }
  virtual int            greater_equal() const { return 0xD;  }
  virtual int            less_equal() const { return 0xE;  }
  virtual int            greater() const { return 0xF;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("le");
    else if( _c0 == BoolTest::ge ) st->print("ge");
    else if( _c0 == BoolTest::lt ) st->print("l");
    else if( _c0 == BoolTest::gt ) st->print("g");
  }
  virtual const char    *Name() const { return "cmpOp";}
#endif
};

class cmpOpUOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
private:
  BoolTest::mask _c0;
public:
  virtual int ccode() const { 
    switch (_c0) {
    case  BoolTest::eq : return equal();
    case  BoolTest::gt : return greater();
    case  BoolTest::lt : return less();
    case  BoolTest::ne : return not_equal();
    case  BoolTest::le : return less_equal();
    case  BoolTest::ge : return greater_equal();
    default : ShouldNotReachHere(); return 0;
    }
  };
  virtual void negate() { 
    _c0 = (BoolTest::mask)((int)_c0^0x4); 
  };
public:
  cmpOpUOper(BoolTest::mask c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return CMPOPU; }
  virtual const Type *type() const { ShouldNotCallThis(); return Type::BOTTOM; }

  virtual int            equal() const { return 0x4;  }
  virtual int            not_equal() const { return 0x5;  }
  virtual int            less() const { return 0x2;  }
  virtual int            greater_equal() const { return 0x3;  }
  virtual int            less_equal() const { return 0x6;  }
  virtual int            greater() const { return 0x7;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
  }
  virtual const char    *Name() const { return "cmpOpU";}
#endif
};

class cmpOpUCFOper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
private:
  BoolTest::mask _c0;
public:
  virtual int ccode() const { 
    switch (_c0) {
    case  BoolTest::eq : return equal();
    case  BoolTest::gt : return greater();
    case  BoolTest::lt : return less();
    case  BoolTest::ne : return not_equal();
    case  BoolTest::le : return less_equal();
    case  BoolTest::ge : return greater_equal();
    default : ShouldNotReachHere(); return 0;
    }
  };
  virtual void negate() { 
    _c0 = (BoolTest::mask)((int)_c0^0x4); 
  };
public:
  cmpOpUCFOper(BoolTest::mask c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return CMPOPUCF; }
  virtual const Type *type() const { ShouldNotCallThis(); return Type::BOTTOM; }

  virtual int            equal() const { return 0x4;  }
  virtual int            not_equal() const { return 0x5;  }
  virtual int            less() const { return 0x2;  }
  virtual int            greater_equal() const { return 0x3;  }
  virtual int            less_equal() const { return 0x6;  }
  virtual int            greater() const { return 0x7;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
  }
  virtual const char    *Name() const { return "cmpOpUCF";}
#endif
};

class cmpOpUCF2Oper : public MachOper { 
private:
  virtual uint           num_edges() const { return 0; }
private:
  BoolTest::mask _c0;
public:
  virtual int ccode() const { 
    switch (_c0) {
    case  BoolTest::eq : return equal();
    case  BoolTest::gt : return greater();
    case  BoolTest::lt : return less();
    case  BoolTest::ne : return not_equal();
    case  BoolTest::le : return less_equal();
    case  BoolTest::ge : return greater_equal();
    default : ShouldNotReachHere(); return 0;
    }
  };
  virtual void negate() { 
    _c0 = (BoolTest::mask)((int)_c0^0x4); 
  };
public:
  cmpOpUCF2Oper(BoolTest::mask c0)  : _c0(c0) {}
  virtual MachOper      *clone(Compile* C) const;
  virtual uint           opcode() const { return CMPOPUCF2; }
  virtual const Type *type() const { ShouldNotCallThis(); return Type::BOTTOM; }

  virtual int            equal() const { return 0x4;  }
  virtual int            not_equal() const { return 0x5;  }
  virtual int            less() const { return 0x2;  }
  virtual int            greater_equal() const { return 0x3;  }
  virtual int            less_equal() const { return 0x6;  }
  virtual int            greater() const { return 0x7;  }

#ifndef PRODUCT
  virtual void           int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const;
  virtual void           ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const;
  virtual void           dump_spec(outputStream *st) const {
         if( _c0 == BoolTest::eq ) st->print("e");
    else if( _c0 == BoolTest::ne ) st->print("ne");
    else if( _c0 == BoolTest::le ) st->print("be");
    else if( _c0 == BoolTest::ge ) st->print("nb");
    else if( _c0 == BoolTest::lt ) st->print("b");
    else if( _c0 == BoolTest::gt ) st->print("nbe");
  }
  virtual const char    *Name() const { return "cmpOpUCF2";}
#endif
};

//----------------------------Declare classes for Pipelines-----------------

// Pipeline_Use_Cycle_Mask Class
class Pipeline_Use_Cycle_Mask {
protected:
  uint _mask;

public:
  Pipeline_Use_Cycle_Mask() : _mask(0) {}

  Pipeline_Use_Cycle_Mask(uint mask) : _mask(mask) {}

  Pipeline_Use_Cycle_Mask& operator=(const Pipeline_Use_Cycle_Mask &in) {
    _mask = in._mask;
    return *this;
  }

  bool overlaps(const Pipeline_Use_Cycle_Mask &in2) const {
    return ((_mask & in2._mask) != 0);
  }

  Pipeline_Use_Cycle_Mask& operator<<=(int n) {
    _mask <<= n;
    return *this;
  }

  void Or(const Pipeline_Use_Cycle_Mask &in2) {
    _mask |= in2._mask;
  }

  friend Pipeline_Use_Cycle_Mask operator&(const Pipeline_Use_Cycle_Mask &, const Pipeline_Use_Cycle_Mask &);
  friend Pipeline_Use_Cycle_Mask operator|(const Pipeline_Use_Cycle_Mask &, const Pipeline_Use_Cycle_Mask &);

  friend class Pipeline_Use;

  friend class Pipeline_Use_Element;

};

// Pipeline_Use_Element Class
class Pipeline_Use_Element {
protected:
  // Mask of used functional units
  uint _used;

  // Lower and upper bound of functional unit number range
  uint _lb, _ub;

  // Indicates multiple functionals units available
  bool _multiple;

  // Mask of specific used cycles
  Pipeline_Use_Cycle_Mask _mask;

public:
  Pipeline_Use_Element() {}

  Pipeline_Use_Element(uint used, uint lb, uint ub, bool multiple, Pipeline_Use_Cycle_Mask mask)
  : _used(used), _lb(lb), _ub(ub), _multiple(multiple), _mask(mask) {}

  uint used() const { return _used; }

  uint lowerBound() const { return _lb; }

  uint upperBound() const { return _ub; }

  bool multiple() const { return _multiple; }

  Pipeline_Use_Cycle_Mask mask() const { return _mask; }

  bool overlaps(const Pipeline_Use_Element &in2) const {
    return ((_used & in2._used) != 0 && _mask.overlaps(in2._mask));
  }

  void step(uint cycles) {
    _used = 0;
    _mask <<= cycles;
  }

  friend class Pipeline_Use;
};

// Pipeline_Use Class
class Pipeline_Use {
protected:
  // These resources can be used
  uint _resources_used;

  // These resources are used; excludes multiple choice functional units
  uint _resources_used_exclusively;

  // Number of elements
  uint _count;

  // This is the array of Pipeline_Use_Elements
  Pipeline_Use_Element * _elements;

public:
  Pipeline_Use(uint resources_used, uint resources_used_exclusively, uint count, Pipeline_Use_Element *elements)
  : _resources_used(resources_used)
  , _resources_used_exclusively(resources_used_exclusively)
  , _count(count)
  , _elements(elements)
  {}

  uint resourcesUsed() const { return _resources_used; }

  uint resourcesUsedExclusively() const { return _resources_used_exclusively; }

  uint count() const { return _count; }

  Pipeline_Use_Element * element(uint i) const { return &_elements[i]; }

  uint full_latency(uint delay, const Pipeline_Use &pred) const;

  void add_usage(const Pipeline_Use &pred);

  void reset() {
    _resources_used = _resources_used_exclusively = 0;
  };

  void step(uint cycles) {
    reset();
    for (uint i = 0; i < 11; i++)
      (&_elements[i])->step(cycles);
  };

  static const Pipeline_Use         elaborated_use;
  static const Pipeline_Use_Element elaborated_elements[11];

  friend class Pipeline;
};

// Pipeline Class
class Pipeline {
public:
  static bool enabled() { return true; }

  enum {
    _variable_size_instructions = 1,
    _fixed_size_instructions = 0,
    _branch_has_delay_slot = 0,
    _max_instrs_per_bundle = 3,
    _max_bundles_per_cycle = 1,
    _max_instrs_per_cycle = 3
  };

  static bool instr_has_unit_size() { return true; }

// Bundling is not supported

  // Size of an instruction
  static uint instr_unit_size() { return 1; };

  // Bundles do not exist - unsupported
  static uint bundle_unit_size() { assert( false, "Bundles are not supported" ); return 0; };

  static bool requires_bundling() { return false; }

private:
  Pipeline();  // Not a legal constructor

  const unsigned char                   _read_stage_count;
  const unsigned char                   _write_stage;
  const unsigned char                   _fixed_latency;
  const unsigned char                   _instruction_count;
  const bool                            _has_fixed_latency;
  const bool                            _has_branch_delay;
  const bool                            _has_multiple_bundles;
  const bool                            _force_serialization;
  const bool                            _may_have_no_code;
  const enum machPipelineStages * const _read_stages;
  const enum machPipelineStages * const _resource_stage;
  const uint                    * const _resource_cycles;
  const Pipeline_Use                    _resource_use;

public:
  Pipeline(uint                            write_stage,
           uint                            count,
           bool                            has_fixed_latency,
           uint                            fixed_latency,
           uint                            instruction_count,
           bool                            has_branch_delay,
           bool                            has_multiple_bundles,
           bool                            force_serialization,
           bool                            may_have_no_code,
           enum machPipelineStages * const dst,
           enum machPipelineStages * const stage,
           uint                    * const cycles,
           Pipeline_Use                    resource_use)
  : _write_stage(write_stage)
  , _read_stage_count(count)
  , _has_fixed_latency(has_fixed_latency)
  , _fixed_latency(fixed_latency)
  , _read_stages(dst)
  , _resource_stage(stage)
  , _resource_cycles(cycles)
  , _resource_use(resource_use)
  , _instruction_count(instruction_count)
  , _has_branch_delay(has_branch_delay)
  , _has_multiple_bundles(has_multiple_bundles)
  , _force_serialization(force_serialization)
  , _may_have_no_code(may_have_no_code)
  {};

  uint writeStage() const {
    return (_write_stage);
  }

  enum machPipelineStages readStage(int ndx) const {
    return (ndx < _read_stage_count ? _read_stages[ndx] : stage_undefined);  }

  uint resourcesUsed() const {
    return _resource_use.resourcesUsed();
  }

  uint resourcesUsedExclusively() const {
    return _resource_use.resourcesUsedExclusively();
  }

  bool hasFixedLatency() const {
    return (_has_fixed_latency);
  }

  uint fixedLatency() const {
    return (_fixed_latency);
  }

  uint functional_unit_latency(uint start, const Pipeline *pred) const;

  uint operand_latency(uint opnd, const Pipeline *pred) const;

  const Pipeline_Use& resourceUse() const {
    return (_resource_use); }

  const Pipeline_Use_Element * resourceUseElement(uint i) const {
    return (&_resource_use._elements[i]); }

  uint resourceUseCount() const {
    return (_resource_use._count); }

  uint instructionCount() const {
    return (_instruction_count); }

  bool hasBranchDelay() const {
    return (_has_branch_delay); }

  bool hasMultipleBundles() const {
    return (_has_multiple_bundles); }

  bool forceSerialization() const {
    return (_force_serialization); }

  bool mayHaveNoCode() const {
    return (_may_have_no_code); }

//const Pipeline_Use_Cycle_Mask& resourceUseMask(int resource) const {
//  return (_resource_use_masks[resource]); }


#ifndef PRODUCT
  static const char * stageName(uint i);
#endif
};

// Bundle class
class Bundle {
protected:
  enum {
    _unused_delay                   = 0x0,
    _use_nop_delay                  = 0x1,
    _use_unconditional_delay        = 0x2,
    _use_conditional_delay          = 0x3,
    _used_in_conditional_delay      = 0x4,
    _used_in_unconditional_delay    = 0x5,
    _used_in_all_conditional_delays = 0x6,

    _use_delay                      = 0x3,
    _used_in_delay                  = 0x4
  };

  uint _flags          : 3,
       _starts_bundle  : 1,
       _instr_count    : 2,
       _resources_used : 11;
public:
  Bundle() : _flags(_unused_delay), _starts_bundle(0), _instr_count(0), _resources_used(0) {}

  void set_instr_count(uint i) { _instr_count  = i; }
  void set_resources_used(uint i) { _resources_used   = i; }
  void clear_usage() { _flags = _unused_delay; }
  void set_starts_bundle() { _starts_bundle = true; }
  uint flags() const { return (_flags); }
  uint instr_count() const { return (_instr_count); }
  uint resources_used() const { return (_resources_used); }
  bool starts_bundle() const { return (_starts_bundle != 0); }
  void set_use_nop_delay() { _flags = _use_nop_delay; }
  void set_use_unconditional_delay() { _flags = _use_unconditional_delay; }
  void set_use_conditional_delay() { _flags = _use_conditional_delay; }
  void set_used_in_unconditional_delay() { _flags = _used_in_unconditional_delay; }
  void set_used_in_conditional_delay() { _flags = _used_in_conditional_delay; }
  void set_used_in_all_conditional_delays() { _flags = _used_in_all_conditional_delays; }
  bool use_nop_delay() { return (_flags == _use_nop_delay); }
  bool use_unconditional_delay() { return (_flags == _use_unconditional_delay); }
  bool use_conditional_delay() { return (_flags == _use_conditional_delay); }
  bool used_in_unconditional_delay() { return (_flags == _used_in_unconditional_delay); }
  bool used_in_conditional_delay() { return (_flags == _used_in_conditional_delay); }
  bool used_in_all_conditional_delays() { return (_flags == _used_in_all_conditional_delays); }
  bool use_delay() { return ((_flags & _use_delay) != 0); }
  bool used_in_delay() { return ((_flags & _used_in_delay) != 0); }

  enum {
    _nop_count = 1
  };

  static void initialize_nops(MachNode *nop_list[1], Compile* C);

#ifndef PRODUCT
  void dump() const;
#endif
};


//----------------------------Declare classes derived from MachNode----------

class loadBNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadB_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadB; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadBNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadBNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadB";}
#endif
};

class loadB2LNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadB2L_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadB2LNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadB2LNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadB2L";}
#endif
};

class loadUBNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUB_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadUB; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUBNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUBNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUB";}
#endif
};

class loadUB2LNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUB2L_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUB2LNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUB2LNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUB2L";}
#endif
};

class loadUB2L_immI8Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUB2L_immI8_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUB2L_immI8Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUB2L_immI8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUB2L_immI8";}
#endif
};

class loadSNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadS_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadS; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadSNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadSNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadS";}
#endif
};

class loadS2BNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadS2B_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadS2BNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadS2BNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadS2B";}
#endif
};

class loadS2LNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadS2L_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadS2LNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadS2LNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadS2L";}
#endif
};

class loadUSNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUS_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadUS; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUSNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUSNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUS";}
#endif
};

class loadUS2BNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUS2B_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUS2BNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUS2BNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUS2B";}
#endif
};

class loadUS2LNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUS2L_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUS2LNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUS2LNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUS2L";}
#endif
};

class loadUS2L_immI_255Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUS2L_immI_255_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUS2L_immI_255Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUS2L_immI_255Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUS2L_immI_255";}
#endif
};

class loadUS2L_immI16Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUS2L_immI16_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUS2L_immI16Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUS2L_immI16Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUS2L_immI16";}
#endif
};

class loadINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadI; }
  virtual MachNode      *peephole(Block *block, int block_index, PhaseRegAlloc *ra_, int &deleted, Compile *C);
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadINode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI";}
#endif
};

class loadI2BNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2B_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2BNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2BNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2B";}
#endif
};

class loadI2UBNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2UB_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2UBNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2UBNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2UB";}
#endif
};

class loadI2SNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2S_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2SNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2SNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2S";}
#endif
};

class loadI2USNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2US_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2USNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2USNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2US";}
#endif
};

class loadI2LNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2L_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2LNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2LNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2L";}
#endif
};

class loadI2L_immI_255Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2L_immI_255_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2L_immI_255Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2L_immI_255Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2L_immI_255";}
#endif
};

class loadI2L_immI_65535Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2L_immI_65535_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2L_immI_65535Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2L_immI_65535Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2L_immI_65535";}
#endif
};

class loadI2L_immINode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadI2L_immI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadI2L_immINode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadI2L_immINode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadI2L_immI";}
#endif
};

class loadUI2LNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadUI2L_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadUI2L; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadUI2LNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadUI2LNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadUI2L";}
#endif
};

class loadLNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadL; }
  virtual MachNode      *peephole(Block *block, int block_index, PhaseRegAlloc *ra_, int &deleted, Compile *C);
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadLNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadLNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadL";}
#endif
};

class loadRangeNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadRange_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadRange; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadRangeNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(loadRangeNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadRange";}
#endif
};

class loadPNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadPNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadPNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadP";}
#endif
};

class loadNNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadN_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadNNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadNNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadN";}
#endif
};

class loadKlassNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadKlass_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadKlass; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadKlassNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(loadKlassNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadKlass";}
#endif
};

class loadNKlassNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadNKlass_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadNKlass; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadNKlassNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(loadNKlassNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadNKlass";}
#endif
};

class loadFNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadFNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadFNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadF";}
#endif
};

class loadD_partialNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadD_partial_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadD_partialNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadD_partialNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadD_partial";}
#endif
};

class loadDNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadD_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadDNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadDNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadD";}
#endif
};

class loadA8BNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadA8B_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Load8B; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadA8BNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadA8BNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadA8B";}
#endif
};

class loadA4SNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadA4S_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Load4S; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadA4SNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadA4SNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadA4S";}
#endif
};

class loadA4CNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadA4C_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Load4C; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadA4CNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadA4CNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadA4C";}
#endif
};

class load2IUNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return load2IU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Load2I; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  load2IUNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(load2IUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "load2IU";}
#endif
};

class loadA2FNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadA2F_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Load2F; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadA2FNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadA2FNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadA2F";}
#endif
};

class leaP8Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaP8_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaP8Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaP8Node); }
  // Rematerialize leaP8
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaP8";}
#endif
};

class leaP32Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaP32_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaP32Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaP32Node); }
  // Rematerialize leaP32
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaP32";}
#endif
};

class leaPIdxOffNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPIdxOff_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPIdxOffNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPIdxOffNode); }
  // Rematerialize leaPIdxOff
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPIdxOff";}
#endif
};

class leaPIdxScaleNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPIdxScale_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPIdxScaleNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPIdxScaleNode); }
  // Rematerialize leaPIdxScale
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPIdxScale";}
#endif
};

class leaPIdxScaleOffNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPIdxScaleOff_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPIdxScaleOffNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPIdxScaleOffNode); }
  // Rematerialize leaPIdxScaleOff
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPIdxScaleOff";}
#endif
};

class leaPPosIdxScaleOffNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPPosIdxScaleOff_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPPosIdxScaleOffNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPPosIdxScaleOffNode); }
  // Rematerialize leaPPosIdxScaleOff
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPPosIdxScaleOff";}
#endif
};

class leaPCompressedOopOffsetNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPCompressedOopOffset_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPCompressedOopOffsetNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPCompressedOopOffsetNode); }
  // Rematerialize leaPCompressedOopOffset
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPCompressedOopOffset";}
#endif
};

class leaP8NarrowNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaP8Narrow_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaP8NarrowNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaP8NarrowNode); }
  // Rematerialize leaP8Narrow
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaP8Narrow";}
#endif
};

class leaP32NarrowNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaP32Narrow_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaP32NarrowNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaP32NarrowNode); }
  // Rematerialize leaP32Narrow
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaP32Narrow";}
#endif
};

class leaPIdxOffNarrowNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPIdxOffNarrow_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPIdxOffNarrowNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPIdxOffNarrowNode); }
  // Rematerialize leaPIdxOffNarrow
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPIdxOffNarrow";}
#endif
};

class leaPIdxScaleNarrowNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPIdxScaleNarrow_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPIdxScaleNarrowNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPIdxScaleNarrowNode); }
  // Rematerialize leaPIdxScaleNarrow
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPIdxScaleNarrow";}
#endif
};

class leaPIdxScaleOffNarrowNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPIdxScaleOffNarrow_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPIdxScaleOffNarrowNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPIdxScaleOffNarrowNode); }
  // Rematerialize leaPIdxScaleOffNarrow
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPIdxScaleOffNarrow";}
#endif
};

class leaPPosIdxScaleOffNarrowNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaPPosIdxScaleOffNarrow_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaPPosIdxScaleOffNarrowNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(leaPPosIdxScaleOffNarrowNode); }
  // Rematerialize leaPPosIdxScaleOffNarrow
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaPPosIdxScaleOffNarrow";}
#endif
};

class loadConINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConI; }
public:
  loadConINode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConINode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConI
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeInt::make(opnd_array(1)->constant());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConI";}
#endif
};

class loadConI0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConI0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConI; }
public:
  loadConI0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConI0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConI0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeInt::make(opnd_array(1)->constant());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConI0";}
#endif
};

class loadConLNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConL; }
public:
  loadConLNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConLNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConL
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeLong::make(opnd_array(1)->constantL());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConL";}
#endif
};

class loadConL0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConL0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConL; }
public:
  loadConL0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConL0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConL0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeLong::make(opnd_array(1)->constantL());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConL0";}
#endif
};

class loadConUL32Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConUL32_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConL; }
public:
  loadConUL32Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConUL32Node); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConUL32
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeLong::make(opnd_array(1)->constantL());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConUL32";}
#endif
};

class loadConL32Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConL32_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConL; }
public:
  loadConL32Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConL32Node); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConL32
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeLong::make(opnd_array(1)->constantL());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConL32";}
#endif
};

class loadConPNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConP; }
  virtual int            reloc()   const;
public:
  loadConPNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConPNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConP
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  opnd_array(1)->type();
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConP";}
#endif
};

class loadConP0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConP0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConP; }
  virtual int            reloc()   const;
public:
  loadConP0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConP0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConP0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  opnd_array(1)->type();
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConP0";}
#endif
};

class loadConP_pollNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConP_poll_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConP; }
  virtual int            reloc()   const;
public:
  loadConP_pollNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConP_pollNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConP_poll
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  opnd_array(1)->type();
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConP_poll";}
#endif
};

class loadConP31Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConP31_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConP; }
  virtual int            reloc()   const;
public:
  loadConP31Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConP31Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConP31
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  opnd_array(1)->type();
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConP31";}
#endif
};

class loadConFNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConF_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  loadConFNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeF::make(opnd_array(1)->constantF());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConF";}
#endif
};

class loadConN0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConN0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConN; }
public:
  loadConN0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConN0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConN0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  opnd_array(1)->type();
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConN0";}
#endif
};

class loadConNNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConN_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConN; }
public:
  loadConNNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConNNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConN
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  opnd_array(1)->type();
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConN";}
#endif
};

class loadConF0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConF0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConF; }
  virtual int            reloc()   const;
public:
  loadConF0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConF0Node); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConF0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeF::make(opnd_array(1)->constantF());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConF0";}
#endif
};

class loadConDNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConD_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  loadConDNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConDNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConD
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeD::make(opnd_array(1)->constantD());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConD";}
#endif
};

class loadConD0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConD0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConD; }
  virtual int            reloc()   const;
public:
  loadConD0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Con); }
  virtual uint           size_of() const { return sizeof(loadConD0Node); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize loadConD0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const class Type *bottom_type() const{
    return  TypeD::make(opnd_array(1)->constantD());
  };
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConD0";}
#endif
};

class loadSSINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadSSI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
public:
  loadSSINode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadSSINode); }
  // Rematerialize loadSSI
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadSSI";}
#endif
};

class loadSSLNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadSSL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
public:
  loadSSLNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadSSLNode); }
  // Rematerialize loadSSL
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadSSL";}
#endif
};

class loadSSPNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadSSP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
public:
  loadSSPNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadSSPNode); }
  // Rematerialize loadSSP
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadSSP";}
#endif
};

class loadSSFNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadSSF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
public:
  loadSSFNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadSSFNode); }
  // Rematerialize loadSSF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadSSF";}
#endif
};

class loadSSDNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadSSD_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
public:
  loadSSDNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadSSDNode); }
  // Rematerialize loadSSD
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadSSD";}
#endif
};

class prefetchrNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchr_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchRead; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchrNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchrNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchr";}
#endif
};

class prefetchrNTANode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchrNTA_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchRead; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchrNTANode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchrNTANode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchrNTA";}
#endif
};

class prefetchrT0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchrT0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchRead; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchrT0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchrT0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchrT0";}
#endif
};

class prefetchrT2Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchrT2_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchRead; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchrT2Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchrT2Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchrT2";}
#endif
};

class prefetchwNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchw_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchWrite; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchwNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchwNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchw";}
#endif
};

class prefetchwNTANode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchwNTA_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchWrite; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchwNTANode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchwNTANode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchwNTA";}
#endif
};

class prefetchwT0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchwT0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchWrite; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchwT0Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchwT0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchwT0";}
#endif
};

class prefetchwT2Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return prefetchwT2_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PrefetchWrite; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  prefetchwT2Node() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(prefetchwT2Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "prefetchwT2";}
#endif
};

class storeBNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeB_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreB; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeBNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeBNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeB";}
#endif
};

class storeCNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeC_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreC; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeCNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeCNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeC";}
#endif
};

class storeINode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeINode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeI";}
#endif
};

class storeLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeLNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeL";}
#endif
};

class storePNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storePNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storePNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeP";}
#endif
};

class storeImmP0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmP0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmP0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmP0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmP0";}
#endif
};

class storeImmPNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmPNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmPNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmP";}
#endif
};

class storeNNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeN_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeNNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeNNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeN";}
#endif
};

class storeImmN0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmN0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmN0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmN0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmN0";}
#endif
};

class storeImmNNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmN_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmNNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmNNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmN";}
#endif
};

class storeImmI0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmI0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmI0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmI0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmI0";}
#endif
};

class storeImmINode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmINode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmI";}
#endif
};

class storeImmL0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmL0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmL0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmL0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmL0";}
#endif
};

class storeImmLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmLNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmL";}
#endif
};

class storeImmC0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmC0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreC; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmC0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmC0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmC0";}
#endif
};

class storeImmI16Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmI16_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreC; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmI16Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmI16Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmI16";}
#endif
};

class storeImmB0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmB0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreB; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmB0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmB0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmB0";}
#endif
};

class storeImmBNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmB_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreB; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmBNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmBNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmB";}
#endif
};

class storeA8BNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeA8B_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Store8B; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeA8BNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeA8BNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeA8B";}
#endif
};

class storeA4CNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeA4C_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Store4C; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeA4CNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeA4CNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeA4C";}
#endif
};

class storeA2INode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeA2I_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Store2I; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeA2INode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeA2INode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeA2I";}
#endif
};

class storeImmCM0_regNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmCM0_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreCM; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmCM0_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmCM0_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmCM0_reg";}
#endif
};

class storeImmCM0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeImmCM0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreCM; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeImmCM0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeImmCM0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeImmCM0";}
#endif
};

class storeA2FNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeA2F_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Store2F; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeA2FNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeA2FNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeA2F";}
#endif
};

class storeFNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeFNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeFNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeF";}
#endif
};

class storeF0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeF0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeF0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeF0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeF0";}
#endif
};

class storeF_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeF_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeF_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeF_immNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeF_imm";}
#endif
};

class storeDNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeD_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeDNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeDNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeD";}
#endif
};

class storeD0_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeD0_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeD0_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeD0_immNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeD0_imm";}
#endif
};

class storeD0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeD0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeD0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(storeD0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeD0";}
#endif
};

class storeSSINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeSSI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RegI; }
public:
  storeSSINode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Copy); }
  virtual uint           size_of() const { return sizeof(storeSSINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeSSI";}
#endif
};

class storeSSLNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeSSL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RegL; }
public:
  storeSSLNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Copy); }
  virtual uint           size_of() const { return sizeof(storeSSLNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeSSL";}
#endif
};

class storeSSPNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeSSP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RegP; }
public:
  storeSSPNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Copy); }
  virtual uint           size_of() const { return sizeof(storeSSPNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return in(1)->bottom_type(); } // Copy?
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeSSP";}
#endif
};

class storeSSFNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeSSF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RegF; }
public:
  storeSSFNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Copy); }
  virtual uint           size_of() const { return sizeof(storeSSFNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeSSF";}
#endif
};

class storeSSDNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeSSD_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RegD; }
public:
  storeSSDNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Copy); }
  virtual uint           size_of() const { return sizeof(storeSSDNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeSSD";}
#endif
};

class bytes_reverse_intNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return bytes_reverse_int_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ReverseBytesI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  bytes_reverse_intNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(bytes_reverse_intNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "bytes_reverse_int";}
#endif
};

class bytes_reverse_longNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return bytes_reverse_long_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ReverseBytesL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  bytes_reverse_longNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(bytes_reverse_longNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "bytes_reverse_long";}
#endif
};

class bytes_reverse_unsigned_shortNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return bytes_reverse_unsigned_short_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ReverseBytesUS; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  bytes_reverse_unsigned_shortNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(bytes_reverse_unsigned_shortNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "bytes_reverse_unsigned_short";}
#endif
};

class bytes_reverse_shortNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return bytes_reverse_short_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ReverseBytesS; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  bytes_reverse_shortNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(bytes_reverse_shortNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "bytes_reverse_short";}
#endif
};

class countLeadingZerosINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return countLeadingZerosI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountLeadingZerosI; }
public:
  countLeadingZerosINode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(countLeadingZerosINode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "countLeadingZerosI";}
#endif
};

class countLeadingZerosI_bsrNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return countLeadingZerosI_bsr_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountLeadingZerosI; }
public:
  countLeadingZerosI_bsrNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(countLeadingZerosI_bsrNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "countLeadingZerosI_bsr";}
#endif
};

class countLeadingZerosLNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return countLeadingZerosL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountLeadingZerosL; }
public:
  countLeadingZerosLNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(countLeadingZerosLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "countLeadingZerosL";}
#endif
};

class countLeadingZerosL_bsrNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return countLeadingZerosL_bsr_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountLeadingZerosL; }
public:
  countLeadingZerosL_bsrNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(countLeadingZerosL_bsrNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "countLeadingZerosL_bsr";}
#endif
};

class countTrailingZerosINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return countTrailingZerosI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountTrailingZerosI; }
public:
  countTrailingZerosINode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(countTrailingZerosINode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "countTrailingZerosI";}
#endif
};

class countTrailingZerosLNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return countTrailingZerosL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountTrailingZerosL; }
public:
  countTrailingZerosLNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(countTrailingZerosLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "countTrailingZerosL";}
#endif
};

class popCountINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return popCountI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PopCountI; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  popCountINode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(popCountINode); }
  // Rematerialize popCountI
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "popCountI";}
#endif
};

class popCountI_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return popCountI_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PopCountI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  popCountI_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(popCountI_memNode); }
  // Rematerialize popCountI_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "popCountI_mem";}
#endif
};

class popCountLNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return popCountL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PopCountL; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  popCountLNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(popCountLNode); }
  // Rematerialize popCountL
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "popCountL";}
#endif
};

class popCountL_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return popCountL_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PopCountL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  popCountL_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(popCountL_memNode); }
  // Rematerialize popCountL_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "popCountL_mem";}
#endif
};

class membar_acquireNode : public MachNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return membar_acquire_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MemBarAcquire; }
public:
  membar_acquireNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(membar_acquireNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::MEMBAR; } // matched MemBar
  virtual const TypePtr *adr_type() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "membar_acquire";}
#endif
};

class membar_acquire_lockNode : public MachNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return membar_acquire_lock_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MemBarAcquire; }
public:
  membar_acquire_lockNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(membar_acquire_lockNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::MEMBAR; } // matched MemBar
  virtual const TypePtr *adr_type() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "membar_acquire_lock";}
#endif
};

class membar_releaseNode : public MachNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return membar_release_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MemBarRelease; }
public:
  membar_releaseNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(membar_releaseNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::MEMBAR; } // matched MemBar
  virtual const TypePtr *adr_type() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "membar_release";}
#endif
};

class membar_release_lockNode : public MachNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return membar_release_lock_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MemBarRelease; }
public:
  membar_release_lockNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(membar_release_lockNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::MEMBAR; } // matched MemBar
  virtual const TypePtr *adr_type() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "membar_release_lock";}
#endif
};

class membar_volatileNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return membar_volatile_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MemBarVolatile; }
public:
  membar_volatileNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(membar_volatileNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize membar_volatile
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::MEMBAR; } // matched MemBar
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "membar_volatile";}
#endif
};

class unnecessary_membar_volatileNode : public MachNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return unnecessary_membar_volatile_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MemBarVolatile; }
public:
  unnecessary_membar_volatileNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(unnecessary_membar_volatileNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::MEMBAR; } // matched MemBar
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "unnecessary_membar_volatile";}
#endif
};

class castX2PNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return castX2P_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CastX2P; }
  virtual uint           oper_input_base() const { return 1; }
public:
  castX2PNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(castX2PNode); }
  // Rematerialize castX2P
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "castX2P";}
#endif
};

class castP2XNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return castP2X_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CastP2X; }
public:
  castP2XNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(castP2XNode); }
  // Rematerialize castP2X
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "castP2X";}
#endif
};

class encodeHeapOopNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return encodeHeapOop_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_EncodeP; }
  virtual uint           oper_input_base() const { return 1; }
public:
  encodeHeapOopNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(encodeHeapOopNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "encodeHeapOop";}
#endif
};

class encodeHeapOop_not_nullNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return encodeHeapOop_not_null_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_EncodeP; }
  virtual uint           oper_input_base() const { return 1; }
public:
  encodeHeapOop_not_nullNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(encodeHeapOop_not_nullNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "encodeHeapOop_not_null";}
#endif
};

class decodeHeapOopNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return decodeHeapOop_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DecodeN; }
  virtual uint           oper_input_base() const { return 1; }
public:
  decodeHeapOopNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(decodeHeapOopNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "decodeHeapOop";}
#endif
};

class decodeHeapOop_not_nullNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return decodeHeapOop_not_null_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DecodeN; }
  virtual uint           oper_input_base() const { return 1; }
public:
  decodeHeapOop_not_nullNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(decodeHeapOop_not_nullNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "decodeHeapOop_not_null";}
#endif
};

class jumpXtnd_offsetNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[4];
  GrowableArray<Label*> _index2label;
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual void           add_case_label(int index_num, Label* blockLabel) {
                                          _index2label.at_put_grow(index_num, blockLabel);}
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jumpXtnd_offset_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Jump; }
  virtual uint           oper_input_base() const { return 1; }
public:
  jumpXtnd_offsetNode() : _index2label(MinJumpTableSize*2) {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jumpXtnd_offsetNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jumpXtnd_offset";}
#endif
};

class jumpXtnd_addrNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[5];
  GrowableArray<Label*> _index2label;
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual void           add_case_label(int index_num, Label* blockLabel) {
                                          _index2label.at_put_grow(index_num, blockLabel);}
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jumpXtnd_addr_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Jump; }
  virtual uint           oper_input_base() const { return 1; }
public:
  jumpXtnd_addrNode() : _index2label(MinJumpTableSize*2) {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jumpXtnd_addrNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jumpXtnd_addr";}
#endif
};

class jumpXtndNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
  GrowableArray<Label*> _index2label;
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual void           add_case_label(int index_num, Label* blockLabel) {
                                          _index2label.at_put_grow(index_num, blockLabel);}
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jumpXtnd_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Jump; }
  virtual uint           oper_input_base() const { return 1; }
public:
  jumpXtndNode() : _index2label(MinJumpTableSize*2) {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jumpXtndNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jumpXtnd";}
#endif
};

class cmovI_regNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            cisc_operand() const { return 4; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmovI_regNode() { _cisc_RegMask = NULL;  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovI_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_reg";}
#endif
};

class cmovI_regUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_regU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            cisc_operand() const { return 4; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmovI_regUNode() { _cisc_RegMask = NULL;  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovI_regUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_regU";}
#endif
};

class cmovI_regUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_regUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            cisc_operand() const { return 4; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmovI_regUCFNode() { _cisc_RegMask = NULL;  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovI_regUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_regUCF";}
#endif
};

class cmovI_memNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmovI_memNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmovI_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_mem";}
#endif
};

class cmovI_memUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_memU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmovI_memUNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmovI_memUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_memU";}
#endif
};

class cmovI_memUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_memUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmovI_memUCFNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmovI_memUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_memUCF";}
#endif
};

class cmovN_regNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovN_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveN; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovN_regNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovN_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { const Type *t = in(oper_input_base()+1)->bottom_type(); return (req() <= oper_input_base()+2) ? t : t->meet(in(oper_input_base()+2)->bottom_type()); } // CMoveN
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovN_reg";}
#endif
};

class cmovN_regUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovN_regU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveN; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovN_regUNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovN_regUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { const Type *t = in(oper_input_base()+1)->bottom_type(); return (req() <= oper_input_base()+2) ? t : t->meet(in(oper_input_base()+2)->bottom_type()); } // CMoveN
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovN_regU";}
#endif
};

class cmovN_regUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovN_regUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveN; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovN_regUCFNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovN_regUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  const Type            *bottom_type() const { const Type *t = in(oper_input_base()+1)->bottom_type(); return (req() <= oper_input_base()+2) ? t : t->meet(in(oper_input_base()+2)->bottom_type()); } // CMoveN
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovN_regUCF";}
#endif
};

class cmovP_regNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovP_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveP; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovP_regNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovP_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { const Type *t = in(oper_input_base()+1)->bottom_type(); return (req() <= oper_input_base()+2) ? t : t->meet(in(oper_input_base()+2)->bottom_type()); } // CMoveP
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovP_reg";}
#endif
};

class cmovP_regUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovP_regU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveP; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovP_regUNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovP_regUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { const Type *t = in(oper_input_base()+1)->bottom_type(); return (req() <= oper_input_base()+2) ? t : t->meet(in(oper_input_base()+2)->bottom_type()); } // CMoveP
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovP_regU";}
#endif
};

class cmovP_regUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovP_regUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveP; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovP_regUCFNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovP_regUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  const Type            *bottom_type() const { const Type *t = in(oper_input_base()+1)->bottom_type(); return (req() <= oper_input_base()+2) ? t : t->meet(in(oper_input_base()+2)->bottom_type()); } // CMoveP
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovP_regUCF";}
#endif
};

class cmovL_regNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovL_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            cisc_operand() const { return 4; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmovL_regNode() { _cisc_RegMask = NULL;  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovL_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovL_reg";}
#endif
};

class cmovL_memNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovL_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmovL_memNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmovL_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovL_mem";}
#endif
};

class cmovL_regUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovL_regU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            cisc_operand() const { return 4; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmovL_regUNode() { _cisc_RegMask = NULL;  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovL_regUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovL_regU";}
#endif
};

class cmovL_regUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovL_regUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            cisc_operand() const { return 4; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmovL_regUCFNode() { _cisc_RegMask = NULL;  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovL_regUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovL_regUCF";}
#endif
};

class cmovL_memUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovL_memU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmovL_memUNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmovL_memUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovL_memU";}
#endif
};

class cmovL_memUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovL_memUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmovL_memUCFNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmovL_memUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovL_memUCF";}
#endif
};

class cmovF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveF; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovF_regNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovF_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovF_reg";}
#endif
};

class cmovF_regUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovF_regU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveF; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovF_regUNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovF_regUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovF_regU";}
#endif
};

class cmovF_regUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovF_regUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveF; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovF_regUCFNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovF_regUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovF_regUCF";}
#endif
};

class cmovD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveD; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovD_regNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovD_reg";}
#endif
};

class cmovD_regUNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovD_regU_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CMoveD; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovD_regUNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovD_regUNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovD_regU";}
#endif
};

class cmovD_regUCFNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovD_regUCF_rule; }
  virtual int            ideal_Opcode() const { return Op_CMoveD; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges() + opnd_array(2)->num_edges(); }
public:
  cmovD_regUCFNode() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovD_regUCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovD_regUCF";}
#endif
};

class addI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  addI_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addI_rReg";}
#endif
};

class addI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  addI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addI_rReg_imm";}
#endif
};

class addI_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addI_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addI_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addI_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addI_rReg_mem";}
#endif
};

class addI_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addI_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addI_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addI_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addI_rReg_mem_0";}
#endif
};

class addI_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addI_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addI_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addI_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addI_mem_rReg";}
#endif
};

class addI_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addI_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addI_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addI_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addI_mem_rReg_0";}
#endif
};

class addI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addI_mem_imm";}
#endif
};

class incI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return incI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  incI_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(incI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "incI_rReg";}
#endif
};

class incI_memNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return incI_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  incI_memNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(incI_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "incI_mem";}
#endif
};

class decI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return decI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  decI_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(decI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "decI_rReg";}
#endif
};

class decI_memNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return decI_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  decI_memNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(decI_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "decI_mem";}
#endif
};

class leaI_rReg_immINode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaI_rReg_immI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
public:
  leaI_rReg_immINode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(leaI_rReg_immINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaI_rReg_immI";}
#endif
};

class addL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  addL_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addL_rReg";}
#endif
};

class addL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  addL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addL_rReg_imm";}
#endif
};

class addL_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addL_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addL_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addL_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addL_rReg_mem";}
#endif
};

class addL_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addL_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addL_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addL_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addL_rReg_mem_0";}
#endif
};

class addL_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addL_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addL_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addL_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addL_mem_rReg";}
#endif
};

class addL_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addL_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addL_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addL_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addL_mem_rReg_0";}
#endif
};

class addL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addL_mem_imm";}
#endif
};

class incL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return incL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  incL_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(incL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "incL_rReg";}
#endif
};

class incL_memNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return incL_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  incL_memNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(incL_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "incL_mem";}
#endif
};

class decL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return decL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  decL_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(decL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "decL_rReg";}
#endif
};

class decL_memNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return decL_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  decL_memNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(decL_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "decL_mem";}
#endif
};

class leaL_rReg_immLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaL_rReg_immL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddL; }
public:
  leaL_rReg_immLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(leaL_rReg_immLNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaL_rReg_immL";}
#endif
};

class addP_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addP_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual uint           oper_input_base() const { return 2; }
public:
  addP_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addP_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addP_rReg";}
#endif
};

class addP_rReg_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addP_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual uint           oper_input_base() const { return 2; }
public:
  addP_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addP_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addP_rReg_imm";}
#endif
};

class leaP_rReg_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return leaP_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           oper_input_base() const { return 2; }
public:
  leaP_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(leaP_rReg_immNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "leaP_rReg_imm";}
#endif
};

class checkCastPPNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return checkCastPP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CheckCastPP; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual uint           oper_input_base() const { return 1; }
public:
  checkCastPPNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(checkCastPPNode); }
  // Rematerialize checkCastPP
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "checkCastPP";}
#endif
};

class castPPNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return castPP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CastPP; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual uint           oper_input_base() const { return 1; }
public:
  castPPNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(castPPNode); }
  // Rematerialize castPP
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "castPP";}
#endif
};

class castIINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return castII_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CastII; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  castIINode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(castIINode); }
  // Rematerialize castII
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "castII";}
#endif
};

class loadPLockedNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadPLocked_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadPLocked; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadPLockedNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadPLockedNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadPLocked";}
#endif
};

class loadLLockedNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadLLocked_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LoadLLocked; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  loadLLockedNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(loadLLockedNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadLLocked";}
#endif
};

class storePConditionalNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storePConditional_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StorePConditional; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storePConditionalNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(storePConditionalNode); }
  // Rematerialize storePConditional
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storePConditional";}
#endif
};

class storeIConditionalNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeIConditional_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreIConditional; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeIConditionalNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(storeIConditionalNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  // Rematerialize storeIConditional
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeIConditional";}
#endif
};

class storeLConditionalNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return storeLConditional_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreLConditional; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  storeLConditionalNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(storeLConditionalNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  // Rematerialize storeLConditional
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "storeLConditional";}
#endif
};

class compareAndSwapPNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compareAndSwapP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CompareAndSwapP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compareAndSwapPNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compareAndSwapPNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compareAndSwapP";}
#endif
};

class compareAndSwapLNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compareAndSwapL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CompareAndSwapL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compareAndSwapLNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compareAndSwapLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compareAndSwapL";}
#endif
};

class compareAndSwapINode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compareAndSwapI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CompareAndSwapI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compareAndSwapINode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compareAndSwapINode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compareAndSwapI";}
#endif
};

class compareAndSwapNNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compareAndSwapN_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CompareAndSwapN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compareAndSwapNNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compareAndSwapNNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compareAndSwapN";}
#endif
};

class subI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  subI_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subI_rReg";}
#endif
};

class subI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  subI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subI_rReg_imm";}
#endif
};

class subI_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subI_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subI_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(subI_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subI_rReg_mem";}
#endif
};

class subI_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subI_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subI_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subI_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subI_mem_rReg";}
#endif
};

class subI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subI_mem_imm";}
#endif
};

class subL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  subL_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subL_rReg";}
#endif
};

class subL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  subL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subL_rReg_imm";}
#endif
};

class subL_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subL_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subL_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(subL_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subL_rReg_mem";}
#endif
};

class subL_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subL_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subL_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subL_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subL_mem_rReg";}
#endif
};

class subL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subL_mem_imm";}
#endif
};

class subP_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subP_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddP; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual uint           oper_input_base() const { return 2; }
public:
  subP_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subP_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subP_rReg";}
#endif
};

class negI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return negI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
public:
  negI_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(negI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "negI_rReg";}
#endif
};

class negI_memNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return negI_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  negI_memNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(negI_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "negI_mem";}
#endif
};

class negL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return negL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
public:
  negL_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(negL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "negL_rReg";}
#endif
};

class negL_memNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return negL_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  negL_memNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(negL_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "negL_mem";}
#endif
};

class mulI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  mulI_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulI_rReg";}
#endif
};

class mulI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulI; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  mulI_rReg_immNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulI_rReg_imm";}
#endif
};

class mulI_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulI_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulI_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulI_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulI_mem";}
#endif
};

class mulI_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulI_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulI_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulI_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulI_mem_0";}
#endif
};

class mulI_mem_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulI_mem_immNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulI_mem_imm";}
#endif
};

class mulL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  mulL_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulL_rReg";}
#endif
};

class mulL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulL; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  mulL_rReg_immNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulL_rReg_imm";}
#endif
};

class mulL_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulL_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulL_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulL_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulL_mem";}
#endif
};

class mulL_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulL_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulL_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulL_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulL_mem_0";}
#endif
};

class mulL_mem_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulL_mem_immNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulL_mem_imm";}
#endif
};

class mulHiL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulHiL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulHiL; }
public:
  mulHiL_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulHiL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulHiL_rReg";}
#endif
};

class divI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  divI_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divI_rReg";}
#endif
};

class divL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  divL_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divL_rReg";}
#endif
};

class divModI_rReg_divmodNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divModI_rReg_divmod_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivModI; }
public:
  divModI_rReg_divmodNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divModI_rReg_divmodNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divModI_rReg_divmod";}
#endif
};

class divModL_rReg_divmodNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divModL_rReg_divmod_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivModL; }
public:
  divModL_rReg_divmodNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divModL_rReg_divmodNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divModL_rReg_divmod";}
#endif
};

class loadConL_0x6666666666666667Node : public MachNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return loadConL_0x6666666666666667_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
public:
  loadConL_0x6666666666666667Node() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(loadConL_0x6666666666666667Node); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "loadConL_0x6666666666666667";}
#endif
};

class mul_hiNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mul_hi_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
public:
  mul_hiNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mul_hiNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mul_hi";}
#endif
};

class sarL_rReg_63Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_rReg_63_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarL_rReg_63Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_rReg_63Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_rReg_63";}
#endif
};

class sarL_rReg_2Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_rReg_2_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarL_rReg_2Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_rReg_2Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_rReg_2";}
#endif
};

class divL_10Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divL_10_rule; }
  virtual int            ideal_Opcode() const { return Op_DivL; }
public:
  divL_10Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divL_10Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divL_10";}
#endif
};

class modI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return modI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ModI; }
public:
  modI_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(modI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "modI_rReg";}
#endif
};

class modL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return modL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ModL; }
public:
  modL_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(modL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "modL_rReg";}
#endif
};

class salI_rReg_1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salI_rReg_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  salI_rReg_1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salI_rReg_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salI_rReg_1";}
#endif
};

class salI_mem_1Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salI_mem_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  salI_mem_1Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salI_mem_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salI_mem_1";}
#endif
};

class salI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  salI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salI_rReg_imm";}
#endif
};

class salI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  salI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salI_mem_imm";}
#endif
};

class salI_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salI_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  salI_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salI_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salI_rReg_CL";}
#endif
};

class salI_mem_CLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salI_mem_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  salI_mem_CLNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salI_mem_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salI_mem_CL";}
#endif
};

class sarI_rReg_1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarI_rReg_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarI_rReg_1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarI_rReg_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarI_rReg_1";}
#endif
};

class sarI_mem_1Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarI_mem_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sarI_mem_1Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarI_mem_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarI_mem_1";}
#endif
};

class sarI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarI_rReg_imm";}
#endif
};

class sarI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sarI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarI_mem_imm";}
#endif
};

class sarI_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarI_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarI_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarI_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarI_rReg_CL";}
#endif
};

class sarI_mem_CLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarI_mem_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sarI_mem_CLNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarI_mem_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarI_mem_CL";}
#endif
};

class shrI_rReg_1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrI_rReg_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_URShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  shrI_rReg_1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrI_rReg_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrI_rReg_1";}
#endif
};

class shrI_mem_1Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrI_mem_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  shrI_mem_1Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrI_mem_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrI_mem_1";}
#endif
};

class shrI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_URShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  shrI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrI_rReg_imm";}
#endif
};

class shrI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  shrI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrI_mem_imm";}
#endif
};

class shrI_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrI_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_URShiftI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  shrI_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrI_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrI_rReg_CL";}
#endif
};

class shrI_mem_CLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrI_mem_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  shrI_mem_CLNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrI_mem_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrI_mem_CL";}
#endif
};

class salL_rReg_1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salL_rReg_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  salL_rReg_1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salL_rReg_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salL_rReg_1";}
#endif
};

class salL_mem_1Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salL_mem_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  salL_mem_1Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salL_mem_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salL_mem_1";}
#endif
};

class salL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  salL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salL_rReg_imm";}
#endif
};

class salL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  salL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salL_mem_imm";}
#endif
};

class salL_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salL_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  salL_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salL_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salL_rReg_CL";}
#endif
};

class salL_mem_CLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return salL_mem_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  salL_mem_CLNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(salL_mem_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "salL_mem_CL";}
#endif
};

class sarL_rReg_1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_rReg_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarL_rReg_1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_rReg_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_rReg_1";}
#endif
};

class sarL_mem_1Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_mem_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sarL_mem_1Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_mem_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_mem_1";}
#endif
};

class sarL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_rReg_imm";}
#endif
};

class sarL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sarL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_mem_imm";}
#endif
};

class sarL_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sarL_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_rReg_CL";}
#endif
};

class sarL_mem_CLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sarL_mem_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sarL_mem_CLNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sarL_mem_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sarL_mem_CL";}
#endif
};

class shrL_rReg_1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrL_rReg_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_URShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  shrL_rReg_1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrL_rReg_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrL_rReg_1";}
#endif
};

class shrL_mem_1Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrL_mem_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  shrL_mem_1Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrL_mem_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrL_mem_1";}
#endif
};

class shrL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_URShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  shrL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrL_rReg_imm";}
#endif
};

class shrL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  shrL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrL_mem_imm";}
#endif
};

class shrL_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrL_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_URShiftL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  shrL_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrL_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrL_rReg_CL";}
#endif
};

class shrL_mem_CLNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return shrL_mem_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  shrL_mem_CLNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(shrL_mem_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "shrL_mem_CL";}
#endif
};

class i2bNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return i2b_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  i2bNode() { _cisc_RegMask = NULL;  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(i2bNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "i2b";}
#endif
};

class i2sNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return i2s_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RShiftI; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  i2sNode() { _cisc_RegMask = NULL;  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(i2sNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "i2s";}
#endif
};

class rolI_rReg_imm1Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_imm1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_imm1Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_imm1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_imm1";}
#endif
};

class rolI_rReg_imm8Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_imm8_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_imm8Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_imm8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_imm8";}
#endif
};

class rolI_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_CL";}
#endif
};

class rolI_rReg_i1Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_i1_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_i1Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_i1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_i1";}
#endif
};

class rolI_rReg_i1_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_i1_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_i1_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_i1_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_i1_0";}
#endif
};

class rolI_rReg_i8Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_i8_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_i8Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_i8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_i8";}
#endif
};

class rolI_rReg_i8_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_i8_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_i8_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_i8_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_i8_0";}
#endif
};

class rolI_rReg_Var_C0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_Var_C0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_Var_C0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_Var_C0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_Var_C0";}
#endif
};

class rolI_rReg_Var_C0_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_Var_C0_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_Var_C0_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_Var_C0_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_Var_C0_0";}
#endif
};

class rolI_rReg_Var_C32Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_Var_C32_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_Var_C32Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_Var_C32Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_Var_C32";}
#endif
};

class rolI_rReg_Var_C32_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolI_rReg_Var_C32_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolI_rReg_Var_C32_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolI_rReg_Var_C32_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolI_rReg_Var_C32_0";}
#endif
};

class rorI_rReg_imm1Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_imm1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_imm1Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_imm1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_imm1";}
#endif
};

class rorI_rReg_imm8Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_imm8_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_imm8Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_imm8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_imm8";}
#endif
};

class rorI_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_CL";}
#endif
};

class rorI_rReg_i1Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_i1_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_i1Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_i1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_i1";}
#endif
};

class rorI_rReg_i1_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_i1_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_i1_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_i1_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_i1_0";}
#endif
};

class rorI_rReg_i8Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_i8_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_i8Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_i8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_i8";}
#endif
};

class rorI_rReg_i8_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_i8_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_i8_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_i8_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_i8_0";}
#endif
};

class rorI_rReg_Var_C0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_Var_C0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_Var_C0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_Var_C0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_Var_C0";}
#endif
};

class rorI_rReg_Var_C0_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_Var_C0_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_Var_C0_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_Var_C0_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_Var_C0_0";}
#endif
};

class rorI_rReg_Var_C32Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_Var_C32_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_Var_C32Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_Var_C32Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_Var_C32";}
#endif
};

class rorI_rReg_Var_C32_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorI_rReg_Var_C32_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorI_rReg_Var_C32_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorI_rReg_Var_C32_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorI_rReg_Var_C32_0";}
#endif
};

class rolL_rReg_imm1Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_imm1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_imm1Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_imm1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_imm1";}
#endif
};

class rolL_rReg_imm8Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_imm8_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_imm8Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_imm8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_imm8";}
#endif
};

class rolL_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_CL";}
#endif
};

class rolL_rReg_i1Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_i1_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_i1Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_i1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_i1";}
#endif
};

class rolL_rReg_i1_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_i1_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_i1_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_i1_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_i1_0";}
#endif
};

class rolL_rReg_i8Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_i8_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_i8Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_i8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_i8";}
#endif
};

class rolL_rReg_i8_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_i8_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_i8_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_i8_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_i8_0";}
#endif
};

class rolL_rReg_Var_C0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_Var_C0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_Var_C0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_Var_C0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_Var_C0";}
#endif
};

class rolL_rReg_Var_C0_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_Var_C0_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_Var_C0_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_Var_C0_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_Var_C0_0";}
#endif
};

class rolL_rReg_Var_C64Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_Var_C64_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_Var_C64Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_Var_C64Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_Var_C64";}
#endif
};

class rolL_rReg_Var_C64_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rolL_rReg_Var_C64_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rolL_rReg_Var_C64_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rolL_rReg_Var_C64_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rolL_rReg_Var_C64_0";}
#endif
};

class rorL_rReg_imm1Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_imm1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_imm1Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_imm1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_imm1";}
#endif
};

class rorL_rReg_imm8Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_imm8_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_imm8Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_imm8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_imm8";}
#endif
};

class rorL_rReg_CLNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_CL_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_CLNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_CLNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_CL";}
#endif
};

class rorL_rReg_i1Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_i1_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_i1Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_i1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_i1";}
#endif
};

class rorL_rReg_i1_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_i1_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_i1_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_i1_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_i1_0";}
#endif
};

class rorL_rReg_i8Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_i8_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_i8Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_i8Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_i8";}
#endif
};

class rorL_rReg_i8_0Node : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_i8_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_i8_0Node() {  _num_opnds = 5; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_i8_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_i8_0";}
#endif
};

class rorL_rReg_Var_C0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_Var_C0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_Var_C0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_Var_C0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_Var_C0";}
#endif
};

class rorL_rReg_Var_C0_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_Var_C0_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_Var_C0_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_Var_C0_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_Var_C0_0";}
#endif
};

class rorL_rReg_Var_C64Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_Var_C64_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_Var_C64Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_Var_C64Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_Var_C64";}
#endif
};

class rorL_rReg_Var_C64_0Node : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rorL_rReg_Var_C64_0_rule; }
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  rorL_rReg_Var_C64_0Node() {  _num_opnds = 6; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rorL_rReg_Var_C64_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rorL_rReg_Var_C64_0";}
#endif
};

class andI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  andI_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_rReg";}
#endif
};

class andI_rReg_imm255Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_rReg_imm255_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  andI_rReg_imm255Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI_rReg_imm255Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_rReg_imm255";}
#endif
};

class andI2L_rReg_imm255Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI2L_rReg_imm255_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  andI2L_rReg_imm255Node() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI2L_rReg_imm255Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI2L_rReg_imm255";}
#endif
};

class andI_rReg_imm65535Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_rReg_imm65535_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  andI_rReg_imm65535Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI_rReg_imm65535Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_rReg_imm65535";}
#endif
};

class andI2L_rReg_imm65535Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI2L_rReg_imm65535_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  andI2L_rReg_imm65535Node() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI2L_rReg_imm65535Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI2L_rReg_imm65535";}
#endif
};

class andI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  andI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_rReg_imm";}
#endif
};

class andI_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andI_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(andI_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_rReg_mem";}
#endif
};

class andI_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andI_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(andI_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_rReg_mem_0";}
#endif
};

class andI_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andI_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_mem_rReg";}
#endif
};

class andI_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andI_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_mem_rReg_0";}
#endif
};

class andI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andI_mem_imm";}
#endif
};

class orI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  orI_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orI_rReg";}
#endif
};

class orI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  orI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orI_rReg_imm";}
#endif
};

class orI_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orI_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orI_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(orI_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orI_rReg_mem";}
#endif
};

class orI_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orI_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orI_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(orI_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orI_rReg_mem_0";}
#endif
};

class orI_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orI_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orI_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orI_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orI_mem_rReg";}
#endif
};

class orI_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orI_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orI_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orI_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orI_mem_rReg_0";}
#endif
};

class orI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orI_mem_imm";}
#endif
};

class xorI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  xorI_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_rReg";}
#endif
};

class xorI_rReg_im1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_rReg_im1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  xorI_rReg_im1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorI_rReg_im1Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_rReg_im1";}
#endif
};

class xorI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  xorI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorI_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_rReg_imm";}
#endif
};

class xorI_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorI_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(xorI_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_rReg_mem";}
#endif
};

class xorI_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorI_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(xorI_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_rReg_mem_0";}
#endif
};

class xorI_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorI_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorI_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_mem_rReg";}
#endif
};

class xorI_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorI_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorI_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_mem_rReg_0";}
#endif
};

class xorI_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorI_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorI_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorI_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorI_mem_imm";}
#endif
};

class andL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  andL_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_rReg";}
#endif
};

class andL_rReg_imm255Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_rReg_imm255_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  andL_rReg_imm255Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andL_rReg_imm255Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_rReg_imm255";}
#endif
};

class andL_rReg_imm65535Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_rReg_imm65535_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  andL_rReg_imm65535Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andL_rReg_imm65535Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_rReg_imm65535";}
#endif
};

class andL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  andL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_rReg_imm";}
#endif
};

class andL_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andL_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(andL_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_rReg_mem";}
#endif
};

class andL_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andL_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(andL_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_rReg_mem_0";}
#endif
};

class andL_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andL_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andL_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_mem_rReg";}
#endif
};

class andL_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andL_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andL_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_mem_rReg_0";}
#endif
};

class andL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return andL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  andL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(andL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "andL_mem_imm";}
#endif
};

class orL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  orL_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_rReg";}
#endif
};

class orL_rReg_castP2XNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_rReg_castP2X_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  orL_rReg_castP2XNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orL_rReg_castP2XNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_rReg_castP2X";}
#endif
};

class orL_rReg_castP2X_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_rReg_castP2X_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
public:
  orL_rReg_castP2X_0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orL_rReg_castP2X_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_rReg_castP2X_0";}
#endif
};

class orL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  orL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_rReg_imm";}
#endif
};

class orL_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orL_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(orL_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_rReg_mem";}
#endif
};

class orL_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_OrL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orL_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(orL_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_rReg_mem_0";}
#endif
};

class orL_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orL_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orL_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_mem_rReg";}
#endif
};

class orL_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orL_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orL_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_mem_rReg_0";}
#endif
};

class orL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return orL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  orL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(orL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "orL_mem_imm";}
#endif
};

class xorL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  xorL_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorL_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_rReg";}
#endif
};

class xorL_rReg_im1Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_rReg_im1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  xorL_rReg_im1Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorL_rReg_im1Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_rReg_im1";}
#endif
};

class xorL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  xorL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorL_rReg_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_rReg_imm";}
#endif
};

class xorL_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorL; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorL_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(xorL_rReg_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_rReg_mem";}
#endif
};

class xorL_rReg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_rReg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_XorL; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorL_rReg_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(xorL_rReg_mem_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_rReg_mem_0";}
#endif
};

class xorL_mem_rRegNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorL_mem_rRegNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorL_mem_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_mem_rReg";}
#endif
};

class xorL_mem_rReg_0Node : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_mem_rReg_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorL_mem_rReg_0Node() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorL_mem_rReg_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_mem_rReg_0";}
#endif
};

class xorL_mem_immNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return xorL_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StoreL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  xorL_mem_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(xorL_mem_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "xorL_mem_imm";}
#endif
};

class convI2BNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2B_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Conv2B; }
public:
  convI2BNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convI2BNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2B";}
#endif
};

class convP2BNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convP2B_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Conv2B; }
public:
  convP2BNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convP2BNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convP2B";}
#endif
};

class cmpLTMaskNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpLTMask_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpLTMask; }
public:
  cmpLTMaskNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpLTMaskNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpLTMask";}
#endif
};

class cmpLTMask0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpLTMask0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpLTMask; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  cmpLTMask0Node() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpLTMask0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpLTMask0";}
#endif
};

class cadd_cmpLTMaskNode : public MachNode { 
private:
  MachOper *_opnd_array[7];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cadd_cmpLTMask_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  cadd_cmpLTMaskNode() {  _num_opnds = 7; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cadd_cmpLTMaskNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cadd_cmpLTMask";}
#endif
};

class cadd_cmpLTMask_1Node : public MachNode { 
private:
  MachOper *_opnd_array[7];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cadd_cmpLTMask_1_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  cadd_cmpLTMask_1Node() {  _num_opnds = 7; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cadd_cmpLTMask_1Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cadd_cmpLTMask_1";}
#endif
};

class cadd_cmpLTMask_0Node : public MachNode { 
private:
  MachOper *_opnd_array[7];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cadd_cmpLTMask_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
public:
  cadd_cmpLTMask_0Node() {  _num_opnds = 7; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cadd_cmpLTMask_0Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cadd_cmpLTMask_0";}
#endif
};

class cadd_cmpLTMask_2Node : public MachNode { 
private:
  MachOper *_opnd_array[7];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cadd_cmpLTMask_2_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  cadd_cmpLTMask_2Node() {  _num_opnds = 7; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cadd_cmpLTMask_2Node); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cadd_cmpLTMask_2";}
#endif
};

class cmpF_cc_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_cc_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmpF_cc_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpF_cc_regNode); }
  // Rematerialize cmpF_cc_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_cc_reg";}
#endif
};

class cmpF_cc_reg_CFNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_cc_reg_CF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmpF_cc_reg_CFNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpF_cc_reg_CFNode); }
  // Rematerialize cmpF_cc_reg_CF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_cc_reg_CF";}
#endif
};

class cmpF_cc_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_cc_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmpF_cc_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmpF_cc_memNode); }
  // Rematerialize cmpF_cc_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_cc_mem";}
#endif
};

class cmpF_cc_memCFNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_cc_memCF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmpF_cc_memCFNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmpF_cc_memCFNode); }
  // Rematerialize cmpF_cc_memCF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_cc_memCF";}
#endif
};

class cmpF_cc_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_cc_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  cmpF_cc_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpF_cc_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  // Rematerialize cmpF_cc_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_cc_imm";}
#endif
};

class cmpF_cc_immCFNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_cc_immCF_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  cmpF_cc_immCFNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpF_cc_immCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  // Rematerialize cmpF_cc_immCF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_cc_immCF";}
#endif
};

class cmpD_cc_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_cc_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmpD_cc_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpD_cc_regNode); }
  // Rematerialize cmpD_cc_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_cc_reg";}
#endif
};

class cmpD_cc_reg_CFNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_cc_reg_CF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmpD_cc_reg_CFNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpD_cc_reg_CFNode); }
  // Rematerialize cmpD_cc_reg_CF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_cc_reg_CF";}
#endif
};

class cmpD_cc_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_cc_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmpD_cc_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmpD_cc_memNode); }
  // Rematerialize cmpD_cc_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_cc_mem";}
#endif
};

class cmpD_cc_memCFNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_cc_memCF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmpD_cc_memCFNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmpD_cc_memCFNode); }
  // Rematerialize cmpD_cc_memCF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_cc_memCF";}
#endif
};

class cmpD_cc_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_cc_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  cmpD_cc_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpD_cc_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  // Rematerialize cmpD_cc_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_cc_imm";}
#endif
};

class cmpD_cc_immCFNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_cc_immCF_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  cmpD_cc_immCFNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpD_cc_immCFNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  // Rematerialize cmpD_cc_immCF
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_cc_immCF";}
#endif
};

class cmpF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF3; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmpF_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpF_regNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_reg";}
#endif
};

class cmpF_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF3; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmpF_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmpF_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_mem";}
#endif
};

class cmpF_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpF_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpF3; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  cmpF_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpF_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpF_imm";}
#endif
};

class cmpD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD3; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  cmpD_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpD_regNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_reg";}
#endif
};

class cmpD_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD3; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  cmpD_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(cmpD_memNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_mem";}
#endif
};

class cmpD_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpD_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpD3; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  cmpD_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpD_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpD_imm";}
#endif
};

class addF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  addF_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addF_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addF_reg";}
#endif
};

class addF_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addF_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addF_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addF_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addF_mem";}
#endif
};

class addF_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addF_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddF; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addF_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addF_mem_0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addF_mem_0";}
#endif
};

class addF_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addF_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  addF_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addF_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addF_imm";}
#endif
};

class addD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  addD_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addD_reg";}
#endif
};

class addD_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addD_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addD_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addD_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addD_mem";}
#endif
};

class addD_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addD_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddD; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  addD_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(addD_mem_0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addD_mem_0";}
#endif
};

class addD_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return addD_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AddD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  addD_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(addD_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "addD_imm";}
#endif
};

class subF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  subF_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subF_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subF_reg";}
#endif
};

class subF_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subF_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subF_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(subF_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subF_mem";}
#endif
};

class subF_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subF_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  subF_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subF_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subF_imm";}
#endif
};

class subD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  subD_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subD_reg";}
#endif
};

class subD_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subD_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  subD_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(subD_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subD_mem";}
#endif
};

class subD_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return subD_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SubD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  subD_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(subD_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "subD_imm";}
#endif
};

class mulF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  mulF_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulF_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulF_reg";}
#endif
};

class mulF_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulF_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulF_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulF_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulF_mem";}
#endif
};

class mulF_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulF_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulF; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulF_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulF_mem_0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulF_mem_0";}
#endif
};

class mulF_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulF_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  mulF_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulF_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulF_imm";}
#endif
};

class mulD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  mulD_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulD_reg";}
#endif
};

class mulD_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulD_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulD_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulD_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulD_mem";}
#endif
};

class mulD_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulD_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulD; }
  virtual uint           two_adr() const  { return oper_input_base() + opnd_array(1)->num_edges(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  mulD_mem_0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(mulD_mem_0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulD_mem_0";}
#endif
};

class mulD_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return mulD_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MulD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  mulD_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(mulD_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "mulD_imm";}
#endif
};

class divF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  divF_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divF_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divF_reg";}
#endif
};

class divF_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divF_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  divF_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(divF_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divF_mem";}
#endif
};

class divF_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divF_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  divF_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divF_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divF_imm";}
#endif
};

class divD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  divD_regNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divD_reg";}
#endif
};

class divD_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divD_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  divD_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(divD_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divD_mem";}
#endif
};

class divD_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return divD_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_DivD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  divD_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(divD_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "divD_imm";}
#endif
};

class sqrtF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sqrtF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvD2F; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  sqrtF_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sqrtF_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sqrtF_reg";}
#endif
};

class sqrtF_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sqrtF_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvD2F; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sqrtF_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(sqrtF_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sqrtF_mem";}
#endif
};

class sqrtF_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sqrtF_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvD2F; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  sqrtF_immNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sqrtF_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sqrtF_imm";}
#endif
};

class sqrtD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sqrtD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SqrtD; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  sqrtD_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sqrtD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sqrtD_reg";}
#endif
};

class sqrtD_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sqrtD_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SqrtD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  sqrtD_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(sqrtD_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sqrtD_mem";}
#endif
};

class sqrtD_immNode : public MachConstantNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sqrtD_imm_rule; }
  virtual void           eval_constant(Compile* C);
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SqrtD; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  sqrtD_immNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sqrtD_immNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sqrtD_imm";}
#endif
};

class absF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return absF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AbsF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  absF_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(absF_regNode); }
  // Rematerialize absF_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "absF_reg";}
#endif
};

class absD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return absD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AbsD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  absD_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(absD_regNode); }
  // Rematerialize absD_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "absD_reg";}
#endif
};

class negF_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return negF_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_NegF; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  negF_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(negF_regNode); }
  // Rematerialize negF_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "negF_reg";}
#endif
};

class negD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return negD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_NegD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  negD_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(negD_regNode); }
  // Rematerialize negD_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "negD_reg";}
#endif
};

class cosD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cosD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CosD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  cosD_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cosD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cosD_reg";}
#endif
};

class sinD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return sinD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SinD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  sinD_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(sinD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "sinD_reg";}
#endif
};

class tanD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return tanD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_TanD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  tanD_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(tanD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "tanD_reg";}
#endif
};

class log10D_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return log10D_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Log10D; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  log10D_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(log10D_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "log10D_reg";}
#endif
};

class logD_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return logD_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_LogD; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  logD_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(logD_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "logD_reg";}
#endif
};

class roundFloat_nopNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return roundFloat_nop_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RoundFloat; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  roundFloat_nopNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(roundFloat_nopNode); }
  // Rematerialize roundFloat_nop
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "roundFloat_nop";}
#endif
};

class roundDouble_nopNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return roundDouble_nop_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_RoundDouble; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  roundDouble_nopNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(roundDouble_nopNode); }
  // Rematerialize roundDouble_nop
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "roundDouble_nop";}
#endif
};

class convF2D_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convF2D_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvF2D; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  convF2D_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convF2D_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convF2D_reg_reg";}
#endif
};

class convF2D_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convF2D_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvF2D; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  convF2D_reg_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(convF2D_reg_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convF2D_reg_mem";}
#endif
};

class convD2F_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convD2F_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvD2F; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  convD2F_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convD2F_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convD2F_reg_reg";}
#endif
};

class convD2F_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convD2F_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvD2F; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  convD2F_reg_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(convD2F_reg_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convD2F_reg_mem";}
#endif
};

class convF2I_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convF2I_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvF2I; }
public:
  convF2I_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convF2I_reg_regNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convF2I_reg_reg";}
#endif
};

class convF2L_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convF2L_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvF2L; }
public:
  convF2L_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convF2L_reg_regNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convF2L_reg_reg";}
#endif
};

class convD2I_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convD2I_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvD2I; }
public:
  convD2I_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convD2I_reg_regNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convD2I_reg_reg";}
#endif
};

class convD2L_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convD2L_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvD2L; }
public:
  convD2L_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convD2L_reg_regNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convD2L_reg_reg";}
#endif
};

class convI2F_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2F_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2F; }
public:
  convI2F_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convI2F_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2F_reg_reg";}
#endif
};

class convI2F_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2F_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2F; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  convI2F_reg_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(convI2F_reg_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2F_reg_mem";}
#endif
};

class convI2D_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2D_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2D; }
public:
  convI2D_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convI2D_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2D_reg_reg";}
#endif
};

class convI2D_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2D_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2D; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  convI2D_reg_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(convI2D_reg_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2D_reg_mem";}
#endif
};

class convXI2F_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convXI2F_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2F; }
public:
  convXI2F_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convXI2F_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convXI2F_reg";}
#endif
};

class convXI2D_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convXI2D_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2D; }
public:
  convXI2D_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convXI2D_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convXI2D_reg";}
#endif
};

class convL2F_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convL2F_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvL2F; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  convL2F_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convL2F_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convL2F_reg_reg";}
#endif
};

class convL2F_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convL2F_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvL2F; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  convL2F_reg_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(convL2F_reg_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convL2F_reg_mem";}
#endif
};

class convL2D_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convL2D_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvL2D; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  convL2D_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convL2D_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convL2D_reg_reg";}
#endif
};

class convL2D_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convL2D_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvL2D; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  convL2D_reg_memNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(convL2D_reg_memNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convL2D_reg_mem";}
#endif
};

class convI2L_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2L_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvI2L; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  convI2L_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convI2L_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2L_reg_reg";}
#endif
};

class convI2L_reg_reg_zexNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2L_reg_reg_zex_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  convI2L_reg_reg_zexNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convI2L_reg_reg_zexNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2L_reg_reg_zex";}
#endif
};

class convI2L_reg_mem_zexNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convI2L_reg_mem_zex_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  convI2L_reg_mem_zexNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(convI2L_reg_mem_zexNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convI2L_reg_mem_zex";}
#endif
};

class zerox_long_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return zerox_long_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AndL; }
public:
  zerox_long_reg_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(zerox_long_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "zerox_long_reg_reg";}
#endif
};

class convL2I_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return convL2I_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ConvL2I; }
public:
  convL2I_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(convL2I_reg_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "convL2I_reg_reg";}
#endif
};

class MoveF2I_stack_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveF2I_stack_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveF2I; }
public:
  MoveF2I_stack_regNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(MoveF2I_stack_regNode); }
  // Rematerialize MoveF2I_stack_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveF2I_stack_reg";}
#endif
};

class MoveI2F_stack_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveI2F_stack_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveI2F; }
public:
  MoveI2F_stack_regNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(MoveI2F_stack_regNode); }
  // Rematerialize MoveI2F_stack_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveI2F_stack_reg";}
#endif
};

class MoveD2L_stack_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveD2L_stack_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveD2L; }
public:
  MoveD2L_stack_regNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(MoveD2L_stack_regNode); }
  // Rematerialize MoveD2L_stack_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveD2L_stack_reg";}
#endif
};

class MoveL2D_stack_reg_partialNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveL2D_stack_reg_partial_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveL2D; }
public:
  MoveL2D_stack_reg_partialNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(MoveL2D_stack_reg_partialNode); }
  // Rematerialize MoveL2D_stack_reg_partial
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveL2D_stack_reg_partial";}
#endif
};

class MoveL2D_stack_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveL2D_stack_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveL2D; }
public:
  MoveL2D_stack_regNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(MoveL2D_stack_regNode); }
  // Rematerialize MoveL2D_stack_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveL2D_stack_reg";}
#endif
};

class MoveF2I_reg_stackNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveF2I_reg_stack_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveF2I; }
public:
  MoveF2I_reg_stackNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveF2I_reg_stackNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveF2I_reg_stack";}
#endif
};

class MoveI2F_reg_stackNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveI2F_reg_stack_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveI2F; }
public:
  MoveI2F_reg_stackNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveI2F_reg_stackNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveI2F_reg_stack";}
#endif
};

class MoveD2L_reg_stackNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveD2L_reg_stack_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveD2L; }
public:
  MoveD2L_reg_stackNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveD2L_reg_stackNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveD2L_reg_stack";}
#endif
};

class MoveL2D_reg_stackNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveL2D_reg_stack_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveL2D; }
public:
  MoveL2D_reg_stackNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveL2D_reg_stackNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveL2D_reg_stack";}
#endif
};

class MoveF2I_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveF2I_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveF2I; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  MoveF2I_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveF2I_reg_regNode); }
  // Rematerialize MoveF2I_reg_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveF2I_reg_reg";}
#endif
};

class MoveD2L_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveD2L_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveD2L; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  MoveD2L_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveD2L_reg_regNode); }
  // Rematerialize MoveD2L_reg_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveD2L_reg_reg";}
#endif
};

class MoveI2F_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveI2F_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveI2F; }
  virtual int            cisc_operand() const { return 1; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  MoveI2F_reg_regNode() { _cisc_RegMask = NULL;  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveI2F_reg_regNode); }
  // Rematerialize MoveI2F_reg_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveI2F_reg_reg";}
#endif
};

class MoveL2D_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return MoveL2D_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_MoveL2D; }
public:
  MoveL2D_reg_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(MoveL2D_reg_regNode); }
  // Rematerialize MoveL2D_reg_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "MoveL2D_reg_reg";}
#endif
};

class Repl8B_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl8B_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate8B; }
public:
  Repl8B_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl8B_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl8B_reg";}
#endif
};

class Repl8B_rRegINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl8B_rRegI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate8B; }
public:
  Repl8B_rRegINode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl8B_rRegINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl8B_rRegI";}
#endif
};

class Repl8B_immI0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl8B_immI0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate8B; }
public:
  Repl8B_immI0Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl8B_immI0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl8B_immI0";}
#endif
};

class Repl4S_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl4S_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate4S; }
public:
  Repl4S_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl4S_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl4S_reg";}
#endif
};

class Repl4S_rRegINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl4S_rRegI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate4S; }
public:
  Repl4S_rRegINode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl4S_rRegINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl4S_rRegI";}
#endif
};

class Repl4S_immI0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl4S_immI0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate4S; }
public:
  Repl4S_immI0Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl4S_immI0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl4S_immI0";}
#endif
};

class Repl4C_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl4C_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate4C; }
public:
  Repl4C_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl4C_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl4C_reg";}
#endif
};

class Repl4C_rRegINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl4C_rRegI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate4C; }
public:
  Repl4C_rRegINode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl4C_rRegINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl4C_rRegI";}
#endif
};

class Repl4C_immI0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl4C_immI0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate4C; }
public:
  Repl4C_immI0Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl4C_immI0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl4C_immI0";}
#endif
};

class Repl2I_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl2I_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate2I; }
public:
  Repl2I_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl2I_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl2I_reg";}
#endif
};

class Repl2I_rRegINode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl2I_rRegI_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate2I; }
public:
  Repl2I_rRegINode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl2I_rRegINode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl2I_rRegI";}
#endif
};

class Repl2I_immI0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl2I_immI0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate2I; }
public:
  Repl2I_immI0Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl2I_immI0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl2I_immI0";}
#endif
};

class Repl2F_regNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl2F_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate2F; }
public:
  Repl2F_regNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl2F_regNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl2F_reg";}
#endif
};

class Repl2F_regFNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl2F_regF_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate2F; }
public:
  Repl2F_regFNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl2F_regFNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl2F_regF";}
#endif
};

class Repl2F_immF0Node : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Repl2F_immF0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Replicate2F; }
  virtual int            reloc()   const;
public:
  Repl2F_immF0Node() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(Repl2F_immF0Node); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Repl2F_immF0";}
#endif
};

class rep_stosNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return rep_stos_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ClearArray; }
  virtual uint           oper_input_base() const { return 2; }
public:
  rep_stosNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(rep_stosNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "rep_stos";}
#endif
};

class string_compareNode : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return string_compare_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StrComp; }
  virtual uint           oper_input_base() const { return 2; }
public:
  string_compareNode() {  _num_opnds = 6; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(string_compareNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "string_compare";}
#endif
};

class string_indexof_conNode : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return string_indexof_con_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StrIndexOf; }
  virtual uint           oper_input_base() const { return 2; }
public:
  string_indexof_conNode() {  _num_opnds = 6; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(string_indexof_conNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "string_indexof_con";}
#endif
};

class string_indexofNode : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return string_indexof_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StrIndexOf; }
  virtual uint           oper_input_base() const { return 2; }
public:
  string_indexofNode() {  _num_opnds = 6; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(string_indexofNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "string_indexof";}
#endif
};

class string_equalsNode : public MachNode { 
private:
  MachOper *_opnd_array[6];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return string_equals_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_StrEquals; }
  virtual uint           oper_input_base() const { return 2; }
public:
  string_equalsNode() {  _num_opnds = 6; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(string_equalsNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "string_equals";}
#endif
};

class array_equalsNode : public MachNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return array_equals_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_AryEq; }
  virtual uint           oper_input_base() const { return 2; }
public:
  array_equalsNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(array_equalsNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "array_equals";}
#endif
};

class compI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compI_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpI; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  compI_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compI_rRegNode); }
  // Rematerialize compI_rReg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compI_rReg";}
#endif
};

class compI_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compI_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpI; }
public:
  compI_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compI_rReg_immNode); }
  // Rematerialize compI_rReg_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compI_rReg_imm";}
#endif
};

class compI_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compI_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compI_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compI_rReg_memNode); }
  // Rematerialize compI_rReg_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compI_rReg_mem";}
#endif
};

class testI_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testI_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpI; }
public:
  testI_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(testI_regNode); }
  // Rematerialize testI_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testI_reg";}
#endif
};

class testI_reg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testI_reg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpI; }
public:
  testI_reg_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(testI_reg_immNode); }
  // Rematerialize testI_reg_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testI_reg_imm";}
#endif
};

class testI_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testI_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testI_reg_memNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testI_reg_memNode); }
  // Rematerialize testI_reg_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testI_reg_mem";}
#endif
};

class testI_reg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testI_reg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpI; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testI_reg_mem_0Node() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testI_reg_mem_0Node); }
  // Rematerialize testI_reg_mem_0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testI_reg_mem_0";}
#endif
};

class compU_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compU_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpU; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  compU_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compU_rRegNode); }
  // Rematerialize compU_rReg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compU_rReg";}
#endif
};

class compU_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compU_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpU; }
public:
  compU_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compU_rReg_immNode); }
  // Rematerialize compU_rReg_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compU_rReg_imm";}
#endif
};

class compU_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compU_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpU; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compU_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compU_rReg_memNode); }
  // Rematerialize compU_rReg_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compU_rReg_mem";}
#endif
};

class testU_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testU_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpU; }
public:
  testU_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(testU_regNode); }
  // Rematerialize testU_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testU_reg";}
#endif
};

class compP_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compP_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpP; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  compP_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compP_rRegNode); }
  // Rematerialize compP_rReg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compP_rReg";}
#endif
};

class compP_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compP_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compP_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compP_rReg_memNode); }
  // Rematerialize compP_rReg_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compP_rReg_mem";}
#endif
};

class compP_mem_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compP_mem_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compP_mem_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compP_mem_rRegNode); }
  // Rematerialize compP_mem_rReg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compP_mem_rReg";}
#endif
};

class testP_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testP_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpP; }
  virtual int            reloc()   const;
public:
  testP_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(testP_regNode); }
  // Rematerialize testP_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testP_reg";}
#endif
};

class testP_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testP_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testP_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testP_memNode); }
  // Rematerialize testP_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testP_mem";}
#endif
};

class testP_mem_reg0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testP_mem_reg0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testP_mem_reg0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testP_mem_reg0Node); }
  // Rematerialize testP_mem_reg0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testP_mem_reg0";}
#endif
};

class compN_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compN_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpN; }
public:
  compN_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compN_rRegNode); }
  // Rematerialize compN_rReg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compN_rReg";}
#endif
};

class compN_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compN_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compN_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compN_rReg_memNode); }
  // Rematerialize compN_rReg_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compN_rReg_mem";}
#endif
};

class compN_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compN_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpN; }
public:
  compN_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compN_rReg_immNode); }
  // Rematerialize compN_rReg_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compN_rReg_imm";}
#endif
};

class compN_mem_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compN_mem_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compN_mem_immNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compN_mem_immNode); }
  // Rematerialize compN_mem_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compN_mem_imm";}
#endif
};

class testN_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testN_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpN; }
public:
  testN_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(testN_regNode); }
  // Rematerialize testN_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testN_reg";}
#endif
};

class testN_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testN_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testN_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testN_memNode); }
  // Rematerialize testN_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testN_mem";}
#endif
};

class testN_mem_reg0Node : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testN_mem_reg0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpN; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testN_mem_reg0Node() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testN_mem_reg0Node); }
  // Rematerialize testN_mem_reg0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testN_mem_reg0";}
#endif
};

class compL_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  const RegMask  *_cisc_RegMask;
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compL_rReg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL; }
  virtual int            cisc_operand() const { return 2; }
  virtual MachNode      *cisc_version(int offset, Compile* C);
  virtual void           use_cisc_RegMask();
  virtual const RegMask *cisc_RegMask() const { return _cisc_RegMask; }
public:
  compL_rRegNode() { _cisc_RegMask = NULL;  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compL_rRegNode); }
  // Rematerialize compL_rReg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compL_rReg";}
#endif
};

class compL_rReg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compL_rReg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL; }
public:
  compL_rReg_immNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(compL_rReg_immNode); }
  // Rematerialize compL_rReg_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compL_rReg_imm";}
#endif
};

class compL_rReg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return compL_rReg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  compL_rReg_memNode() {  _num_opnds = 3; _opnds = _opnd_array; init_flags(Flag_is_cisc_alternate | Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(compL_rReg_memNode); }
  // Rematerialize compL_rReg_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "compL_rReg_mem";}
#endif
};

class testL_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testL_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL; }
public:
  testL_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(testL_regNode); }
  // Rematerialize testL_reg
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testL_reg";}
#endif
};

class testL_reg_immNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testL_reg_imm_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL; }
public:
  testL_reg_immNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(testL_reg_immNode); }
  // Rematerialize testL_reg_imm
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testL_reg_imm";}
#endif
};

class testL_reg_memNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testL_reg_mem_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testL_reg_memNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testL_reg_memNode); }
  // Rematerialize testL_reg_mem
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testL_reg_mem";}
#endif
};

class testL_reg_mem_0Node : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return testL_reg_mem_0_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 2; }
public:
  testL_reg_mem_0Node() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_needs_anti_dependence_check); }
  virtual uint           size_of() const { return sizeof(testL_reg_mem_0Node); }
  // Rematerialize testL_reg_mem_0
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  virtual const MachOper *memory_operand() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "testL_reg_mem_0";}
#endif
};

class cmpL3_reg_regNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpL3_reg_reg_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpL3; }
public:
  cmpL3_reg_regNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmpL3_reg_regNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpL3_reg_reg";}
#endif
};

class cmovI_reg_gNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_reg_g_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  cmovI_reg_gNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovI_reg_gNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_reg_g";}
#endif
};

class minI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return minI_rReg_rule; }
  virtual int            ideal_Opcode() const { return Op_MinI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  minI_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(minI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "minI_rReg";}
#endif
};

class cmovI_reg_lNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmovI_reg_l_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  cmovI_reg_lNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(cmovI_reg_lNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmovI_reg_l";}
#endif
};

class maxI_rRegNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return maxI_rReg_rule; }
  virtual int            ideal_Opcode() const { return Op_MaxI; }
  virtual uint           two_adr() const  { return oper_input_base(); }
public:
  maxI_rRegNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(maxI_rRegNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "maxI_rReg";}
#endif
};

class jmpDirNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpDir_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Goto; }
public:
  jmpDirNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Goto | Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpDirNode); }
  virtual bool           pinned() const { return true; }
  virtual const Node *is_block_proj() const { return this; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpDir";}
#endif
};

class jmpConNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpCon_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpConNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpConNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpCon";}
#endif
};

class jmpLoopEndNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpLoopEnd_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountedLoopEnd; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpLoopEndNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpLoopEndNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpLoopEnd";}
#endif
};

class jmpLoopEndUNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpLoopEndU_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountedLoopEnd; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpLoopEndUNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpLoopEndUNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpLoopEndU";}
#endif
};

class jmpLoopEndUCFNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpLoopEndUCF_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountedLoopEnd; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpLoopEndUCFNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpLoopEndUCFNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpLoopEndUCF";}
#endif
};

class jmpConUNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpConU_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpConUNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpConUNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpConU";}
#endif
};

class jmpConUCFNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpConUCF_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpConUCFNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpConUCFNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpConUCF";}
#endif
};

class jmpConUCF2Node : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpConUCF2_rule; }
  virtual void           label_set( Label& label, uint block_num );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpConUCF2Node() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative | Flag_may_be_short_branch); }
  virtual uint           size_of() const { return sizeof(jmpConUCF2Node); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  virtual MachNode      *short_branch_version(Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpConUCF2";}
#endif
};

class partialSubtypeCheckNode : public MachNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return partialSubtypeCheck_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_PartialSubtypeCheck; }
public:
  partialSubtypeCheckNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(partialSubtypeCheckNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "partialSubtypeCheck";}
#endif
};

class partialSubtypeCheck_vs_ZeroNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return partialSubtypeCheck_vs_Zero_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CmpP; }
  virtual int            reloc()   const;
public:
  partialSubtypeCheck_vs_ZeroNode() {  _num_opnds = 4; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(partialSubtypeCheck_vs_ZeroNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize partialSubtypeCheck_vs_Zero
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "partialSubtypeCheck_vs_Zero";}
#endif
};

class jmpDir_shortNode : public MachNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpDir_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Goto; }
public:
  jmpDir_shortNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_Goto | Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpDir_shortNode); }
  virtual bool           pinned() const { return true; }
  virtual const Node *is_block_proj() const { return this; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpDir_short";}
#endif
};

class jmpCon_shortNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpCon_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpCon_shortNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpCon_shortNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpCon_short";}
#endif
};

class jmpLoopEnd_shortNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpLoopEnd_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountedLoopEnd; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpLoopEnd_shortNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpLoopEnd_shortNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpLoopEnd_short";}
#endif
};

class jmpLoopEndU_shortNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpLoopEndU_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountedLoopEnd; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpLoopEndU_shortNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpLoopEndU_shortNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpLoopEndU_short";}
#endif
};

class jmpLoopEndUCF_shortNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpLoopEndUCF_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CountedLoopEnd; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpLoopEndUCF_shortNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpLoopEndUCF_shortNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpLoopEndUCF_short";}
#endif
};

class jmpConU_shortNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpConU_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpConU_shortNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpConU_shortNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpConU_short";}
#endif
};

class jmpConUCF_shortNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpConUCF_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpConUCF_shortNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpConUCF_shortNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpConUCF_short";}
#endif
};

class jmpConUCF2_shortNode : public MachIfNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return jmpConUCF2_short_rule; }
  virtual void           label_set( Label& label, uint block_num );
  int             ins_short_branch() const { return 1; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_If; }
  virtual void           negate() { 
    opnd_array(1)->negate();
    _prob = 1.0f - _prob;
  };
  virtual uint           oper_input_base() const { return 1; }
public:
  jmpConUCF2_shortNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_Branch | Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(jmpConUCF2_shortNode); }
  virtual bool           pinned() const { return true; }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeTuple::IFBOTH; } // matched IfNode
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "jmpConUCF2_short";}
#endif
};

class cmpFastLockNode : public MachFastLockNode { 
private:
  MachOper *_opnd_array[5];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpFastLock_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_FastLock; }
  virtual uint           oper_input_base() const { return 1; }
public:
  cmpFastLockNode() {  _num_opnds = 5; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(cmpFastLockNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize cmpFastLock
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpFastLock";}
#endif
};

class cmpFastUnlockNode : public MachNode { 
private:
  MachOper *_opnd_array[4];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return cmpFastUnlock_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_FastUnlock; }
public:
  cmpFastUnlockNode() {  _num_opnds = 4; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(cmpFastUnlockNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize cmpFastUnlock
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "cmpFastUnlock";}
#endif
};

class safePoint_pollNode : public MachSafePointNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return safePoint_poll_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SafePoint; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 5; }
public:
  safePoint_pollNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(safePoint_pollNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  // Rematerialize safePoint_poll
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "safePoint_poll";}
#endif
};

class safePoint_poll_farNode : public MachSafePointNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return safePoint_poll_far_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_SafePoint; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 5; }
public:
  safePoint_poll_farNode() {  _num_opnds = 2; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(safePoint_poll_farNode); }
  virtual MachNode      *Expand(State *state, Node_List &proj_list, Node* mem);
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "safePoint_poll_far";}
#endif
};

class CallStaticJavaDirectNode : public MachCallStaticJavaNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return CallStaticJavaDirect_rule; }
  virtual void           method_set( intptr_t method );
  int             ins_alignment() const { return 4; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CallStaticJava; }
  virtual int            reloc()   const;
  virtual int            alignment_required()   const { return 4; }
  virtual int            compute_padding(int current_offset)   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  CallStaticJavaDirectNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(CallStaticJavaDirectNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "CallStaticJavaDirect";}
#endif
};

class CallStaticJavaHandleNode : public MachCallStaticJavaNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return CallStaticJavaHandle_rule; }
  virtual void           method_set( intptr_t method );
  int             ins_alignment() const { return 4; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CallStaticJava; }
  virtual int            reloc()   const;
  virtual int            alignment_required()   const { return 4; }
  virtual int            compute_padding(int current_offset)   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  CallStaticJavaHandleNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(CallStaticJavaHandleNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "CallStaticJavaHandle";}
#endif
};

class CallDynamicJavaDirectNode : public MachCallDynamicJavaNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return CallDynamicJavaDirect_rule; }
  virtual void           method_set( intptr_t method );
  int             ins_alignment() const { return 4; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CallDynamicJava; }
  virtual int            reloc()   const;
  virtual int            alignment_required()   const { return 4; }
  virtual int            compute_padding(int current_offset)   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  CallDynamicJavaDirectNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(CallDynamicJavaDirectNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "CallDynamicJavaDirect";}
#endif
};

class CallRuntimeDirectNode : public MachCallRuntimeNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return CallRuntimeDirect_rule; }
  virtual void           method_set( intptr_t method );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CallRuntime; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  CallRuntimeDirectNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); }
  virtual uint           size_of() const { return sizeof(CallRuntimeDirectNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "CallRuntimeDirect";}
#endif
};

class CallLeafDirectNode : public MachCallLeafNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return CallLeafDirect_rule; }
  virtual void           method_set( intptr_t method );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CallLeaf; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  CallLeafDirectNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); clear_flag(Flag_is_safepoint_node); }
  virtual uint           size_of() const { return sizeof(CallLeafDirectNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "CallLeafDirect";}
#endif
};

class CallLeafNoFPDirectNode : public MachCallLeafNode { 
private:
  MachOper *_opnd_array[2];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return CallLeafNoFPDirect_rule; }
  virtual void           method_set( intptr_t method );
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CallLeafNoFP; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 1; }
public:
  CallLeafNoFPDirectNode() {  _num_opnds = 2; _opnds = _opnd_array; init_flags(Flag_is_pc_relative); clear_flag(Flag_is_safepoint_node); }
  virtual uint           size_of() const { return sizeof(CallLeafNoFPDirectNode); }
  friend MachNode *State::MachNodeGenerator(int opcode, Compile* C);
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "CallLeafNoFPDirect";}
#endif
};

class RetNode : public MachReturnNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return Ret_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Return; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 5; }
public:
  RetNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(RetNode); }
  virtual bool           pinned() const { return true; }
  virtual const Node *is_block_proj() const { return this; }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "Ret";}
#endif
};

class TailCalljmpIndNode : public MachReturnNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return TailCalljmpInd_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_TailCall; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 5; }
public:
  TailCalljmpIndNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(TailCalljmpIndNode); }
  virtual bool           pinned() const { return true; }
  virtual const Node *is_block_proj() const { return this; }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "TailCalljmpInd";}
#endif
};

class tailjmpIndNode : public MachReturnNode { 
private:
  MachOper *_opnd_array[3];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return tailjmpInd_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_TailJump; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 5; }
public:
  tailjmpIndNode() {  _num_opnds = 3; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(tailjmpIndNode); }
  virtual bool           pinned() const { return true; }
  virtual const Node *is_block_proj() const { return this; }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "tailjmpInd";}
#endif
};

class CreateExceptionNode : public MachTypeNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return CreateException_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_CreateEx; }
  virtual uint           oper_input_base() const { return 1; }
public:
  CreateExceptionNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(CreateExceptionNode); }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "CreateException";}
#endif
};

class RethrowExceptionNode : public MachReturnNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return RethrowException_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Rethrow; }
  virtual int            reloc()   const;
  virtual uint           oper_input_base() const { return 5; }
public:
  RethrowExceptionNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(RethrowExceptionNode); }
  virtual bool           pinned() const { return true; }
  virtual const Node *is_block_proj() const { return this; }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "RethrowException";}
#endif
};

class tlsLoadPNode : public MachNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return tlsLoadP_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual uint           size(PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_ThreadLocal; }
public:
  tlsLoadPNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(tlsLoadPNode); }
  // Rematerialize tlsLoadP
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
  const Type            *bottom_type() const { return TypeRawPtr::BOTTOM; } // tlsLoadP
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "tlsLoadP";}
#endif
};

class ShouldNotReachHereNode : public MachHaltNode { 
private:
  MachOper *_opnd_array[1];
public:
  MachOper *opnd_array(uint operand_index) const { assert(operand_index < _num_opnds, "invalid _opnd_array index"); return _opnd_array[operand_index]; }
  void      set_opnd_array(uint operand_index, MachOper *operand) { assert(operand_index < _num_opnds, "invalid _opnd_array index"); _opnd_array[operand_index] = operand; }
private:
  virtual const RegMask &out_RegMask() const;
  virtual uint           rule() const { return ShouldNotReachHere_rule; }
  virtual void           emit(CodeBuffer &cbuf, PhaseRegAlloc *ra_) const;
  virtual int            ideal_Opcode() const { return Op_Halt; }
  virtual uint           oper_input_base() const { return 5; }
public:
  ShouldNotReachHereNode() {  _num_opnds = 1; _opnds = _opnd_array; }
  virtual uint           size_of() const { return sizeof(ShouldNotReachHereNode); }
  virtual bool           pinned() const { return true; }
  virtual const Node *is_block_proj() const { return this; }
  static  const Pipeline *pipeline_class();
  virtual const Pipeline *pipeline() const;
#ifndef PRODUCT
  virtual void           format(PhaseRegAlloc *ra, outputStream *st) const;
  virtual const char    *Name() const { return "ShouldNotReachHere";}
#endif
};

extern const char  register_save_policy[];
extern const char  c_reg_save_policy[];
extern const int   register_save_type[];

extern const int   reduceOp[];
extern const int   leftOp[];
extern const int   rightOp[];
extern const char *ruleName[];
extern const bool  swallowed[];
// Mapping from machine-independent opcode to boolean
// Flag cases where machine needs cloned values or instructions
extern const char must_clone[];


// Enumeration of register class names
enum machRegisterClass {
  ANY_REG,
  PTR_REG,
  PTR_NO_RAX_REG,
  PTR_NO_RBP_REG,
  PTR_NO_RAX_RBX_REG,
  PTR_RAX_REG,
  PTR_RBX_REG,
  PTR_RSI_REG,
  PTR_RDI_REG,
  PTR_RBP_REG,
  PTR_RSP_REG,
  PTR_R15_REG,
  LONG_REG,
  LONG_NO_RAX_RDX_REG,
  LONG_NO_RCX_REG,
  LONG_NO_RAX_REG,
  LONG_RAX_REG,
  LONG_RCX_REG,
  LONG_RDX_REG,
  INT_REG,
  INT_NO_RCX_REG,
  INT_NO_RAX_RDX_REG,
  INT_RAX_REG,
  INT_RBX_REG,
  INT_RCX_REG,
  INT_RDX_REG,
  INT_RDI_REG,
  INT_FLAGS,
  FLOAT_REG,
  DOUBLE_REG,
  STACK_SLOTS,
  INLINE_CACHE_REG,
  INTERPRETER_METHOD_OOP_REG,
  INTERPRETER_FRAME_POINTER_REG,
  _last_Mach_Reg_Class
};

// Register masks, one for each register class.
extern const RegMask ANY_REG_mask;
extern const RegMask PTR_REG_mask;
extern const RegMask STACK_OR_PTR_REG_mask;
extern const RegMask PTR_NO_RAX_REG_mask;
extern const RegMask PTR_NO_RBP_REG_mask;
extern const RegMask PTR_NO_RAX_RBX_REG_mask;
extern const RegMask PTR_RAX_REG_mask;
extern const RegMask PTR_RBX_REG_mask;
extern const RegMask PTR_RSI_REG_mask;
extern const RegMask PTR_RDI_REG_mask;
extern const RegMask PTR_RBP_REG_mask;
extern const RegMask PTR_RSP_REG_mask;
extern const RegMask PTR_R15_REG_mask;
extern const RegMask LONG_REG_mask;
extern const RegMask STACK_OR_LONG_REG_mask;
extern const RegMask LONG_NO_RAX_RDX_REG_mask;
extern const RegMask LONG_NO_RCX_REG_mask;
extern const RegMask LONG_NO_RAX_REG_mask;
extern const RegMask LONG_RAX_REG_mask;
extern const RegMask LONG_RCX_REG_mask;
extern const RegMask LONG_RDX_REG_mask;
extern const RegMask INT_REG_mask;
extern const RegMask STACK_OR_INT_REG_mask;
extern const RegMask INT_NO_RCX_REG_mask;
extern const RegMask INT_NO_RAX_RDX_REG_mask;
extern const RegMask INT_RAX_REG_mask;
extern const RegMask INT_RBX_REG_mask;
extern const RegMask INT_RCX_REG_mask;
extern const RegMask INT_RDX_REG_mask;
extern const RegMask INT_RDI_REG_mask;
extern const RegMask INT_FLAGS_mask;
extern const RegMask FLOAT_REG_mask;
extern const RegMask STACK_OR_FLOAT_REG_mask;
extern const RegMask DOUBLE_REG_mask;
extern const RegMask STACK_OR_DOUBLE_REG_mask;
extern const RegMask STACK_SLOTS_mask;
extern const RegMask STACK_OR_STACK_SLOTS_mask;
extern const RegMask INLINE_CACHE_REG_mask;
extern const RegMask INTERPRETER_METHOD_OOP_REG_mask;
extern const RegMask INTERPRETER_FRAME_POINTER_REG_mask;

#endif // GENERATED_ADFILES_AD_HPP
