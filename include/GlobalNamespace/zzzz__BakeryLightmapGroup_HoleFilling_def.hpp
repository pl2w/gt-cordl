#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroup_HoleFilling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightmapGroup_HoleFilling)
// Forward declare root types
namespace GlobalNamespace {
struct BakeryLightmapGroup_HoleFilling;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakeryLightmapGroup_HoleFilling);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmapGroup_HoleFilling, "", "BakeryLightmapGroup/HoleFilling");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakeryLightmapGroup/HoleFilling
struct CORDL_TYPE BakeryLightmapGroup_HoleFilling {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BakeryLightmapGroup_HoleFilling_Unwrapped
enum struct __BakeryLightmapGroup_HoleFilling_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_Yes = static_cast<int32_t>(0x1),
__E_No = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BakeryLightmapGroup_HoleFilling_Unwrapped () const noexcept {
return static_cast<__BakeryLightmapGroup_HoleFilling_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmapGroup_HoleFilling() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakeryLightmapGroup_HoleFilling(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(0)
static ::GlobalNamespace::BakeryLightmapGroup_HoleFilling const Auto;

/// @brief Field No value: I32(2)
static ::GlobalNamespace::BakeryLightmapGroup_HoleFilling const No;

/// @brief Field Yes value: I32(1)
static ::GlobalNamespace::BakeryLightmapGroup_HoleFilling const Yes;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup_HoleFilling, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup_HoleFilling) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
