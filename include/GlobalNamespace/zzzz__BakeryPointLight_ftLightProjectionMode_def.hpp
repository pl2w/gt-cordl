#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryPointLight_ftLightProjectionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryPointLight_ftLightProjectionMode)
// Forward declare root types
namespace GlobalNamespace {
struct BakeryPointLight_ftLightProjectionMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakeryPointLight_ftLightProjectionMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryPointLight_ftLightProjectionMode, "", "BakeryPointLight/ftLightProjectionMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakeryPointLight/ftLightProjectionMode
struct CORDL_TYPE BakeryPointLight_ftLightProjectionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BakeryPointLight_ftLightProjectionMode_Unwrapped
enum struct __BakeryPointLight_ftLightProjectionMode_Unwrapped : int32_t {
__E_Omni = static_cast<int32_t>(0x0),
__E_Cookie = static_cast<int32_t>(0x1),
__E_Cubemap = static_cast<int32_t>(0x2),
__E_IES = static_cast<int32_t>(0x3),
__E_Cone = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BakeryPointLight_ftLightProjectionMode_Unwrapped () const noexcept {
return static_cast<__BakeryPointLight_ftLightProjectionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BakeryPointLight_ftLightProjectionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakeryPointLight_ftLightProjectionMode(int32_t  value__) noexcept;

/// @brief Field Cone value: I32(4)
static ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode const Cone;

/// @brief Field Cookie value: I32(1)
static ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode const Cookie;

/// @brief Field Cubemap value: I32(2)
static ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode const Cubemap;

/// @brief Field IES value: I32(3)
static ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode const IES;

/// @brief Field Omni value: I32(0)
static ::GlobalNamespace::BakeryPointLight_ftLightProjectionMode const Omni;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryPointLight_ftLightProjectionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryPointLight_ftLightProjectionMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
