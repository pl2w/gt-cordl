#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__Base64Encoder_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_Base64Encoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::Base64Encoder* (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_Base64Encoder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa389a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"get_Base64Encoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_QuoteChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa389bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"get_QuoteChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::IO::TextWriter*)>(&::Newtonsoft::Json::JsonTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa389bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::Close)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa389dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.CloseBufferAndWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::CloseBufferAndWriter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa389dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"CloseBufferAndWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa389e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa389ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa389f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteEnd)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa389fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa38a0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::JsonTextWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa38a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.OnStringEscapeHandlingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::OnStringEscapeHandlingChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38a2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.UpdateCharEscapeFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::UpdateCharEscapeFlags)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa389d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"UpdateCharEscapeFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteIndent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa38a2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.SetIndentChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::SetIndentChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa38a458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"SetIndentChars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueDelimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteValueDelimiter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa38a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndentSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteIndentSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa38a574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa38a598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteValueInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Object*)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa38a5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa38a824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteUndefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa38a8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa38a94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa38a970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEscapedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteEscapedString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa38a154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteEscapedString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa38aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa38aafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa38ab88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa38abcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(float_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa38ac84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<float_t>)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa38ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(double_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa38ae44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<double_t>)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa38af00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa38b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa38b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa38b0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa38b138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint8_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa38b1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int8_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa38b21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa38b260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa38b310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa38b4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteValueToBuffer", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa38b620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa38b938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa38baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteValueToBuffer", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Guid)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa38bc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa38bd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa38be3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteComment)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa38bf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.EnsureWriteBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa38aa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"EnsureWriteBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa38ab40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa38ac14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNumberToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa38bfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteNumberToBuffer", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa38aab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa38c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNumberToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t, bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa38c098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteNumberToBuffer", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__safeAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeAsync;
}
constexpr bool const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__safeAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeAsync;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__safeAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____safeAsync = value;
}
constexpr ::System::IO::TextWriter*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr ::System::IO::TextWriter* const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__writer(::System::IO::TextWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writer = value;
}
constexpr ::Newtonsoft::Json::Utilities::Base64Encoder*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__base64Encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base64Encoder;
}
constexpr ::Newtonsoft::Json::Utilities::Base64Encoder* const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__base64Encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base64Encoder;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__base64Encoder(::Newtonsoft::Json::Utilities::Base64Encoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____base64Encoder = value;
}
constexpr char16_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indentChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indentChar;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentChar(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indentChar = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indentation;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indentation;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentation(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indentation = value;
}
constexpr char16_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quoteChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quoteChar;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__quoteChar(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____quoteChar = value;
}
constexpr bool& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quoteName;
}
constexpr bool const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quoteName;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__quoteName(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____quoteName = value;
}
constexpr ::ArrayW<bool>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__charEscapeFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charEscapeFlags;
}
constexpr ::ArrayW<bool> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__charEscapeFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charEscapeFlags;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__charEscapeFlags(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charEscapeFlags = value;
}
constexpr ::ArrayW<char16_t>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeBuffer;
}
constexpr ::ArrayW<char16_t> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeBuffer;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__writeBuffer(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeBuffer = value;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__arrayPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayPool;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__arrayPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayPool;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arrayPool = value;
}
constexpr ::ArrayW<char16_t>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indentChars;
}
constexpr ::ArrayW<char16_t> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indentChars;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentChars(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indentChars = value;
}
inline ::Newtonsoft::Json::Utilities::Base64Encoder* Newtonsoft::Json::JsonTextWriter::get_Base64Encoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"get_Base64Encoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::Base64Encoder*>(this, ___internal_method);
}
inline char16_t Newtonsoft::Json::JsonTextWriter::get_QuoteChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"get_QuoteChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::_ctor(::System::IO::TextWriter*  textWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textWriter);
}
inline void Newtonsoft::Json::JsonTextWriter::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::CloseBufferAndWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"CloseBufferAndWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartConstructor(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteEnd(::Newtonsoft::Json::JsonToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonTextWriter::WritePropertyName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonTextWriter::WritePropertyName(::StringW  name, bool  escape)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::JsonTextWriter::OnStringEscapeHandlingChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::UpdateCharEscapeFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"UpdateCharEscapeFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIndent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::SetIndentChars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"SetIndentChars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValueDelimiter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIndentSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValueInternal(::StringW  value, ::Newtonsoft::Json::JsonToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteValueInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, token);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteNull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteUndefined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteRaw(::StringW  json)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteEscapedString(::StringW  value, bool  quote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteEscapedString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, quote);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Nullable_1<float_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Nullable_1<double_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::DateTime  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteValueToBuffer", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::DateTimeOffset  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteValueToBuffer(::System::DateTimeOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteValueToBuffer", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Guid  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::TimeSpan  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Uri*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteComment(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"EnsureWriteBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(uint64_t  value, bool  negative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, negative);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer(uint64_t  value, bool  negative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteNumberToBuffer", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, negative);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(uint32_t  value, bool  negative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteIntegerValue", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, negative);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::WriteNumberToBuffer(uint32_t  value, bool  negative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextWriter*>(),
                        {"WriteNumberToBuffer", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, negative);
}
inline ::Newtonsoft::Json::JsonTextWriter* Newtonsoft::Json::JsonTextWriter::New_ctor(::System::IO::TextWriter*  textWriter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonTextWriter*>(textWriter));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter::JsonTextWriter()   {
}
