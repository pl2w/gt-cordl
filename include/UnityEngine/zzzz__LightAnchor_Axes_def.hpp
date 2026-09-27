#pragma once
// IWYU pragma private; include "UnityEngine/LightAnchor_Axes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LightAnchor_Axes)
// Forward declare root types
namespace GlobalNamespace {
struct LightAnchor_Axes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightAnchor_Axes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightAnchor_Axes, "UnityEngine", "LightAnchor/Axes");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.LightAnchor/Axes
struct CORDL_TYPE LightAnchor_Axes {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LightAnchor_Axes() ;

// Ctor Parameters [CppParam { name: "up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "right", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "forward", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr LightAnchor_Axes(::UnityEngine::Vector3  up, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  forward) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16564};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field up, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  up;

/// @brief Field right, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  right;

/// @brief Field forward, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  forward;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightAnchor_Axes, up) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightAnchor_Axes, right) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightAnchor_Axes, forward) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightAnchor_Axes) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
