#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JTokenWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenWriter_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::get_Token)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa3e1578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3e1520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3e4834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3e483c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JTokenWriter::AddParent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3e48a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"AddParent", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.RemoveParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::RemoveParent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa3e4900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"RemoveParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3e4970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa3e49d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3e4a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3e4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Object*, ::Newtonsoft::Json::Linq::JTokenType, ::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Linq::JTokenWriter::AddRawValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa3e4b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"AddRawValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JTokenType>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddJValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Linq::JTokenWriter::AddJValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa3e4b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"AddJValue", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3e4c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteNull)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa3e4cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteUndefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa3e4d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa3e4d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteComment)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa3e4da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int32_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3e4e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint32_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3e4eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int64_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e4efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint64_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e4f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(float_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e4ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(double_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e5070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(bool)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e50ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3e5168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3e51b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(char16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa3e5208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint8_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3e52f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int8_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3e5340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa3e5390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa3e5418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa3e54d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa3e555c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e55dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Guid)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa3e5658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteToken)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xa3e575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 16}
                ));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__token(::Newtonsoft::Json::Linq::JContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____token = value;
}
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::Newtonsoft::Json::Linq::JValue*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr ::Newtonsoft::Json::Linq::JValue* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__value(::Newtonsoft::Json::Linq::JValue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__current(::Newtonsoft::Json::Linq::JToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JTokenWriter::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddParent(::Newtonsoft::Json::Linq::JContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"AddParent", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::RemoveParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"RemoveParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteEnd(::Newtonsoft::Json::JsonToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddRawValue(::System::Object*  value, ::Newtonsoft::Json::Linq::JTokenType  type, ::Newtonsoft::Json::JsonToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"AddRawValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JTokenType>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddJValue(::Newtonsoft::Json::Linq::JValue*  value, ::Newtonsoft::Json::JsonToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                        {"AddJValue", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteNull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteRaw(::StringW  json)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteComment(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::DateTime  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::DateTimeOffset  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::TimeSpan  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Guid  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Uri*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, bool  writeDateConstructorAsDate, bool  writeComments)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments);
}
inline ::Newtonsoft::Json::Linq::JTokenWriter* Newtonsoft::Json::Linq::JTokenWriter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JTokenWriter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter()   {
}
