#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ColliderMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class ColliderMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "ColliderMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Mask, UnityEngine.LayerMask
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask
class CORDL_TYPE ColliderMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask {
public:
// Declarations
/// @brief Field CheckLayers, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CheckLayers, put=__cordl_internal_set_CheckLayers)) ::UnityEngine::LayerMask  CheckLayers;

/// @brief Field IgnoreFloorCollision, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreFloorCollision, put=__cordl_internal_set_IgnoreFloorCollision)) bool  IgnoreFloorCollision;

/// @brief Field IgnoreGlobalMeshCollision, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreGlobalMeshCollision, put=__cordl_internal_set_IgnoreGlobalMeshCollision)) bool  IgnoreGlobalMeshCollision;

/// @brief Field MaxCheckColliders, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxCheckColliders, put=__cordl_internal_set_MaxCheckColliders)) int32_t  MaxCheckColliders;

/// @brief Method Check, addr 0x9f50ab4, size 0x614, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

/// @brief Method CheckColliderHitsForMRUK, addr 0x9f510c8, size 0x184, virtual false, abstract: false, final false
inline bool CheckColliderHitsForMRUK(::ArrayW<::UnityEngine::Collider*>  colliders, int32_t  size) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f50aac, size 0x8, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_CheckLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_CheckLayers() ;

constexpr bool const& __cordl_internal_get_IgnoreFloorCollision() const;

constexpr bool& __cordl_internal_get_IgnoreFloorCollision() ;

constexpr bool const& __cordl_internal_get_IgnoreGlobalMeshCollision() const;

constexpr bool& __cordl_internal_get_IgnoreGlobalMeshCollision() ;

constexpr int32_t const& __cordl_internal_get_MaxCheckColliders() const;

constexpr int32_t& __cordl_internal_get_MaxCheckColliders() ;

constexpr void __cordl_internal_set_CheckLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_IgnoreFloorCollision(bool  value) ;

constexpr void __cordl_internal_set_IgnoreGlobalMeshCollision(bool  value) ;

constexpr void __cordl_internal_set_MaxCheckColliders(int32_t  value) ;

/// @brief Method .ctor, addr 0x9f5124c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderMask(ColliderMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderMask(ColliderMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25922};

/// [SerializeField]
/// @brief Field MaxCheckColliders, offset: 0x18, size: 0x4, def value: None
 int32_t  ___MaxCheckColliders;

/// [SerializeField]
/// @brief Field IgnoreFloorCollision, offset: 0x1c, size: 0x1, def value: None
 bool  ___IgnoreFloorCollision;

/// [SerializeField]
/// @brief Field IgnoreGlobalMeshCollision, offset: 0x1d, size: 0x1, def value: None
 bool  ___IgnoreGlobalMeshCollision;

/// [SerializeField]
/// @brief Field CheckLayers, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___CheckLayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask, ___MaxCheckColliders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask, ___IgnoreFloorCollision) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask, ___IgnoreGlobalMeshCollision) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask, ___CheckLayers) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
