#pragma once
// IWYU pragma private; include "Oculus/Interaction/TubeRenderer_VertexLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TubeRenderer_VertexLayout)
// Forward declare root types
namespace GlobalNamespace {
struct TubeRenderer_VertexLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TubeRenderer_VertexLayout);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeRenderer_VertexLayout, "Oculus.Interaction", "TubeRenderer/VertexLayout");
// Dependencies UnityEngine.Color32, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.TubeRenderer/VertexLayout
struct CORDL_TYPE TubeRenderer_VertexLayout {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TubeRenderer_VertexLayout() ;

// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr TubeRenderer_VertexLayout(::UnityEngine::Vector3  pos, ::UnityEngine::Color32  color, ::UnityEngine::Vector2  uv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field pos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// @brief Field color, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::Color32  color;

/// @brief Field uv, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeRenderer_VertexLayout, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeRenderer_VertexLayout, color) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeRenderer_VertexLayout, uv) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeRenderer_VertexLayout) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
