#pragma once
// IWYU pragma private; include "GlobalNamespace/Voxel_Pickaxe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "GlobalNamespace/zzzz__Voxel_Pickaxe_InteractionPoint_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Voxel_Pickaxe)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
struct Voxel_Pickaxe_InteractionPoint;
}
namespace UnityEngine::Audio {
class AudioResource;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Voxel_Pickaxe;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Voxel_Pickaxe*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Voxel_Pickaxe*, "", "Voxel_Pickaxe");
// Dependencies UnityEngine.MonoBehaviour, VoxelAction, Voxel_Pickaxe::InteractionPoint
namespace GlobalNamespace {
// Is value type: false
// CS Name: Voxel_Pickaxe
class CORDL_TYPE Voxel_Pickaxe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InteractionPoint = ::GlobalNamespace::Voxel_Pickaxe_InteractionPoint;

 __declspec(property(get=get_Held, put=set_Held)) bool  Held;

/// @brief Field <Held>k__BackingField, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__Held_k__BackingField, put=__cordl_internal_set__Held_k__BackingField)) bool  _Held_k__BackingField;

/// @brief Field _gameEntity, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameEntity, put=__cordl_internal_set__gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  _gameEntity;

/// @brief Field _isLocal, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLocal, put=__cordl_internal_set__isLocal)) bool  _isLocal;

/// @brief Field _layerMask, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerMask, put=__cordl_internal_set__layerMask)) int32_t  _layerMask;

/// @brief Field _nextHitTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextHitTime, put=__cordl_internal_set__nextHitTime)) float_t  _nextHitTime;

/// @brief Field alignThreshold, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_alignThreshold, put=__cordl_internal_set_alignThreshold)) float_t  alignThreshold;

/// @brief Field badHit, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_badHit, put=__cordl_internal_set_badHit)) ::UnityW<::UnityEngine::Audio::AudioResource>  badHit;

/// @brief Field goodHit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_goodHit, put=__cordl_internal_set_goodHit)) ::UnityW<::UnityEngine::Audio::AudioResource>  goodHit;

/// @brief Field hitCooldown, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitCooldown, put=__cordl_internal_set_hitCooldown)) float_t  hitCooldown;

/// @brief Field minHitSpeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHitSpeed, put=__cordl_internal_set_minHitSpeed)) float_t  minHitSpeed;

/// @brief Field minMineSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_minMineSpeed, put=__cordl_internal_set_minMineSpeed)) float_t  minMineSpeed;

/// @brief Field mine, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_mine, put=__cordl_internal_set_mine)) ::GlobalNamespace::VoxelAction  mine;

/// @brief Field points, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>  points;

/// @brief Field sound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sound, put=__cordl_internal_set_sound)) ::UnityW<::UnityEngine::AudioSource>  sound;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Awake, addr 0x5dfb608, size 0x1c8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5dfbc5c, size 0x6c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::Voxel_Pickaxe* New_ctor() ;

/// @brief Method OnDisable, addr 0x5dfbab8, size 0x1a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5dfc510, size 0x134, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5dfb7d0, size 0x260, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x5dfc3e0, size 0x12c, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5dfc34c, size 0x94, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5dfc50c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method Play, addr 0x5dfc250, size 0xfc, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Audio::AudioResource*  resource, ::UnityEngine::Vector3  position) ;

/// @brief Method Reset, addr 0x5dfb570, size 0x98, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetVelocity, addr 0x5dfba30, size 0x88, virtual false, abstract: false, final false
inline void ResetVelocity() ;

/// @brief Method StartGrabbing, addr 0x5dfc06c, size 0x168, virtual false, abstract: false, final false
inline void StartGrabbing() ;

/// @brief Method StopGrabbing, addr 0x5dfc1d4, size 0x7c, virtual false, abstract: false, final false
inline void StopGrabbing() ;

/// @brief Method UpdateInteractionPoint, addr 0x5dfbcc8, size 0x3a4, virtual false, abstract: false, final false
inline void UpdateInteractionPoint(::by_ref<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>  point) ;

constexpr bool const& __cordl_internal_get__Held_k__BackingField() const;

constexpr bool& __cordl_internal_get__Held_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get__gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get__gameEntity() ;

constexpr bool const& __cordl_internal_get__isLocal() const;

constexpr bool& __cordl_internal_get__isLocal() ;

constexpr int32_t const& __cordl_internal_get__layerMask() const;

constexpr int32_t& __cordl_internal_get__layerMask() ;

constexpr float_t const& __cordl_internal_get__nextHitTime() const;

constexpr float_t& __cordl_internal_get__nextHitTime() ;

constexpr float_t const& __cordl_internal_get_alignThreshold() const;

constexpr float_t& __cordl_internal_get_alignThreshold() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioResource> const& __cordl_internal_get_badHit() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioResource>& __cordl_internal_get_badHit() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioResource> const& __cordl_internal_get_goodHit() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioResource>& __cordl_internal_get_goodHit() ;

constexpr float_t const& __cordl_internal_get_hitCooldown() const;

constexpr float_t& __cordl_internal_get_hitCooldown() ;

constexpr float_t const& __cordl_internal_get_minHitSpeed() const;

constexpr float_t& __cordl_internal_get_minHitSpeed() ;

constexpr float_t const& __cordl_internal_get_minMineSpeed() const;

constexpr float_t& __cordl_internal_get_minMineSpeed() ;

constexpr ::GlobalNamespace::VoxelAction const& __cordl_internal_get_mine() const;

constexpr ::GlobalNamespace::VoxelAction& __cordl_internal_get_mine() ;

constexpr ::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint> const& __cordl_internal_get_points() const;

constexpr ::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>& __cordl_internal_get_points() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_sound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_sound() ;

constexpr void __cordl_internal_set__Held_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set__isLocal(bool  value) ;

constexpr void __cordl_internal_set__layerMask(int32_t  value) ;

constexpr void __cordl_internal_set__nextHitTime(float_t  value) ;

constexpr void __cordl_internal_set_alignThreshold(float_t  value) ;

constexpr void __cordl_internal_set_badHit(::UnityW<::UnityEngine::Audio::AudioResource>  value) ;

constexpr void __cordl_internal_set_goodHit(::UnityW<::UnityEngine::Audio::AudioResource>  value) ;

constexpr void __cordl_internal_set_hitCooldown(float_t  value) ;

constexpr void __cordl_internal_set_minHitSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minMineSpeed(float_t  value) ;

constexpr void __cordl_internal_set_mine(::GlobalNamespace::VoxelAction  value) ;

constexpr void __cordl_internal_set_points(::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>  value) ;

constexpr void __cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x5dfc644, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Held, addr 0x5dfb560, size 0x8, virtual false, abstract: false, final false
inline bool get_Held() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Held, addr 0x5dfb568, size 0x8, virtual false, abstract: false, final false
inline void set_Held(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Voxel_Pickaxe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Voxel_Pickaxe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Voxel_Pickaxe(Voxel_Pickaxe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Voxel_Pickaxe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Voxel_Pickaxe(Voxel_Pickaxe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{505};

/// @brief Field mine, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::VoxelAction  ___mine;

/// @brief Field points, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>  ___points;

/// @brief Field goodHit, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioResource>  ___goodHit;

/// @brief Field badHit, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioResource>  ___badHit;

/// @brief Field sound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___sound;

/// @brief Field hitCooldown, offset: 0x50, size: 0x4, def value: None
 float_t  ___hitCooldown;

/// @brief Field minHitSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  ___minHitSpeed;

/// @brief Field minMineSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___minMineSpeed;

/// @brief Field alignThreshold, offset: 0x5c, size: 0x4, def value: None
 float_t  ___alignThreshold;

/// @brief Field _gameEntity, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ____gameEntity;

/// @brief Field _layerMask, offset: 0x68, size: 0x4, def value: None
 int32_t  ____layerMask;

/// @brief Field _nextHitTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ____nextHitTime;

/// @brief Field _isLocal, offset: 0x70, size: 0x1, def value: None
 bool  ____isLocal;

/// [CompilerGenerated]
/// @brief Field <Held>k__BackingField, offset: 0x71, size: 0x1, def value: None
 bool  ____Held_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___mine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___points) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___goodHit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___badHit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___sound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___hitCooldown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___minHitSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___minMineSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ___alignThreshold) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ____gameEntity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ____layerMask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ____nextHitTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ____isLocal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Voxel_Pickaxe, ____Held_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Voxel_Pickaxe) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
