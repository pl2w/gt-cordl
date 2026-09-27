#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderResourceType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BuilderResourceColor)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderResourceColor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderResourceColor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResourceColor, "", "BuilderResourceColor");
// Dependencies BuilderResourceType, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderResourceColor
struct CORDL_TYPE BuilderResourceColor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderResourceColor() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderResourceType", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr BuilderResourceColor(::GlobalNamespace::BuilderResourceType  type, ::UnityEngine::Color  color) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderResourceType  type;

/// @brief Field color, offset: 0x4, size: 0x10, def value: None
 ::UnityEngine::Color  color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResourceColor, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceColor, color) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResourceColor) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
