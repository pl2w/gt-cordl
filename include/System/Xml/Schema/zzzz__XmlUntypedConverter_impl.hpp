#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlUntypedConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlListConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlUntypedConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlUntypedConverter::*)()>(&::System::Xml::Schema::XmlUntypedConverter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xab663d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Xml::Schema::XmlUntypedConverter*, bool)>(&::System::Xml::Schema::XmlUntypedConverter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xab664cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::XmlUntypedConverter*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab665ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToBoolean)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xab66690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab66964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTime)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xab66a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab66ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xab66c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDecimal)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab66de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDecimal)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xab66e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToDouble)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab67040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToDouble)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xab670e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt32)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab67288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt32)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xab6732c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt64)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab674d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToInt64)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xab67574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW)>(&::System::Xml::Schema::XmlUntypedConverter::ToSingle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xab67718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*)>(&::System::Xml::Schema::XmlUntypedConverter::ToSingle)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xab677bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(bool)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab67960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::DateTime)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab679b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xab67a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Decimal)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xab67a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(double_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xab67ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(int32_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab67b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(int64_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab67b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(float_t)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xab67bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ToString)> {
  constexpr static std::size_t size = 0xbc4;
  constexpr static std::size_t addrs = 0xab67c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(bool, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xab68814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::DateTime, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xab68b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Decimal, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xab68d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(double_t, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xab68f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(int32_t, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xab69100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(int64_t, ::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xab692bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0xc30;
  constexpr static std::size_t addrs = 0xab69478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeType)> {
  constexpr static std::size_t size = 0x1534;
  constexpr static std::size_t addrs = 0xab6a0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeTypeWildcardDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardDestination)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xab66834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardDestination", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeTypeWildcardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardSource)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xab689d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardSource", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.ChangeListType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUntypedConverter::ChangeListType)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xab6b5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                    {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUntypedConverter.SupportsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlUntypedConverter::*)(::System::Type*)>(&::System::Xml::Schema::XmlUntypedConverter::SupportsType)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0xab6b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"SupportsType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::XmlUntypedConverter::__cordl_internal_get_allowListToList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowListToList;
}
constexpr bool const& System::Xml::Schema::XmlUntypedConverter::__cordl_internal_get_allowListToList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowListToList;
}
constexpr void System::Xml::Schema::XmlUntypedConverter::__cordl_internal_set_allowListToList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowListToList = value;
}
inline void System::Xml::Schema::XmlUntypedConverter::setStaticF_Untyped(::System::Xml::Schema::XmlValueConverter*  value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "Untyped", ::System::Xml::Schema::XmlUntypedConverter*>(std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlUntypedConverter::getStaticF_Untyped()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "Untyped", ::System::Xml::Schema::XmlUntypedConverter*>();
}
inline void System::Xml::Schema::XmlUntypedConverter::setStaticF_UntypedList(::System::Xml::Schema::XmlValueConverter*  value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "UntypedList", ::System::Xml::Schema::XmlUntypedConverter*>(std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlUntypedConverter::getStaticF_UntypedList()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "UntypedList", ::System::Xml::Schema::XmlUntypedConverter*>();
}
inline void System::Xml::Schema::XmlUntypedConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlUntypedConverter::_ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::XmlUntypedConverter*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atomicConverter, allowListToList);
}
inline bool System::Xml::Schema::XmlUntypedConverter::ToBoolean(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlUntypedConverter::ToBoolean(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlUntypedConverter::ToDateTime(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTime System::Xml::Schema::XmlUntypedConverter::ToDateTime(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::Xml::Schema::XmlUntypedConverter::ToDateTimeOffset(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method, value);
}
inline ::System::Decimal System::Xml::Schema::XmlUntypedConverter::ToDecimal(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, value);
}
inline ::System::Decimal System::Xml::Schema::XmlUntypedConverter::ToDecimal(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlUntypedConverter::ToDouble(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline double_t System::Xml::Schema::XmlUntypedConverter::ToDouble(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlUntypedConverter::ToInt32(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlUntypedConverter::ToInt32(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlUntypedConverter::ToInt64(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline int64_t System::Xml::Schema::XmlUntypedConverter::ToInt64(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlUntypedConverter::ToSingle(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline float_t System::Xml::Schema::XmlUntypedConverter::ToSingle(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::DateTime  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::DateTimeOffset  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlUntypedConverter::ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(bool  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::System::DateTime  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::System::Decimal  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(double_t  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(int32_t  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(int64_t  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardDestination", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"ChangeTypeWildcardSource", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlUntypedConverter::ChangeListType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline bool System::Xml::Schema::XmlUntypedConverter::SupportsType(::System::Type*  clrType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XmlUntypedConverter*>(),
                        {"SupportsType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clrType);
}
inline ::System::Xml::Schema::XmlUntypedConverter* System::Xml::Schema::XmlUntypedConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlUntypedConverter*>());
}
inline ::System::Xml::Schema::XmlUntypedConverter* System::Xml::Schema::XmlUntypedConverter::New_ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlUntypedConverter*>(atomicConverter, allowListToList));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlUntypedConverter::XmlUntypedConverter()   {
}
