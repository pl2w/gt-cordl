#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__TraceJsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::Newtonsoft::Json::JsonWriter*)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa3cced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.GetSerializedJsonMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::GetSerializedJsonMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa3cd0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                        {"GetSerializedJsonMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa3cd0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::Decimal>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa3cd160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(bool)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3cd26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<bool>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa3cd2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint8_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cd380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint8_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3cd3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(char16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cd48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<char16_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3cd4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa3cd598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cd60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::DateTime>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3cd66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa3cd72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa3cd798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(double_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cd86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<double_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa3cd8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteUndefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa3cd990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa3cd9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(float_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cda28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<float_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa3cda88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Guid)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa3cdb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::Guid>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa3cdba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int32_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cdc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int32_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3cdcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int64_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cdd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int64_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3cdde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa3cdea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int8_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cdfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int8_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3ce000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int16_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3ce10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::TimeSpan>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3ce278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint32_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint32_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3ce398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint64_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint64_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3ce4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa3ce564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint16_t>)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3ce688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteComment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteStartArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3ce794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteEndArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3ce7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteStartConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3ce81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteEndConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndConstructor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3ce874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ce8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa3ce918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteStartObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3ce984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteEndObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3ce9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRawValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cea0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3cea6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::Close)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3ceacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::JsonWriter*& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__innerWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerWriter;
}
constexpr ::Newtonsoft::Json::JsonWriter* const& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__innerWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerWriter;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_set__innerWriter(::Newtonsoft::Json::JsonWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerWriter = value;
}
constexpr ::Newtonsoft::Json::JsonTextWriter*& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__textWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textWriter;
}
constexpr ::Newtonsoft::Json::JsonTextWriter* const& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__textWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textWriter;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textWriter = value;
}
constexpr ::System::IO::StringWriter*& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__sw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw;
}
constexpr ::System::IO::StringWriter* const& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__sw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_set__sw(::System::IO::StringWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sw = value;
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::_ctor(::Newtonsoft::Json::JsonWriter*  innerWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerWriter);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonWriter::GetSerializedJsonMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                        {"GetSerializedJsonMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::Decimal>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<bool>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<char16_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::DateTime  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::DateTime>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::DateTimeOffset  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::DateTimeOffset>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<double_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteUndefined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteNull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<float_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Guid  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::Guid>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int64_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int16_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::TimeSpan  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::TimeSpan>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint32_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint64_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Uri*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint16_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteComment(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartConstructor(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndConstructor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName(::StringW  name, bool  escape)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRawValue(::StringW  json)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRaw(::StringW  json)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* Newtonsoft::Json::Serialization::TraceJsonWriter::New_ctor(::Newtonsoft::Json::JsonWriter*  innerWriter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(innerWriter));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::TraceJsonWriter::TraceJsonWriter()   {
}
