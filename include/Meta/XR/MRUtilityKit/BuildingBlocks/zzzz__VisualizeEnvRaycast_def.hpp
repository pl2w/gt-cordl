#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/VisualizeEnvRaycast.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VisualizeEnvRaycast)
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
class SpaceLocator;
}
namespace Meta::XR {
class EnvironmentRaycastManager;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
class VisualizeEnvRaycast;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*, "Meta.XR.MRUtilityKit.BuildingBlocks", "VisualizeEnvRaycast");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast
class CORDL_TYPE VisualizeEnvRaycast : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _raycastHitPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastHitPoint, put=__cordl_internal_set__raycastHitPoint)) ::UnityW<::UnityEngine::Transform>  _raycastHitPoint;

/// @brief Field _raycastLine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastLine, put=__cordl_internal_set__raycastLine)) ::UnityW<::UnityEngine::LineRenderer>  _raycastLine;

/// @brief Field _raycastManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastManager, put=__cordl_internal_set__raycastManager)) ::UnityW<::Meta::XR::EnvironmentRaycastManager>  _raycastManager;

/// @brief Field _spaceLocator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__spaceLocator, put=__cordl_internal_set__spaceLocator)) ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator>  _spaceLocator;

/// @brief Method Awake, addr 0x9f599f4, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast* New_ctor() ;

/// @brief Method Update, addr 0x9f59a6c, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method VisualizeRay, addr 0x9f59a70, size 0x238, virtual false, abstract: false, final false
inline void VisualizeRay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__raycastHitPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__raycastHitPoint() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__raycastLine() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__raycastLine() ;

constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager> const& __cordl_internal_get__raycastManager() const;

constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager>& __cordl_internal_get__raycastManager() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator> const& __cordl_internal_get__spaceLocator() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator>& __cordl_internal_get__spaceLocator() ;

constexpr void __cordl_internal_set__raycastHitPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__raycastLine(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__raycastManager(::UnityW<::Meta::XR::EnvironmentRaycastManager>  value) ;

constexpr void __cordl_internal_set__spaceLocator(::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator>  value) ;

/// @brief Method .ctor, addr 0x9f59ca8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualizeEnvRaycast() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualizeEnvRaycast", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualizeEnvRaycast(VisualizeEnvRaycast && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualizeEnvRaycast", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualizeEnvRaycast(VisualizeEnvRaycast const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25986};

/// [SerializeField]
/// [Tooltip("Supply a LineRenderer to visualize the raycast ray")]
/// @brief Field _raycastLine, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____raycastLine;

/// [SerializeField]
/// [Tooltip("Supply a Transform to see the ray hit point")]
/// @brief Field _raycastHitPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____raycastHitPoint;

/// [SerializeField]
/// @brief Field _spaceLocator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator>  ____spaceLocator;

/// @brief Field _raycastManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Meta::XR::EnvironmentRaycastManager>  ____raycastManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast, ____raycastLine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast, ____raycastHitPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast, ____spaceLocator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast, ____raycastManager) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast) == 0x40, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::BuildingBlocks
