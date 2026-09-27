#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroup_RenderMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightmapGroup_RenderMode)
// Forward declare root types
namespace GlobalNamespace {
struct BakeryLightmapGroup_RenderMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakeryLightmapGroup_RenderMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmapGroup_RenderMode, "", "BakeryLightmapGroup/RenderMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakeryLightmapGroup/RenderMode
struct CORDL_TYPE BakeryLightmapGroup_RenderMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BakeryLightmapGroup_RenderMode_Unwrapped
enum struct __BakeryLightmapGroup_RenderMode_Unwrapped : int32_t {
__E_FullLighting = static_cast<int32_t>(0x0),
__E_Indirect = static_cast<int32_t>(0x1),
__E_Shadowmask = static_cast<int32_t>(0x2),
__E_Subtractive = static_cast<int32_t>(0x3),
__E_AmbientOcclusionOnly = static_cast<int32_t>(0x4),
__E_Auto = static_cast<int32_t>(0x3e8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BakeryLightmapGroup_RenderMode_Unwrapped () const noexcept {
return static_cast<__BakeryLightmapGroup_RenderMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmapGroup_RenderMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakeryLightmapGroup_RenderMode(int32_t  value__) noexcept;

/// @brief Field AmbientOcclusionOnly value: I32(4)
static ::GlobalNamespace::BakeryLightmapGroup_RenderMode const AmbientOcclusionOnly;

/// @brief Field Auto value: I32(1000)
static ::GlobalNamespace::BakeryLightmapGroup_RenderMode const Auto;

/// @brief Field FullLighting value: I32(0)
static ::GlobalNamespace::BakeryLightmapGroup_RenderMode const FullLighting;

/// @brief Field Indirect value: I32(1)
static ::GlobalNamespace::BakeryLightmapGroup_RenderMode const Indirect;

/// @brief Field Shadowmask value: I32(2)
static ::GlobalNamespace::BakeryLightmapGroup_RenderMode const Shadowmask;

/// @brief Field Subtractive value: I32(3)
static ::GlobalNamespace::BakeryLightmapGroup_RenderMode const Subtractive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup_RenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup_RenderMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
