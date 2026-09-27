#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/PFXExtraAnimControls.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GorillaTag/Rendering/zzzz__PFXExtraAnimControls_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::PFXExtraAnimControls.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::PFXExtraAnimControls::*)()>(&::GorillaTag::Rendering::PFXExtraAnimControls::Awake)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5d59f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::PFXExtraAnimControls*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::PFXExtraAnimControls.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::PFXExtraAnimControls::*)()>(&::GorillaTag::Rendering::PFXExtraAnimControls::LateUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d5a294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::PFXExtraAnimControls*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::PFXExtraAnimControls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::PFXExtraAnimControls::*)()>(&::GorillaTag::Rendering::PFXExtraAnimControls::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d5a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::PFXExtraAnimControls*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_emitRateMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitRateMult;
}
constexpr float_t const& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_emitRateMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitRateMult;
}
constexpr void GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_set_emitRateMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitRateMult = value;
}
constexpr float_t& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_emitBurstProbabilityMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitBurstProbabilityMult;
}
constexpr float_t const& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_emitBurstProbabilityMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitBurstProbabilityMult;
}
constexpr void GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_set_emitBurstProbabilityMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitBurstProbabilityMult = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_particleSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_particleSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystems;
}
constexpr void GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_set_particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystems = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_emissionModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionModules;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_emissionModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionModules;
}
constexpr void GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_set_emissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionModules = value;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_cachedEmitBursts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedEmitBursts;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_cachedEmitBursts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedEmitBursts;
}
constexpr void GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_set_cachedEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedEmitBursts = value;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_adjustedEmitBursts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustedEmitBursts;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_get_adjustedEmitBursts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustedEmitBursts;
}
constexpr void GorillaTag::Rendering::PFXExtraAnimControls::__cordl_internal_set_adjustedEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustedEmitBursts = value;
}
inline void GorillaTag::Rendering::PFXExtraAnimControls::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::PFXExtraAnimControls*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::PFXExtraAnimControls::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::PFXExtraAnimControls*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::PFXExtraAnimControls::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::PFXExtraAnimControls*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::PFXExtraAnimControls* GorillaTag::Rendering::PFXExtraAnimControls::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::PFXExtraAnimControls*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::PFXExtraAnimControls::PFXExtraAnimControls()   {
}
