#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/PointAndLocate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_def.hpp"
CORDL_MODULE_EXPORT(PointAndLocate)
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
class PointAndLocate;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*, "Meta.XR.MRUtilityKit.BuildingBlocks", "PointAndLocate");
// Dependencies Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate
class CORDL_TYPE PointAndLocate : public ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator {
public:
// Declarations
 __declspec(property(get=get_RaycastOrigin)) ::UnityW<::UnityEngine::Transform>  RaycastOrigin;

/// @brief Field _raycastOrigin, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastOrigin, put=__cordl_internal_set__raycastOrigin)) ::UnityW<::UnityEngine::Transform>  _raycastOrigin;

/// @brief Method GetRaycastRay, addr 0x9f58f30, size 0x150, virtual true, abstract: false, final false
inline ::UnityEngine::Ray GetRaycastRay() ;

/// @brief Method Locate, addr 0x9f58f00, size 0x30, virtual false, abstract: false, final false
inline void Locate() ;

static inline ::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__raycastOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__raycastOrigin() ;

constexpr void __cordl_internal_set__raycastOrigin(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9f59080, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RaycastOrigin, addr 0x9f58ef8, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RaycastOrigin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointAndLocate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointAndLocate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointAndLocate(PointAndLocate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointAndLocate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointAndLocate(PointAndLocate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25983};

/// [Tooltip("Assign a Transform to use that as raycast origin")]
/// [SerializeField]
/// @brief Field _raycastOrigin, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____raycastOrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate, ____raycastOrigin) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate) == 0x90, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::BuildingBlocks
