#pragma once
// IWYU pragma private; include "Modio/API/ModioAPITestSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/zzzz__ModioAPITestSettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::API::ModioAPITestSettings.ShouldFakeDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::API::ModioAPITestSettings::*)(::StringW)>(&::Modio::API::ModioAPITestSettings::ShouldFakeDisconnected)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fdeb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPITestSettings*>(),
                        {"ShouldFakeDisconnected", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPITestSettings.ShouldFakeRateLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::API::ModioAPITestSettings::*)(::StringW)>(&::Modio::API::ModioAPITestSettings::ShouldFakeRateLimit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fdec28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPITestSettings*>(),
                        {"ShouldFakeRateLimit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPITestSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPITestSettings::*)()>(&::Modio::API::ModioAPITestSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdecbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPITestSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::API::ModioAPITestSettings::__cordl_internal_get_FakeDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FakeDisconnected;
}
constexpr bool const& Modio::API::ModioAPITestSettings::__cordl_internal_get_FakeDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FakeDisconnected;
}
constexpr void Modio::API::ModioAPITestSettings::__cordl_internal_set_FakeDisconnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FakeDisconnected = value;
}
constexpr ::StringW& Modio::API::ModioAPITestSettings::__cordl_internal_get_FakeDisconnectedOnEndpointRegex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FakeDisconnectedOnEndpointRegex;
}
constexpr ::StringW const& Modio::API::ModioAPITestSettings::__cordl_internal_get_FakeDisconnectedOnEndpointRegex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FakeDisconnectedOnEndpointRegex;
}
constexpr void Modio::API::ModioAPITestSettings::__cordl_internal_set_FakeDisconnectedOnEndpointRegex(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FakeDisconnectedOnEndpointRegex = value;
}
constexpr float_t& Modio::API::ModioAPITestSettings::__cordl_internal_get_FakeDisconnectedTimeoutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FakeDisconnectedTimeoutDuration;
}
constexpr float_t const& Modio::API::ModioAPITestSettings::__cordl_internal_get_FakeDisconnectedTimeoutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FakeDisconnectedTimeoutDuration;
}
constexpr void Modio::API::ModioAPITestSettings::__cordl_internal_set_FakeDisconnectedTimeoutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FakeDisconnectedTimeoutDuration = value;
}
constexpr bool& Modio::API::ModioAPITestSettings::__cordl_internal_get_RateLimitError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RateLimitError;
}
constexpr bool const& Modio::API::ModioAPITestSettings::__cordl_internal_get_RateLimitError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RateLimitError;
}
constexpr void Modio::API::ModioAPITestSettings::__cordl_internal_set_RateLimitError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RateLimitError = value;
}
constexpr ::StringW& Modio::API::ModioAPITestSettings::__cordl_internal_get_RateLimitOnEndpointRegex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RateLimitOnEndpointRegex;
}
constexpr ::StringW const& Modio::API::ModioAPITestSettings::__cordl_internal_get_RateLimitOnEndpointRegex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RateLimitOnEndpointRegex;
}
constexpr void Modio::API::ModioAPITestSettings::__cordl_internal_set_RateLimitOnEndpointRegex(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RateLimitOnEndpointRegex = value;
}
inline bool Modio::API::ModioAPITestSettings::ShouldFakeDisconnected(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPITestSettings*>(),
                        {"ShouldFakeDisconnected", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, url);
}
inline bool Modio::API::ModioAPITestSettings::ShouldFakeRateLimit(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPITestSettings*>(),
                        {"ShouldFakeRateLimit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, url);
}
inline void Modio::API::ModioAPITestSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPITestSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::API::ModioAPITestSettings* Modio::API::ModioAPITestSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::ModioAPITestSettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::API::ModioAPITestSettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::API::ModioAPITestSettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPITestSettings::ModioAPITestSettings()   {
}
