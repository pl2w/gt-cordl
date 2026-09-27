#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePiece.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUpgradePiece)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class ParticleSystemForceField;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolUpgradePiece;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUpgradePiece*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradePiece*, "", "GRToolUpgradePiece");
// Dependencies GRToolProgressionManager::ToolParts, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgradePiece
class CORDL_TYPE GRToolUpgradePiece : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field attractParticleSystem, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractParticleSystem, put=__cordl_internal_set_attractParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  attractParticleSystem;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field childVisualTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_childVisualTransform, put=__cordl_internal_set_childVisualTransform)) ::UnityW<::UnityEngine::Transform>  childVisualTransform;

/// @brief Field currentMagnetizingTool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMagnetizingTool, put=__cordl_internal_set_currentMagnetizingTool)) ::UnityW<::GlobalNamespace::GameEntity>  currentMagnetizingTool;

/// @brief Field forceField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceField, put=__cordl_internal_set_forceField)) ::UnityW<::UnityEngine::ParticleSystemForceField>  forceField;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field gameEntityListCheckIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameEntityListCheckIndex, put=__cordl_internal_set_gameEntityListCheckIndex)) int32_t  gameEntityListCheckIndex;

/// @brief Field humAudioSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_humAudioSource, put=__cordl_internal_set_humAudioSource)) ::UnityW<::UnityEngine::AudioSource>  humAudioSource;

/// @brief Field magnetizingLoopMaxVolume, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnetizingLoopMaxVolume, put=__cordl_internal_set_magnetizingLoopMaxVolume)) float_t  magnetizingLoopMaxVolume;

/// @brief Field magnetizingLoopMinVolume, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnetizingLoopMinVolume, put=__cordl_internal_set_magnetizingLoopMinVolume)) float_t  magnetizingLoopMinVolume;

/// @brief Field matchingUpgrade, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_matchingUpgrade, put=__cordl_internal_set_matchingUpgrade)) ::GlobalNamespace::GRToolProgressionManager_ToolParts  matchingUpgrade;

/// @brief Field meshCollider, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshCollider, put=__cordl_internal_set_meshCollider)) ::UnityW<::UnityEngine::MeshCollider>  meshCollider;

/// @brief Field minDistToSnap, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistToSnap, put=__cordl_internal_set_minDistToSnap)) float_t  minDistToSnap;

/// @brief Field minDistToStartMagnetize, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistToStartMagnetize, put=__cordl_internal_set_minDistToStartMagnetize)) float_t  minDistToStartMagnetize;

/// @brief Field shakeFrequency, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_shakeFrequency, put=__cordl_internal_set_shakeFrequency)) float_t  shakeFrequency;

/// @brief Field shakeMaxAmount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_shakeMaxAmount, put=__cordl_internal_set_shakeMaxAmount)) float_t  shakeMaxAmount;

/// @brief Field shakePhase, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_shakePhase, put=__cordl_internal_set_shakePhase)) float_t  shakePhase;

/// @brief Field snapAudioClip, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapAudioClip, put=__cordl_internal_set_snapAudioClip)) ::UnityW<::UnityEngine::AudioClip>  snapAudioClip;

/// @brief Field snapAudioVolume, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapAudioVolume, put=__cordl_internal_set_snapAudioVolume)) float_t  snapAudioVolume;

/// @brief Field toolSearchesPerFrame, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_toolSearchesPerFrame, put=__cordl_internal_set_toolSearchesPerFrame)) int32_t  toolSearchesPerFrame;

/// @brief Field visualDistanceCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualDistanceCurve, put=__cordl_internal_set_visualDistanceCurve)) ::UnityEngine::AnimationCurve*  visualDistanceCurve;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method DisableProcAnimLoop, addr 0x58c8634, size 0x230, virtual false, abstract: false, final false
inline void DisableProcAnimLoop() ;

/// @brief Method EnableProcAnimLoop, addr 0x58c8518, size 0x11c, virtual false, abstract: false, final false
inline void EnableProcAnimLoop() ;

/// @brief Method GrabbedByPlayer, addr 0x58c955c, size 0x130, virtual false, abstract: false, final false
inline void GrabbedByPlayer() ;

static inline ::GlobalNamespace::GRToolUpgradePiece* New_ctor() ;

/// @brief Method OnDisable, addr 0x58c9400, size 0x15c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58c92a4, size 0x15c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x58c9d28, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58c9690, size 0x124, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58c9d2c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method ReleasedByPlayer, addr 0x58c968c, size 0x4, virtual false, abstract: false, final false
inline void ReleasedByPlayer() ;

/// @brief Method Start, addr 0x58c844c, size 0xcc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchMagnetizedTarget, addr 0x58c8864, size 0x8, virtual false, abstract: false, final false
inline void SwitchMagnetizedTarget(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method Tick, addr 0x58c886c, size 0xa38, virtual false, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_attractParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_attractParticleSystem() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_childVisualTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_childVisualTransform() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_currentMagnetizingTool() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_currentMagnetizingTool() ;

constexpr ::UnityW<::UnityEngine::ParticleSystemForceField> const& __cordl_internal_get_forceField() const;

constexpr ::UnityW<::UnityEngine::ParticleSystemForceField>& __cordl_internal_get_forceField() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr int32_t const& __cordl_internal_get_gameEntityListCheckIndex() const;

constexpr int32_t& __cordl_internal_get_gameEntityListCheckIndex() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_humAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_humAudioSource() ;

constexpr float_t const& __cordl_internal_get_magnetizingLoopMaxVolume() const;

constexpr float_t& __cordl_internal_get_magnetizingLoopMaxVolume() ;

constexpr float_t const& __cordl_internal_get_magnetizingLoopMinVolume() const;

constexpr float_t& __cordl_internal_get_magnetizingLoopMinVolume() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& __cordl_internal_get_matchingUpgrade() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& __cordl_internal_get_matchingUpgrade() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_meshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_meshCollider() ;

constexpr float_t const& __cordl_internal_get_minDistToSnap() const;

constexpr float_t& __cordl_internal_get_minDistToSnap() ;

constexpr float_t const& __cordl_internal_get_minDistToStartMagnetize() const;

constexpr float_t& __cordl_internal_get_minDistToStartMagnetize() ;

constexpr float_t const& __cordl_internal_get_shakeFrequency() const;

constexpr float_t& __cordl_internal_get_shakeFrequency() ;

constexpr float_t const& __cordl_internal_get_shakeMaxAmount() const;

constexpr float_t& __cordl_internal_get_shakeMaxAmount() ;

constexpr float_t const& __cordl_internal_get_shakePhase() const;

constexpr float_t& __cordl_internal_get_shakePhase() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_snapAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_snapAudioClip() ;

constexpr float_t const& __cordl_internal_get_snapAudioVolume() const;

constexpr float_t& __cordl_internal_get_snapAudioVolume() ;

constexpr int32_t const& __cordl_internal_get_toolSearchesPerFrame() const;

constexpr int32_t& __cordl_internal_get_toolSearchesPerFrame() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_visualDistanceCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_visualDistanceCurve() ;

constexpr void __cordl_internal_set_attractParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_childVisualTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentMagnetizingTool(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_forceField(::UnityW<::UnityEngine::ParticleSystemForceField>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gameEntityListCheckIndex(int32_t  value) ;

constexpr void __cordl_internal_set_humAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_magnetizingLoopMaxVolume(float_t  value) ;

constexpr void __cordl_internal_set_magnetizingLoopMinVolume(float_t  value) ;

constexpr void __cordl_internal_set_matchingUpgrade(::GlobalNamespace::GRToolProgressionManager_ToolParts  value) ;

constexpr void __cordl_internal_set_meshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_minDistToSnap(float_t  value) ;

constexpr void __cordl_internal_set_minDistToStartMagnetize(float_t  value) ;

constexpr void __cordl_internal_set_shakeFrequency(float_t  value) ;

constexpr void __cordl_internal_set_shakeMaxAmount(float_t  value) ;

constexpr void __cordl_internal_set_shakePhase(float_t  value) ;

constexpr void __cordl_internal_set_snapAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_snapAudioVolume(float_t  value) ;

constexpr void __cordl_internal_set_toolSearchesPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_visualDistanceCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x58c9d30, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradePiece() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePiece", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgradePiece(GRToolUpgradePiece && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePiece", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgradePiece(GRToolUpgradePiece const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2088};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field matchingUpgrade, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolParts  ___matchingUpgrade;

/// @brief Field gameEntityListCheckIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___gameEntityListCheckIndex;

/// @brief Field currentMagnetizingTool, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___currentMagnetizingTool;

/// @brief Field visualDistanceCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___visualDistanceCurve;

/// @brief Field shakeMaxAmount, offset: 0x40, size: 0x4, def value: None
 float_t  ___shakeMaxAmount;

/// @brief Field shakeFrequency, offset: 0x44, size: 0x4, def value: None
 float_t  ___shakeFrequency;

/// @brief Field childVisualTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___childVisualTransform;

/// @brief Field humAudioSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___humAudioSource;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field snapAudioClip, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___snapAudioClip;

/// @brief Field meshCollider, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___meshCollider;

/// @brief Field attractParticleSystem, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___attractParticleSystem;

/// @brief Field forceField, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystemForceField>  ___forceField;

/// @brief Field minDistToStartMagnetize, offset: 0x80, size: 0x4, def value: None
 float_t  ___minDistToStartMagnetize;

/// @brief Field minDistToSnap, offset: 0x84, size: 0x4, def value: None
 float_t  ___minDistToSnap;

/// @brief Field magnetizingLoopMinVolume, offset: 0x88, size: 0x4, def value: None
 float_t  ___magnetizingLoopMinVolume;

/// @brief Field magnetizingLoopMaxVolume, offset: 0x8c, size: 0x4, def value: None
 float_t  ___magnetizingLoopMaxVolume;

/// @brief Field snapAudioVolume, offset: 0x90, size: 0x4, def value: None
 float_t  ___snapAudioVolume;

/// @brief Field toolSearchesPerFrame, offset: 0x94, size: 0x4, def value: None
 int32_t  ___toolSearchesPerFrame;

/// @brief Field shakePhase, offset: 0x98, size: 0x4, def value: None
 float_t  ___shakePhase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___matchingUpgrade) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___gameEntityListCheckIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___currentMagnetizingTool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___visualDistanceCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___shakeMaxAmount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___shakeFrequency) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___childVisualTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___humAudioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___snapAudioClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___meshCollider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___attractParticleSystem) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___forceField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___minDistToStartMagnetize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___minDistToSnap) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___magnetizingLoopMinVolume) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___magnetizingLoopMaxVolume) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___snapAudioVolume) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___toolSearchesPerFrame) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePiece, ___shakePhase) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradePiece) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
