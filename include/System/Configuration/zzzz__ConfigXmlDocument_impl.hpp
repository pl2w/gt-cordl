#pragma once
// IWYU pragma private; include "System/Configuration/ConfigXmlDocument.hpp"
#include "System/Xml/zzzz__XmlDocument_impl.hpp"
#include "System/Configuration/zzzz__ConfigXmlDocument_def.hpp"
#include "System/Configuration/Internal/zzzz__IConfigErrorInfo_def.hpp"
#include "System/Xml/zzzz__XmlTextReader_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigXmlDocument._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigXmlDocument::*)()>(&::System::Configuration::ConfigXmlDocument::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigXmlDocument.get_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::ConfigXmlDocument::*)()>(&::System::Configuration::ConfigXmlDocument::get_Filename)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"get_Filename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigXmlDocument.get_LineNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Configuration::ConfigXmlDocument::*)()>(&::System::Configuration::ConfigXmlDocument::get_LineNumber)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"get_LineNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigXmlDocument.System_Configuration_Internal_IConfigErrorInfo_get_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::ConfigXmlDocument::*)()>(&::System::Configuration::ConfigXmlDocument::System_Configuration_Internal_IConfigErrorInfo_get_Filename)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"System.Configuration.Internal.IConfigErrorInfo.get_Filename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigXmlDocument.System_Configuration_Internal_IConfigErrorInfo_get_LineNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Configuration::ConfigXmlDocument::*)()>(&::System::Configuration::ConfigXmlDocument::System_Configuration_Internal_IConfigErrorInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"System.Configuration.Internal.IConfigErrorInfo.get_LineNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigXmlDocument.LoadSingleElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigXmlDocument::*)(::StringW, ::System::Xml::XmlTextReader*)>(&::System::Configuration::ConfigXmlDocument::LoadSingleElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"LoadSingleElement", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlTextReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::ConfigXmlDocument::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Configuration::ConfigXmlDocument::get_Filename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"get_Filename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Configuration::ConfigXmlDocument::get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"get_LineNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Configuration::ConfigXmlDocument::System_Configuration_Internal_IConfigErrorInfo_get_Filename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"System.Configuration.Internal.IConfigErrorInfo.get_Filename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Configuration::ConfigXmlDocument::System_Configuration_Internal_IConfigErrorInfo_get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"System.Configuration.Internal.IConfigErrorInfo.get_LineNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Configuration::ConfigXmlDocument::LoadSingleElement(::StringW  filename, ::System::Xml::XmlTextReader*  sourceReader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigXmlDocument*>(),
                        {"LoadSingleElement", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlTextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filename, sourceReader);
}
inline ::System::Configuration::ConfigXmlDocument* System::Configuration::ConfigXmlDocument::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ConfigXmlDocument*>());
}
/// @brief Convert operator to "::System::Configuration::Internal::IConfigErrorInfo"
constexpr  System::Configuration::ConfigXmlDocument::operator ::System::Configuration::Internal::IConfigErrorInfo*() noexcept {
return static_cast<::System::Configuration::Internal::IConfigErrorInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::Internal::IConfigErrorInfo"
constexpr ::System::Configuration::Internal::IConfigErrorInfo* System::Configuration::ConfigXmlDocument::i___System__Configuration__Internal__IConfigErrorInfo() noexcept {
return static_cast<::System::Configuration::Internal::IConfigErrorInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigXmlDocument::ConfigXmlDocument()   {
}
