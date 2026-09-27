#pragma once
// IWYU pragma private; include "LitJson/Lexer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__Lexer_def.hpp"
#include "LitJson/zzzz__FsmContext_def.hpp"
#include "LitJson/zzzz__Lexer_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LitJson::Lexer.get_AllowComments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::Lexer::*)()>(&::LitJson::Lexer::get_AllowComments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_AllowComments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.set_AllowComments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::Lexer::*)(bool)>(&::LitJson::Lexer::set_AllowComments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"set_AllowComments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.get_AllowSingleQuotedStrings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::Lexer::*)()>(&::LitJson::Lexer::get_AllowSingleQuotedStrings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_AllowSingleQuotedStrings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.set_AllowSingleQuotedStrings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::Lexer::*)(bool)>(&::LitJson::Lexer::set_AllowSingleQuotedStrings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"set_AllowSingleQuotedStrings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.get_EndOfInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::Lexer::*)()>(&::LitJson::Lexer::get_EndOfInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_EndOfInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::Lexer::*)()>(&::LitJson::Lexer::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.get_StringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LitJson::Lexer::*)()>(&::LitJson::Lexer::get_StringValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_StringValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::Lexer::*)(::System::IO::TextReader*)>(&::LitJson::Lexer::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b68958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.HexValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::LitJson::Lexer::HexValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b6a56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"HexValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.PopulateFsmTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LitJson::Lexer::PopulateFsmTables)> {
  constexpr static std::size_t size = 0x954;
  constexpr static std::size_t addrs = 0x5b69c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"PopulateFsmTables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.ProcessEscChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::LitJson::Lexer::ProcessEscChar)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b6a72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"ProcessEscChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State1)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b6a808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State1", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State2)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b6aa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State2", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State3)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b6aabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State3", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State4)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b6abf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State4", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State5)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b6acec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State5", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State6)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b6ad68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State6", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State7)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b6ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State7", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State8)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b6aef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State8", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State9)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State9", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State10)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State10", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State11)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State11", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State12)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State12", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State13)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State13", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State14)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State14", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State15)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State15", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State16", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State17
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State17)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State17", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State18
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State18)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State18", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State19
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State19)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b6b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State19", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State20
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State20)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6b474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State20", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State21
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State21)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b6b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State21", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State22
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State22)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b6b620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State22", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State23
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State23)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b6b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State23", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State24
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State24)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b6b838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State24", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State25
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State25)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b6b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State25", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State26
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State26)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State26", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State27
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State27)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State27", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.State28
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::FsmContext*)>(&::LitJson::Lexer::State28)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b6b9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State28", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.GetChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::Lexer::*)()>(&::LitJson::Lexer::GetChar)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b6a9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"GetChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.NextChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::Lexer::*)()>(&::LitJson::Lexer::NextChar)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b6ba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"NextChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.NextToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::Lexer::*)()>(&::LitJson::Lexer::NextToken)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5b69054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"NextToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer.UngetChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::Lexer::*)()>(&::LitJson::Lexer::UngetChar)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6abec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"UngetChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& LitJson::Lexer::__cordl_internal_get_allow_comments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allow_comments;
}
constexpr bool const& LitJson::Lexer::__cordl_internal_get_allow_comments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allow_comments;
}
constexpr void LitJson::Lexer::__cordl_internal_set_allow_comments(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allow_comments = value;
}
constexpr bool& LitJson::Lexer::__cordl_internal_get_allow_single_quoted_strings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allow_single_quoted_strings;
}
constexpr bool const& LitJson::Lexer::__cordl_internal_get_allow_single_quoted_strings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allow_single_quoted_strings;
}
constexpr void LitJson::Lexer::__cordl_internal_set_allow_single_quoted_strings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allow_single_quoted_strings = value;
}
constexpr bool& LitJson::Lexer::__cordl_internal_get_end_of_input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_of_input;
}
constexpr bool const& LitJson::Lexer::__cordl_internal_get_end_of_input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_of_input;
}
constexpr void LitJson::Lexer::__cordl_internal_set_end_of_input(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end_of_input = value;
}
constexpr ::LitJson::FsmContext*& LitJson::Lexer::__cordl_internal_get_fsm_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fsm_context;
}
constexpr ::LitJson::FsmContext* const& LitJson::Lexer::__cordl_internal_get_fsm_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fsm_context;
}
constexpr void LitJson::Lexer::__cordl_internal_set_fsm_context(::LitJson::FsmContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fsm_context = value;
}
constexpr int32_t& LitJson::Lexer::__cordl_internal_get_input_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input_buffer;
}
constexpr int32_t const& LitJson::Lexer::__cordl_internal_get_input_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input_buffer;
}
constexpr void LitJson::Lexer::__cordl_internal_set_input_buffer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___input_buffer = value;
}
constexpr int32_t& LitJson::Lexer::__cordl_internal_get_input_char()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input_char;
}
constexpr int32_t const& LitJson::Lexer::__cordl_internal_get_input_char() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input_char;
}
constexpr void LitJson::Lexer::__cordl_internal_set_input_char(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___input_char = value;
}
constexpr ::System::IO::TextReader*& LitJson::Lexer::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::System::IO::TextReader* const& LitJson::Lexer::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void LitJson::Lexer::__cordl_internal_set_reader(::System::IO::TextReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr int32_t& LitJson::Lexer::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& LitJson::Lexer::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void LitJson::Lexer::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Text::StringBuilder*& LitJson::Lexer::__cordl_internal_get_string_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___string_buffer;
}
constexpr ::System::Text::StringBuilder* const& LitJson::Lexer::__cordl_internal_get_string_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___string_buffer;
}
constexpr void LitJson::Lexer::__cordl_internal_set_string_buffer(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___string_buffer = value;
}
constexpr ::StringW& LitJson::Lexer::__cordl_internal_get_string_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___string_value;
}
constexpr ::StringW const& LitJson::Lexer::__cordl_internal_get_string_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___string_value;
}
constexpr void LitJson::Lexer::__cordl_internal_set_string_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___string_value = value;
}
constexpr int32_t& LitJson::Lexer::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr int32_t const& LitJson::Lexer::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void LitJson::Lexer::__cordl_internal_set_token(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr int32_t& LitJson::Lexer::__cordl_internal_get_unichar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unichar;
}
constexpr int32_t const& LitJson::Lexer::__cordl_internal_get_unichar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unichar;
}
constexpr void LitJson::Lexer::__cordl_internal_set_unichar(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unichar = value;
}
inline void LitJson::Lexer::setStaticF_fsm_return_table(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "fsm_return_table", ::LitJson::Lexer*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> LitJson::Lexer::getStaticF_fsm_return_table()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "fsm_return_table", ::LitJson::Lexer*>();
}
inline void LitJson::Lexer::setStaticF_fsm_handler_table(::ArrayW<::LitJson::Lexer_StateHandler*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::LitJson::Lexer_StateHandler*>, "fsm_handler_table", ::LitJson::Lexer*>(std::forward<::ArrayW<::LitJson::Lexer_StateHandler*>>(value));
}
inline ::ArrayW<::LitJson::Lexer_StateHandler*> LitJson::Lexer::getStaticF_fsm_handler_table()  {
return ::cordl_internals::getStaticField<::ArrayW<::LitJson::Lexer_StateHandler*>, "fsm_handler_table", ::LitJson::Lexer*>();
}
inline bool LitJson::Lexer::get_AllowComments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_AllowComments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::Lexer::set_AllowComments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"set_AllowComments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LitJson::Lexer::get_AllowSingleQuotedStrings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_AllowSingleQuotedStrings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::Lexer::set_AllowSingleQuotedStrings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"set_AllowSingleQuotedStrings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LitJson::Lexer::get_EndOfInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_EndOfInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t LitJson::Lexer::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW LitJson::Lexer::get_StringValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"get_StringValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LitJson::Lexer::_ctor(::System::IO::TextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline int32_t LitJson::Lexer::HexValue(int32_t  digit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"HexValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, digit);
}
inline void LitJson::Lexer::PopulateFsmTables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"PopulateFsmTables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline char16_t LitJson::Lexer::ProcessEscChar(int32_t  esc_char)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"ProcessEscChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, esc_char);
}
inline bool LitJson::Lexer::State1(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State1", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State2(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State2", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State3(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State3", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State4(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State4", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State5(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State5", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State6(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State6", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State7(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State7", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State8(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State8", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State9(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State9", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State10(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State10", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State11(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State11", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State12(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State12", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State13(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State13", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State14(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State14", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State15(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State15", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State16(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State16", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State17(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State17", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State18(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State18", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State19(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State19", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State20(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State20", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State21(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State21", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State22(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State22", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State23(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State23", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State24(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State24", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State25(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State25", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State26(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State26", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State27(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State27", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::State28(::LitJson::FsmContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"State28", {}, {::i2c::type_of<::LitJson::FsmContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline bool LitJson::Lexer::GetChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"GetChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t LitJson::Lexer::NextChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"NextChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool LitJson::Lexer::NextToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"NextToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::Lexer::UngetChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer*>(),
                        {"UngetChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LitJson::Lexer* LitJson::Lexer::New_ctor(::System::IO::TextReader*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::Lexer*>(reader));
}
// Ctor Parameters []
constexpr ::LitJson::Lexer::Lexer()   {
}
//  Writing Method size for method: ::LitJson::Lexer_StateHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::Lexer_StateHandler::*)(::System::Object*, ::System::IntPtr)>(&::LitJson::Lexer_StateHandler::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b6a624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer_StateHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer_StateHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::Lexer_StateHandler::*)(::LitJson::FsmContext*)>(&::LitJson::Lexer_StateHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::Lexer_StateHandler*>(),
                    {::i2c::class_of<::LitJson::Lexer_StateHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer_StateHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::LitJson::Lexer_StateHandler::*)(::LitJson::FsmContext*, ::System::AsyncCallback*, ::System::Object*)>(&::LitJson::Lexer_StateHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b6bab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::Lexer_StateHandler*>(),
                    {::i2c::class_of<::LitJson::Lexer_StateHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::Lexer_StateHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::Lexer_StateHandler::*)(::System::IAsyncResult*)>(&::LitJson::Lexer_StateHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6bad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::Lexer_StateHandler*>(),
                    {::i2c::class_of<::LitJson::Lexer_StateHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void LitJson::Lexer_StateHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::Lexer_StateHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool LitJson::Lexer_StateHandler::Invoke(::LitJson::FsmContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::Lexer_StateHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ctx);
}
inline ::System::IAsyncResult* LitJson::Lexer_StateHandler::BeginInvoke(::LitJson::FsmContext*  ctx, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::Lexer_StateHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ctx, callback, object);
}
inline bool LitJson::Lexer_StateHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::Lexer_StateHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::LitJson::Lexer_StateHandler* LitJson::Lexer_StateHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::Lexer_StateHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::LitJson::Lexer_StateHandler::Lexer_StateHandler()   {
}
