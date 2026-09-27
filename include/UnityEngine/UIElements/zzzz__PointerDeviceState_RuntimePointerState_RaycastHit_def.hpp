#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState_RuntimePointerState_RaycastHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PointerDeviceState_RuntimePointerState_RaycastHit)
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
namespace GlobalNamespace {
struct RuntimePointerState_PointerDeviceState_RaycastHit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit, "UnityEngine.UIElements", "PointerDeviceState/RuntimePointerState/RaycastHit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.PointerDeviceState/RuntimePointerState/RaycastHit
struct CORDL_TYPE RuntimePointerState_PointerDeviceState_RaycastHit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RuntimePointerState_PointerDeviceState_RaycastHit() ;

// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "document", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: None, comment: None }, CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }]
constexpr RuntimePointerState_PointerDeviceState_RaycastHit(float_t  distance, ::UnityW<::UnityEngine::Collider>  collider, ::UnityW<::UnityEngine::UIElements::UIDocument>  document, ::UnityEngine::UIElements::VisualElement*  element) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7682};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field distance, offset: 0x0, size: 0x4, def value: None
 float_t  distance;

/// @brief Field collider, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field document, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::UIDocument>  document;

/// @brief Field element, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  element;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit, distance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit, collider) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit, document) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit, element) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
