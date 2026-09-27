#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_MainModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_MainModule)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurveBlittable;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxGradientBlittable;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
struct ParticleSystemScalingMode;
}
namespace UnityEngine {
struct ParticleSystemSimulationSpace;
}
namespace UnityEngine {
struct ParticleSystemStopAction;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_MainModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_MainModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_MainModule, "UnityEngine", "ParticleSystem/MainModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MainModule
struct CORDL_TYPE ParticleSystem_MainModule {
public:
// Declarations
 __declspec(property(get=get_duration, put=set_duration)) float_t  duration;

 __declspec(property(put=set_gravityModifier)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  gravityModifier;

/// @brief [NativeName("GravityModifier")]
 __declspec(property(put=set_gravityModifierBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  gravityModifierBlittable;

 __declspec(property(get=get_gravityModifierMultiplier, put=set_gravityModifierMultiplier)) float_t  gravityModifierMultiplier;

 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_maxParticles, put=set_maxParticles)) int32_t  maxParticles;

 __declspec(property(get=get_playOnAwake, put=set_playOnAwake)) bool  playOnAwake;

 __declspec(property(put=set_prewarm)) bool  prewarm;

 __declspec(property(get=get_scalingMode, put=set_scalingMode)) ::UnityEngine::ParticleSystemScalingMode  scalingMode;

 __declspec(property(get=get_simulationSpace, put=set_simulationSpace)) ::UnityEngine::ParticleSystemSimulationSpace  simulationSpace;

 __declspec(property(get=get_simulationSpeed, put=set_simulationSpeed)) float_t  simulationSpeed;

 __declspec(property(get=get_startColor, put=set_startColor)) ::GlobalNamespace::ParticleSystem_MinMaxGradient  startColor;

/// @brief [NativeName("StartColor")]
 __declspec(property(get=get_startColorBlittable, put=set_startColorBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  startColorBlittable;

 __declspec(property(get=get_startDelayMultiplier, put=set_startDelayMultiplier)) float_t  startDelayMultiplier;

 __declspec(property(get=get_startLifetime)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startLifetime;

/// @brief [NativeName("StartLifetime")]
 __declspec(property(get=get_startLifetimeBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startLifetimeBlittable;

 __declspec(property(get=get_startLifetimeMultiplier, put=set_startLifetimeMultiplier)) float_t  startLifetimeMultiplier;

/// @brief [NativeName("StartRotationZMultiplier")]
 __declspec(property(get=get_startRotationMultiplier, put=set_startRotationMultiplier)) float_t  startRotationMultiplier;

 __declspec(property(put=set_startRotationX)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startRotationX;

/// @brief [NativeName("StartRotationX")]
 __declspec(property(put=set_startRotationXBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startRotationXBlittable;

 __declspec(property(get=get_startRotationXMultiplier, put=set_startRotationXMultiplier)) float_t  startRotationXMultiplier;

 __declspec(property(put=set_startRotationY)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startRotationY;

/// @brief [NativeName("StartRotationY")]
 __declspec(property(put=set_startRotationYBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startRotationYBlittable;

 __declspec(property(get=get_startRotationYMultiplier, put=set_startRotationYMultiplier)) float_t  startRotationYMultiplier;

 __declspec(property(put=set_startRotationZ)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startRotationZ;

/// @brief [NativeName("StartRotationZ")]
 __declspec(property(put=set_startRotationZBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startRotationZBlittable;

 __declspec(property(get=get_startRotationZMultiplier, put=set_startRotationZMultiplier)) float_t  startRotationZMultiplier;

 __declspec(property(get=get_startSize, put=set_startSize)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startSize;

 __declspec(property(get=get_startSize3D)) bool  startSize3D;

/// @brief [NativeName("StartSizeX")]
 __declspec(property(get=get_startSizeBlittable, put=set_startSizeBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startSizeBlittable;

/// @brief [NativeName("StartSizeXMultiplier")]
 __declspec(property(get=get_startSizeMultiplier, put=set_startSizeMultiplier)) float_t  startSizeMultiplier;

 __declspec(property(get=get_startSizeX, put=set_startSizeX)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startSizeX;

/// @brief [NativeName("StartSizeX")]
 __declspec(property(get=get_startSizeXBlittable, put=set_startSizeXBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startSizeXBlittable;

 __declspec(property(get=get_startSizeY, put=set_startSizeY)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startSizeY;

/// @brief [NativeName("StartSizeY")]
 __declspec(property(get=get_startSizeYBlittable, put=set_startSizeYBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startSizeYBlittable;

 __declspec(property(get=get_startSizeZ, put=set_startSizeZ)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startSizeZ;

/// @brief [NativeName("StartSizeZ")]
 __declspec(property(get=get_startSizeZBlittable, put=set_startSizeZBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startSizeZBlittable;

 __declspec(property(get=get_startSpeed, put=set_startSpeed)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  startSpeed;

/// @brief [NativeName("StartSpeed")]
 __declspec(property(get=get_startSpeedBlittable, put=set_startSpeedBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  startSpeedBlittable;

 __declspec(property(get=get_startSpeedMultiplier, put=set_startSpeedMultiplier)) float_t  startSpeedMultiplier;

 __declspec(property(put=set_stopAction)) ::UnityEngine::ParticleSystemStopAction  stopAction;

/// @brief Method .ctor, addr 0xb66e48c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_duration, addr 0xb669b04, size 0x3c, virtual false, abstract: false, final false
inline float_t get_duration() ;

/// @brief Method get_gravityModifierMultiplier, addr 0xb66aab0, size 0x3c, virtual false, abstract: false, final false
inline float_t get_gravityModifierMultiplier() ;

/// @brief Method get_loop, addr 0xb669890, size 0x3c, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_maxParticles, addr 0xb66abf4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_maxParticles() ;

/// @brief Method get_playOnAwake, addr 0xb6699cc, size 0x3c, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_scalingMode, addr 0xb66ae64, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode() ;

/// @brief Method get_simulationSpace, addr 0xb66ad2c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace() ;

/// @brief Method get_simulationSpeed, addr 0xb669b94, size 0x3c, virtual false, abstract: false, final false
inline float_t get_simulationSpeed() ;

/// @brief Method get_startColor, addr 0xb66a25c, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxGradient get_startColor() ;

/// @brief Method get_startColorBlittable, addr 0xb66f704, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable get_startColorBlittable() ;

/// @brief Method get_startColorBlittable_Injected, addr 0xb66f840, size 0x44, virtual false, abstract: false, final false
static inline void get_startColorBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>  ret) ;

/// @brief Method get_startDelayMultiplier, addr 0xb669748, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startDelayMultiplier() ;

/// @brief Method get_startLifetime, addr 0xb66e828, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_startLifetime() ;

/// @brief Method get_startLifetimeBlittable, addr 0xb66e89c, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_startLifetimeBlittable() ;

/// @brief Method get_startLifetimeBlittable_Injected, addr 0xb66e924, size 0x44, virtual false, abstract: false, final false
static inline void get_startLifetimeBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_startLifetimeMultiplier, addr 0xb66a96c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startLifetimeMultiplier() ;

/// @brief Method get_startRotationMultiplier, addr 0xb66a4c4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startRotationMultiplier() ;

/// @brief Method get_startRotationXMultiplier, addr 0xb66a6b0, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startRotationXMultiplier() ;

/// @brief Method get_startRotationYMultiplier, addr 0xb66a6ec, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startRotationYMultiplier() ;

/// @brief Method get_startRotationZMultiplier, addr 0xb66a728, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startRotationZMultiplier() ;

/// @brief Method get_startSize, addr 0xb66ebdc, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_startSize() ;

/// @brief Method get_startSize3D, addr 0xb66eba0, size 0x3c, virtual false, abstract: false, final false
inline bool get_startSize3D() ;

/// @brief Method get_startSizeBlittable, addr 0xb66ec50, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_startSizeBlittable() ;

/// @brief Method get_startSizeBlittable_Injected, addr 0xb66ed64, size 0x44, virtual false, abstract: false, final false
static inline void get_startSizeBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_startSizeMultiplier, addr 0xb66a12c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startSizeMultiplier() ;

/// @brief Method get_startSizeX, addr 0xb66edec, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_startSizeX() ;

/// @brief Method get_startSizeXBlittable, addr 0xb66ee60, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_startSizeXBlittable() ;

/// @brief Method get_startSizeXBlittable_Injected, addr 0xb66ef74, size 0x44, virtual false, abstract: false, final false
static inline void get_startSizeXBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_startSizeY, addr 0xb66effc, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_startSizeY() ;

/// @brief Method get_startSizeYBlittable, addr 0xb66f070, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_startSizeYBlittable() ;

/// @brief Method get_startSizeYBlittable_Injected, addr 0xb66f184, size 0x44, virtual false, abstract: false, final false
static inline void get_startSizeYBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_startSizeZ, addr 0xb66f20c, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_startSizeZ() ;

/// @brief Method get_startSizeZBlittable, addr 0xb66f280, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_startSizeZBlittable() ;

/// @brief Method get_startSizeZBlittable_Injected, addr 0xb66f394, size 0x44, virtual false, abstract: false, final false
static inline void get_startSizeZBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_startSpeed, addr 0xb66e968, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_startSpeed() ;

/// @brief Method get_startSpeedBlittable, addr 0xb66e9dc, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_startSpeedBlittable() ;

/// @brief Method get_startSpeedBlittable_Injected, addr 0xb66eb18, size 0x44, virtual false, abstract: false, final false
static inline void get_startSpeedBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_startSpeedMultiplier, addr 0xb669fe8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startSpeedMultiplier() ;

/// [NativeThrows]
/// @brief Method set_duration, addr 0xb66e798, size 0x4c, virtual false, abstract: false, final false
inline void set_duration(float_t  value) ;

/// @brief Method set_gravityModifier, addr 0xb66f8c8, size 0x70, virtual false, abstract: false, final false
inline void set_gravityModifier(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_gravityModifierBlittable, addr 0xb66f938, size 0x44, virtual false, abstract: false, final false
inline void set_gravityModifierBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_gravityModifierBlittable_Injected, addr 0xb66f97c, size 0x44, virtual false, abstract: false, final false
static inline void set_gravityModifierBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_gravityModifierMultiplier, addr 0xb66ab54, size 0x4c, virtual false, abstract: false, final false
inline void set_gravityModifierMultiplier(float_t  value) ;

/// [NativeThrows]
/// @brief Method set_loop, addr 0xb669930, size 0x44, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// [NativeThrows]
/// @brief Method set_maxParticles, addr 0xb66ac94, size 0x44, virtual false, abstract: false, final false
inline void set_maxParticles(int32_t  value) ;

/// [NativeThrows]
/// @brief Method set_playOnAwake, addr 0xb669a6c, size 0x44, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

/// [NativeThrows]
/// @brief Method set_prewarm, addr 0xb66e7e4, size 0x44, virtual false, abstract: false, final false
inline void set_prewarm(bool  value) ;

/// [NativeThrows]
/// @brief Method set_scalingMode, addr 0xb66af04, size 0x44, virtual false, abstract: false, final false
inline void set_scalingMode(::UnityEngine::ParticleSystemScalingMode  value) ;

/// [NativeThrows]
/// @brief Method set_simulationSpace, addr 0xb66adcc, size 0x44, virtual false, abstract: false, final false
inline void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace  value) ;

/// [NativeThrows]
/// @brief Method set_simulationSpeed, addr 0xb669c38, size 0x4c, virtual false, abstract: false, final false
inline void set_simulationSpeed(float_t  value) ;

/// @brief Method set_startColor, addr 0xb66a3f0, size 0x80, virtual false, abstract: false, final false
inline void set_startColor(::GlobalNamespace::ParticleSystem_MinMaxGradient  value) ;

/// [NativeThrows]
/// @brief Method set_startColorBlittable, addr 0xb66f7fc, size 0x44, virtual false, abstract: false, final false
inline void set_startColorBlittable(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  value) ;

/// @brief Method set_startColorBlittable_Injected, addr 0xb66f884, size 0x44, virtual false, abstract: false, final false
static inline void set_startColorBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_startDelayMultiplier, addr 0xb6697ec, size 0x4c, virtual false, abstract: false, final false
inline void set_startDelayMultiplier(float_t  value) ;

/// [NativeThrows]
/// @brief Method set_startLifetimeMultiplier, addr 0xb66aa10, size 0x4c, virtual false, abstract: false, final false
inline void set_startLifetimeMultiplier(float_t  value) ;

/// [NativeThrows]
/// @brief Method set_startRotationMultiplier, addr 0xb66a568, size 0x4c, virtual false, abstract: false, final false
inline void set_startRotationMultiplier(float_t  value) ;

/// @brief Method set_startRotationX, addr 0xb66f41c, size 0x70, virtual false, abstract: false, final false
inline void set_startRotationX(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startRotationXBlittable, addr 0xb66f48c, size 0x44, virtual false, abstract: false, final false
inline void set_startRotationXBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startRotationXBlittable_Injected, addr 0xb66f4d0, size 0x44, virtual false, abstract: false, final false
static inline void set_startRotationXBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_startRotationXMultiplier, addr 0xb66a834, size 0x4c, virtual false, abstract: false, final false
inline void set_startRotationXMultiplier(float_t  value) ;

/// @brief Method set_startRotationY, addr 0xb66f514, size 0x70, virtual false, abstract: false, final false
inline void set_startRotationY(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startRotationYBlittable, addr 0xb66f584, size 0x44, virtual false, abstract: false, final false
inline void set_startRotationYBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startRotationYBlittable_Injected, addr 0xb66f5c8, size 0x44, virtual false, abstract: false, final false
static inline void set_startRotationYBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_startRotationYMultiplier, addr 0xb66a880, size 0x4c, virtual false, abstract: false, final false
inline void set_startRotationYMultiplier(float_t  value) ;

/// @brief Method set_startRotationZ, addr 0xb66f60c, size 0x70, virtual false, abstract: false, final false
inline void set_startRotationZ(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startRotationZBlittable, addr 0xb66f67c, size 0x44, virtual false, abstract: false, final false
inline void set_startRotationZBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startRotationZBlittable_Injected, addr 0xb66f6c0, size 0x44, virtual false, abstract: false, final false
static inline void set_startRotationZBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_startRotationZMultiplier, addr 0xb66a8cc, size 0x4c, virtual false, abstract: false, final false
inline void set_startRotationZMultiplier(float_t  value) ;

/// @brief Method set_startSize, addr 0xb66ecb0, size 0x70, virtual false, abstract: false, final false
inline void set_startSize(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startSizeBlittable, addr 0xb66ed20, size 0x44, virtual false, abstract: false, final false
inline void set_startSizeBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startSizeBlittable_Injected, addr 0xb66eda8, size 0x44, virtual false, abstract: false, final false
static inline void set_startSizeBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_startSizeMultiplier, addr 0xb66a1d0, size 0x4c, virtual false, abstract: false, final false
inline void set_startSizeMultiplier(float_t  value) ;

/// @brief Method set_startSizeX, addr 0xb66eec0, size 0x70, virtual false, abstract: false, final false
inline void set_startSizeX(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startSizeXBlittable, addr 0xb66ef30, size 0x44, virtual false, abstract: false, final false
inline void set_startSizeXBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startSizeXBlittable_Injected, addr 0xb66efb8, size 0x44, virtual false, abstract: false, final false
static inline void set_startSizeXBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_startSizeY, addr 0xb66f0d0, size 0x70, virtual false, abstract: false, final false
inline void set_startSizeY(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startSizeYBlittable, addr 0xb66f140, size 0x44, virtual false, abstract: false, final false
inline void set_startSizeYBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startSizeYBlittable_Injected, addr 0xb66f1c8, size 0x44, virtual false, abstract: false, final false
static inline void set_startSizeYBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_startSizeZ, addr 0xb66f2e0, size 0x70, virtual false, abstract: false, final false
inline void set_startSizeZ(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startSizeZBlittable, addr 0xb66f350, size 0x44, virtual false, abstract: false, final false
inline void set_startSizeZBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startSizeZBlittable_Injected, addr 0xb66f3d8, size 0x44, virtual false, abstract: false, final false
static inline void set_startSizeZBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_startSpeed, addr 0xb66ea3c, size 0x70, virtual false, abstract: false, final false
inline void set_startSpeed(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_startSpeedBlittable, addr 0xb66ead4, size 0x44, virtual false, abstract: false, final false
inline void set_startSpeedBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_startSpeedBlittable_Injected, addr 0xb66eb5c, size 0x44, virtual false, abstract: false, final false
static inline void set_startSpeedBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_MainModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_startSpeedMultiplier, addr 0xb66a08c, size 0x4c, virtual false, abstract: false, final false
inline void set_startSpeedMultiplier(float_t  value) ;

/// [NativeThrows]
/// @brief Method set_stopAction, addr 0xb66f9c0, size 0x44, virtual false, abstract: false, final false
inline void set_stopAction(::UnityEngine::ParticleSystemStopAction  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MainModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_MainModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30791};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_MainModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_MainModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
