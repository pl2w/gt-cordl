#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_JobScheduleParameters_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCustomData_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemScalingMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemSimulationSpace_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemStopBehavior_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_CollisionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ColorBySpeedModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ColorOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_CustomDataModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmitParams_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ExternalForcesModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ForceOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_InheritVelocityModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_LifetimeByEmitterSpeedModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_LightsModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_LimitVelocityOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurveBlittable_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxGradientBlittable_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxGradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_NoiseModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_RotationBySpeedModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_RotationOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ShapeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_SizeBySpeedModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_SizeOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_SubEmittersModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TextureSheetAnimationModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TrailModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Trails_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TriggerModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_VelocityOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::GlobalNamespace::ParticleSystem_Trails)>(&::UnityEngine::ParticleSystem::SetTrails)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb6693d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetTrails", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Color32)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb669494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::GlobalNamespace::ParticleSystem_Particle)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb6696d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_Particle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startDelay)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb6696d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startDelay)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb669784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_loop)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb669838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_loop)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb6698cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_loop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_playOnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_playOnAwake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb669974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_playOnAwake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_playOnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_playOnAwake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb669a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_playOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_duration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb669ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_playbackSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_playbackSpeed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb669b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_playbackSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_playbackSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_playbackSpeed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb669bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_playbackSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_enableEmission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_enableEmission)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb669c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_enableEmission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_enableEmission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_enableEmission)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb669d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_enableEmission", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_emissionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_emissionRate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb669ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_emissionRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_emissionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_emissionRate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb669e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_emissionRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startSpeed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb669f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startSpeed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb66a024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66a0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb66a168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb66a21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Color)>(&::UnityEngine::ParticleSystem::set_startColor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb66a304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startRotation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startRotation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb66a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startRotation3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startRotation3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb66a5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startRotation3D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startRotation3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem::set_startRotation3D)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb66a764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startRotation3D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startLifetime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66a918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startLifetime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startLifetime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb66a9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startLifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_gravityModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_gravityModifier)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66aa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_gravityModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_gravityModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_gravityModifier)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb66aaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_gravityModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_maxParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_maxParticles)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_maxParticles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_maxParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::set_maxParticles)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb66ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_maxParticles", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_simulationSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemSimulationSpace (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_simulationSpace)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66acd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_simulationSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_simulationSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemSimulationSpace)>(&::UnityEngine::ParticleSystem::set_simulationSpace)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb66ad68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_simulationSpace", {}, {::i2c::type_of<::UnityEngine::ParticleSystemSimulationSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_scalingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemScalingMode (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_scalingMode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_scalingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_scalingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemScalingMode)>(&::UnityEngine::ParticleSystem::set_scalingMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb66aea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_scalingMode", {}, {::i2c::type_of<::UnityEngine::ParticleSystemScalingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_automaticCullingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_automaticCullingEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb66af48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_automaticCullingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isPlaying)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66afc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isEmitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isEmitting)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isEmitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isStopped)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isPaused)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_particleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_particleCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_particleCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_time)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_time)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb66b3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_time", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_totalTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_totalTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_totalTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_randomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_randomSeed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_randomSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_randomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(uint32_t)>(&::UnityEngine::ParticleSystem::set_randomSeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66b638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_randomSeed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_useAutoRandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_useAutoRandomSeed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66b6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_useAutoRandomSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_useAutoRandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_useAutoRandomSeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_useAutoRandomSeed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_proceduralSimulationSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_proceduralSimulationSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66af4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_proceduralSimulationSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)(::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystem::*)(::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentSize3D)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb66b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize3D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::UnityEngine::ParticleSystem::*)(::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentColor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb66ba68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentColor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleMeshIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::GetParticleMeshIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleMeshIndex", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb66bc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66bddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66bde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesWithNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesWithNativeArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb66bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesWithNativeArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb66bf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66bf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb66bfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66c1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticlesWithNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::GetParticlesWithNativeArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb66c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticlesWithNativeArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb66c2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66c354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66c35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetCustomParticleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::SetCustomParticleData)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb66c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetCustomParticleData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetCustomParticleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::GetCustomParticleData)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xb66c5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetCustomParticleData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetPlaybackState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_PlaybackState (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetPlaybackState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb66c834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetPlaybackState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetPlaybackState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::GlobalNamespace::ParticleSystem_PlaybackState)>(&::UnityEngine::ParticleSystem::SetPlaybackState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66c92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetPlaybackState", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_PlaybackState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrailDataInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::GlobalNamespace::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::GetTrailDataInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66c9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrailDataInternal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_Trails (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetTrails)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66cab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::GlobalNamespace::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::GetTrails)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb66ccbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrails", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>, ::GlobalNamespace::ParticleSystem_Trails, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrails)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb66cd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>, ::GlobalNamespace::ParticleSystem_Trails, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrails)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb66cef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>, ::GlobalNamespace::ParticleSystem_Trails)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrails)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb66cf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrailsWithNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::System::IntPtr, ::GlobalNamespace::ParticleSystem_Trails, int32_t, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrailsWithNativeArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb66cf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrailsWithNativeArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>, ::GlobalNamespace::ParticleSystem_Trails, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrails)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb66d07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>, ::GlobalNamespace::ParticleSystem_Trails, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrails)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb66d134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>, ::GlobalNamespace::ParticleSystem_Trails)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrails)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb66d164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb66d198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66d2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66d2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb66d2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Play)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Play", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Play)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66d394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Pause)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66d39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Pause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Pause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool, ::UnityEngine::ParticleSystemStopBehavior)>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb66d468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66d54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66d554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Clear", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66d624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::IsAlive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66d62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"IsAlive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::IsAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66d6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"IsAlive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb66d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::Emit_Internal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66d6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit_Internal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::GlobalNamespace::ParticleSystem_EmitParams, int32_t)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb66d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_EmitParams>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.EmitOld_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::EmitOld_Internal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb669654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"EmitOld_Internal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb66d8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66d96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*)>(&::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::GlobalNamespace::ParticleSystem_Particle)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForParticle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb66d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Particle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForParticles)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb66da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForAllParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66d8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForAllParticles", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ResetPreMappedBufferMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ParticleSystem::ResetPreMappedBufferMemory)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb66dd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"ResetPreMappedBufferMemory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetMaximumPreMappedBufferCounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetMaximumPreMappedBufferCounts)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetMaximumPreMappedBufferCounts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateAxisOfRotationAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66dd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateAxisOfRotationAttribute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateMeshIndexAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::AllocateMeshIndexAttribute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66de38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateMeshIndexAttribute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateCustomDataAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::AllocateCustomDataAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb66deec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateCustomDataAttribute", {}, {::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_has3DParticleRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_has3DParticleRotations)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66dfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_has3DParticleRotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_hasNonUniformParticleSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66e064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_hasNonUniformParticleSizes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetManagedJobData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb66e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetManagedJobHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb66e1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetManagedJobHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::ParticleSystem::SetManagedJobHandle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb66e2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetManagedJobHandle", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ScheduleManagedJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>, void*)>(&::UnityEngine::ParticleSystem::ScheduleManagedJob)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb66e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"ScheduleManagedJob", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.CopyManagedJobData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>)>(&::UnityEngine::ParticleSystem::CopyManagedJobData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"CopyManagedJobData", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.UserJobCanBeScheduled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::ParticleSystem::UserJobCanBeScheduled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb66e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"UserJobCanBeScheduled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_main
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_MainModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_main)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66972c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_main", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_emission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_EmissionModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_emission)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb669cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_emission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_shape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_ShapeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_shape)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_shape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_velocityOverLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_VelocityOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_velocityOverLifetime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_velocityOverLifetime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_limitVelocityOverLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_limitVelocityOverLifetime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_limitVelocityOverLifetime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_inheritVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_InheritVelocityModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_inheritVelocity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_inheritVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_lifetimeByEmitterSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_LifetimeByEmitterSpeedModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_lifetimeByEmitterSpeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_lifetimeByEmitterSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_forceOverLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_forceOverLifetime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_forceOverLifetime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_colorOverLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_colorOverLifetime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_colorOverLifetime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_colorBySpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_ColorBySpeedModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_colorBySpeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_colorBySpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_sizeOverLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_SizeOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_sizeOverLifetime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_sizeOverLifetime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_sizeBySpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_SizeBySpeedModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_sizeBySpeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_sizeBySpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_rotationOverLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_rotationOverLifetime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_rotationOverLifetime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_rotationBySpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_RotationBySpeedModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_rotationBySpeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_rotationBySpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_externalForces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_ExternalForcesModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_externalForces)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_externalForces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_noise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_NoiseModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_noise)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_noise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_collision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_CollisionModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_collision)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_collision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_TriggerModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_trigger)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_trigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_subEmitters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_SubEmittersModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_subEmitters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_subEmitters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_textureSheetAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_TextureSheetAnimationModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_textureSheetAnimation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_textureSheetAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_lights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_LightsModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_lights)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_lights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_trails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_TrailModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_trails)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_trails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_customData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_CustomDataModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_customData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb66e76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_customData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66e790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetTrails_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::SetTrails_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb669450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetTrails_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPlaying_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isPlaying_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPlaying_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isEmitting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isEmitting_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isEmitting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isStopped_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isStopped_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isStopped_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPaused_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isPaused_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPaused_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_particleCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_particleCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_particleCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystem::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb66b484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_totalTime_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_totalTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_totalTime_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_randomSeed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_randomSeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_randomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_randomSeed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::UnityEngine::ParticleSystem::set_randomSeed_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66b6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_randomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_useAutoRandomSeed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_useAutoRandomSeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_useAutoRandomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_useAutoRandomSeed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::set_useAutoRandomSeed_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_useAutoRandomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_proceduralSimulationSupported_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_proceduralSimulationSupported_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66b874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_proceduralSimulationSupported_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentSize_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize3D_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentSize3D_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66ba14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize3D_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>, ::by_ref<::UnityEngine::Color32>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentColor_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66bb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleMeshIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::GetParticleMeshIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66bbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleMeshIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb66bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesWithNativeArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesWithNativeArray_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb66be98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesWithNativeArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb66c144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticlesWithNativeArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::GetParticlesWithNativeArray_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb66c25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticlesWithNativeArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetCustomParticleData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::SetCustomParticleData_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66c574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetCustomParticleData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetCustomParticleData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::GetCustomParticleData_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetCustomParticleData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetPlaybackState_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>)>(&::UnityEngine::ParticleSystem::GetPlaybackState_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66c8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetPlaybackState_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetPlaybackState_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>)>(&::UnityEngine::ParticleSystem::SetPlaybackState_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66c9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetPlaybackState_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrailDataInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::GetTrailDataInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrailDataInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrails_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrails_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb66ce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesAndTrailsWithNativeArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>, int32_t, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesAndTrailsWithNativeArray_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb66d008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrailsWithNativeArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, bool, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb66d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::Play_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Play_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::Pause_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66d41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Pause_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, ::UnityEngine::ParticleSystemStopBehavior)>(&::UnityEngine::ParticleSystem::Stop_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66d4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::Clear_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Clear_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::IsAlive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66d6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"IsAlive_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ParticleSystem::Emit_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66d77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_EmitParams>, int32_t)>(&::UnityEngine::ParticleSystem::Emit_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66d850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_EmitParams>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.EmitOld_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::EmitOld_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66d8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"EmitOld_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForParticle_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66dc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticles_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForParticles_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66dc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForAllParticles_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66dcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForAllParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateAxisOfRotationAttribute_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66ddfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateAxisOfRotationAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateMeshIndexAttribute_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::AllocateMeshIndexAttribute_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66deb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateMeshIndexAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateCustomDataAttribute_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::AllocateCustomDataAttribute_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66df6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateCustomDataAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_has3DParticleRotations_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_has3DParticleRotations_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66e028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_has3DParticleRotations_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_hasNonUniformParticleSizes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66e0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_hasNonUniformParticleSizes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::GetManagedJobData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb66e190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobHandle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::ParticleSystem::GetManagedJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66e25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobHandle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetManagedJobHandle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::ParticleSystem::SetManagedJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66e32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetManagedJobHandle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ScheduleManagedJob_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>, void*, ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::ParticleSystem::ScheduleManagedJob_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66e3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"ScheduleManagedJob_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem::SetTrails(::GlobalNamespace::ParticleSystem_Trails  trailData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetTrails", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailData);
}
inline void UnityEngine::ParticleSystem::Emit(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, float_t  size, float_t  lifetime, ::UnityEngine::Color32  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, velocity, size, lifetime, color);
}
inline void UnityEngine::ParticleSystem::Emit(::GlobalNamespace::ParticleSystem_Particle  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_Particle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline float_t UnityEngine::ParticleSystem::get_startDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_loop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_loop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_playOnAwake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_playOnAwake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_playOnAwake(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_playOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::get_playbackSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_playbackSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_playbackSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_playbackSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_enableEmission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_enableEmission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_enableEmission(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_enableEmission", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_emissionRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_emissionRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_emissionRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_emissionRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::ParticleSystem::get_startColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startRotation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystem::get_startRotation3D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startRotation3D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startRotation3D(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startRotation3D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startLifetime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_startLifetime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startLifetime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_startLifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_gravityModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_gravityModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_gravityModifier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_gravityModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ParticleSystem::get_maxParticles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_maxParticles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_maxParticles(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_maxParticles", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemSimulationSpace UnityEngine::ParticleSystem::get_simulationSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_simulationSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSimulationSpace>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_simulationSpace", {}, {::i2c::type_of<::UnityEngine::ParticleSystemSimulationSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemScalingMode UnityEngine::ParticleSystem::get_scalingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_scalingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemScalingMode>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_scalingMode(::UnityEngine::ParticleSystemScalingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_scalingMode", {}, {::i2c::type_of<::UnityEngine::ParticleSystemScalingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_automaticCullingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_automaticCullingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isEmitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isEmitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::ParticleSystem::get_particleCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_particleCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_time(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_time", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_totalTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_totalTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::ParticleSystem::get_randomSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_randomSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_randomSeed(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_randomSeed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_useAutoRandomSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_useAutoRandomSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_useAutoRandomSeed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_useAutoRandomSeed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_proceduralSimulationSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_proceduralSimulationSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::GetParticleCurrentSize(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, particle);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystem::GetParticleCurrentSize3D(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize3D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, particle);
}
inline ::UnityEngine::Color32 UnityEngine::ParticleSystem::GetParticleCurrentColor(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentColor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, particle);
}
inline int32_t UnityEngine::ParticleSystem::GetParticleMeshIndex(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleMeshIndex", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particle);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles);
}
inline void UnityEngine::ParticleSystem::SetParticlesWithNativeArray(::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesWithNativeArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, particlesLength, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(/* [NotNull] */ ::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles);
}
inline int32_t UnityEngine::ParticleSystem::GetParticlesWithNativeArray(::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticlesWithNativeArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, particlesLength, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles);
}
inline void UnityEngine::ParticleSystem::SetCustomParticleData(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetCustomParticleData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customData, streamIndex);
}
inline int32_t UnityEngine::ParticleSystem::GetCustomParticleData(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetCustomParticleData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, customData, streamIndex);
}
inline ::GlobalNamespace::ParticleSystem_PlaybackState UnityEngine::ParticleSystem::GetPlaybackState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetPlaybackState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_PlaybackState>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetPlaybackState(::GlobalNamespace::ParticleSystem_PlaybackState  playbackState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetPlaybackState", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_PlaybackState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playbackState);
}
inline void UnityEngine::ParticleSystem::GetTrailDataInternal(::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrailDataInternal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailData);
}
inline ::GlobalNamespace::ParticleSystem_Trails UnityEngine::ParticleSystem::GetTrails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_Trails>(this, ___internal_method);
}
inline int32_t UnityEngine::ParticleSystem::GetTrails(::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrails", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, trailData);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrails(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, trailData, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrails(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, trailData, size);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrails(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, trailData);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrailsWithNativeArray(::System::IntPtr  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  particlesLength, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrailsWithNativeArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, trailData, particlesLength, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrails(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, trailData, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrails(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, trailData, size);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrails(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Trails>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, trailData);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t  t, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("true")] */ bool  restart, /* [DefaultValue("true")] */ bool  fixedTimeStep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, withChildren, restart, fixedTimeStep);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t  t, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("true")] */ bool  restart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, withChildren, restart);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t  t, /* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, withChildren);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void UnityEngine::ParticleSystem::Play(/* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Play", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Pause(/* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Pause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Stop(/* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] */ ::UnityEngine::ParticleSystemStopBehavior  stopBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren, stopBehavior);
}
inline void UnityEngine::ParticleSystem::Stop(/* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Clear(/* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Clear", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::IsAlive(/* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"IsAlive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, withChildren);
}
inline bool UnityEngine::ParticleSystem::IsAlive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"IsAlive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Emit(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void UnityEngine::ParticleSystem::Emit_Internal(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit_Internal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void UnityEngine::ParticleSystem::Emit(::GlobalNamespace::ParticleSystem_EmitParams  emitParams, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_EmitParams>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitParams, count);
}
inline void UnityEngine::ParticleSystem::EmitOld_Internal(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"EmitOld_Internal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t  subEmitterIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t  subEmitterIndex, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t  subEmitterIndex, ::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particles);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticle(int32_t  subEmitterIndex, ::GlobalNamespace::ParticleSystem_Particle  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_Particle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticles(int32_t  subEmitterIndex, ::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particles);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles(int32_t  subEmitterIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForAllParticles", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex);
}
inline void UnityEngine::ParticleSystem::ResetPreMappedBufferMemory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"ResetPreMappedBufferMemory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetMaximumPreMappedBufferCounts(int32_t  vertexBuffersCount, int32_t  indexBuffersCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetMaximumPreMappedBufferCounts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexBuffersCount, indexBuffersCount);
}
inline void UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateAxisOfRotationAttribute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::AllocateMeshIndexAttribute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateMeshIndexAttribute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::AllocateCustomDataAttribute(::UnityEngine::ParticleSystemCustomData  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateCustomDataAttribute", {}, {::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline bool UnityEngine::ParticleSystem::get_has3DParticleRotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_has3DParticleRotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_hasNonUniformParticleSizes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void* UnityEngine::ParticleSystem::GetManagedJobData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::ParticleSystem::GetManagedJobHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetManagedJobHandle(::Unity::Jobs::JobHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetManagedJobHandle", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle UnityEngine::ParticleSystem::ScheduleManagedJob(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, void*  additionalData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"ScheduleManagedJob", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, additionalData);
}
inline void UnityEngine::ParticleSystem::CopyManagedJobData(void*  systemPtr, ::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>  particleData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"CopyManagedJobData", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, systemPtr, particleData);
}
inline bool UnityEngine::ParticleSystem::UserJobCanBeScheduled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"UserJobCanBeScheduled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_MainModule UnityEngine::ParticleSystem::get_main()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_main", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_MainModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_EmissionModule UnityEngine::ParticleSystem::get_emission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_emission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_EmissionModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_ShapeModule UnityEngine::ParticleSystem::get_shape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_shape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_ShapeModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_VelocityOverLifetimeModule UnityEngine::ParticleSystem::get_velocityOverLifetime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_velocityOverLifetime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_VelocityOverLifetimeModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule UnityEngine::ParticleSystem::get_limitVelocityOverLifetime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_limitVelocityOverLifetime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_InheritVelocityModule UnityEngine::ParticleSystem::get_inheritVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_inheritVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_InheritVelocityModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_LifetimeByEmitterSpeedModule UnityEngine::ParticleSystem::get_lifetimeByEmitterSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_lifetimeByEmitterSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_LifetimeByEmitterSpeedModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule UnityEngine::ParticleSystem::get_forceOverLifetime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_forceOverLifetime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule UnityEngine::ParticleSystem::get_colorOverLifetime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_colorOverLifetime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_ColorBySpeedModule UnityEngine::ParticleSystem::get_colorBySpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_colorBySpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_SizeOverLifetimeModule UnityEngine::ParticleSystem::get_sizeOverLifetime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_sizeOverLifetime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_SizeOverLifetimeModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_SizeBySpeedModule UnityEngine::ParticleSystem::get_sizeBySpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_sizeBySpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_SizeBySpeedModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule UnityEngine::ParticleSystem::get_rotationOverLifetime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_rotationOverLifetime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_RotationBySpeedModule UnityEngine::ParticleSystem::get_rotationBySpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_rotationBySpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_RotationBySpeedModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_ExternalForcesModule UnityEngine::ParticleSystem::get_externalForces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_externalForces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_ExternalForcesModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_NoiseModule UnityEngine::ParticleSystem::get_noise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_noise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_NoiseModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_CollisionModule UnityEngine::ParticleSystem::get_collision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_collision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_CollisionModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_TriggerModule UnityEngine::ParticleSystem::get_trigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_trigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_TriggerModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_SubEmittersModule UnityEngine::ParticleSystem::get_subEmitters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_subEmitters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_SubEmittersModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_TextureSheetAnimationModule UnityEngine::ParticleSystem::get_textureSheetAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_textureSheetAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_TextureSheetAnimationModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_LightsModule UnityEngine::ParticleSystem::get_lights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_lights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_LightsModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_TrailModule UnityEngine::ParticleSystem::get_trails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_trails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_TrailModule>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_CustomDataModule UnityEngine::ParticleSystem::get_customData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_customData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_CustomDataModule>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetTrails_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetTrails_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trailData);
}
inline bool UnityEngine::ParticleSystem::get_isPlaying_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPlaying_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_isEmitting_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isEmitting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_isStopped_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isStopped_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_isPaused_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_isPaused_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::ParticleSystem::get_particleCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_particleCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::ParticleSystem::get_time_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::set_time_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystem::get_totalTime_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_totalTime_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::ParticleSystem::get_randomSeed_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_randomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::set_randomSeed_Injected(::System::IntPtr  _unity_self, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_randomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystem::get_useAutoRandomSeed_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_useAutoRandomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::set_useAutoRandomSeed_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"set_useAutoRandomSeed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystem::get_proceduralSimulationSupported_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_proceduralSimulationSupported_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::ParticleSystem::GetParticleCurrentSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, particle);
}
inline void UnityEngine::ParticleSystem::GetParticleCurrentSize3D_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentSize3D_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particle, ret);
}
inline void UnityEngine::ParticleSystem::GetParticleCurrentColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle, ::by_ref<::UnityEngine::Color32>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleCurrentColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particle, ret);
}
inline int32_t UnityEngine::ParticleSystem::GetParticleMeshIndex_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticleMeshIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, particle);
}
inline void UnityEngine::ParticleSystem::SetParticles_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  particles, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticlesWithNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesWithNativeArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particles, particlesLength, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  particles, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticlesWithNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetParticlesWithNativeArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, particles, particlesLength, size, offset);
}
inline void UnityEngine::ParticleSystem::SetCustomParticleData_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetCustomParticleData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, customData, streamIndex);
}
inline int32_t UnityEngine::ParticleSystem::GetCustomParticleData_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetCustomParticleData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, customData, streamIndex);
}
inline void UnityEngine::ParticleSystem::GetPlaybackState_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetPlaybackState_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ParticleSystem::SetPlaybackState_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>  playbackState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetPlaybackState_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, playbackState);
}
inline void UnityEngine::ParticleSystem::GetTrailDataInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetTrailDataInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trailData);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrails_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  particles, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrails_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particles, trailData, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticlesAndTrailsWithNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  particles, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData, int32_t  particlesLength, int32_t  size, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetParticlesAndTrailsWithNativeArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Trails>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particles, trailData, particlesLength, size, offset);
}
inline void UnityEngine::ParticleSystem::Simulate_Injected(::System::IntPtr  _unity_self, float_t  t, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("true")] */ bool  restart, /* [DefaultValue("true")] */ bool  fixedTimeStep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Simulate_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, t, withChildren, restart, fixedTimeStep);
}
inline void UnityEngine::ParticleSystem::Play_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Play_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline void UnityEngine::ParticleSystem::Pause_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Pause_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline void UnityEngine::ParticleSystem::Stop_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] */ ::UnityEngine::ParticleSystemStopBehavior  stopBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Stop_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren, stopBehavior);
}
inline void UnityEngine::ParticleSystem::Clear_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Clear_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline bool UnityEngine::ParticleSystem::IsAlive_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"IsAlive_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline void UnityEngine::ParticleSystem::Emit_Internal_Injected(::System::IntPtr  _unity_self, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, count);
}
inline void UnityEngine::ParticleSystem::Emit_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_EmitParams>  emitParams, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"Emit_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_EmitParams>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, emitParams, count);
}
inline void UnityEngine::ParticleSystem::EmitOld_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"EmitOld_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticle_Injected(::System::IntPtr  _unity_self, int32_t  subEmitterIndex, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_Particle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticles_Injected(::System::IntPtr  _unity_self, int32_t  subEmitterIndex, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subEmitterIndex, particles);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles_Injected(::System::IntPtr  _unity_self, int32_t  subEmitterIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"TriggerSubEmitterForAllParticles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subEmitterIndex);
}
inline void UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateAxisOfRotationAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::AllocateMeshIndexAttribute_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateMeshIndexAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::AllocateCustomDataAttribute_Injected(::System::IntPtr  _unity_self, ::UnityEngine::ParticleSystemCustomData  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"AllocateCustomDataAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stream);
}
inline bool UnityEngine::ParticleSystem::get_has3DParticleRotations_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_has3DParticleRotations_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"get_hasNonUniformParticleSizes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void* UnityEngine::ParticleSystem::GetManagedJobData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::GetManagedJobHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Jobs::JobHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"GetManagedJobHandle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ParticleSystem::SetManagedJobHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Jobs::JobHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"SetManagedJobHandle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, handle);
}
inline void UnityEngine::ParticleSystem::ScheduleManagedJob_Injected(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, void*  additionalData, ::by_ref<::Unity::Jobs::JobHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                        {"ScheduleManagedJob_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, additionalData, ret);
}
inline ::UnityEngine::ParticleSystem* UnityEngine::ParticleSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ParticleSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem::ParticleSystem()   {
}
