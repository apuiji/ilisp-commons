#pragma once

namespace zlt::ilisp::opcode {
  enum {
    NONE,
    ARITH_ADD,
    ARITH_DIV,
    ARITH_MOD,
    ARITH_MUL,
    ARITH_POW,
    ARITH_SUB,
    BEFORE_FORWARD,
    BEFORE_RETURN,
    BEFORE_THROW,
    BITWS_AND,
    BITWS_OR,
    BITWS_NOT,
    BITWS_XOR,
    CALL,
    CLEAR_FN_GUARDS,
    CMP_3WAY,
    CMP_EQ,
    CMP_GT,
    CMP_GTEQ,
    CMP_LT,
    CMP_LTEQ,
    GET_CLOSURE,
    GET_GLOBAL,
    GET_LOCAL,
    GET_MEMB,
    GET_REF,
    INIT_DEFC,
    JIF,
    JMP,
    LENGTH,
    LOGIC_NOT,
    LOGIC_XOR,
    LSH,
    MAKE_FN,
    MAKE_REF,
    NEGATIVE,
    POP,
    POSITIVE,
    PUSH,
    PUSH_CATCH,
    PUSH_DEFER,
    PUSH_GUARD,
    RETURN,
    RSH,
    THROW,
    SET_CLOSURE,
    SET_FN_CLOSURE,
    SET_GLOBAL,
    SET_LOCAL,
    SET_MEMB,
    SET_NULL,
    SET_NUM,
    SET_REF,
    SET_STR,
    USH
  };
}
