#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketSettings_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWebSocketProvider_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_VerboseJsonLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_VerboseJsonLogging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e333d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_VerboseJsonLogging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_ServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ServerUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e333d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ServerUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_ServerConnectionTimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ServerConnectionTimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e333e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ServerConnectionTimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_ReconnectAttempts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ReconnectAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e333e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ReconnectAttempts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.set_ReconnectAttempts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)(int32_t)>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::set_ReconnectAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e333f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"set_ReconnectAttempts", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_ReconnectInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ReconnectInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e333f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ReconnectInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_AdditionalAuthParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_AdditionalAuthParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_AdditionalAuthParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::IWitRequestConfiguration* (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_WebSocketProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::IWebSocketProvider* (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_WebSocketProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_WebSocketProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings.get_RequestTimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_RequestTimeoutMs)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e2e90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_RequestTimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketSettings::*)(::Meta::WitAi::IWitRequestConfiguration*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketSettings::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e2af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__VerboseJsonLogging_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VerboseJsonLogging_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__VerboseJsonLogging_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VerboseJsonLogging_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__VerboseJsonLogging_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VerboseJsonLogging_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ServerUrl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerUrl_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ServerUrl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerUrl_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__ServerUrl_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServerUrl_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ServerConnectionTimeoutMs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerConnectionTimeoutMs_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ServerConnectionTimeoutMs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerConnectionTimeoutMs_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__ServerConnectionTimeoutMs_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServerConnectionTimeoutMs_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ReconnectAttempts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReconnectAttempts_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ReconnectAttempts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReconnectAttempts_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__ReconnectAttempts_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReconnectAttempts_k__BackingField = value;
}
constexpr float_t& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ReconnectInterval_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReconnectInterval_k__BackingField;
}
constexpr float_t const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__ReconnectInterval_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReconnectInterval_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__ReconnectInterval_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReconnectInterval_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__Debug_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__Debug_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__Debug_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__AdditionalAuthParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalAuthParameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__AdditionalAuthParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalAuthParameters_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__AdditionalAuthParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AdditionalAuthParameters_k__BackingField = value;
}
constexpr ::Meta::WitAi::IWitRequestConfiguration*& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::Meta::WitAi::IWitRequestConfiguration* const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__Configuration_k__BackingField(::Meta::WitAi::IWitRequestConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Configuration_k__BackingField = value;
}
constexpr ::Meta::Voice::Net::WebSockets::IWebSocketProvider*& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__WebSocketProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketProvider_k__BackingField;
}
constexpr ::Meta::Voice::Net::WebSockets::IWebSocketProvider* const& Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_get__WebSocketProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketProvider_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketSettings::__cordl_internal_set__WebSocketProvider_k__BackingField(::Meta::Voice::Net::WebSockets::IWebSocketProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WebSocketProvider_k__BackingField = value;
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_VerboseJsonLogging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_VerboseJsonLogging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ServerUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ServerUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ServerConnectionTimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ServerConnectionTimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ReconnectAttempts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ReconnectAttempts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketSettings::set_ReconnectAttempts(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"set_ReconnectAttempts", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_ReconnectInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_ReconnectInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_AdditionalAuthParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_AdditionalAuthParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::Meta::WitAi::IWitRequestConfiguration* Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::IWitRequestConfiguration*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::IWebSocketProvider* Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_WebSocketProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_WebSocketProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::IWebSocketProvider*>(this, ___internal_method);
}
inline int32_t Meta::Voice::Net::WebSockets::WitWebSocketSettings::get_RequestTimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {"get_RequestTimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketSettings::_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketSettings* Meta::Voice::Net::WebSockets::WitWebSocketSettings::New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(configuration));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketSettings::WitWebSocketSettings()   {
}
