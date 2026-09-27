#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WorldSpaceInput)
namespace GlobalNamespace {
struct WorldSpaceInput_PickResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WorldSpaceInput;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::WorldSpaceInput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::WorldSpaceInput*, "UnityEngine.UIElements", "WorldSpaceInput");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.WorldSpaceInput
class CORDL_TYPE WorldSpaceInput : public ::System::Object {
public:
// Declarations
using PickResult = ::GlobalNamespace::WorldSpaceInput_PickResult;

/// @brief Method GetPicking3DLocalBounds, addr 0xb8b518c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetPicking3DLocalBounds(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method GetPicking3DWorldBounds, addr 0xb8b401c, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetPicking3DWorldBounds(::UnityEngine::UIElements::VisualElement*  ve) ;

/// [VisibleToOtherModules(new[] { "Assembly-CSharp-testable" })]
/// @brief Method PerformPick, addr 0xb8b5220, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* PerformPick(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Ray  ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults) ;

/// @brief Method PerformPick2D, addr 0xb8b52a0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* PerformPick2D(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Ray  ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults) ;

/// @brief Method PerformPick2D_LocalPoint, addr 0xb8b55e8, size 0x27c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* PerformPick2D_LocalPoint(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Vector3  localPoint, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  picked) ;

/// @brief Method PerformPick3D, addr 0xb8b5300, size 0x2e8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* PerformPick3D(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Ray  ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults) ;

/// @brief Method Pick3D, addr 0xb8b506c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* Pick3D(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Ray  worldRay) ;

/// @brief Method Pick3D, addr 0xb8ac484, size 0x1b8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* Pick3D(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Ray  worldRay, ::by_ref<float_t>  distance) ;

/// @brief Method PickDocument3D, addr 0xb8abc84, size 0x620, virtual false, abstract: false, final false
static inline ::GlobalNamespace::WorldSpaceInput_PickResult PickDocument3D(::UnityEngine::Ray  worldRay, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Pick_Internal, addr 0xb8b5100, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* Pick_Internal(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Ray  documentRay, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldSpaceInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldSpaceInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldSpaceInput(WorldSpaceInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldSpaceInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldSpaceInput(WorldSpaceInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::WorldSpaceInput) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
