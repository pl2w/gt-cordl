#pragma once
// IWYU pragma private; include "GlobalNamespace/FXSystemSettings.hpp"
#include "GlobalNamespace/zzzz__CallLimitType_1_impl.hpp"
#include "GlobalNamespace/zzzz__CooldownType_impl.hpp"
#include "GlobalNamespace/zzzz__LimiterType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FXSystemSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FXSystemSettings::*)()>(&::GlobalNamespace::FXSystemSettings::Awake)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5ac4d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystemSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FXSystemSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FXSystemSettings::*)()>(&::GlobalNamespace::FXSystemSettings::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ac51a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystemSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LimiterType*>& GlobalNamespace::FXSystemSettings::__cordl_internal_get_callLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimits;
}
constexpr ::ArrayW<::GlobalNamespace::LimiterType*> const& GlobalNamespace::FXSystemSettings::__cordl_internal_get_callLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimits;
}
constexpr void GlobalNamespace::FXSystemSettings::__cordl_internal_set_callLimits(::ArrayW<::GlobalNamespace::LimiterType*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimits = value;
}
constexpr ::ArrayW<::GlobalNamespace::CooldownType*>& GlobalNamespace::FXSystemSettings::__cordl_internal_get_CallLimitsCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallLimitsCooldown;
}
constexpr ::ArrayW<::GlobalNamespace::CooldownType*> const& GlobalNamespace::FXSystemSettings::__cordl_internal_get_CallLimitsCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallLimitsCooldown;
}
constexpr void GlobalNamespace::FXSystemSettings::__cordl_internal_set_CallLimitsCooldown(::ArrayW<::GlobalNamespace::CooldownType*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CallLimitsCooldown = value;
}
constexpr bool& GlobalNamespace::FXSystemSettings::__cordl_internal_get_forLocalRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLocalRig;
}
constexpr bool const& GlobalNamespace::FXSystemSettings::__cordl_internal_get_forLocalRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLocalRig;
}
constexpr void GlobalNamespace::FXSystemSettings::__cordl_internal_set_forLocalRig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forLocalRig = value;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*>& GlobalNamespace::FXSystemSettings::__cordl_internal_get_callSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callSettings;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*> const& GlobalNamespace::FXSystemSettings::__cordl_internal_get_callSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callSettings;
}
constexpr void GlobalNamespace::FXSystemSettings::__cordl_internal_set_callSettings(::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callSettings = value;
}
inline void GlobalNamespace::FXSystemSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystemSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FXSystemSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystemSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FXSystemSettings* GlobalNamespace::FXSystemSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FXSystemSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FXSystemSettings::FXSystemSettings()   {
}
