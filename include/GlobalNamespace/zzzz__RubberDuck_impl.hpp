#pragma once
// IWYU pragma private; include "GlobalNamespace/RubberDuck.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "GlobalNamespace/zzzz__RubberDuck_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__SoundEffects_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.get_fxActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::get_fxActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5793480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"get_fxActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.set_fxActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)(bool)>(&::GlobalNamespace::RubberDuck::set_fxActive)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57934a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"set_fxActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.get_SqueezeSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::get_SqueezeSound)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57934d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"get_SqueezeSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.get_SqueezeReleaseSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::get_SqueezeReleaseSound)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5793544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"get_SqueezeReleaseSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::RubberDuck::OnSpawn)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x57935b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::OnEnable)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5793730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::OnDisable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5793cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.OnSqueezeActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RubberDuck::OnSqueezeActivate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5793ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"OnSqueezeActivate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.SqueezeActivateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::SqueezeActivateLocal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5793f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"SqueezeActivateLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.OnSqueezeDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RubberDuck::OnSqueezeDeactivate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57942ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"OnSqueezeDeactivate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.SqueezeDeactivateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::SqueezeDeactivateLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57943a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"SqueezeDeactivateLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.TriggeredLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::TriggeredLateUpdate)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5793020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::OnActivate)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x57943a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.OnDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::OnDeactivate)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x57947c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.PlayParticleFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)(float_t)>(&::GlobalNamespace::RubberDuck::PlayParticleFX)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x579401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"PlayParticleFX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.CanActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::CanActivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5794cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck.CanDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::CanDeactivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5794d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                    {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuck::*)()>(&::GlobalNamespace::RubberDuck::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57933f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RubberDuck::__cordl_internal_get_disableActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr bool const& GlobalNamespace::RubberDuck::__cordl_internal_get_disableActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_disableActivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableActivation = value;
}
constexpr bool& GlobalNamespace::RubberDuck::__cordl_internal_get_disableDeactivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr bool const& GlobalNamespace::RubberDuck::__cordl_internal_get_disableDeactivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_disableDeactivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableDeactivation = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::RubberDuck::__cordl_internal_get_skinRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::RubberDuck::__cordl_internal_get_skinRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinRenderer;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_skinRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinRenderer = value;
}
constexpr float_t& GlobalNamespace::RubberDuck::__cordl_internal_get_blendShapeMaxWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeMaxWeight;
}
constexpr float_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_blendShapeMaxWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeMaxWeight;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_blendShapeMaxWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeMaxWeight = value;
}
constexpr int32_t& GlobalNamespace::RubberDuck::__cordl_internal_get_tempHandPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHandPos;
}
constexpr int32_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_tempHandPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHandPos;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_tempHandPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempHandPos = value;
}
constexpr int32_t& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeSound;
}
constexpr int32_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeSound;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_squeezeSound(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeezeSound = value;
}
constexpr int32_t& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeReleaseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeReleaseSound;
}
constexpr int32_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeReleaseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeReleaseSound;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_squeezeReleaseSound(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeezeReleaseSound = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeSoundBank;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeSoundBank;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_squeezeSoundBank(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeezeSoundBank = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeReleaseSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeReleaseSoundBank;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeReleaseSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeReleaseSoundBank;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_squeezeReleaseSoundBank(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeezeReleaseSoundBank = value;
}
constexpr float_t& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeStrength;
}
constexpr float_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeStrength;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_squeezeStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeezeStrength = value;
}
constexpr float_t& GlobalNamespace::RubberDuck::__cordl_internal_get_releaseStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseStrength;
}
constexpr float_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_releaseStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseStrength;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_releaseStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseStrength = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_particleFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFX = value;
}
constexpr float_t& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFXEmissionIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFXEmissionIdle;
}
constexpr float_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFXEmissionIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFXEmissionIdle;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_particleFXEmissionIdle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFXEmissionIdle = value;
}
constexpr float_t& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFXEmissionSqueeze()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFXEmissionSqueeze;
}
constexpr float_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFXEmissionSqueeze() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFXEmissionSqueeze;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_particleFXEmissionSqueeze(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFXEmissionSqueeze = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFXEmissionCooldownCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFXEmissionCooldownCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::RubberDuck::__cordl_internal_get_particleFXEmissionCooldownCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFXEmissionCooldownCurve;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_particleFXEmissionCooldownCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFXEmissionCooldownCurve = value;
}
constexpr bool& GlobalNamespace::RubberDuck::__cordl_internal_get_hasSkinRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSkinRenderer;
}
constexpr bool const& GlobalNamespace::RubberDuck::__cordl_internal_get_hasSkinRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSkinRenderer;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_hasSkinRenderer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasSkinRenderer = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GlobalNamespace::RubberDuck::__cordl_internal_get_pFXEmissionModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pFXEmissionModule;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GlobalNamespace::RubberDuck::__cordl_internal_get_pFXEmissionModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pFXEmissionModule;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_pFXEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pFXEmissionModule = value;
}
constexpr bool& GlobalNamespace::RubberDuck::__cordl_internal_get_hasParticleFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParticleFX;
}
constexpr bool const& GlobalNamespace::RubberDuck::__cordl_internal_get_hasParticleFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParticleFX;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_hasParticleFX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasParticleFX = value;
}
constexpr float_t& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeTimeElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeTimeElapsed;
}
constexpr float_t const& GlobalNamespace::RubberDuck::__cordl_internal_get_squeezeTimeElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeTimeElapsed;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set_squeezeTimeElapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeezeTimeElapsed = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GlobalNamespace::RubberDuck::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GlobalNamespace::RubberDuck::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr bool& GlobalNamespace::RubberDuck::__cordl_internal_get__raiseActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseActivate;
}
constexpr bool const& GlobalNamespace::RubberDuck::__cordl_internal_get__raiseActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseActivate;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set__raiseActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raiseActivate = value;
}
constexpr bool& GlobalNamespace::RubberDuck::__cordl_internal_get__raiseDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseDeactivate;
}
constexpr bool const& GlobalNamespace::RubberDuck::__cordl_internal_get__raiseDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseDeactivate;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set__raiseDeactivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raiseDeactivate = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundEffects>& GlobalNamespace::RubberDuck::__cordl_internal_get__sfxActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfxActivate;
}
constexpr ::UnityW<::GlobalNamespace::SoundEffects> const& GlobalNamespace::RubberDuck::__cordl_internal_get__sfxActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfxActivate;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set__sfxActivate(::UnityW<::GlobalNamespace::SoundEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sfxActivate = value;
}
constexpr bool& GlobalNamespace::RubberDuck::__cordl_internal_get__fxActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxActive;
}
constexpr bool const& GlobalNamespace::RubberDuck::__cordl_internal_get__fxActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxActive;
}
constexpr void GlobalNamespace::RubberDuck::__cordl_internal_set__fxActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fxActive = value;
}
inline bool GlobalNamespace::RubberDuck::get_fxActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"get_fxActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::set_fxActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"set_fxActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::RubberDuck::get_SqueezeSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"get_SqueezeSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RubberDuck::get_SqueezeReleaseSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"get_SqueezeReleaseSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::RubberDuck::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::OnSqueezeActivate(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"OnSqueezeActivate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::RubberDuck::SqueezeActivateLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"SqueezeActivateLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::OnSqueezeDeactivate(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"OnSqueezeDeactivate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::RubberDuck::SqueezeDeactivateLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"SqueezeDeactivateLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::TriggeredLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::OnDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::PlayParticleFX(float_t  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {"PlayParticleFX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rate);
}
inline bool GlobalNamespace::RubberDuck::CanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RubberDuck::CanDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RubberDuck*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuck::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuck*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RubberDuck* GlobalNamespace::RubberDuck::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RubberDuck*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RubberDuck::RubberDuck()   {
}
