#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_RepeatRectUV.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGenerator_RepeatRectUV)
// Forward declare root types
namespace GlobalNamespace {
struct MeshGenerator_RepeatRectUV;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGenerator_RepeatRectUV);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGenerator_RepeatRectUV, "UnityEngine.UIElements.UIR", "MeshGenerator/RepeatRectUV");
// Dependencies UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerator/RepeatRectUV
struct CORDL_TYPE MeshGenerator_RepeatRectUV {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerator_RepeatRectUV() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerator_RepeatRectUV(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field uv, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGenerator_RepeatRectUV, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RepeatRectUV, uv) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGenerator_RepeatRectUV) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
