#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/InteractorHitData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InteractorHitData)
namespace UnityEngine::UIElements {
class UIDocument;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct InteractorHitData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData, "UnityEngine.XR.Interaction.Toolkit.UI", "InteractorHitData");
// Dependencies UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.InteractorHitData
struct CORDL_TYPE InteractorHitData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InteractorHitData() ;

// Ctor Parameters [CppParam { name: "closestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactorOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactorDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitDocument", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: None, comment: None }]
constexpr InteractorHitData(::UnityEngine::Vector3  closestPoint, ::UnityEngine::Vector3  interactorOrigin, ::UnityEngine::Vector3  interactorDirection, ::UnityW<::UnityEngine::UIElements::UIDocument>  hitDocument) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field closestPoint, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  closestPoint;

/// @brief Field interactorOrigin, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  interactorOrigin;

/// @brief Field interactorDirection, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  interactorDirection;

/// @brief Field hitDocument, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::UIDocument>  hitDocument;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData, closestPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData, interactorOrigin) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData, interactorDirection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData, hitDocument) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
