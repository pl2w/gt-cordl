#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MeshGizmo___c__DisplayClass10_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGizmo___c__DisplayClass10_0)
namespace UnityEngine::Rendering {
class MeshGizmo;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshGizmo___c__DisplayClass10_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGizmo___c__DisplayClass10_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGizmo___c__DisplayClass10_0, "UnityEngine.Rendering", "MeshGizmo/<>c__DisplayClass10_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.MeshGizmo/<>c__DisplayClass10_0
struct CORDL_TYPE MeshGizmo___c__DisplayClass10_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshGizmo___c__DisplayClass10_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::MeshGizmo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr MeshGizmo___c__DisplayClass10_0(::UnityEngine::Rendering::MeshGizmo*  __4__this, ::UnityEngine::Color  color) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::MeshGizmo*  __4__this;

/// @brief Field color, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Color  color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGizmo___c__DisplayClass10_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGizmo___c__DisplayClass10_0, color) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGizmo___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
