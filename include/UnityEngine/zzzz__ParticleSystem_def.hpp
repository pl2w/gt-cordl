#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem)
namespace GlobalNamespace {
struct JobsUtility_JobScheduleParameters;
}
namespace GlobalNamespace {
struct ParticleSystem_Burst;
}
namespace GlobalNamespace {
struct ParticleSystem_CollisionModule;
}
namespace GlobalNamespace {
struct ParticleSystem_ColorBySpeedModule;
}
namespace GlobalNamespace {
struct ParticleSystem_ColorOverLifetimeModule;
}
namespace GlobalNamespace {
struct ParticleSystem_CustomDataModule;
}
namespace GlobalNamespace {
struct ParticleSystem_EmissionModule;
}
namespace GlobalNamespace {
struct ParticleSystem_EmitParams;
}
namespace GlobalNamespace {
struct ParticleSystem_ExternalForcesModule;
}
namespace GlobalNamespace {
struct ParticleSystem_ForceOverLifetimeModule;
}
namespace GlobalNamespace {
struct ParticleSystem_InheritVelocityModule;
}
namespace GlobalNamespace {
struct ParticleSystem_LifetimeByEmitterSpeedModule;
}
namespace GlobalNamespace {
struct ParticleSystem_LightsModule;
}
namespace GlobalNamespace {
struct ParticleSystem_LimitVelocityOverLifetimeModule;
}
namespace GlobalNamespace {
struct ParticleSystem_MainModule;
}
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
namespace GlobalNamespace {
struct ParticleSystem_NoiseModule;
}
namespace GlobalNamespace {
struct ParticleSystem_Particle;
}
namespace GlobalNamespace {
struct ParticleSystem_PlaybackState;
}
namespace GlobalNamespace {
struct ParticleSystem_RotationBySpeedModule;
}
namespace GlobalNamespace {
struct ParticleSystem_RotationOverLifetimeModule;
}
namespace GlobalNamespace {
struct ParticleSystem_ShapeModule;
}
namespace GlobalNamespace {
struct ParticleSystem_SizeBySpeedModule;
}
namespace GlobalNamespace {
struct ParticleSystem_SizeOverLifetimeModule;
}
namespace GlobalNamespace {
struct ParticleSystem_SubEmittersModule;
}
namespace GlobalNamespace {
struct ParticleSystem_TextureSheetAnimationModule;
}
namespace GlobalNamespace {
struct ParticleSystem_TrailModule;
}
namespace GlobalNamespace {
struct ParticleSystem_Trails;
}
namespace GlobalNamespace {
struct ParticleSystem_TriggerModule;
}
namespace GlobalNamespace {
struct ParticleSystem_VelocityOverLifetimeModule;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct ParticleSystemCustomData;
}
namespace UnityEngine {
struct ParticleSystemScalingMode;
}
namespace UnityEngine {
struct ParticleSystemSimulationSpace;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::ParticleSystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
// [NativeHeader("ParticleSystemScriptingClasses.h")]
// [NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemModulesScriptBindings.h")]
// [NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
// [NativeHeader("ParticleSystemScriptingClasses.h")]
// [NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
// [UsedByNativeCode]
// [NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
// [NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
// [NativeHeader("Modules/ParticleSystem/ParticleSystemGeometryJob.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystem
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
// Declarations
using Burst = ::GlobalNamespace::ParticleSystem_Burst;

using CollisionModule = ::GlobalNamespace::ParticleSystem_CollisionModule;

using ColorBySpeedModule = ::GlobalNamespace::ParticleSystem_ColorBySpeedModule;

using ColorOverLifetimeModule = ::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule;

using CustomDataModule = ::GlobalNamespace::ParticleSystem_CustomDataModule;

using EmissionModule = ::GlobalNamespace::ParticleSystem_EmissionModule;

using EmitParams = ::GlobalNamespace::ParticleSystem_EmitParams;

using ExternalForcesModule = ::GlobalNamespace::ParticleSystem_ExternalForcesModule;

using ForceOverLifetimeModule = ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule;

using InheritVelocityModule = ::GlobalNamespace::ParticleSystem_InheritVelocityModule;

using LifetimeByEmitterSpeedModule = ::GlobalNamespace::ParticleSystem_LifetimeByEmitterSpeedModule;

using LightsModule = ::GlobalNamespace::ParticleSystem_LightsModule;

using LimitVelocityOverLifetimeModule = ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule;

using MainModule = ::GlobalNamespace::ParticleSystem_MainModule;

using MinMaxCurve = ::GlobalNamespace::ParticleSystem_MinMaxCurve;

using MinMaxCurveBlittable = ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable;

using MinMaxGradient = ::GlobalNamespace::ParticleSystem_MinMaxGradient;

using MinMaxGradientBlittable = ::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable;

using NoiseModule = ::GlobalNamespace::ParticleSystem_NoiseModule;

using Particle = ::GlobalNamespace::ParticleSystem_Particle;

using PlaybackState = ::GlobalNamespace::ParticleSystem_PlaybackState;

using RotationBySpeedModule = ::GlobalNamespace::ParticleSystem_RotationBySpeedModule;

using RotationOverLifetimeModule = ::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule;

using ShapeModule = ::GlobalNamespace::ParticleSystem_ShapeModule;

using SizeBySpeedModule = ::GlobalNamespace::ParticleSystem_SizeBySpeedModule;

using SizeOverLifetimeModule = ::GlobalNamespace::ParticleSystem_SizeOverLifetimeModule;

using SubEmittersModule = ::GlobalNamespace::ParticleSystem_SubEmittersModule;

using TextureSheetAnimationModule = ::GlobalNamespace::ParticleSystem_TextureSheetAnimationModule;

using TrailModule = ::GlobalNamespace::ParticleSystem_TrailModule;

using Trails = ::GlobalNamespace::ParticleSystem_Trails;

using TriggerModule = ::GlobalNamespace::ParticleSystem_TriggerModule;

using VelocityOverLifetimeModule = ::GlobalNamespace::ParticleSystem_VelocityOverLifetimeModule;

/// @brief [Obsolete("automaticCullingEnabled property is deprecated. Use proceduralSimulationSupported instead (UnityUpgradable) -> proceduralSimulationSupported", true)]
 __declspec(property(get=get_automaticCullingEnabled)) bool  automaticCullingEnabled;

 __declspec(property(get=get_collision)) ::GlobalNamespace::ParticleSystem_CollisionModule  collision;

 __declspec(property(get=get_colorBySpeed)) ::GlobalNamespace::ParticleSystem_ColorBySpeedModule  colorBySpeed;

 __declspec(property(get=get_colorOverLifetime)) ::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule  colorOverLifetime;

 __declspec(property(get=get_customData)) ::GlobalNamespace::ParticleSystem_CustomDataModule  customData;

/// @brief [Obsolete("duration property is deprecated. Use main.duration instead.", false)]
 __declspec(property(get=get_duration)) float_t  duration;

 __declspec(property(get=get_emission)) ::GlobalNamespace::ParticleSystem_EmissionModule  emission;

/// @brief [Obsolete("emissionRate property is deprecated. Use emission.rateOverTime, emission.rateOverDistance, emission.rateOverTimeMultiplier or emission.rateOverDistanceMultiplier instead.", false)]
 __declspec(property(get=get_emissionRate, put=set_emissionRate)) float_t  emissionRate;

/// @brief [Obsolete("enableEmission property is deprecated. Use emission.enabled instead.", false)]
 __declspec(property(get=get_enableEmission, put=set_enableEmission)) bool  enableEmission;

 __declspec(property(get=get_externalForces)) ::GlobalNamespace::ParticleSystem_ExternalForcesModule  externalForces;

 __declspec(property(get=get_forceOverLifetime)) ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule  forceOverLifetime;

/// @brief [Obsolete("gravityModifier property is deprecated. Use main.gravityModifier or main.gravityModifierMultiplier instead.", false)]
 __declspec(property(get=get_gravityModifier, put=set_gravityModifier)) float_t  gravityModifier;

 __declspec(property(get=get_has3DParticleRotations)) bool  has3DParticleRotations;

 __declspec(property(get=get_hasNonUniformParticleSizes)) bool  hasNonUniformParticleSizes;

 __declspec(property(get=get_inheritVelocity)) ::GlobalNamespace::ParticleSystem_InheritVelocityModule  inheritVelocity;

 __declspec(property(get=get_isEmitting)) bool  isEmitting;

 __declspec(property(get=get_isPaused)) bool  isPaused;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_isStopped)) bool  isStopped;

 __declspec(property(get=get_lifetimeByEmitterSpeed)) ::GlobalNamespace::ParticleSystem_LifetimeByEmitterSpeedModule  lifetimeByEmitterSpeed;

 __declspec(property(get=get_lights)) ::GlobalNamespace::ParticleSystem_LightsModule  lights;

 __declspec(property(get=get_limitVelocityOverLifetime)) ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule  limitVelocityOverLifetime;

/// @brief [Obsolete("loop property is deprecated. Use main.loop instead.", false)]
 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_main)) ::GlobalNamespace::ParticleSystem_MainModule  main;

/// @brief [Obsolete("maxParticles property is deprecated. Use main.maxParticles instead.", false)]
 __declspec(property(get=get_maxParticles, put=set_maxParticles)) int32_t  maxParticles;

 __declspec(property(get=get_noise)) ::GlobalNamespace::ParticleSystem_NoiseModule  noise;

 __declspec(property(get=get_particleCount)) int32_t  particleCount;

/// @brief [Obsolete("playOnAwake property is deprecated. Use main.playOnAwake instead.", false)]
 __declspec(property(get=get_playOnAwake, put=set_playOnAwake)) bool  playOnAwake;

/// @brief [Obsolete("playbackSpeed property is deprecated. Use main.simulationSpeed instead.", false)]
 __declspec(property(get=get_playbackSpeed, put=set_playbackSpeed)) float_t  playbackSpeed;

 __declspec(property(get=get_proceduralSimulationSupported)) bool  proceduralSimulationSupported;

 __declspec(property(get=get_randomSeed, put=set_randomSeed)) uint32_t  randomSeed;

 __declspec(property(get=get_rotationBySpeed)) ::GlobalNamespace::ParticleSystem_RotationBySpeedModule  rotationBySpeed;

 __declspec(property(get=get_rotationOverLifetime)) ::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule  rotationOverLifetime;

/// @brief [Obsolete("scalingMode property is deprecated. Use main.scalingMode instead.", false)]
 __declspec(property(get=get_scalingMode, put=set_scalingMode)) ::UnityEngine::ParticleSystemScalingMode  scalingMode;

 __declspec(property(get=get_shape)) ::GlobalNamespace::ParticleSystem_ShapeModule  shape;

/// @brief [Obsolete("simulationSpace property is deprecated. Use main.simulationSpace instead.", false)]
 __declspec(property(get=get_simulationSpace, put=set_simulationSpace)) ::UnityEngine::ParticleSystemSimulationSpace  simulationSpace;

 __declspec(property(get=get_sizeBySpeed)) ::GlobalNamespace::ParticleSystem_SizeBySpeedModule  sizeBySpeed;

 __declspec(property(get=get_sizeOverLifetime)) ::GlobalNamespace::ParticleSystem_SizeOverLifetimeModule  sizeOverLifetime;

/// @brief [Obsolete("startColor property is deprecated. Use main.startColor instead.", false)]
 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::Color  startColor;

/// @brief [Obsolete("startDelay property is deprecated. Use main.startDelay or main.startDelayMultiplier instead.", false)]
 __declspec(property(get=get_startDelay, put=set_startDelay)) float_t  startDelay;

/// @brief [Obsolete("startLifetime property is deprecated. Use main.startLifetime or main.startLifetimeMultiplier instead.", false)]
 __declspec(property(get=get_startLifetime, put=set_startLifetime)) float_t  startLifetime;

/// @brief [Obsolete("startRotation property is deprecated. Use main.startRotation or main.startRotationMultiplier instead.", false)]
 __declspec(property(get=get_startRotation, put=set_startRotation)) float_t  startRotation;

/// @brief [Obsolete("startRotation3D property is deprecated. Use main.startRotationX, main.startRotationY and main.startRotationZ instead. (Or main.startRotationXMultiplier, main.startRotationYMultiplier and main.startRotationZMultiplier).", false)]
 __declspec(property(get=get_startRotation3D, put=set_startRotation3D)) ::UnityEngine::Vector3  startRotation3D;

/// @brief [Obsolete("startSize property is deprecated. Use main.startSize or main.startSizeMultiplier instead.", false)]
 __declspec(property(get=get_startSize, put=set_startSize)) float_t  startSize;

/// @brief [Obsolete("startSpeed property is deprecated. Use main.startSpeed or main.startSpeedMultiplier instead.", false)]
 __declspec(property(get=get_startSpeed, put=set_startSpeed)) float_t  startSpeed;

 __declspec(property(get=get_subEmitters)) ::GlobalNamespace::ParticleSystem_SubEmittersModule  subEmitters;

 __declspec(property(get=get_textureSheetAnimation)) ::GlobalNamespace::ParticleSystem_TextureSheetAnimationModule  textureSheetAnimation;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_totalTime)) float_t  totalTime;

 __declspec(property(get=get_trails)) ::GlobalNamespace::ParticleSystem_TrailModule  trails;

 __declspec(property(get=get_trigger)) ::GlobalNamespace::ParticleSystem_TriggerModule  trigger;

 __declspec(property(get=get_useAutoRandomSeed, put=set_useAutoRandomSeed)) bool  useAutoRandomSeed;

 __declspec(property(get=get_velocityOverLifetime)) ::GlobalNamespace::ParticleSystem_VelocityOverLifetimeModule  velocityOverLifetime;

/// [NativeName("SetUsesAxisOfRotation")]
/// @brief Method AllocateAxisOfRotationAttribute, addr 0xb66dd84, size 0x78, virtual false, abstract: false, final false
inline void AllocateAxisOfRotationAttribute() ;

/// @brief Method AllocateAxisOfRotationAttribute_Injected, addr 0xb66ddfc, size 0x3c, virtual false, abstract: false, final false
static inline void AllocateAxisOfRotationAttribute_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("SetUsesCustomData")]
/// @brief Method AllocateCustomDataAttribute, addr 0xb66deec, size 0x80, virtual false, abstract: false, final false
inline void AllocateCustomDataAttribute(::UnityEngine::ParticleSystemCustomData  stream) ;

/// @brief Method AllocateCustomDataAttribute_Injected, addr 0xb66df6c, size 0x44, virtual false, abstract: false, final false
static inline void AllocateCustomDataAttribute_Injected(::System::IntPtr  _unity_self, ::UnityEngine::ParticleSystemCustomData  stream) ;

/// [NativeName("SetUsesMeshIndex")]
/// @brief Method AllocateMeshIndexAttribute, addr 0xb66de38, size 0x78, virtual false, abstract: false, final false
inline void AllocateMeshIndexAttribute() ;

/// @brief Method AllocateMeshIndexAttribute_Injected, addr 0xb66deb0, size 0x3c, virtual false, abstract: false, final false
static inline void AllocateMeshIndexAttribute_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Clear, addr 0xb66d624, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::Clear", HasExplicitThis = true)]
/// @brief Method Clear, addr 0xb66d560, size 0x80, virtual false, abstract: false, final false
inline void Clear(/* [DefaultValue("true")] */ bool  withChildren) ;

/// @brief Method Clear_Injected, addr 0xb66d5e0, size 0x44, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren) ;

/// [ThreadSafe]
/// @brief Method CopyManagedJobData, addr 0xb66e420, size 0x44, virtual false, abstract: false, final false
static inline void CopyManagedJobData(void*  systemPtr, ::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>  particleData) ;

/// [RequiredByNativeCode]
/// @brief Method Emit, addr 0xb66d6f8, size 0x4, virtual false, abstract: false, final false
inline void Emit(int32_t  count) ;

/// [NativeName("SyncJobs()->EmitParticlesExternal")]
/// @brief Method Emit, addr 0xb66d7c0, size 0x90, virtual false, abstract: false, final false
inline void Emit(::GlobalNamespace::ParticleSystem_EmitParams  emitParams, int32_t  count) ;

/// [Obsolete("Emit with a single particle structure is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
/// @brief Method Emit, addr 0xb6696d4, size 0x4, virtual false, abstract: false, final false
inline void Emit(::GlobalNamespace::ParticleSystem_Particle  particle) ;

/// [Obsolete("Emit with specific parameters is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
/// @brief Method Emit, addr 0xb669494, size 0x10c, virtual false, abstract: false, final false
inline void Emit(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, float_t  size, float_t  lifetime, ::UnityEngine::Color32  color) ;

/// [NativeName("SyncJobs()->EmitParticleExternal")]
/// @brief Method EmitOld_Internal, addr 0xb669654, size 0x80, virtual false, abstract: false, final false
inline void EmitOld_Internal(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// @brief Method EmitOld_Internal_Injected, addr 0xb66d8a4, size 0x44, virtual false, abstract: false, final false
static inline void EmitOld_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// @brief Method Emit_Injected, addr 0xb66d850, size 0x54, virtual false, abstract: false, final false
static inline void Emit_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_EmitParams>  emitParams, int32_t  count) ;

/// [NativeName("SyncJobs()->Emit")]
/// @brief Method Emit_Internal, addr 0xb66d6fc, size 0x80, virtual false, abstract: false, final false
inline void Emit_Internal(int32_t  count) ;

/// @brief Method Emit_Internal_Injected, addr 0xb66d77c, size 0x44, virtual false, abstract: false, final false
static inline void Emit_Internal_Injected(::System::IntPtr  _unity_self, int32_t  count) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetCustomParticleData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetCustomParticleData, addr 0xb66c5c8, size 0x218, virtual false, abstract: false, final false
inline int32_t GetCustomParticleData(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex) ;

/// @brief Method GetCustomParticleData_Injected, addr 0xb66c7e0, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetCustomParticleData_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex) ;

/// @brief Method GetManagedJobData, addr 0xb66e118, size 0x78, virtual false, abstract: false, final false
inline void* GetManagedJobData() ;

/// @brief Method GetManagedJobData_Injected, addr 0xb66e190, size 0x3c, virtual false, abstract: false, final false
static inline void* GetManagedJobData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetManagedJobHandle, addr 0xb66e1cc, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle GetManagedJobHandle() ;

/// @brief Method GetManagedJobHandle_Injected, addr 0xb66e25c, size 0x44, virtual false, abstract: false, final false
static inline void GetManagedJobHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetParticleCurrentColor", HasExplicitThis = true)]
/// @brief Method GetParticleCurrentColor, addr 0xb66ba68, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 GetParticleCurrentColor(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// @brief Method GetParticleCurrentColor_Injected, addr 0xb66bb00, size 0x54, virtual false, abstract: false, final false
static inline void GetParticleCurrentColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle, ::by_ref<::UnityEngine::Color32>  ret) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetParticleCurrentSize", HasExplicitThis = true)]
/// @brief Method GetParticleCurrentSize, addr 0xb66b8b0, size 0x80, virtual false, abstract: false, final false
inline float_t GetParticleCurrentSize(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetParticleCurrentSize3D", HasExplicitThis = true)]
/// @brief Method GetParticleCurrentSize3D, addr 0xb66b974, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetParticleCurrentSize3D(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// @brief Method GetParticleCurrentSize3D_Injected, addr 0xb66ba14, size 0x54, virtual false, abstract: false, final false
static inline void GetParticleCurrentSize3D_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetParticleCurrentSize_Injected, addr 0xb66b930, size 0x44, virtual false, abstract: false, final false
static inline float_t GetParticleCurrentSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetParticleMeshIndex", HasExplicitThis = true)]
/// @brief Method GetParticleMeshIndex, addr 0xb66bb54, size 0x80, virtual false, abstract: false, final false
inline int32_t GetParticleMeshIndex(::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// @brief Method GetParticleMeshIndex_Injected, addr 0xb66bbd4, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetParticleMeshIndex_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// @brief Method GetParticles, addr 0xb66c1a8, size 0xc, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles) ;

/// @brief Method GetParticles, addr 0xb66c1a0, size 0x8, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetParticles", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetParticles, addr 0xb66bfa4, size 0x1a0, virtual false, abstract: false, final false
inline int32_t GetParticles(/* [NotNull] */ ::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method GetParticles, addr 0xb66c35c, size 0xc, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles) ;

/// @brief Method GetParticles, addr 0xb66c354, size 0x8, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size) ;

/// @brief Method GetParticles, addr 0xb66c2c8, size 0x8c, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetParticlesWithNativeArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetParticlesWithNativeArray, addr 0xb66c1b4, size 0xa8, virtual false, abstract: false, final false
inline int32_t GetParticlesWithNativeArray(::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset) ;

/// @brief Method GetParticlesWithNativeArray_Injected, addr 0xb66c25c, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetParticlesWithNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset) ;

/// @brief Method GetParticles_Injected, addr 0xb66c144, size 0x5c, virtual false, abstract: false, final false
static inline int32_t GetParticles_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method GetPlaybackState, addr 0xb66c834, size 0xb4, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_PlaybackState GetPlaybackState() ;

/// @brief Method GetPlaybackState_Injected, addr 0xb66c8e8, size 0x44, virtual false, abstract: false, final false
static inline void GetPlaybackState_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>  ret) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetTrailData", HasExplicitThis = true)]
/// @brief Method GetTrailDataInternal, addr 0xb66c9f0, size 0x80, virtual false, abstract: false, final false
inline void GetTrailDataInternal(::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData) ;

/// @brief Method GetTrailDataInternal_Injected, addr 0xb66ca70, size 0x44, virtual false, abstract: false, final false
static inline void GetTrailDataInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData) ;

/// @brief Method GetTrails, addr 0xb66cab4, size 0x54, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_Trails GetTrails() ;

/// @brief Method GetTrails, addr 0xb66ccbc, size 0x60, virtual false, abstract: false, final false
inline int32_t GetTrails(::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData) ;

/// @brief Method IsAlive, addr 0xb66d6f0, size 0x8, virtual false, abstract: false, final false
inline bool IsAlive() ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::IsAlive", HasExplicitThis = true)]
/// @brief Method IsAlive, addr 0xb66d62c, size 0x80, virtual false, abstract: false, final false
inline bool IsAlive(/* [DefaultValue("true")] */ bool  withChildren) ;

/// @brief Method IsAlive_Injected, addr 0xb66d6ac, size 0x44, virtual false, abstract: false, final false
static inline bool IsAlive_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren) ;

static inline ::UnityEngine::ParticleSystem* New_ctor() ;

/// @brief Method Pause, addr 0xb66d460, size 0x8, virtual false, abstract: false, final false
inline void Pause() ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::Pause", HasExplicitThis = true)]
/// @brief Method Pause, addr 0xb66d39c, size 0x80, virtual false, abstract: false, final false
inline void Pause(/* [DefaultValue("true")] */ bool  withChildren) ;

/// @brief Method Pause_Injected, addr 0xb66d41c, size 0x44, virtual false, abstract: false, final false
static inline void Pause_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren) ;

/// @brief Method Play, addr 0xb66d394, size 0x8, virtual false, abstract: false, final false
inline void Play() ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::Play", HasExplicitThis = true)]
/// @brief Method Play, addr 0xb66d2d0, size 0x80, virtual false, abstract: false, final false
inline void Play(/* [DefaultValue("true")] */ bool  withChildren) ;

/// @brief Method Play_Injected, addr 0xb66d350, size 0x44, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren) ;

/// [FreeFunction(Name = "ParticleSystemGeometryJob::ResetPreMappedBufferMemory")]
/// @brief Method ResetPreMappedBufferMemory, addr 0xb66dd18, size 0x28, virtual false, abstract: false, final false
static inline void ResetPreMappedBufferMemory() ;

/// [FreeFunction("ScheduleManagedJob", ThrowsException = true)]
/// @brief Method ScheduleManagedJob, addr 0xb66e370, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleManagedJob(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, void*  additionalData) ;

/// @brief Method ScheduleManagedJob_Injected, addr 0xb66e3cc, size 0x54, virtual false, abstract: false, final false
static inline void ScheduleManagedJob_Injected(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, void*  additionalData, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::SetCustomParticleData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetCustomParticleData, addr 0xb66c368, size 0x20c, virtual false, abstract: false, final false
inline void SetCustomParticleData(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex) ;

/// @brief Method SetCustomParticleData_Injected, addr 0xb66c574, size 0x54, virtual false, abstract: false, final false
static inline void SetCustomParticleData_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  customData, ::UnityEngine::ParticleSystemCustomData  streamIndex) ;

/// @brief Method SetManagedJobHandle, addr 0xb66e2a0, size 0x8c, virtual false, abstract: false, final false
inline void SetManagedJobHandle(::Unity::Jobs::JobHandle  handle) ;

/// @brief Method SetManagedJobHandle_Injected, addr 0xb66e32c, size 0x44, virtual false, abstract: false, final false
static inline void SetManagedJobHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Jobs::JobHandle>  handle) ;

/// [FreeFunction(Name = "ParticleSystemGeometryJob::SetMaximumPreMappedBufferCounts")]
/// @brief Method SetMaximumPreMappedBufferCounts, addr 0xb66dd40, size 0x44, virtual false, abstract: false, final false
static inline void SetMaximumPreMappedBufferCounts(int32_t  vertexBuffersCount, int32_t  indexBuffersCount) ;

/// @brief Method SetParticles, addr 0xb66bde4, size 0xc, virtual false, abstract: false, final false
inline void SetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles) ;

/// @brief Method SetParticles, addr 0xb66bddc, size 0x8, virtual false, abstract: false, final false
inline void SetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::SetParticles", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetParticles, addr 0xb66bc18, size 0x168, virtual false, abstract: false, final false
inline void SetParticles(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticles, addr 0xb66bf98, size 0xc, virtual false, abstract: false, final false
inline void SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles) ;

/// @brief Method SetParticles, addr 0xb66bf90, size 0x8, virtual false, abstract: false, final false
inline void SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size) ;

/// @brief Method SetParticles, addr 0xb66bf04, size 0x8c, virtual false, abstract: false, final false
inline void SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticlesAndTrails, addr 0xb66cf24, size 0x34, virtual false, abstract: false, final false
inline void SetParticlesAndTrails(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData) ;

/// @brief Method SetParticlesAndTrails, addr 0xb66cef4, size 0x30, virtual false, abstract: false, final false
inline void SetParticlesAndTrails(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::SetParticlesAndTrailData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetParticlesAndTrails, addr 0xb66cd1c, size 0x16c, virtual false, abstract: false, final false
inline void SetParticlesAndTrails(::by_ref<::ArrayW<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticlesAndTrails, addr 0xb66d164, size 0x34, virtual false, abstract: false, final false
inline void SetParticlesAndTrails(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData) ;

/// @brief Method SetParticlesAndTrails, addr 0xb66d134, size 0x30, virtual false, abstract: false, final false
inline void SetParticlesAndTrails(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size) ;

/// @brief Method SetParticlesAndTrails, addr 0xb66d07c, size 0xb8, virtual false, abstract: false, final false
inline void SetParticlesAndTrails(::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::ParticleSystem_Particle>>  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  size, int32_t  offset) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::SetParticlesAndTrailDataWithNativeArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetParticlesAndTrailsWithNativeArray, addr 0xb66cf58, size 0xb0, virtual false, abstract: false, final false
inline void SetParticlesAndTrailsWithNativeArray(::System::IntPtr  particles, ::GlobalNamespace::ParticleSystem_Trails  trailData, int32_t  particlesLength, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticlesAndTrailsWithNativeArray_Injected, addr 0xb66d008, size 0x74, virtual false, abstract: false, final false
static inline void SetParticlesAndTrailsWithNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  particles, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData, int32_t  particlesLength, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticlesAndTrails_Injected, addr 0xb66ce88, size 0x6c, virtual false, abstract: false, final false
static inline void SetParticlesAndTrails_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  particles, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData, int32_t  size, int32_t  offset) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::SetParticlesWithNativeArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetParticlesWithNativeArray, addr 0xb66bdf0, size 0xa8, virtual false, abstract: false, final false
inline void SetParticlesWithNativeArray(::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticlesWithNativeArray_Injected, addr 0xb66be98, size 0x6c, virtual false, abstract: false, final false
static inline void SetParticlesWithNativeArray_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  particles, int32_t  particlesLength, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticles_Injected, addr 0xb66bd80, size 0x5c, virtual false, abstract: false, final false
static inline void SetParticles_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method SetPlaybackState, addr 0xb66c92c, size 0x80, virtual false, abstract: false, final false
inline void SetPlaybackState(::GlobalNamespace::ParticleSystem_PlaybackState  playbackState) ;

/// @brief Method SetPlaybackState_Injected, addr 0xb66c9ac, size 0x44, virtual false, abstract: false, final false
static inline void SetPlaybackState_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_PlaybackState>  playbackState) ;

/// [Obsolete("SetTrails is deprecated. Use SetParticlesAndTrails() instead. Avoid SetTrails when ParticleSystem.trails.dieWithParticles is false.", false)]
/// [FreeFunction(Name = "ParticleSystemScriptBindings::SetTrailData", HasExplicitThis = true)]
/// @brief Method SetTrails, addr 0xb6693d0, size 0x80, virtual false, abstract: false, final false
inline void SetTrails(::GlobalNamespace::ParticleSystem_Trails  trailData) ;

/// @brief Method SetTrails_Injected, addr 0xb669450, size 0x44, virtual false, abstract: false, final false
static inline void SetTrails_Injected(::System::IntPtr  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_Trails>  trailData) ;

/// @brief Method Simulate, addr 0xb66d2c0, size 0x10, virtual false, abstract: false, final false
inline void Simulate(float_t  t) ;

/// @brief Method Simulate, addr 0xb66d2b4, size 0xc, virtual false, abstract: false, final false
inline void Simulate(float_t  t, /* [DefaultValue("true")] */ bool  withChildren) ;

/// @brief Method Simulate, addr 0xb66d2ac, size 0x8, virtual false, abstract: false, final false
inline void Simulate(float_t  t, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("true")] */ bool  restart) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::Simulate", HasExplicitThis = true)]
/// @brief Method Simulate, addr 0xb66d198, size 0xa8, virtual false, abstract: false, final false
inline void Simulate(float_t  t, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("true")] */ bool  restart, /* [DefaultValue("true")] */ bool  fixedTimeStep) ;

/// @brief Method Simulate_Injected, addr 0xb66d240, size 0x6c, virtual false, abstract: false, final false
static inline void Simulate_Injected(::System::IntPtr  _unity_self, float_t  t, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("true")] */ bool  restart, /* [DefaultValue("true")] */ bool  fixedTimeStep) ;

/// @brief Method Stop, addr 0xb66d554, size 0xc, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop, addr 0xb66d54c, size 0x8, virtual false, abstract: false, final false
inline void Stop(/* [DefaultValue("true")] */ bool  withChildren) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::Stop", HasExplicitThis = true)]
/// @brief Method Stop, addr 0xb66d468, size 0x90, virtual false, abstract: false, final false
inline void Stop(/* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] */ ::UnityEngine::ParticleSystemStopBehavior  stopBehavior) ;

/// @brief Method Stop_Injected, addr 0xb66d4f8, size 0x54, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self, /* [DefaultValue("true")] */ bool  withChildren, /* [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] */ ::UnityEngine::ParticleSystemStopBehavior  stopBehavior) ;

/// @brief Method TriggerSubEmitter, addr 0xb66d8e8, size 0x4, virtual false, abstract: false, final false
inline void TriggerSubEmitter(int32_t  subEmitterIndex) ;

/// @brief Method TriggerSubEmitter, addr 0xb66d96c, size 0x44, virtual false, abstract: false, final false
inline void TriggerSubEmitter(int32_t  subEmitterIndex, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// @brief Method TriggerSubEmitter, addr 0xb66da40, size 0xc, virtual false, abstract: false, final false
inline void TriggerSubEmitter(int32_t  subEmitterIndex, ::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*  particles) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::TriggerSubEmitterForAllParticles", HasExplicitThis = true)]
/// @brief Method TriggerSubEmitterForAllParticles, addr 0xb66d8ec, size 0x80, virtual false, abstract: false, final false
inline void TriggerSubEmitterForAllParticles(int32_t  subEmitterIndex) ;

/// @brief Method TriggerSubEmitterForAllParticles_Injected, addr 0xb66dcd4, size 0x44, virtual false, abstract: false, final false
static inline void TriggerSubEmitterForAllParticles_Injected(::System::IntPtr  _unity_self, int32_t  subEmitterIndex) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::TriggerSubEmitterForParticle", HasExplicitThis = true)]
/// @brief Method TriggerSubEmitterForParticle, addr 0xb66d9b0, size 0x90, virtual false, abstract: false, final false
inline void TriggerSubEmitterForParticle(int32_t  subEmitterIndex, ::GlobalNamespace::ParticleSystem_Particle  particle) ;

/// @brief Method TriggerSubEmitterForParticle_Injected, addr 0xb66dc2c, size 0x54, virtual false, abstract: false, final false
static inline void TriggerSubEmitterForParticle_Injected(::System::IntPtr  _unity_self, int32_t  subEmitterIndex, ::by_ref<::GlobalNamespace::ParticleSystem_Particle>  particle) ;

/// [FreeFunction(Name = "ParticleSystemScriptBindings::TriggerSubEmitterForParticles", HasExplicitThis = true)]
/// @brief Method TriggerSubEmitterForParticles, addr 0xb66da4c, size 0x1e0, virtual false, abstract: false, final false
inline void TriggerSubEmitterForParticles(int32_t  subEmitterIndex, ::System::Collections::Generic::List_1<::GlobalNamespace::ParticleSystem_Particle>*  particles) ;

/// @brief Method TriggerSubEmitterForParticles_Injected, addr 0xb66dc80, size 0x54, virtual false, abstract: false, final false
static inline void TriggerSubEmitterForParticles_Injected(::System::IntPtr  _unity_self, int32_t  subEmitterIndex, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  particles) ;

/// @brief Method UserJobCanBeScheduled, addr 0xb66e464, size 0x28, virtual false, abstract: false, final false
static inline bool UserJobCanBeScheduled() ;

/// @brief Method .ctor, addr 0xb66e790, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_automaticCullingEnabled, addr 0xb66af48, size 0x4, virtual false, abstract: false, final false
inline bool get_automaticCullingEnabled() ;

/// @brief Method get_collision, addr 0xb66e694, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_CollisionModule get_collision() ;

/// @brief Method get_colorBySpeed, addr 0xb66e598, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_ColorBySpeedModule get_colorBySpeed() ;

/// @brief Method get_colorOverLifetime, addr 0xb66e574, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule get_colorOverLifetime() ;

/// @brief Method get_customData, addr 0xb66e76c, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_CustomDataModule get_customData() ;

/// @brief Method get_duration, addr 0xb669ab0, size 0x54, virtual false, abstract: false, final false
inline float_t get_duration() ;

/// @brief Method get_emission, addr 0xb669cdc, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_EmissionModule get_emission() ;

/// @brief Method get_emissionRate, addr 0xb669ddc, size 0x54, virtual false, abstract: false, final false
inline float_t get_emissionRate() ;

/// @brief Method get_enableEmission, addr 0xb669c84, size 0x58, virtual false, abstract: false, final false
inline bool get_enableEmission() ;

/// @brief Method get_externalForces, addr 0xb66e64c, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_ExternalForcesModule get_externalForces() ;

/// @brief Method get_forceOverLifetime, addr 0xb66e550, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule get_forceOverLifetime() ;

/// @brief Method get_gravityModifier, addr 0xb66aa5c, size 0x54, virtual false, abstract: false, final false
inline float_t get_gravityModifier() ;

/// [NativeName("Has3DParticleRotations")]
/// @brief Method get_has3DParticleRotations, addr 0xb66dfb0, size 0x78, virtual false, abstract: false, final false
inline bool get_has3DParticleRotations() ;

/// @brief Method get_has3DParticleRotations_Injected, addr 0xb66e028, size 0x3c, virtual false, abstract: false, final false
static inline bool get_has3DParticleRotations_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("HasNonUniformParticleSizes")]
/// @brief Method get_hasNonUniformParticleSizes, addr 0xb66e064, size 0x78, virtual false, abstract: false, final false
inline bool get_hasNonUniformParticleSizes() ;

/// @brief Method get_hasNonUniformParticleSizes_Injected, addr 0xb66e0dc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_hasNonUniformParticleSizes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_inheritVelocity, addr 0xb66e508, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_InheritVelocityModule get_inheritVelocity() ;

/// [NativeName("SyncJobs(false)->IsEmitting")]
/// @brief Method get_isEmitting, addr 0xb66b078, size 0x78, virtual false, abstract: false, final false
inline bool get_isEmitting() ;

/// @brief Method get_isEmitting_Injected, addr 0xb66b0f0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isEmitting_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("SyncJobs(false)->IsPaused")]
/// @brief Method get_isPaused, addr 0xb66b1e0, size 0x78, virtual false, abstract: false, final false
inline bool get_isPaused() ;

/// @brief Method get_isPaused_Injected, addr 0xb66b258, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPaused_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("SyncJobs(false)->IsPlaying")]
/// @brief Method get_isPlaying, addr 0xb66afc4, size 0x78, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPlaying_Injected, addr 0xb66b03c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPlaying_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("SyncJobs(false)->IsStopped")]
/// @brief Method get_isStopped, addr 0xb66b12c, size 0x78, virtual false, abstract: false, final false
inline bool get_isStopped() ;

/// @brief Method get_isStopped_Injected, addr 0xb66b1a4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isStopped_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lifetimeByEmitterSpeed, addr 0xb66e52c, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_LifetimeByEmitterSpeedModule get_lifetimeByEmitterSpeed() ;

/// @brief Method get_lights, addr 0xb66e724, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_LightsModule get_lights() ;

/// @brief Method get_limitVelocityOverLifetime, addr 0xb66e4e4, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule get_limitVelocityOverLifetime() ;

/// @brief Method get_loop, addr 0xb669838, size 0x58, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_main, addr 0xb66972c, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MainModule get_main() ;

/// @brief Method get_maxParticles, addr 0xb66aba0, size 0x54, virtual false, abstract: false, final false
inline int32_t get_maxParticles() ;

/// @brief Method get_noise, addr 0xb66e670, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_NoiseModule get_noise() ;

/// [NativeName("SyncJobs(false)->GetParticleCount")]
/// @brief Method get_particleCount, addr 0xb66b294, size 0x78, virtual false, abstract: false, final false
inline int32_t get_particleCount() ;

/// @brief Method get_particleCount_Injected, addr 0xb66b30c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_particleCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_playOnAwake, addr 0xb669974, size 0x58, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_playbackSpeed, addr 0xb669b40, size 0x54, virtual false, abstract: false, final false
inline float_t get_playbackSpeed() ;

/// @brief Method get_proceduralSimulationSupported, addr 0xb66af4c, size 0x78, virtual false, abstract: false, final false
inline bool get_proceduralSimulationSupported() ;

/// @brief Method get_proceduralSimulationSupported_Injected, addr 0xb66b874, size 0x3c, virtual false, abstract: false, final false
static inline bool get_proceduralSimulationSupported_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetRandomSeed")]
/// @brief Method get_randomSeed, addr 0xb66b584, size 0x78, virtual false, abstract: false, final false
inline uint32_t get_randomSeed() ;

/// @brief Method get_randomSeed_Injected, addr 0xb66b5fc, size 0x3c, virtual false, abstract: false, final false
static inline uint32_t get_randomSeed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rotationBySpeed, addr 0xb66e628, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_RotationBySpeedModule get_rotationBySpeed() ;

/// @brief Method get_rotationOverLifetime, addr 0xb66e604, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule get_rotationOverLifetime() ;

/// @brief Method get_scalingMode, addr 0xb66ae10, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystemScalingMode get_scalingMode() ;

/// @brief Method get_shape, addr 0xb66e49c, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_ShapeModule get_shape() ;

/// @brief Method get_simulationSpace, addr 0xb66acd8, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace() ;

/// @brief Method get_sizeBySpeed, addr 0xb66e5e0, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_SizeBySpeedModule get_sizeBySpeed() ;

/// @brief Method get_sizeOverLifetime, addr 0xb66e5bc, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_SizeOverLifetimeModule get_sizeOverLifetime() ;

/// @brief Method get_startColor, addr 0xb66a21c, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_startColor() ;

/// @brief Method get_startDelay, addr 0xb6696d8, size 0x54, virtual false, abstract: false, final false
inline float_t get_startDelay() ;

/// @brief Method get_startLifetime, addr 0xb66a918, size 0x54, virtual false, abstract: false, final false
inline float_t get_startLifetime() ;

/// @brief Method get_startRotation, addr 0xb66a470, size 0x54, virtual false, abstract: false, final false
inline float_t get_startRotation() ;

/// @brief Method get_startRotation3D, addr 0xb66a5b4, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_startRotation3D() ;

/// @brief Method get_startSize, addr 0xb66a0d8, size 0x54, virtual false, abstract: false, final false
inline float_t get_startSize() ;

/// @brief Method get_startSpeed, addr 0xb669f94, size 0x54, virtual false, abstract: false, final false
inline float_t get_startSpeed() ;

/// @brief Method get_subEmitters, addr 0xb66e6dc, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_SubEmittersModule get_subEmitters() ;

/// @brief Method get_textureSheetAnimation, addr 0xb66e700, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_TextureSheetAnimationModule get_textureSheetAnimation() ;

/// [NativeName("SyncJobs(false)->GetSecPosition")]
/// @brief Method get_time, addr 0xb66b348, size 0x78, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_time_Injected, addr 0xb66b3c0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("SyncJobs(false)->GetTotalSecPosition")]
/// @brief Method get_totalTime, addr 0xb66b4d0, size 0x78, virtual false, abstract: false, final false
inline float_t get_totalTime() ;

/// @brief Method get_totalTime_Injected, addr 0xb66b548, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_totalTime_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_trails, addr 0xb66e748, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_TrailModule get_trails() ;

/// @brief Method get_trigger, addr 0xb66e6b8, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_TriggerModule get_trigger() ;

/// [NativeName("GetAutoRandomSeed")]
/// @brief Method get_useAutoRandomSeed, addr 0xb66b6fc, size 0x78, virtual false, abstract: false, final false
inline bool get_useAutoRandomSeed() ;

/// @brief Method get_useAutoRandomSeed_Injected, addr 0xb66b774, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useAutoRandomSeed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocityOverLifetime, addr 0xb66e4c0, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_VelocityOverLifetimeModule get_velocityOverLifetime() ;

/// @brief Method set_emissionRate, addr 0xb669e6c, size 0x50, virtual false, abstract: false, final false
inline void set_emissionRate(float_t  value) ;

/// @brief Method set_enableEmission, addr 0xb669d34, size 0x64, virtual false, abstract: false, final false
inline void set_enableEmission(bool  value) ;

/// @brief Method set_gravityModifier, addr 0xb66aaec, size 0x68, virtual false, abstract: false, final false
inline void set_gravityModifier(float_t  value) ;

/// @brief Method set_loop, addr 0xb6698cc, size 0x64, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// @brief Method set_maxParticles, addr 0xb66ac30, size 0x64, virtual false, abstract: false, final false
inline void set_maxParticles(int32_t  value) ;

/// @brief Method set_playOnAwake, addr 0xb669a08, size 0x64, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

/// @brief Method set_playbackSpeed, addr 0xb669bd0, size 0x68, virtual false, abstract: false, final false
inline void set_playbackSpeed(float_t  value) ;

/// [NativeName("SyncJobs(false)->SetRandomSeed")]
/// @brief Method set_randomSeed, addr 0xb66b638, size 0x80, virtual false, abstract: false, final false
inline void set_randomSeed(uint32_t  value) ;

/// @brief Method set_randomSeed_Injected, addr 0xb66b6b8, size 0x44, virtual false, abstract: false, final false
static inline void set_randomSeed_Injected(::System::IntPtr  _unity_self, uint32_t  value) ;

/// @brief Method set_scalingMode, addr 0xb66aea0, size 0x64, virtual false, abstract: false, final false
inline void set_scalingMode(::UnityEngine::ParticleSystemScalingMode  value) ;

/// @brief Method set_simulationSpace, addr 0xb66ad68, size 0x64, virtual false, abstract: false, final false
inline void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace  value) ;

/// @brief Method set_startColor, addr 0xb66a304, size 0x98, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method set_startDelay, addr 0xb669784, size 0x68, virtual false, abstract: false, final false
inline void set_startDelay(float_t  value) ;

/// @brief Method set_startLifetime, addr 0xb66a9a8, size 0x68, virtual false, abstract: false, final false
inline void set_startLifetime(float_t  value) ;

/// @brief Method set_startRotation, addr 0xb66a500, size 0x68, virtual false, abstract: false, final false
inline void set_startRotation(float_t  value) ;

/// @brief Method set_startRotation3D, addr 0xb66a764, size 0xd0, virtual false, abstract: false, final false
inline void set_startRotation3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_startSize, addr 0xb66a168, size 0x68, virtual false, abstract: false, final false
inline void set_startSize(float_t  value) ;

/// @brief Method set_startSpeed, addr 0xb66a024, size 0x68, virtual false, abstract: false, final false
inline void set_startSpeed(float_t  value) ;

/// [NativeName("SyncJobs(false)->SetSecPosition")]
/// @brief Method set_time, addr 0xb66b3fc, size 0x88, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// @brief Method set_time_Injected, addr 0xb66b484, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// [NativeName("SyncJobs(false)->SetAutoRandomSeed")]
/// @brief Method set_useAutoRandomSeed, addr 0xb66b7b0, size 0x80, virtual false, abstract: false, final false
inline void set_useAutoRandomSeed(bool  value) ;

/// @brief Method set_useAutoRandomSeed_Injected, addr 0xb66b830, size 0x44, virtual false, abstract: false, final false
static inline void set_useAutoRandomSeed_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystem(ParticleSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystem(ParticleSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticleSystem) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
