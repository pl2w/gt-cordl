#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorAnimatorTarget_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorBlendShapeTarget_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorGameObjectEnableTarget_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorParticleSystemTarget_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorRendererColorTarget_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorTransformRotationTarget_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorTransformTarget_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceLoudnessReactor)
namespace GlobalNamespace {
class GorillaSpeakerLoudness;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactor*, "", "VoiceLoudnessReactor");
// Dependencies UnityEngine.MonoBehaviour, VoiceLoudnessReactorAnimatorTarget, VoiceLoudnessReactorBlendShapeTarget, VoiceLoudnessReactorGameObjectEnableTarget, VoiceLoudnessReactorParticleSystemTarget, VoiceLoudnessReactorRendererColorTarget, VoiceLoudnessReactorTransformRotationTarget, VoiceLoudnessReactorTransformTarget
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactor
class CORDL_TYPE VoiceLoudnessReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animatorTargets, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_animatorTargets, put=__cordl_internal_set_animatorTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>  animatorTargets;

/// @brief Field attack, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_attack, put=__cordl_internal_set_attack)) float_t  attack;

/// @brief Field blendShapeTargets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendShapeTargets, put=__cordl_internal_set_blendShapeTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>  blendShapeTargets;

/// @brief Field continuousProperties, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field decay, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_decay, put=__cordl_internal_set_decay)) float_t  decay;

/// @brief Field frameLoudness, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameLoudness, put=__cordl_internal_set_frameLoudness)) float_t  frameLoudness;

/// @brief Field frameSmoothedLoudness, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameSmoothedLoudness, put=__cordl_internal_set_frameSmoothedLoudness)) float_t  frameSmoothedLoudness;

/// @brief Field gameObjectEnableTargets, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectEnableTargets, put=__cordl_internal_set_gameObjectEnableTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>  gameObjectEnableTargets;

/// @brief Field hasContinuousProperties, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasContinuousProperties, put=__cordl_internal_set_hasContinuousProperties)) bool  hasContinuousProperties;

/// @brief Field loudness, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_loudness, put=__cordl_internal_set_loudness)) ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  loudness;

/// @brief Field particleTargets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleTargets, put=__cordl_internal_set_particleTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>  particleTargets;

/// @brief Field rendererColorTargets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rendererColorTargets, put=__cordl_internal_set_rendererColorTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>  rendererColorTargets;

/// @brief Field smoothLoudnessForContinuousProperties, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_smoothLoudnessForContinuousProperties, put=__cordl_internal_set_smoothLoudnessForContinuousProperties)) bool  smoothLoudnessForContinuousProperties;

/// @brief Field transformPositionTargets, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformPositionTargets, put=__cordl_internal_set_transformPositionTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  transformPositionTargets;

/// @brief Field transformRotationTargets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformRotationTargets, put=__cordl_internal_set_transformRotationTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>  transformRotationTargets;

/// @brief Field transformScaleTargets, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformScaleTargets, put=__cordl_internal_set_transformScaleTargets)) ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  transformScaleTargets;

static inline ::GlobalNamespace::VoiceLoudnessReactor* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b4039c, size 0x194, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5b3ff10, size 0x37c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b40530, size 0x710, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*> const& __cordl_internal_get_animatorTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>& __cordl_internal_get_animatorTargets() ;

constexpr float_t const& __cordl_internal_get_attack() const;

constexpr float_t& __cordl_internal_get_attack() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*> const& __cordl_internal_get_blendShapeTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>& __cordl_internal_get_blendShapeTargets() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr float_t const& __cordl_internal_get_decay() const;

constexpr float_t& __cordl_internal_get_decay() ;

constexpr float_t const& __cordl_internal_get_frameLoudness() const;

constexpr float_t& __cordl_internal_get_frameLoudness() ;

constexpr float_t const& __cordl_internal_get_frameSmoothedLoudness() const;

constexpr float_t& __cordl_internal_get_frameSmoothedLoudness() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*> const& __cordl_internal_get_gameObjectEnableTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>& __cordl_internal_get_gameObjectEnableTargets() ;

constexpr bool const& __cordl_internal_get_hasContinuousProperties() const;

constexpr bool& __cordl_internal_get_hasContinuousProperties() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& __cordl_internal_get_loudness() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& __cordl_internal_get_loudness() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*> const& __cordl_internal_get_particleTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>& __cordl_internal_get_particleTargets() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*> const& __cordl_internal_get_rendererColorTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>& __cordl_internal_get_rendererColorTargets() ;

constexpr bool const& __cordl_internal_get_smoothLoudnessForContinuousProperties() const;

constexpr bool& __cordl_internal_get_smoothLoudnessForContinuousProperties() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*> const& __cordl_internal_get_transformPositionTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>& __cordl_internal_get_transformPositionTargets() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*> const& __cordl_internal_get_transformRotationTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>& __cordl_internal_get_transformRotationTargets() ;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*> const& __cordl_internal_get_transformScaleTargets() const;

constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>& __cordl_internal_get_transformScaleTargets() ;

constexpr void __cordl_internal_set_animatorTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>  value) ;

constexpr void __cordl_internal_set_attack(float_t  value) ;

constexpr void __cordl_internal_set_blendShapeTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_decay(float_t  value) ;

constexpr void __cordl_internal_set_frameLoudness(float_t  value) ;

constexpr void __cordl_internal_set_frameSmoothedLoudness(float_t  value) ;

constexpr void __cordl_internal_set_gameObjectEnableTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>  value) ;

constexpr void __cordl_internal_set_hasContinuousProperties(bool  value) ;

constexpr void __cordl_internal_set_loudness(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value) ;

constexpr void __cordl_internal_set_particleTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>  value) ;

constexpr void __cordl_internal_set_rendererColorTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>  value) ;

constexpr void __cordl_internal_set_smoothLoudnessForContinuousProperties(bool  value) ;

constexpr void __cordl_internal_set_transformPositionTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  value) ;

constexpr void __cordl_internal_set_transformRotationTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>  value) ;

constexpr void __cordl_internal_set_transformScaleTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  value) ;

/// @brief Method .ctor, addr 0x5b40d3c, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactor(VoiceLoudnessReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactor(VoiceLoudnessReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3716};

/// @brief Field loudness, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  ___loudness;

/// [SerializeField]
/// @brief Field blendShapeTargets, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>  ___blendShapeTargets;

/// [SerializeField]
/// @brief Field transformPositionTargets, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  ___transformPositionTargets;

/// [SerializeField]
/// @brief Field transformRotationTargets, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>  ___transformRotationTargets;

/// [SerializeField]
/// @brief Field transformScaleTargets, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  ___transformScaleTargets;

/// [SerializeField]
/// @brief Field particleTargets, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>  ___particleTargets;

/// [SerializeField]
/// @brief Field gameObjectEnableTargets, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>  ___gameObjectEnableTargets;

/// [SerializeField]
/// @brief Field rendererColorTargets, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>  ___rendererColorTargets;

/// [SerializeField]
/// @brief Field animatorTargets, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>  ___animatorTargets;

/// [SerializeField]
/// @brief Field smoothLoudnessForContinuousProperties, offset: 0x68, size: 0x1, def value: None
 bool  ___smoothLoudnessForContinuousProperties;

/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x70, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// @brief Field hasContinuousProperties, offset: 0x78, size: 0x1, def value: None
 bool  ___hasContinuousProperties;

/// @brief Field frameLoudness, offset: 0x7c, size: 0x4, def value: None
 float_t  ___frameLoudness;

/// @brief Field frameSmoothedLoudness, offset: 0x80, size: 0x4, def value: None
 float_t  ___frameSmoothedLoudness;

/// [Tooltip("If > 0, The rate that the volume gets louder = deltaTime/attack")]
/// [SerializeField]
/// @brief Field attack, offset: 0x84, size: 0x4, def value: None
 float_t  ___attack;

/// [Tooltip("If > 0, The rate that the volume gets quieter = deltaTime/decay")]
/// [SerializeField]
/// @brief Field decay, offset: 0x88, size: 0x4, def value: None
 float_t  ___decay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___loudness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___blendShapeTargets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___transformPositionTargets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___transformRotationTargets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___transformScaleTargets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___particleTargets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___gameObjectEnableTargets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___rendererColorTargets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___animatorTargets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___smoothLoudnessForContinuousProperties) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___continuousProperties) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___hasContinuousProperties) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___frameLoudness) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___frameSmoothedLoudness) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___attack) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor, ___decay) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactor) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
