#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CustomMapReviveStation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CustomMapReviveStation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::CustomMapReviveStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::CustomMapReviveStation::*)()>(&::GT_CustomMapSupportRuntime::CustomMapReviveStation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb6c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CustomMapReviveStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_get_particleEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEffects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_get_particleEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEffects;
}
constexpr void GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_set_particleEffects(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleEffects = value;
}
constexpr double_t& GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_get_reviveCooldownSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveCooldownSeconds;
}
constexpr double_t const& GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_get_reviveCooldownSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveCooldownSeconds;
}
constexpr void GT_CustomMapSupportRuntime::CustomMapReviveStation::__cordl_internal_set_reviveCooldownSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveCooldownSeconds = value;
}
inline void GT_CustomMapSupportRuntime::CustomMapReviveStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CustomMapReviveStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::CustomMapReviveStation* GT_CustomMapSupportRuntime::CustomMapReviveStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::CustomMapReviveStation*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::CustomMapReviveStation::CustomMapReviveStation()   {
}
