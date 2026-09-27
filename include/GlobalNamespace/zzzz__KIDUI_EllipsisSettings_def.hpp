#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_EllipsisSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(KIDUI_EllipsisSettings)
// Forward declare root types
namespace GlobalNamespace {
struct KIDUI_EllipsisSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDUI_EllipsisSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_EllipsisSettings, "", "KIDUI_EllipsisSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDUI_EllipsisSettings
struct CORDL_TYPE KIDUI_EllipsisSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_EllipsisSettings() ;

// Ctor Parameters [CppParam { name: "startingSize", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr KIDUI_EllipsisSettings(float_t  startingSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field startingSize, offset: 0x0, size: 0x4, def value: None
 float_t  startingSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_EllipsisSettings, startingSize) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_EllipsisSettings) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
