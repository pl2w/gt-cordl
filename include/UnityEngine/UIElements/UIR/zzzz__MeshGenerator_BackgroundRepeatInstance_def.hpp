#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_BackgroundRepeatInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGenerator_BackgroundRepeatInstance)
// Forward declare root types
namespace GlobalNamespace {
struct MeshGenerator_BackgroundRepeatInstance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance, "UnityEngine.UIElements.UIR", "MeshGenerator/BackgroundRepeatInstance");
// Dependencies UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerator/BackgroundRepeatInstance
struct CORDL_TYPE MeshGenerator_BackgroundRepeatInstance {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerator_BackgroundRepeatInstance() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerator_BackgroundRepeatInstance(::UnityEngine::Rect  rect, ::UnityEngine::Rect  backgroundRepeatRect, ::UnityEngine::Rect  uv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field backgroundRepeatRect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  backgroundRepeatRect;

/// @brief Field uv, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rect  uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance, backgroundRepeatRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance, uv) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
