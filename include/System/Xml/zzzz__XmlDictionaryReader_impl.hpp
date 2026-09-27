#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReader.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__OnXmlDictionaryReaderClose_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReaderQuotas_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_XmlWrappedReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CreateDictionaryReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryReader* (*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlDictionaryReader::CreateDictionaryReader)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaa26cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CreateDictionaryReader", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CreateTextReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryReader* (*)(::System::IO::Stream*, ::System::Xml::XmlDictionaryReaderQuotas*)>(&::System::Xml::XmlDictionaryReader::CreateTextReader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaa26dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CreateTextReader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CreateTextReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryReader* (*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Xml::XmlDictionaryReaderQuotas*, ::System::Xml::OnXmlDictionaryReaderClose*)>(&::System::Xml::XmlDictionaryReader::CreateTextReader)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaa26dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CreateTextReader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.get_Quotas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryReaderQuotas* (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::get_Quotas)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaa26e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.MoveToStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::MoveToStartElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaa26ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsLocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::StringW)>(&::System::Xml::XmlDictionaryReader::IsLocalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaa26f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsLocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryReader::IsLocalName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaa26f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsNamespaceUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::StringW)>(&::System::Xml::XmlDictionaryReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaa26f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsNamespaceUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaa26ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsStartElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryReader::IsStartElement)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaa2703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IndexOfLocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::ArrayW<::System::Xml::XmlDictionaryString*>, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryReader::IndexOfLocalName)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xaa270dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetBase64ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::by_ref<int32_t>)>(&::System::Xml::XmlDictionaryReader::TryGetBase64ContentLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaa27228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsBase64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaa27234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsBase64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlDictionaryReader::*)(int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaa27268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadContentAsBase64", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaa27600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)(int32_t)>(&::System::Xml::XmlDictionaryReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaa27630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadContentAsString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaa27850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)(int32_t)>(&::System::Xml::XmlDictionaryReader::ReadString)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xaa27880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlDictionaryReader::*)(bool, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadContentAsBytes)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xaa2737c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadContentAsBytes", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsTextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlDictionaryReader::IsTextNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaa27b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"IsTextNode", {}, {::i2c::type_of<::System::Xml::XmlNodeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadContentAsChars)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaa27b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlDictionaryReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::XmlDictionaryReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xaa27c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaa27f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaa27fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::UniqueId* (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsUniqueId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaa2804c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsGuid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaa280bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsTimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsTimeSpan)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaa2812c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaa2819c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaa28250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaa2834c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsLong)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaa28448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaa28544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaa2864c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaa28754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xaa2885c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsGuid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaa28a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsTimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsTimeSpan)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaa28b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsBase64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsBase64)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaa28c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetLocalNameAsDictionaryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::XmlDictionaryReader::TryGetLocalNameAsDictionaryString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaa28d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetNamespaceUriAsDictionaryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::XmlDictionaryReader::TryGetNamespaceUriAsDictionaryString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaa28d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetValueAsDictionaryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::XmlDictionaryReader::TryGetValueAsDictionaryString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaa28d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CheckArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryReader::*)(::System::Array*, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::CheckArray)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xaa28d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CheckArray", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsStartArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::by_ref<::System::Type*>)>(&::System::Xml::XmlDictionaryReader::IsStartArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaa28fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetArrayLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::by_ref<int32_t>)>(&::System::Xml::XmlDictionaryReader::TryGetArrayLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaa28fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<bool>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaa28fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<bool>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa290d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<int16_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xaa29194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int16_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa292ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<int32_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa293a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa29490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<int64_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa2954c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int64_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa29634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<float_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa296f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<float_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa297d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<double_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa29894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<double_t>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa2997c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa29a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 109}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa29b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 110}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::DateTime>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa29bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 111}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::DateTime>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa29cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 112}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::Guid>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa29d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 113}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Guid>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa29e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 114}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaa29f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaa2a00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                    {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 116}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaa2a0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::CreateDictionaryReader(::System::Xml::XmlReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CreateDictionaryReader", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReader*>(nullptr, ___internal_method, reader);
}
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::CreateTextReader(::System::IO::Stream*  stream, ::System::Xml::XmlDictionaryReaderQuotas*  quotas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CreateTextReader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReader*>(nullptr, ___internal_method, stream, quotas);
}
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::CreateTextReader(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, ::System::Xml::XmlDictionaryReaderQuotas*  quotas, ::System::Xml::OnXmlDictionaryReaderClose*  onClose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CreateTextReader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReader*>(nullptr, ___internal_method, stream, encoding, quotas, onClose);
}
inline ::System::Xml::XmlDictionaryReaderQuotas* System::Xml::XmlDictionaryReader::get_Quotas()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReaderQuotas*>(this, ___internal_method);
}
inline void System::Xml::XmlDictionaryReader::MoveToStartElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryReader::IsLocalName(::StringW  localName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlDictionaryReader::IsLocalName(::System::Xml::XmlDictionaryString*  localName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlDictionaryReader::IsNamespaceUri(::StringW  namespaceUri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::IsNamespaceUri(::System::Xml::XmlDictionaryString*  namespaceUri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::IsStartElement(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, namespaceUri);
}
inline int32_t System::Xml::XmlDictionaryReader::IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*>  localNames, ::System::Xml::XmlDictionaryString*  namespaceUri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localNames, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::TryGetBase64ContentLength(::by_ref<int32_t>  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, length);
}
inline ::ArrayW<uint8_t> System::Xml::XmlDictionaryReader::ReadContentAsBase64()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::XmlDictionaryReader::ReadContentAsBase64(int32_t  maxByteArrayContentLength, int32_t  maxInitialCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadContentAsBase64", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, maxByteArrayContentLength, maxInitialCount);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadContentAsString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadContentAsString(int32_t  maxStringContentLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadContentAsString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, maxStringContentLength);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadString(int32_t  maxStringContentLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, maxStringContentLength);
}
inline ::ArrayW<uint8_t> System::Xml::XmlDictionaryReader::ReadContentAsBytes(bool  base64, int32_t  maxByteArrayContentLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"ReadContentAsBytes", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, base64, maxByteArrayContentLength);
}
inline bool System::Xml::XmlDictionaryReader::IsTextNode(::System::Xml::XmlNodeType  nodeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"IsTextNode", {}, {::i2c::type_of<::System::Xml::XmlNodeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nodeType);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadContentAsChars(::ArrayW<char16_t>  chars, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, offset, count);
}
inline ::System::Object* System::Xml::XmlDictionaryReader::ReadContentAs(::System::Type*  type, ::System::Xml::IXmlNamespaceResolver*  namespaceResolver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, namespaceResolver);
}
inline ::System::Decimal System::Xml::XmlDictionaryReader::ReadContentAsDecimal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline float_t System::Xml::XmlDictionaryReader::ReadContentAsFloat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Xml::UniqueId* System::Xml::XmlDictionaryReader::ReadContentAsUniqueId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlDictionaryReader::ReadContentAsGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlDictionaryReader::ReadContentAsTimeSpan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadElementContentAsString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryReader::ReadElementContentAsBoolean()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadElementContentAsInt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::XmlDictionaryReader::ReadElementContentAsLong()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline float_t System::Xml::XmlDictionaryReader::ReadElementContentAsFloat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::Xml::XmlDictionaryReader::ReadElementContentAsDouble()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlDictionaryReader::ReadElementContentAsDecimal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlDictionaryReader::ReadElementContentAsDateTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlDictionaryReader::ReadElementContentAsGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlDictionaryReader::ReadElementContentAsTimeSpan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::XmlDictionaryReader::ReadElementContentAsBase64()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryReader::TryGetLocalNameAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*>  localName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlDictionaryReader::TryGetNamespaceUriAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*>  namespaceUri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::TryGetValueAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void System::Xml::XmlDictionaryReader::CheckArray(::System::Array*  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {"CheckArray", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline bool System::Xml::XmlDictionaryReader::IsStartArray(::by_ref<::System::Type*>  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool System::Xml::XmlDictionaryReader::TryGetArrayLength(::by_ref<int32_t>  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<bool>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<bool>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int16_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int16_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int32_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int32_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int64_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int64_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<float_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<float_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<double_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<double_t>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::Decimal>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 109}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::Decimal>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 110}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::DateTime>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 111}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::DateTime>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 112}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::Guid>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 113}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::Guid>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 114}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::TimeSpan>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::TimeSpan>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlDictionaryReader*>(), 116}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlDictionaryReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDictionaryReader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryReader::XmlDictionaryReader()   {
}
