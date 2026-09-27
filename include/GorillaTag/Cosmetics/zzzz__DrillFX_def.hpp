#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DrillFX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ShapeModule_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DrillFX)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class DrillFX;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::DrillFX*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::DrillFX*, "GorillaTag.Cosmetics", "DrillFX");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::ShapeModule, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.DrillFX
class CORDL_TYPE DrillFX : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field appIsQuitting, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_appIsQuitting, put=setStaticF_appIsQuitting)) bool  appIsQuitting;

/// @brief Field appIsQuittingHandlerIsSubscribed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_appIsQuittingHandlerIsSubscribed, put=setStaticF_appIsQuittingHandlerIsSubscribed)) bool  appIsQuittingHandlerIsSubscribed;

/// @brief Field audioMaxVolume, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioMaxVolume, put=__cordl_internal_set_audioMaxVolume)) float_t  audioMaxVolume;

/// @brief Field fx, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fx, put=__cordl_internal_set_fx)) ::UnityW<::UnityEngine::ParticleSystem>  fx;

/// @brief Field fxEmissionCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxEmissionCurve, put=__cordl_internal_set_fxEmissionCurve)) ::UnityEngine::AnimationCurve*  fxEmissionCurve;

/// @brief Field fxEmissionMaxRate, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_fxEmissionMaxRate, put=__cordl_internal_set_fxEmissionMaxRate)) float_t  fxEmissionMaxRate;

/// @brief Field fxEmissionModule, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxEmissionModule, put=__cordl_internal_set_fxEmissionModule)) ::GlobalNamespace::ParticleSystem_EmissionModule  fxEmissionModule;

/// @brief Field fxMinRadiusScale, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fxMinRadiusScale, put=__cordl_internal_set_fxMinRadiusScale)) float_t  fxMinRadiusScale;

/// @brief Field fxShapeMaxRadius, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_fxShapeMaxRadius, put=__cordl_internal_set_fxShapeMaxRadius)) float_t  fxShapeMaxRadius;

/// @brief Field fxShapeModule, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxShapeModule, put=__cordl_internal_set_fxShapeModule)) ::GlobalNamespace::ParticleSystem_ShapeModule  fxShapeModule;

/// @brief Field hasAudio, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasAudio, put=__cordl_internal_set_hasAudio)) bool  hasAudio;

/// @brief Field hasFX, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFX, put=__cordl_internal_set_hasFX)) bool  hasFX;

/// @brief Field lineCastEnd, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lineCastEnd, put=__cordl_internal_set_lineCastEnd)) ::UnityEngine::Vector3  lineCastEnd;

/// @brief Field lineCastLayerMask, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineCastLayerMask, put=__cordl_internal_set_lineCastLayerMask)) ::UnityEngine::LayerMask  lineCastLayerMask;

/// @brief Field lineCastStart, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_lineCastStart, put=__cordl_internal_set_lineCastStart)) ::UnityEngine::Vector3  lineCastStart;

/// @brief Field loopAudio, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopAudio, put=__cordl_internal_set_loopAudio)) ::UnityW<::UnityEngine::AudioSource>  loopAudio;

/// @brief Field loopAudioVolumeCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopAudioVolumeCurve, put=__cordl_internal_set_loopAudioVolumeCurve)) ::UnityEngine::AnimationCurve*  loopAudioVolumeCurve;

/// @brief Field loopAudioVolumeTransitionSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopAudioVolumeTransitionSpeed, put=__cordl_internal_set_loopAudioVolumeTransitionSpeed)) float_t  loopAudioVolumeTransitionSpeed;

/// @brief Field maxDepth, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDepth, put=__cordl_internal_set_maxDepth)) float_t  maxDepth;

/// @brief Method Awake, addr 0x5d7b4d8, size 0x200, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleApplicationQuitting, addr 0x5d7bc64, size 0x4c, virtual false, abstract: false, final false
static inline void HandleApplicationQuitting() ;

/// @brief Method LateUpdate, addr 0x5d7b980, size 0x2e4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Cosmetics::DrillFX* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d7b8e0, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d7b6d8, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ValidateLineCastPositions, addr 0x5d7b794, size 0x14c, virtual false, abstract: false, final false
inline bool ValidateLineCastPositions() ;

constexpr float_t const& __cordl_internal_get_audioMaxVolume() const;

constexpr float_t& __cordl_internal_get_audioMaxVolume() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_fx() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_fx() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_fxEmissionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_fxEmissionCurve() ;

constexpr float_t const& __cordl_internal_get_fxEmissionMaxRate() const;

constexpr float_t& __cordl_internal_get_fxEmissionMaxRate() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_fxEmissionModule() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_fxEmissionModule() ;

constexpr float_t const& __cordl_internal_get_fxMinRadiusScale() const;

constexpr float_t& __cordl_internal_get_fxMinRadiusScale() ;

constexpr float_t const& __cordl_internal_get_fxShapeMaxRadius() const;

constexpr float_t& __cordl_internal_get_fxShapeMaxRadius() ;

constexpr ::GlobalNamespace::ParticleSystem_ShapeModule const& __cordl_internal_get_fxShapeModule() const;

constexpr ::GlobalNamespace::ParticleSystem_ShapeModule& __cordl_internal_get_fxShapeModule() ;

constexpr bool const& __cordl_internal_get_hasAudio() const;

constexpr bool& __cordl_internal_get_hasAudio() ;

constexpr bool const& __cordl_internal_get_hasFX() const;

constexpr bool& __cordl_internal_get_hasFX() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lineCastEnd() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lineCastEnd() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_lineCastLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_lineCastLayerMask() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lineCastStart() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lineCastStart() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_loopAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_loopAudio() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_loopAudioVolumeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_loopAudioVolumeCurve() ;

constexpr float_t const& __cordl_internal_get_loopAudioVolumeTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_loopAudioVolumeTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_maxDepth() const;

constexpr float_t& __cordl_internal_get_maxDepth() ;

constexpr void __cordl_internal_set_audioMaxVolume(float_t  value) ;

constexpr void __cordl_internal_set_fx(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_fxEmissionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_fxEmissionMaxRate(float_t  value) ;

constexpr void __cordl_internal_set_fxEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_fxMinRadiusScale(float_t  value) ;

constexpr void __cordl_internal_set_fxShapeMaxRadius(float_t  value) ;

constexpr void __cordl_internal_set_fxShapeModule(::GlobalNamespace::ParticleSystem_ShapeModule  value) ;

constexpr void __cordl_internal_set_hasAudio(bool  value) ;

constexpr void __cordl_internal_set_hasFX(bool  value) ;

constexpr void __cordl_internal_set_lineCastEnd(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lineCastLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_lineCastStart(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_loopAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_loopAudioVolumeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_loopAudioVolumeTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxDepth(float_t  value) ;

/// @brief Method .ctor, addr 0x5d7bcb0, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_appIsQuitting() ;

static inline bool getStaticF_appIsQuittingHandlerIsSubscribed() ;

static inline void setStaticF_appIsQuitting(bool  value) ;

static inline void setStaticF_appIsQuittingHandlerIsSubscribed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrillFX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrillFX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrillFX(DrillFX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrillFX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrillFX(DrillFX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4869};

/// [SerializeField]
/// @brief Field fx, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___fx;

/// [SerializeField]
/// @brief Field fxEmissionCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___fxEmissionCurve;

/// [SerializeField]
/// @brief Field fxMinRadiusScale, offset: 0x30, size: 0x4, def value: None
 float_t  ___fxMinRadiusScale;

/// [Tooltip("Right click menu has custom menu items. Anything starting with \"- \" is custom.")]
/// [SerializeField]
/// @brief Field loopAudio, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___loopAudio;

/// [SerializeField]
/// @brief Field loopAudioVolumeCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___loopAudioVolumeCurve;

/// [Tooltip("Higher value makes it reach the target volume faster.")]
/// [SerializeField]
/// @brief Field loopAudioVolumeTransitionSpeed, offset: 0x48, size: 0x4, def value: None
 float_t  ___loopAudioVolumeTransitionSpeed;

/// [FormerlySerializedAs("layerMask")]
/// [Tooltip("The collision layers the line cast should intersect with")]
/// [SerializeField]
/// @brief Field lineCastLayerMask, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___lineCastLayerMask;

/// [Tooltip("The position in local space that the line cast starts.")]
/// [SerializeField]
/// @brief Field lineCastStart, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lineCastStart;

/// [Tooltip("The position in local space that the line cast ends.")]
/// [SerializeField]
/// @brief Field lineCastEnd, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lineCastEnd;

/// @brief Field maxDepth, offset: 0x68, size: 0x4, def value: None
 float_t  ___maxDepth;

/// @brief Field hasFX, offset: 0x6c, size: 0x1, def value: None
 bool  ___hasFX;

/// @brief Field fxEmissionModule, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___fxEmissionModule;

/// @brief Field fxEmissionMaxRate, offset: 0x78, size: 0x4, def value: None
 float_t  ___fxEmissionMaxRate;

/// @brief Field fxShapeModule, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_ShapeModule  ___fxShapeModule;

/// @brief Field fxShapeMaxRadius, offset: 0x88, size: 0x4, def value: None
 float_t  ___fxShapeMaxRadius;

/// @brief Field hasAudio, offset: 0x8c, size: 0x1, def value: None
 bool  ___hasAudio;

/// @brief Field audioMaxVolume, offset: 0x90, size: 0x4, def value: None
 float_t  ___audioMaxVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___fx) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___fxEmissionCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___fxMinRadiusScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___loopAudio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___loopAudioVolumeCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___loopAudioVolumeTransitionSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___lineCastLayerMask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___lineCastStart) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___lineCastEnd) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___maxDepth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___hasFX) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___fxEmissionModule) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___fxEmissionMaxRate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___fxShapeModule) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___fxShapeMaxRadius) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___hasAudio) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DrillFX, ___audioMaxVolume) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::DrillFX) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
