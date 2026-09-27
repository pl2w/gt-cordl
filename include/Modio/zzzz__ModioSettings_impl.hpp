#pragma once
// IWYU pragma private; include "Modio/ModioSettings.hpp"
#include "Modio/zzzz__IModioServiceSettings_impl.hpp"
#include "Modio/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModioSettings_def.hpp"
//  Writing Method size for method: ::Modio::ModioSettings.ShallowClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioSettings* (::Modio::ModioSettings::*)()>(&::Modio::ModioSettings::ShallowClone)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa01ba34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioSettings*>(),
                        {"ShallowClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioSettings::*)()>(&::Modio::ModioSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa01bab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Modio::ModioSettings::__cordl_internal_get_GameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameId;
}
constexpr int64_t const& Modio::ModioSettings::__cordl_internal_get_GameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameId;
}
constexpr void Modio::ModioSettings::__cordl_internal_set_GameId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameId = value;
}
constexpr ::StringW& Modio::ModioSettings::__cordl_internal_get_APIKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___APIKey;
}
constexpr ::StringW const& Modio::ModioSettings::__cordl_internal_get_APIKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___APIKey;
}
constexpr void Modio::ModioSettings::__cordl_internal_set_APIKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___APIKey = value;
}
constexpr ::StringW& Modio::ModioSettings::__cordl_internal_get_ServerURL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerURL;
}
constexpr ::StringW const& Modio::ModioSettings::__cordl_internal_get_ServerURL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerURL;
}
constexpr void Modio::ModioSettings::__cordl_internal_set_ServerURL(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerURL = value;
}
constexpr ::StringW& Modio::ModioSettings::__cordl_internal_get_DefaultLanguage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultLanguage;
}
constexpr ::StringW const& Modio::ModioSettings::__cordl_internal_get_DefaultLanguage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultLanguage;
}
constexpr void Modio::ModioSettings::__cordl_internal_set_DefaultLanguage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultLanguage = value;
}
constexpr ::Modio::LogLevel& Modio::ModioSettings::__cordl_internal_get_LogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr ::Modio::LogLevel const& Modio::ModioSettings::__cordl_internal_get_LogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr void Modio::ModioSettings::__cordl_internal_set_LogLevel(::Modio::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogLevel = value;
}
constexpr ::ArrayW<::Modio::IModioServiceSettings*>& Modio::ModioSettings::__cordl_internal_get_PlatformSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformSettings;
}
constexpr ::ArrayW<::Modio::IModioServiceSettings*> const& Modio::ModioSettings::__cordl_internal_get_PlatformSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformSettings;
}
constexpr void Modio::ModioSettings::__cordl_internal_set_PlatformSettings(::ArrayW<::Modio::IModioServiceSettings*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlatformSettings = value;
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::IModioServiceSettings*>)
inline T Modio::ModioSettings::GetPlatformSettings()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioSettings*>(),
                    {"GetPlatformSettings", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::IModioServiceSettings*>)
inline bool Modio::ModioSettings::TryGetPlatformSettings(::by_ref<T>  settings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioSettings*>(),
                    {"TryGetPlatformSettings", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, settings);
}
inline ::Modio::ModioSettings* Modio::ModioSettings::ShallowClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioSettings*>(),
                        {"ShallowClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioSettings*>(this, ___internal_method);
}
inline void Modio::ModioSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::ModioSettings* Modio::ModioSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioSettings*>());
}
// Ctor Parameters []
constexpr ::Modio::ModioSettings::ModioSettings()   {
}
