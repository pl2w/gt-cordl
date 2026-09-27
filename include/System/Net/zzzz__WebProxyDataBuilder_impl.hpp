#pragma once
// IWYU pragma private; include "System/Net/WebProxyDataBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebProxyDataBuilder_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__WebProxyData_def.hpp"
#include "System/zzzz__FormatException_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebProxyData* (::System::Net::WebProxyDataBuilder::*)()>(&::System::Net::WebProxyDataBuilder::Build)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xac77008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.BuildInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxyDataBuilder::*)()>(&::System::Net::WebProxyDataBuilder::BuildInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                    {::i2c::class_of<::System::Net::WebProxyDataBuilder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.SetProxyAndBypassList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxyDataBuilder::*)(::StringW, ::StringW)>(&::System::Net::WebProxyDataBuilder::SetProxyAndBypassList)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xac77084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"SetProxyAndBypassList", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.SetAutoProxyUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxyDataBuilder::*)(::StringW)>(&::System::Net::WebProxyDataBuilder::SetAutoProxyUrl)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xac776e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"SetAutoProxyUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.SetAutoDetectSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxyDataBuilder::*)(bool)>(&::System::Net::WebProxyDataBuilder::SetAutoDetectSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac77788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"SetAutoDetectSettings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.ParseProxyUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW)>(&::System::Net::WebProxyDataBuilder::ParseProxyUri)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xac771a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ParseProxyUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.ParseProtocolProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (*)(::StringW)>(&::System::Net::WebProxyDataBuilder::ParseProtocolProxies)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xac772f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ParseProtocolProxies", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.CreateInvalidProxyStringException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::FormatException* (*)(::StringW)>(&::System::Net::WebProxyDataBuilder::CreateInvalidProxyStringException)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xac777a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"CreateInvalidProxyStringException", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.BypassStringEscape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebProxyDataBuilder::BypassStringEscape)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xac778a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"BypassStringEscape", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.ConvertRegexReservedChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebProxyDataBuilder::ConvertRegexReservedChars)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xac77bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ConvertRegexReservedChars", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder.ParseBypassList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)(::StringW, ::by_ref<bool>)>(&::System::Net::WebProxyDataBuilder::ParseBypassList)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xac77564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ParseBypassList", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxyDataBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxyDataBuilder::*)()>(&::System::Net::WebProxyDataBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac77cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebProxyData*& System::Net::WebProxyDataBuilder::__cordl_internal_get_m_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Result;
}
constexpr ::System::Net::WebProxyData* const& System::Net::WebProxyDataBuilder::__cordl_internal_get_m_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Result;
}
constexpr void System::Net::WebProxyDataBuilder::__cordl_internal_set_m_Result(::System::Net::WebProxyData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Result = value;
}
inline ::System::Net::WebProxyData* System::Net::WebProxyDataBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebProxyData*>(this, ___internal_method);
}
inline void System::Net::WebProxyDataBuilder::BuildInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebProxyDataBuilder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebProxyDataBuilder::SetProxyAndBypassList(::StringW  addressString, ::StringW  bypassListString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"SetProxyAndBypassList", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addressString, bypassListString);
}
inline void System::Net::WebProxyDataBuilder::SetAutoProxyUrl(::StringW  autoConfigUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"SetAutoProxyUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoConfigUrl);
}
inline void System::Net::WebProxyDataBuilder::SetAutoDetectSettings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"SetAutoDetectSettings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::WebProxyDataBuilder::ParseProxyUri(::StringW  proxyString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ParseProxyUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, proxyString);
}
inline ::System::Collections::Hashtable* System::Net::WebProxyDataBuilder::ParseProtocolProxies(::StringW  proxyListString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ParseProtocolProxies", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(nullptr, ___internal_method, proxyListString);
}
inline ::System::FormatException* System::Net::WebProxyDataBuilder::CreateInvalidProxyStringException(::StringW  originalProxyString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"CreateInvalidProxyStringException", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::FormatException*>(nullptr, ___internal_method, originalProxyString);
}
inline ::StringW System::Net::WebProxyDataBuilder::BypassStringEscape(::StringW  rawString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"BypassStringEscape", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rawString);
}
inline ::StringW System::Net::WebProxyDataBuilder::ConvertRegexReservedChars(::StringW  rawString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ConvertRegexReservedChars", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rawString);
}
inline ::System::Collections::ArrayList* System::Net::WebProxyDataBuilder::ParseBypassList(::StringW  bypassListString, ::by_ref<bool>  bypassOnLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {"ParseBypassList", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method, bypassListString, bypassOnLocal);
}
inline void System::Net::WebProxyDataBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxyDataBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebProxyDataBuilder* System::Net::WebProxyDataBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxyDataBuilder*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebProxyDataBuilder::WebProxyDataBuilder()   {
}
