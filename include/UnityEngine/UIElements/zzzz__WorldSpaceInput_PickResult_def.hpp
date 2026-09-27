#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceInput_PickResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(WorldSpaceInput_PickResult)
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace GlobalNamespace {
struct WorldSpaceInput_PickResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WorldSpaceInput_PickResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldSpaceInput_PickResult, "UnityEngine.UIElements", "WorldSpaceInput/PickResult");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.WorldSpaceInput/PickResult
struct CORDL_TYPE WorldSpaceInput_PickResult {
public:
// Declarations
/// @brief Field Empty, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::GlobalNamespace::WorldSpaceInput_PickResult  Empty;

/// @brief Method ComputeCollisionData, addr 0xb8b5864, size 0x17c, virtual false, abstract: false, final false
inline void ComputeCollisionData(::UnityEngine::Ray  ray) ;

static inline ::GlobalNamespace::WorldSpaceInput_PickResult getStaticF_Empty() ;

static inline void setStaticF_Empty(::GlobalNamespace::WorldSpaceInput_PickResult  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WorldSpaceInput_PickResult() ;

// Ctor Parameters [CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "document", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: None, comment: None }, CppParam { name: "pickedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr WorldSpaceInput_PickResult(::UnityW<::UnityEngine::Collider>  collider, ::UnityW<::UnityEngine::UIElements::UIDocument>  document, ::UnityEngine::UIElements::VisualElement*  pickedElement, float_t  distance, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  localPoint) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field collider, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field document, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::UIDocument>  document;

/// @brief Field pickedElement, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  pickedElement;

/// @brief Field distance, offset: 0x18, size: 0x4, def value: None
 float_t  distance;

/// @brief Field normal, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  normal;

/// @brief Field point, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  point;

/// @brief Field localPoint, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldSpaceInput_PickResult, collider) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldSpaceInput_PickResult, document) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldSpaceInput_PickResult, pickedElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldSpaceInput_PickResult, distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldSpaceInput_PickResult, normal) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldSpaceInput_PickResult, point) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldSpaceInput_PickResult, localPoint) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldSpaceInput_PickResult) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
