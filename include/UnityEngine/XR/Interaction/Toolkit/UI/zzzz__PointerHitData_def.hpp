#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/PointerHitData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PointerHitData)
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct PointerHitData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData, "UnityEngine.XR.Interaction.Toolkit.UI", "PointerHitData");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.PointerHitData
struct CORDL_TYPE PointerHitData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PointerHitData() ;

// Ctor Parameters [CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitCollider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitDocument", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }]
constexpr PointerHitData(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldOrientation, float_t  hitDistance, ::UnityW<::UnityEngine::Collider>  hitCollider, ::UnityW<::UnityEngine::UIElements::UIDocument>  hitDocument, ::UnityEngine::UIElements::VisualElement*  hitElement) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field worldPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  worldPosition;

/// @brief Field worldOrientation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  worldOrientation;

/// @brief Field hitDistance, offset: 0x1c, size: 0x4, def value: None
 float_t  hitDistance;

/// @brief Field hitCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  hitCollider;

/// @brief Field hitDocument, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::UIDocument>  hitDocument;

/// @brief Field hitElement, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  hitElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData, worldPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData, worldOrientation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData, hitDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData, hitCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData, hitDocument) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData, hitElement) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
