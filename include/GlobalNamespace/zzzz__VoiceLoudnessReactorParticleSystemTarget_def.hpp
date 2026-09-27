#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorParticleSystemTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceLoudnessReactorParticleSystemTarget)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactorParticleSystemTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*, "", "VoiceLoudnessReactorParticleSystemTarget");
// Dependencies System.Object, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::MainModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactorParticleSystemTarget
class CORDL_TYPE VoiceLoudnessReactorParticleSystemTarget : public ::System::Object {
public:
// Declarations
/// @brief Field Emission, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Emission, put=__cordl_internal_set_Emission)) ::GlobalNamespace::ParticleSystem_EmissionModule  Emission;

 __declspec(property(get=get_InitialRate, put=set_InitialRate)) float_t  InitialRate;

 __declspec(property(get=get_InitialSize, put=set_InitialSize)) float_t  InitialSize;

 __declspec(property(get=get_InitialSpeed, put=set_InitialSpeed)) float_t  InitialSpeed;

/// @brief Field Main, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Main, put=__cordl_internal_set_Main)) ::GlobalNamespace::ParticleSystem_MainModule  Main;

/// @brief Field Scale, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) float_t  Scale;

/// @brief Field UseSmoothedLoudness, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSmoothedLoudness, put=__cordl_internal_set_UseSmoothedLoudness)) bool  UseSmoothedLoudness;

/// @brief Field initialRate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialRate, put=__cordl_internal_set_initialRate)) float_t  initialRate;

/// @brief Field initialSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialSize, put=__cordl_internal_set_initialSize)) float_t  initialSize;

/// @brief Field initialSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialSpeed, put=__cordl_internal_set_initialSpeed)) float_t  initialSpeed;

/// @brief Field particleSystem, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Field rate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rate, put=__cordl_internal_set_rate)) ::UnityEngine::AnimationCurve*  rate;

/// @brief Field size, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::AnimationCurve*  size;

/// @brief Field speed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) ::UnityEngine::AnimationCurve*  speed;

static inline ::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget* New_ctor() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_Emission() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_Emission() ;

constexpr ::GlobalNamespace::ParticleSystem_MainModule const& __cordl_internal_get_Main() const;

constexpr ::GlobalNamespace::ParticleSystem_MainModule& __cordl_internal_get_Main() ;

constexpr float_t const& __cordl_internal_get_Scale() const;

constexpr float_t& __cordl_internal_get_Scale() ;

constexpr bool const& __cordl_internal_get_UseSmoothedLoudness() const;

constexpr bool& __cordl_internal_get_UseSmoothedLoudness() ;

constexpr float_t const& __cordl_internal_get_initialRate() const;

constexpr float_t& __cordl_internal_get_initialRate() ;

constexpr float_t const& __cordl_internal_get_initialSize() const;

constexpr float_t& __cordl_internal_get_initialSize() ;

constexpr float_t const& __cordl_internal_get_initialSpeed() const;

constexpr float_t& __cordl_internal_get_initialSpeed() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rate() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rate() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_size() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_speed() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set_Emission(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_Main(::GlobalNamespace::ParticleSystem_MainModule  value) ;

constexpr void __cordl_internal_set_Scale(float_t  value) ;

constexpr void __cordl_internal_set_UseSmoothedLoudness(bool  value) ;

constexpr void __cordl_internal_set_initialRate(float_t  value) ;

constexpr void __cordl_internal_set_initialSize(float_t  value) ;

constexpr void __cordl_internal_set_initialSpeed(float_t  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_rate(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_speed(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x5b4109c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InitialRate, addr 0x5b4107c, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialRate() ;

/// @brief Method get_InitialSize, addr 0x5b4108c, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialSize() ;

/// @brief Method get_InitialSpeed, addr 0x5b4106c, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialSpeed() ;

/// @brief Method set_InitialRate, addr 0x5b41084, size 0x8, virtual false, abstract: false, final false
inline void set_InitialRate(float_t  value) ;

/// @brief Method set_InitialSize, addr 0x5b41094, size 0x8, virtual false, abstract: false, final false
inline void set_InitialSize(float_t  value) ;

/// @brief Method set_InitialSpeed, addr 0x5b41074, size 0x8, virtual false, abstract: false, final false
inline void set_InitialSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactorParticleSystemTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorParticleSystemTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactorParticleSystemTarget(VoiceLoudnessReactorParticleSystemTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorParticleSystemTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactorParticleSystemTarget(VoiceLoudnessReactorParticleSystemTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3721};

/// @brief Field particleSystem, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// @brief Field UseSmoothedLoudness, offset: 0x18, size: 0x1, def value: None
 bool  ___UseSmoothedLoudness;

/// @brief Field Scale, offset: 0x1c, size: 0x4, def value: None
 float_t  ___Scale;

/// @brief Field initialSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___initialSpeed;

/// @brief Field initialRate, offset: 0x24, size: 0x4, def value: None
 float_t  ___initialRate;

/// @brief Field initialSize, offset: 0x28, size: 0x4, def value: None
 float_t  ___initialSize;

/// @brief Field speed, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___speed;

/// @brief Field rate, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rate;

/// @brief Field size, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___size;

/// [HideInInspector]
/// @brief Field Main, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_MainModule  ___Main;

/// [HideInInspector]
/// @brief Field Emission, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___Emission;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___particleSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___UseSmoothedLoudness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___Scale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___initialSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___initialRate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___initialSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___speed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___rate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___Main) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget, ___Emission) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
