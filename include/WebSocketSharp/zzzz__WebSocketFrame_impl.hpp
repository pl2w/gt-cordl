#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocketFrame.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/zzzz__Fin_impl.hpp"
#include "WebSocketSharp/zzzz__Mask_impl.hpp"
#include "WebSocketSharp/zzzz__Opcode_impl.hpp"
#include "WebSocketSharp/zzzz__Rsv_impl.hpp"
#include "WebSocketSharp/zzzz__WebSocketFrame_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/zzzz__Fin_def.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
#include "WebSocketSharp/zzzz__PayloadData_def.hpp"
#include "WebSocketSharp/zzzz__Rsv_def.hpp"
#include "WebSocketSharp/zzzz__WebSocketFrame_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98074c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame::*)(::WebSocketSharp::Fin, ::WebSocketSharp::Opcode, ::ArrayW<uint8_t>, bool, bool)>(&::WebSocketSharp::WebSocketFrame::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb97e238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Fin>(), ::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame::*)(::WebSocketSharp::Fin, ::WebSocketSharp::Opcode, ::WebSocketSharp::PayloadData*, bool, bool)>(&::WebSocketSharp::WebSocketFrame::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb980754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Fin>(), ::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_ExactPayloadLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_ExactPayloadLength)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb9809bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_ExactPayloadLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_ExtendedPayloadLengthWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_ExtendedPayloadLengthWidth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb980a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_ExtendedPayloadLengthWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsClose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb97d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsCompressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb979a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsCompressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsContinuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsContinuation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb97d288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsContinuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9799f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsFinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsFinal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb97d298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsFinal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsFragment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb97d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsFragment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsMasked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsMasked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9799e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsMasked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsPing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb97d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsPing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsPong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsPong)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb97d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsPong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_IsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_IsText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb980a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_Length)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb980a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_Opcode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Opcode (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_Opcode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb977aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Opcode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_PayloadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::PayloadData* (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_PayloadData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb977ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_PayloadData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_Rsv2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Rsv (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_Rsv2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb979a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Rsv2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.get_Rsv3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Rsv (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::get_Rsv3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb979a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Rsv3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.createMaskingKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::WebSocketSharp::WebSocketFrame::createMaskingKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb980920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"createMaskingKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocketFrame::dump)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0xb980ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"dump", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.print
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocketFrame::print)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0xb9810d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"print", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.processHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::WebSocketFrame* (*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::WebSocketFrame::processHeader)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb98161c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"processHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.readExtendedPayloadLengthAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::WebSocketSharp::WebSocketFrame*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&::WebSocketSharp::WebSocketFrame::readExtendedPayloadLengthAsync)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb9817e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readExtendedPayloadLengthAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.readHeaderAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&::WebSocketSharp::WebSocketFrame::readHeaderAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb981994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readHeaderAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.readMaskingKeyAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::WebSocketSharp::WebSocketFrame*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&::WebSocketSharp::WebSocketFrame::readMaskingKeyAsync)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb981a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readMaskingKeyAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.readPayloadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::WebSocketSharp::WebSocketFrame*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&::WebSocketSharp::WebSocketFrame::readPayloadDataAsync)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xb981c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readPayloadDataAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.utf8Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::WebSocketFrame::utf8Decode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb98156c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"utf8Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.CreateCloseFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::WebSocketFrame* (*)(::WebSocketSharp::PayloadData*, bool)>(&::WebSocketSharp::WebSocketFrame::CreateCloseFrame)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb97a284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"CreateCloseFrame", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.CreatePongFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::WebSocketFrame* (*)(::WebSocketSharp::PayloadData*, bool)>(&::WebSocketSharp::WebSocketFrame::CreatePongFrame)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb97d4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"CreatePongFrame", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.ReadFrameAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, bool, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&::WebSocketSharp::WebSocketFrame::ReadFrameAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb97f3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"ReadFrameAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.Unmask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::Unmask)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb97a73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"Unmask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>* (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb981eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.PrintToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::WebSocketFrame::*)(bool)>(&::WebSocketSharp::WebSocketFrame::PrintToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb97d8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"PrintToString", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::ToArray)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb97a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::ToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb981f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                    {::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::WebSocketSharp::WebSocketFrame::*)()>(&::WebSocketSharp::WebSocketFrame::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb981f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& WebSocketSharp::WebSocketFrame::__cordl_internal_get__extPayloadLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extPayloadLength;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__extPayloadLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extPayloadLength;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__extPayloadLength(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extPayloadLength = value;
}
constexpr ::WebSocketSharp::Fin& WebSocketSharp::WebSocketFrame::__cordl_internal_get__fin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fin;
}
constexpr ::WebSocketSharp::Fin const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__fin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fin;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__fin(::WebSocketSharp::Fin  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fin = value;
}
constexpr ::WebSocketSharp::Mask& WebSocketSharp::WebSocketFrame::__cordl_internal_get__mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mask;
}
constexpr ::WebSocketSharp::Mask const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mask;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__mask(::WebSocketSharp::Mask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mask = value;
}
constexpr ::ArrayW<uint8_t>& WebSocketSharp::WebSocketFrame::__cordl_internal_get__maskingKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maskingKey;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__maskingKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maskingKey;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__maskingKey(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maskingKey = value;
}
constexpr ::WebSocketSharp::Opcode& WebSocketSharp::WebSocketFrame::__cordl_internal_get__opcode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opcode;
}
constexpr ::WebSocketSharp::Opcode const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__opcode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opcode;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__opcode(::WebSocketSharp::Opcode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opcode = value;
}
constexpr ::WebSocketSharp::PayloadData*& WebSocketSharp::WebSocketFrame::__cordl_internal_get__payloadData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payloadData;
}
constexpr ::WebSocketSharp::PayloadData* const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__payloadData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payloadData;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__payloadData(::WebSocketSharp::PayloadData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____payloadData = value;
}
constexpr uint8_t& WebSocketSharp::WebSocketFrame::__cordl_internal_get__payloadLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payloadLength;
}
constexpr uint8_t const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__payloadLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payloadLength;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__payloadLength(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____payloadLength = value;
}
constexpr ::WebSocketSharp::Rsv& WebSocketSharp::WebSocketFrame::__cordl_internal_get__rsv1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsv1;
}
constexpr ::WebSocketSharp::Rsv const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__rsv1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsv1;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__rsv1(::WebSocketSharp::Rsv  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rsv1 = value;
}
constexpr ::WebSocketSharp::Rsv& WebSocketSharp::WebSocketFrame::__cordl_internal_get__rsv2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsv2;
}
constexpr ::WebSocketSharp::Rsv const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__rsv2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsv2;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__rsv2(::WebSocketSharp::Rsv  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rsv2 = value;
}
constexpr ::WebSocketSharp::Rsv& WebSocketSharp::WebSocketFrame::__cordl_internal_get__rsv3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsv3;
}
constexpr ::WebSocketSharp::Rsv const& WebSocketSharp::WebSocketFrame::__cordl_internal_get__rsv3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsv3;
}
constexpr void WebSocketSharp::WebSocketFrame::__cordl_internal_set__rsv3(::WebSocketSharp::Rsv  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rsv3 = value;
}
inline void WebSocketSharp::WebSocketFrame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame::_ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  data, bool  compressed, bool  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Fin>(), ::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fin, opcode, data, compressed, mask);
}
inline void WebSocketSharp::WebSocketFrame::_ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::WebSocketSharp::PayloadData*  payloadData, bool  compressed, bool  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Fin>(), ::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fin, opcode, payloadData, compressed, mask);
}
inline uint64_t WebSocketSharp::WebSocketFrame::get_ExactPayloadLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_ExactPayloadLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline int32_t WebSocketSharp::WebSocketFrame::get_ExtendedPayloadLengthWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_ExtendedPayloadLengthWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsCompressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsCompressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsContinuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsContinuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsFinal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsFinal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsFragment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsFragment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsMasked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsMasked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsPing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsPing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsPong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsPong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame::get_IsText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_IsText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint64_t WebSocketSharp::WebSocketFrame::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::WebSocketSharp::Opcode WebSocketSharp::WebSocketFrame::get_Opcode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Opcode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Opcode>(this, ___internal_method);
}
inline ::WebSocketSharp::PayloadData* WebSocketSharp::WebSocketFrame::get_PayloadData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_PayloadData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::PayloadData*>(this, ___internal_method);
}
inline ::WebSocketSharp::Rsv WebSocketSharp::WebSocketFrame::get_Rsv2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Rsv2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Rsv>(this, ___internal_method);
}
inline ::WebSocketSharp::Rsv WebSocketSharp::WebSocketFrame::get_Rsv3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"get_Rsv3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Rsv>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> WebSocketSharp::WebSocketFrame::createMaskingKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"createMaskingKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::StringW WebSocketSharp::WebSocketFrame::dump(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"dump", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, frame);
}
inline ::StringW WebSocketSharp::WebSocketFrame::print(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"print", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, frame);
}
inline ::WebSocketSharp::WebSocketFrame* WebSocketSharp::WebSocketFrame::processHeader(::ArrayW<uint8_t>  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"processHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::WebSocketFrame*>(nullptr, ___internal_method, header);
}
inline void WebSocketSharp::WebSocketFrame::readExtendedPayloadLengthAsync(::System::IO::Stream*  stream, ::WebSocketSharp::WebSocketFrame*  frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readExtendedPayloadLengthAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, frame, completed, error);
}
inline void WebSocketSharp::WebSocketFrame::readHeaderAsync(::System::IO::Stream*  stream, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readHeaderAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, completed, error);
}
inline void WebSocketSharp::WebSocketFrame::readMaskingKeyAsync(::System::IO::Stream*  stream, ::WebSocketSharp::WebSocketFrame*  frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readMaskingKeyAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, frame, completed, error);
}
inline void WebSocketSharp::WebSocketFrame::readPayloadDataAsync(::System::IO::Stream*  stream, ::WebSocketSharp::WebSocketFrame*  frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"readPayloadDataAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, frame, completed, error);
}
inline ::StringW WebSocketSharp::WebSocketFrame::utf8Decode(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"utf8Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::WebSocketSharp::WebSocketFrame* WebSocketSharp::WebSocketFrame::CreateCloseFrame(::WebSocketSharp::PayloadData*  payloadData, bool  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"CreateCloseFrame", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::WebSocketFrame*>(nullptr, ___internal_method, payloadData, mask);
}
inline ::WebSocketSharp::WebSocketFrame* WebSocketSharp::WebSocketFrame::CreatePongFrame(::WebSocketSharp::PayloadData*  payloadData, bool  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"CreatePongFrame", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::WebSocketFrame*>(nullptr, ___internal_method, payloadData, mask);
}
inline void WebSocketSharp::WebSocketFrame::ReadFrameAsync(::System::IO::Stream*  stream, bool  unmask, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"ReadFrameAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::WebSocketSharp::WebSocketFrame*>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, unmask, completed, error);
}
inline void WebSocketSharp::WebSocketFrame::Unmask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"Unmask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<uint8_t>* WebSocketSharp::WebSocketFrame::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<uint8_t>*>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::WebSocketFrame::PrintToString(bool  dumped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"PrintToString", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, dumped);
}
inline ::ArrayW<uint8_t> WebSocketSharp::WebSocketFrame::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::WebSocketFrame::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* WebSocketSharp::WebSocketFrame::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::WebSocketSharp::WebSocketFrame* WebSocketSharp::WebSocketFrame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame*>());
}
inline ::WebSocketSharp::WebSocketFrame* WebSocketSharp::WebSocketFrame::New_ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  data, bool  compressed, bool  mask)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame*>(fin, opcode, data, compressed, mask));
}
inline ::WebSocketSharp::WebSocketFrame* WebSocketSharp::WebSocketFrame::New_ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::WebSocketSharp::PayloadData*  payloadData, bool  compressed, bool  mask)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame*>(fin, opcode, payloadData, compressed, mask));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr  WebSocketSharp::WebSocketFrame::operator ::System::Collections::Generic::IEnumerable_1<uint8_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<uint8_t>* WebSocketSharp::WebSocketFrame::i___System__Collections__Generic__IEnumerable_1_uint8_t_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  WebSocketSharp::WebSocketFrame::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* WebSocketSharp::WebSocketFrame::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame::WebSocketFrame()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::*)(int32_t)>(&::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb981f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::*)()>(&::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb9826c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::*)()>(&::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb9826c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84.System_Collections_Generic_IEnumerator_System_Byte__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::*)()>(&::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_Collections_Generic_IEnumerator_System_Byte__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb982784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Byte>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::*)()>(&::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::*)()>(&::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb9827c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr uint8_t& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr uint8_t const& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_set___2__current(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::WebSocketSharp::WebSocketFrame*& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::WebSocketSharp::WebSocketFrame* const& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_set___4__this(::WebSocketSharp::WebSocketFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<uint8_t>& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_set___s__1(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr int32_t& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr int32_t const& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_set___s__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr uint8_t& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get__b_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b_5__3;
}
constexpr uint8_t const& WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_get__b_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b_5__3;
}
constexpr void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::__cordl_internal_set__b_5__3(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____b_5__3 = value;
}
inline void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_Collections_Generic_IEnumerator_System_Byte__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Byte>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84* WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr  WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::operator ::System::Collections::Generic::IEnumerator_1<uint8_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<uint8_t>* WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::i___System__Collections__Generic__IEnumerator_1_uint8_t_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84::WebSocketFrame__GetEnumerator_d__84()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb981eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0._ReadFrameAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb982470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__0", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0._ReadFrameAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb98251c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__1", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0._ReadFrameAsync_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__2)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb9825c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__2", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0._ReadFrameAsync_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__3)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb982674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__3", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
constexpr bool& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_unmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmask;
}
constexpr bool const& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_unmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmask;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_set_unmask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unmask = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::System::Action_1<::System::Exception*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::System::Action_1<::System::Exception*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_set_error(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_set___9__3(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__3 = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_set___9__2(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__2 = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::__cordl_internal_set___9__1(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__0(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__0", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__1(::WebSocketSharp::WebSocketFrame*  frame1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__1", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame1);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__2(::WebSocketSharp::WebSocketFrame*  frame2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__2", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame2);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::_ReadFrameAsync_b__3(::WebSocketSharp::WebSocketFrame*  frame3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>(),
                        {"<ReadFrameAsync>b__3", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame3);
}
inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0* WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0::WebSocketFrame___c__DisplayClass82_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb981ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0._readPayloadDataAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::_readPayloadDataAsync_b__0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb982370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0*>(),
                        {"<readPayloadDataAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_get_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr int64_t const& WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_get_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_set_len(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___len = value;
}
constexpr ::WebSocketSharp::WebSocketFrame*& WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_get_frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr ::WebSocketSharp::WebSocketFrame* const& WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_get_frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_set_frame(::WebSocketSharp::WebSocketFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frame = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::__cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::_readPayloadDataAsync_b__0(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0*>(),
                        {"<readPayloadDataAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0* WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0::WebSocketFrame___c__DisplayClass75_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb981c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0._readMaskingKeyAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::_readMaskingKeyAsync_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb9822d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0*>(),
                        {"<readMaskingKeyAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_get_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr int32_t const& WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_get_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_set_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___len = value;
}
constexpr ::WebSocketSharp::WebSocketFrame*& WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_get_frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr ::WebSocketSharp::WebSocketFrame* const& WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_get_frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_set_frame(::WebSocketSharp::WebSocketFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frame = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::__cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::_readMaskingKeyAsync_b__0(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0*>(),
                        {"<readMaskingKeyAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0* WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0::WebSocketFrame___c__DisplayClass73_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb981a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0._readHeaderAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::_readHeaderAsync_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb9822a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0*>(),
                        {"<readHeaderAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::__cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::_readHeaderAsync_b__0(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0*>(),
                        {"<readHeaderAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0* WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0::WebSocketFrame___c__DisplayClass71_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98198c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0._readExtendedPayloadLengthAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::_readExtendedPayloadLengthAsync_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb982204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0*>(),
                        {"<readExtendedPayloadLengthAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_get_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr int32_t const& WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_get_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_set_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___len = value;
}
constexpr ::WebSocketSharp::WebSocketFrame*& WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_get_frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr ::WebSocketSharp::WebSocketFrame* const& WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_get_frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_set_frame(::WebSocketSharp::WebSocketFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frame = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::__cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::_readExtendedPayloadLengthAsync_b__0(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0*>(),
                        {"<readExtendedPayloadLengthAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0* WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0::WebSocketFrame___c__DisplayClass69_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb982020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1._dump_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::_dump_b__1)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb982028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1*>(),
                        {"<dump>b__1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::__cordl_internal_get_lineCnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCnt;
}
constexpr int64_t const& WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::__cordl_internal_get_lineCnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCnt;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::__cordl_internal_set_lineCnt(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineCnt = value;
}
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*& WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0* const& WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::__cordl_internal_set_CS$__8__locals1(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::_dump_b__1(::StringW  arg1, ::StringW  arg2, ::StringW  arg3, ::StringW  arg4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1*>(),
                        {"<dump>b__1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3, arg4);
}
inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1* WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1::WebSocketFrame___c__DisplayClass65_1()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9810c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0._dump_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_4<::StringW,::StringW,::StringW,::StringW>* (::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::*)()>(&::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::_dump_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb981f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*>(),
                        {"<dump>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::__cordl_internal_get_buff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buff;
}
constexpr ::System::Text::StringBuilder* const& WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::__cordl_internal_get_buff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buff;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::__cordl_internal_set_buff(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buff = value;
}
constexpr ::StringW& WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::__cordl_internal_get_lineFmt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineFmt;
}
constexpr ::StringW const& WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::__cordl_internal_get_lineFmt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineFmt;
}
constexpr void WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::__cordl_internal_set_lineFmt(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineFmt = value;
}
inline void WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_4<::StringW,::StringW,::StringW,::StringW>* WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::_dump_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*>(),
                        {"<dump>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_4<::StringW,::StringW,::StringW,::StringW>*>(this, ___internal_method);
}
inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0* WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0::WebSocketFrame___c__DisplayClass65_0()   {
}
