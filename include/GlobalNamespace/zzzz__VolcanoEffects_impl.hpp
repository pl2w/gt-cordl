#pragma once
// IWYU pragma private; include "GlobalNamespace/VolcanoEffects.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__VolcanoEffects_def.hpp"
#include "GlobalNamespace/zzzz__VolcanoEffects_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::Awake)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x5983b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.PreloadAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::PreloadAssets)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x597ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"PreloadAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.PreloadClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::VolcanoEffects::PreloadClip)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5984570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"PreloadClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.PreloadStateFXClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VolcanoEffects_LavaStateFX*)>(&::GlobalNamespace::VolcanoEffects::PreloadStateFXClips)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5984604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"PreloadStateFXClips", {}, {::i2c::type_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.WarmUpAudioSourceGO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSource*)>(&::GlobalNamespace::VolcanoEffects::WarmUpAudioSourceGO)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5984754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"WarmUpAudioSourceGO", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.WarmUpStateFXSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VolcanoEffects_LavaStateFX*)>(&::GlobalNamespace::VolcanoEffects::WarmUpStateFXSources)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5984808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"WarmUpStateFXSources", {}, {::i2c::type_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects._PrewarmLavaSpewRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::_PrewarmLavaSpewRenderers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5984864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"_PrewarmLavaSpewRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::OnDisable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59848f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.OnVolcanoBellyEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::OnVolcanoBellyEmpty)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5982438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"OnVolcanoBellyEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.OnStoneAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t)>(&::GlobalNamespace::VolcanoEffects::OnStoneAccepted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5982a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"OnStoneAccepted", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.InitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(::GlobalNamespace::VolcanoEffects_LavaStateFX*)>(&::GlobalNamespace::VolcanoEffects::InitState)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5984440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"InitState", {}, {::i2c::type_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetLavaAudioEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(bool)>(&::GlobalNamespace::VolcanoEffects::SetLavaAudioEnabled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x598493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetLavaAudioEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetLavaAudioEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(bool, float_t)>(&::GlobalNamespace::VolcanoEffects::SetLavaAudioEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59849b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetLavaAudioEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::ResetState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5984a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t, float_t, float_t)>(&::GlobalNamespace::VolcanoEffects::UpdateState)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5984b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetDrainedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::SetDrainedState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x598095c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetDrainedState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.UpdateDrainedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t)>(&::GlobalNamespace::VolcanoEffects::UpdateDrainedState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59824c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateDrainedState", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetEruptingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::SetEruptingState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59823a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetEruptingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.UpdateEruptingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t, float_t, float_t)>(&::GlobalNamespace::VolcanoEffects::UpdateEruptingState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59824dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateEruptingState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetRisingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::SetRisingState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59823d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetRisingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.UpdateRisingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t, float_t, float_t)>(&::GlobalNamespace::VolcanoEffects::UpdateRisingState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59824e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateRisingState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetFullState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::SetFullState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5982408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetFullState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.UpdateFullState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t, float_t, float_t)>(&::GlobalNamespace::VolcanoEffects::UpdateFullState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598257c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateFullState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetDrainingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::SetDrainingState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5982378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetDrainingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.UpdateDrainingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t, float_t, float_t)>(&::GlobalNamespace::VolcanoEffects::UpdateDrainingState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5982580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateDrainingState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.SetParticleEmissionRateAndBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(float_t, ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>, ::ArrayW<float_t>, ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>, ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>)>(&::GlobalNamespace::VolcanoEffects::SetParticleEmissionRateAndBurst)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5984f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetParticleEmissionRateAndBurst", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>>(), ::i2c::type_of<::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects.LogNullsFoundInArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)(::StringW)>(&::GlobalNamespace::VolcanoEffects::LogNullsFoundInArray)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x598427c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"LogNullsFoundInArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects::*)()>(&::GlobalNamespace::VolcanoEffects::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5985130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::VolcanoEffects::__cordl_internal_get_applyShaderGlobals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyShaderGlobals;
}
constexpr bool const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_applyShaderGlobals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyShaderGlobals;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_applyShaderGlobals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyShaderGlobals = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_forestSpeakerAudioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forestSpeakerAudioSrc;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_forestSpeakerAudioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forestSpeakerAudioSrc;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_forestSpeakerAudioSrc(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forestSpeakerAudioSrc = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_warnVolcanoBellyEmptied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warnVolcanoBellyEmptied;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_warnVolcanoBellyEmptied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warnVolcanoBellyEmptied;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_warnVolcanoBellyEmptied(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warnVolcanoBellyEmptied = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_volcanoAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_volcanoAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoAudioSource;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_volcanoAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volcanoAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_volcanoAcceptStone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoAcceptStone;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_volcanoAcceptStone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoAcceptStone;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_volcanoAcceptStone(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volcanoAcceptStone = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_volcanoAcceptLastStone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoAcceptLastStone;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_volcanoAcceptLastStone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoAcceptLastStone;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_volcanoAcceptLastStone(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volcanoAcceptLastStone = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSurfaceAudioSrcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSurfaceAudioSrcs;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSurfaceAudioSrcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSurfaceAudioSrcs;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_lavaSurfaceAudioSrcs(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSurfaceAudioSrcs = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewParticleSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewParticleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewParticleSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewParticleSystems;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_lavaSpewParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSpewParticleSystems = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeParticleSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeParticleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeParticleSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeParticleSystems;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_smokeParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smokeParticleSystems = value;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& GlobalNamespace::VolcanoEffects::__cordl_internal_get_drainedStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainedStateFX;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_drainedStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainedStateFX;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_drainedStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainedStateFX = value;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& GlobalNamespace::VolcanoEffects::__cordl_internal_get_eruptingStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eruptingStateFX;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_eruptingStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eruptingStateFX;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_eruptingStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eruptingStateFX = value;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& GlobalNamespace::VolcanoEffects::__cordl_internal_get_risingStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___risingStateFX;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_risingStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___risingStateFX;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_risingStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___risingStateFX = value;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& GlobalNamespace::VolcanoEffects::__cordl_internal_get_fullStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullStateFX;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_fullStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullStateFX;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_fullStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullStateFX = value;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& GlobalNamespace::VolcanoEffects::__cordl_internal_get_drainingStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainingStateFX;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_drainingStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainingStateFX;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_drainingStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainingStateFX = value;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& GlobalNamespace::VolcanoEffects::__cordl_internal_get_currentStateFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStateFX;
}
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_currentStateFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStateFX;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_currentStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentStateFX = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewEmissionModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewEmissionModules;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewEmissionModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewEmissionModules;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_lavaSpewEmissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSpewEmissionModules = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewEmissionDefaultRateMultipliers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewEmissionDefaultRateMultipliers;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewEmissionDefaultRateMultipliers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewEmissionDefaultRateMultipliers;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_lavaSpewEmissionDefaultRateMultipliers(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSpewEmissionDefaultRateMultipliers = value;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewDefaultEmitBursts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewDefaultEmitBursts;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewDefaultEmitBursts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewDefaultEmitBursts;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_lavaSpewDefaultEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSpewDefaultEmitBursts = value;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewAdjustedEmitBursts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewAdjustedEmitBursts;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_lavaSpewAdjustedEmitBursts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewAdjustedEmitBursts;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_lavaSpewAdjustedEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSpewAdjustedEmitBursts = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeMainModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeMainModules;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeMainModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeMainModules;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_smokeMainModules(::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smokeMainModules = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeEmissionModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeEmissionModules;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeEmissionModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeEmissionModules;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_smokeEmissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smokeEmissionModules = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeEmissionDefaultRateMultipliers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeEmissionDefaultRateMultipliers;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_smokeEmissionDefaultRateMultipliers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeEmissionDefaultRateMultipliers;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_smokeEmissionDefaultRateMultipliers(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smokeEmissionDefaultRateMultipliers = value;
}
constexpr int32_t& GlobalNamespace::VolcanoEffects::__cordl_internal_get_shaderProp_ZoneLiquidLightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderProp_ZoneLiquidLightColor;
}
constexpr int32_t const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_shaderProp_ZoneLiquidLightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderProp_ZoneLiquidLightColor;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_shaderProp_ZoneLiquidLightColor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderProp_ZoneLiquidLightColor = value;
}
constexpr int32_t& GlobalNamespace::VolcanoEffects::__cordl_internal_get_shaderProp_ZoneLiquidLightDistScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderProp_ZoneLiquidLightDistScale;
}
constexpr int32_t const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_shaderProp_ZoneLiquidLightDistScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderProp_ZoneLiquidLightDistScale;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_shaderProp_ZoneLiquidLightDistScale(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderProp_ZoneLiquidLightDistScale = value;
}
constexpr float_t& GlobalNamespace::VolcanoEffects::__cordl_internal_get_timeVolcanoBellyWasLastEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeVolcanoBellyWasLastEmpty;
}
constexpr float_t const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_timeVolcanoBellyWasLastEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeVolcanoBellyWasLastEmpty;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_timeVolcanoBellyWasLastEmpty(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeVolcanoBellyWasLastEmpty = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects::__cordl_internal_get_hasVolcanoAudioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasVolcanoAudioSrc;
}
constexpr bool const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_hasVolcanoAudioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasVolcanoAudioSrc;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_hasVolcanoAudioSrc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasVolcanoAudioSrc = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects::__cordl_internal_get_hasForestSpeakerAudioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasForestSpeakerAudioSrc;
}
constexpr bool const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_hasForestSpeakerAudioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasForestSpeakerAudioSrc;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_hasForestSpeakerAudioSrc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasForestSpeakerAudioSrc = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::VolcanoEffects::__cordl_internal_get_prewarmCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prewarmCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::VolcanoEffects::__cordl_internal_get_prewarmCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prewarmCoroutine;
}
constexpr void GlobalNamespace::VolcanoEffects::__cordl_internal_set_prewarmCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prewarmCoroutine = value;
}
inline void GlobalNamespace::VolcanoEffects::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::PreloadAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"PreloadAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::PreloadClip(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"PreloadClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip);
}
inline void GlobalNamespace::VolcanoEffects::PreloadStateFXClips(::GlobalNamespace::VolcanoEffects_LavaStateFX*  fx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"PreloadStateFXClips", {}, {::i2c::type_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fx);
}
inline void GlobalNamespace::VolcanoEffects::WarmUpAudioSourceGO(::UnityEngine::AudioSource*  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"WarmUpAudioSourceGO", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src);
}
inline void GlobalNamespace::VolcanoEffects::WarmUpStateFXSources(::GlobalNamespace::VolcanoEffects_LavaStateFX*  fx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"WarmUpStateFXSources", {}, {::i2c::type_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fx);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::VolcanoEffects::_PrewarmLavaSpewRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"_PrewarmLavaSpewRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::OnVolcanoBellyEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"OnVolcanoBellyEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::OnStoneAccepted(float_t  activationProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"OnStoneAccepted", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activationProgress);
}
inline void GlobalNamespace::VolcanoEffects::InitState(::GlobalNamespace::VolcanoEffects_LavaStateFX*  fx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"InitState", {}, {::i2c::type_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fx);
}
inline void GlobalNamespace::VolcanoEffects::SetLavaAudioEnabled(bool  toEnable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetLavaAudioEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toEnable);
}
inline void GlobalNamespace::VolcanoEffects::SetLavaAudioEnabled(bool  toEnable, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetLavaAudioEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toEnable, volume);
}
inline void GlobalNamespace::VolcanoEffects::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::UpdateState(float_t  time, float_t  timeRemaining, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, timeRemaining, progress);
}
inline void GlobalNamespace::VolcanoEffects::SetDrainedState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetDrainedState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::UpdateDrainedState(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateDrainedState", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::VolcanoEffects::SetEruptingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetEruptingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::UpdateEruptingState(float_t  time, float_t  timeRemaining, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateEruptingState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, timeRemaining, progress);
}
inline void GlobalNamespace::VolcanoEffects::SetRisingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetRisingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::UpdateRisingState(float_t  time, float_t  timeRemaining, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateRisingState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, timeRemaining, progress);
}
inline void GlobalNamespace::VolcanoEffects::SetFullState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetFullState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::UpdateFullState(float_t  time, float_t  timeRemaining, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateFullState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, timeRemaining, progress);
}
inline void GlobalNamespace::VolcanoEffects::SetDrainingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetDrainingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects::UpdateDrainingState(float_t  time, float_t  timeRemaining, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"UpdateDrainingState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, timeRemaining, progress);
}
inline void GlobalNamespace::VolcanoEffects::SetParticleEmissionRateAndBurst(float_t  multiplier, ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  emissionModules, ::ArrayW<float_t>  defaultRateMultipliers, ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  defaultEmitBursts, ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  adjustedEmitBursts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"SetParticleEmissionRateAndBurst", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>>(), ::i2c::type_of<::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplier, emissionModules, defaultRateMultipliers, defaultEmitBursts, adjustedEmitBursts);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline bool GlobalNamespace::VolcanoEffects::RemoveNullsFromArray(::by_ref<::ArrayW<T>>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                    {"RemoveNullsFromArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, array);
}
inline void GlobalNamespace::VolcanoEffects::LogNullsFoundInArray(::StringW  nameOfArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {"LogNullsFoundInArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameOfArray);
}
inline void GlobalNamespace::VolcanoEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VolcanoEffects* GlobalNamespace::VolcanoEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VolcanoEffects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VolcanoEffects::VolcanoEffects()   {
}
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::*)(int32_t)>(&::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59848d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::*)()>(&::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5985238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::*)()>(&::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x598523c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::*)()>(&::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5985350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::*)()>(&::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5985358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::*)()>(&::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5985390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::VolcanoEffects>& GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::VolcanoEffects> const& GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VolcanoEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35* GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35::VolcanoEffects___PrewarmLavaSpewRenderers_d__35()   {
}
//  Writing Method size for method: ::GlobalNamespace::VolcanoEffects_LavaStateFX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolcanoEffects_LavaStateFX::*)()>(&::GlobalNamespace::VolcanoEffects_LavaStateFX::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59851c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSound;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_startSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundAudioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundAudioSrc;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundAudioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundAudioSrc;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_startSoundAudioSrc(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSoundAudioSrc = value;
}
constexpr float_t& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundVol;
}
constexpr float_t const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundVol;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_startSoundVol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSoundVol = value;
}
constexpr float_t& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundDelay;
}
constexpr float_t const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundDelay;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_startSoundDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSoundDelay = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSound;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_endSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundAudioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundAudioSrc;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundAudioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundAudioSrc;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_endSoundAudioSrc(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSoundAudioSrc = value;
}
constexpr float_t& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundVol;
}
constexpr float_t const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundVol;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_endSoundVol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSoundVol = value;
}
constexpr float_t& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundPadTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundPadTime;
}
constexpr float_t const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundPadTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundPadTime;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_endSoundPadTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSoundPadTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1AudioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1AudioSrc;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1AudioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1AudioSrc;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop1AudioSrc(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop1AudioSrc = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1VolAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1VolAnim;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1VolAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1VolAnim;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop1VolAnim(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop1VolAnim = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2AudioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2AudioSrc;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2AudioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2AudioSrc;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop2AudioSrc(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop2AudioSrc = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2VolAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2VolAnim;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2VolAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2VolAnim;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop2VolAnim(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop2VolAnim = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaSpewEmissionAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewEmissionAnim;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaSpewEmissionAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSpewEmissionAnim;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_lavaSpewEmissionAnim(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSpewEmissionAnim = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_smokeEmissionAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeEmissionAnim;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_smokeEmissionAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeEmissionAnim;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_smokeEmissionAnim(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smokeEmissionAnim = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_smokeStartColorAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeStartColorAnim;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_smokeStartColorAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smokeStartColorAnim;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_smokeStartColorAnim(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smokeStartColorAnim = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaLightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaLightColor;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaLightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaLightColor;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_lavaLightColor(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaLightColor = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaLightIntensityAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaLightIntensityAnim;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaLightIntensityAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaLightIntensityAnim;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_lavaLightIntensityAnim(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaLightIntensityAnim = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaLightAttenuationAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaLightAttenuationAnim;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_lavaLightAttenuationAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaLightAttenuationAnim;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_lavaLightAttenuationAnim(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaLightAttenuationAnim = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundExists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundExists;
}
constexpr bool const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundExists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundExists;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_startSoundExists(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSoundExists = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundPlayed;
}
constexpr bool const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_startSoundPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSoundPlayed;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_startSoundPlayed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSoundPlayed = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundExists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundExists;
}
constexpr bool const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundExists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundExists;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_endSoundExists(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSoundExists = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundPlayed;
}
constexpr bool const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_endSoundPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSoundPlayed;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_endSoundPlayed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSoundPlayed = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1Exists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1Exists;
}
constexpr bool const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1Exists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1Exists;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop1Exists(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop1Exists = value;
}
constexpr float_t& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1DefaultVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1DefaultVolume;
}
constexpr float_t const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop1DefaultVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop1DefaultVolume;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop1DefaultVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop1DefaultVolume = value;
}
constexpr bool& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2Exists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2Exists;
}
constexpr bool const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2Exists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2Exists;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop2Exists(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop2Exists = value;
}
constexpr float_t& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2DefaultVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2DefaultVolume;
}
constexpr float_t const& GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_get_loop2DefaultVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop2DefaultVolume;
}
constexpr void GlobalNamespace::VolcanoEffects_LavaStateFX::__cordl_internal_set_loop2DefaultVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop2DefaultVolume = value;
}
inline void GlobalNamespace::VolcanoEffects_LavaStateFX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolcanoEffects_LavaStateFX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VolcanoEffects_LavaStateFX* GlobalNamespace::VolcanoEffects_LavaStateFX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VolcanoEffects_LavaStateFX*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX::VolcanoEffects_LavaStateFX()   {
}
