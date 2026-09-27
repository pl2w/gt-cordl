#pragma once
// IWYU pragma private; include "GlobalNamespace/LeafBlowerEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticRefID_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LeafBlowerEffects)
namespace GlobalNamespace {
class CosmeticFan;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LeafBlowerEffects;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LeafBlowerEffects*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LeafBlowerEffects*, "", "LeafBlowerEffects");
// Dependencies CosmeticRefID, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeafBlowerEffects
class CORDL_TYPE LeafBlowerEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field angledHitParticleSystem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_angledHitParticleSystem, put=__cordl_internal_set_angledHitParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  angledHitParticleSystem;

/// @brief Field fan, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_fan, put=__cordl_internal_set_fan)) ::UnityW<::GlobalNamespace::CosmeticFan>  fan;

/// @brief Field fanRef, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fanRef, put=__cordl_internal_set_fanRef)) ::GlobalNamespace::CosmeticRefID  fanRef;

/// @brief Field gunBarrel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gunBarrel, put=__cordl_internal_set_gunBarrel)) ::UnityW<::UnityEngine::GameObject>  gunBarrel;

/// @brief Field headToleranceAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_headToleranceAngle, put=__cordl_internal_set_headToleranceAngle)) float_t  headToleranceAngle;

/// @brief Field headToleranceAngleCos, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_headToleranceAngleCos, put=__cordl_internal_set_headToleranceAngleCos)) float_t  headToleranceAngleCos;

/// @brief Field projectionRange, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectionRange, put=__cordl_internal_set_projectionRange)) float_t  projectionRange;

/// @brief Field projectionWidth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectionWidth, put=__cordl_internal_set_projectionWidth)) float_t  projectionWidth;

/// @brief Field raycastLayers, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastLayers, put=__cordl_internal_set_raycastLayers)) ::UnityEngine::LayerMask  raycastLayers;

/// @brief Field squareHitAngle, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_squareHitAngle, put=__cordl_internal_set_squareHitAngle)) float_t  squareHitAngle;

/// @brief Field squareHitAngleCos, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_squareHitAngleCos, put=__cordl_internal_set_squareHitAngleCos)) float_t  squareHitAngleCos;

/// @brief Field squareHitParticleSystem, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_squareHitParticleSystem, put=__cordl_internal_set_squareHitParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  squareHitParticleSystem;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method BlowFaces, addr 0x5655568, size 0x45c, virtual false, abstract: false, final false
inline void BlowFaces() ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5655020, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5655024, size 0xac, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5655010, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5655000, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5655018, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x5655008, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::LeafBlowerEffects* New_ctor() ;

/// @brief Method ProjectParticles, addr 0x5655118, size 0x450, virtual false, abstract: false, final false
inline void ProjectParticles() ;

/// @brief Method StartFan, addr 0x56550d0, size 0x18, virtual false, abstract: false, final false
inline void StartFan() ;

/// @brief Method StopEffects, addr 0x56559c4, size 0x40, virtual false, abstract: false, final false
inline void StopEffects() ;

/// @brief Method StopFan, addr 0x56550e8, size 0x18, virtual false, abstract: false, final false
inline void StopFan() ;

/// @brief Method TryBlowFace, addr 0x5655a04, size 0x244, virtual false, abstract: false, final false
inline void TryBlowFace(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  directionNormalized) ;

/// @brief Method UpdateEffects, addr 0x5655100, size 0x18, virtual false, abstract: false, final false
inline void UpdateEffects() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_angledHitParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_angledHitParticleSystem() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticFan> const& __cordl_internal_get_fan() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticFan>& __cordl_internal_get_fan() ;

constexpr ::GlobalNamespace::CosmeticRefID const& __cordl_internal_get_fanRef() const;

constexpr ::GlobalNamespace::CosmeticRefID& __cordl_internal_get_fanRef() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gunBarrel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gunBarrel() ;

constexpr float_t const& __cordl_internal_get_headToleranceAngle() const;

constexpr float_t& __cordl_internal_get_headToleranceAngle() ;

constexpr float_t const& __cordl_internal_get_headToleranceAngleCos() const;

constexpr float_t& __cordl_internal_get_headToleranceAngleCos() ;

constexpr float_t const& __cordl_internal_get_projectionRange() const;

constexpr float_t& __cordl_internal_get_projectionRange() ;

constexpr float_t const& __cordl_internal_get_projectionWidth() const;

constexpr float_t& __cordl_internal_get_projectionWidth() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_raycastLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_raycastLayers() ;

constexpr float_t const& __cordl_internal_get_squareHitAngle() const;

constexpr float_t& __cordl_internal_get_squareHitAngle() ;

constexpr float_t const& __cordl_internal_get_squareHitAngleCos() const;

constexpr float_t& __cordl_internal_get_squareHitAngleCos() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_squareHitParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_squareHitParticleSystem() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_angledHitParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_fan(::UnityW<::GlobalNamespace::CosmeticFan>  value) ;

constexpr void __cordl_internal_set_fanRef(::GlobalNamespace::CosmeticRefID  value) ;

constexpr void __cordl_internal_set_gunBarrel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_headToleranceAngle(float_t  value) ;

constexpr void __cordl_internal_set_headToleranceAngleCos(float_t  value) ;

constexpr void __cordl_internal_set_projectionRange(float_t  value) ;

constexpr void __cordl_internal_set_projectionWidth(float_t  value) ;

constexpr void __cordl_internal_set_raycastLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_squareHitAngle(float_t  value) ;

constexpr void __cordl_internal_set_squareHitAngleCos(float_t  value) ;

constexpr void __cordl_internal_set_squareHitParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5655c48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LeafBlowerEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LeafBlowerEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LeafBlowerEffects(LeafBlowerEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeafBlowerEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeafBlowerEffects(LeafBlowerEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{745};

/// [SerializeField]
/// @brief Field gunBarrel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gunBarrel;

/// [SerializeField]
/// @brief Field projectionRange, offset: 0x28, size: 0x4, def value: None
 float_t  ___projectionRange;

/// [SerializeField]
/// @brief Field projectionWidth, offset: 0x2c, size: 0x4, def value: None
 float_t  ___projectionWidth;

/// [SerializeField]
/// @brief Field headToleranceAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ___headToleranceAngle;

/// [SerializeField]
/// @brief Field raycastLayers, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___raycastLayers;

/// [SerializeField]
/// @brief Field angledHitParticleSystem, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___angledHitParticleSystem;

/// [SerializeField]
/// @brief Field squareHitParticleSystem, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___squareHitParticleSystem;

/// [SerializeField]
/// @brief Field squareHitAngle, offset: 0x48, size: 0x4, def value: None
 float_t  ___squareHitAngle;

/// [SerializeField]
/// @brief Field fanRef, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticRefID  ___fanRef;

/// @brief Field headToleranceAngleCos, offset: 0x50, size: 0x4, def value: None
 float_t  ___headToleranceAngleCos;

/// @brief Field squareHitAngleCos, offset: 0x54, size: 0x4, def value: None
 float_t  ___squareHitAngleCos;

/// @brief Field fan, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticFan>  ___fan;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x64, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___gunBarrel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___projectionRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___projectionWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___headToleranceAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___raycastLayers) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___angledHitParticleSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___squareHitParticleSystem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___squareHitAngle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___fanRef) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___headToleranceAngleCos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___squareHitAngleCos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ___fan) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeafBlowerEffects, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LeafBlowerEffects) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
