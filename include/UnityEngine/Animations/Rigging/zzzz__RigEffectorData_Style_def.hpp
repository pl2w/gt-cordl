#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigEffectorData_Style.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RigEffectorData_Style)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct RigEffectorData_Style;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigEffectorData_Style);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEffectorData_Style, "UnityEngine.Animations.Rigging", "RigEffectorData/Style");
// Dependencies UnityEngine.Color, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.RigEffectorData/Style
struct CORDL_TYPE RigEffectorData_Style {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RigEffectorData_Style() ;

// Ctor Parameters [CppParam { name: "shape", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr RigEffectorData_Style(::UnityW<::UnityEngine::Mesh>  shape, ::UnityEngine::Color  color, float_t  size, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field shape, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  shape;

/// @brief Field color, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field size, offset: 0x18, size: 0x4, def value: None
 float_t  size;

/// @brief Field position, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEffectorData_Style, shape) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEffectorData_Style, color) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEffectorData_Style, size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEffectorData_Style, position) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEffectorData_Style, rotation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEffectorData_Style) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
