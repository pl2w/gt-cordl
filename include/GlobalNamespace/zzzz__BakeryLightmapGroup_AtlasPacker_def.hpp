#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroup_AtlasPacker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightmapGroup_AtlasPacker)
// Forward declare root types
namespace GlobalNamespace {
struct BakeryLightmapGroup_AtlasPacker;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakeryLightmapGroup_AtlasPacker);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmapGroup_AtlasPacker, "", "BakeryLightmapGroup/AtlasPacker");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakeryLightmapGroup/AtlasPacker
struct CORDL_TYPE BakeryLightmapGroup_AtlasPacker {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BakeryLightmapGroup_AtlasPacker_Unwrapped
enum struct __BakeryLightmapGroup_AtlasPacker_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_xatlas = static_cast<int32_t>(0x1),
__E_Auto = static_cast<int32_t>(0x3e8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BakeryLightmapGroup_AtlasPacker_Unwrapped () const noexcept {
return static_cast<__BakeryLightmapGroup_AtlasPacker_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmapGroup_AtlasPacker() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakeryLightmapGroup_AtlasPacker(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(1000)
static ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker const Auto;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker const Default;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field xatlas value: I32(1)
static ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker const xatlas;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup_AtlasPacker, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup_AtlasPacker) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
