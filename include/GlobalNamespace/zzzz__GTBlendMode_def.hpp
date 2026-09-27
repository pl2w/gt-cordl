#pragma once
// IWYU pragma private; include "GlobalNamespace/GTBlendMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTBlendMode)
// Forward declare root types
namespace GlobalNamespace {
struct GTBlendMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTBlendMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTBlendMode, "", "GTBlendMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTBlendMode
struct CORDL_TYPE GTBlendMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTBlendMode_Unwrapped
enum struct __GTBlendMode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Darken = static_cast<int32_t>(0x1),
__E_Multiply = static_cast<int32_t>(0x2),
__E_ColorBurn = static_cast<int32_t>(0x3),
__E_LinearBurn = static_cast<int32_t>(0x4),
__E_Lighten = static_cast<int32_t>(0x5),
__E_Screen = static_cast<int32_t>(0x6),
__E_ColorDodge = static_cast<int32_t>(0x7),
__E_LinearDodge = static_cast<int32_t>(0x8),
__E_Overlay = static_cast<int32_t>(0x9),
__E_SoftLight = static_cast<int32_t>(0xa),
__E_HardLight = static_cast<int32_t>(0xb),
__E_VividLight = static_cast<int32_t>(0xc),
__E_LinearLight = static_cast<int32_t>(0xd),
__E_PinLight = static_cast<int32_t>(0xe),
__E_Difference = static_cast<int32_t>(0xf),
__E_Exclusion = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTBlendMode_Unwrapped () const noexcept {
return static_cast<__GTBlendMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTBlendMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTBlendMode(int32_t  value__) noexcept;

/// @brief Field ColorBurn value: I32(3)
static ::GlobalNamespace::GTBlendMode const ColorBurn;

/// @brief Field ColorDodge value: I32(7)
static ::GlobalNamespace::GTBlendMode const ColorDodge;

/// @brief Field Darken value: I32(1)
static ::GlobalNamespace::GTBlendMode const Darken;

/// @brief Field Difference value: I32(15)
static ::GlobalNamespace::GTBlendMode const Difference;

/// @brief Field Exclusion value: I32(16)
static ::GlobalNamespace::GTBlendMode const Exclusion;

/// @brief Field HardLight value: I32(11)
static ::GlobalNamespace::GTBlendMode const HardLight;

/// @brief Field Lighten value: I32(5)
static ::GlobalNamespace::GTBlendMode const Lighten;

/// @brief Field LinearBurn value: I32(4)
static ::GlobalNamespace::GTBlendMode const LinearBurn;

/// @brief Field LinearDodge value: I32(8)
static ::GlobalNamespace::GTBlendMode const LinearDodge;

/// @brief Field LinearLight value: I32(13)
static ::GlobalNamespace::GTBlendMode const LinearLight;

/// @brief Field Multiply value: I32(2)
static ::GlobalNamespace::GTBlendMode const Multiply;

/// @brief Field Normal value: I32(0)
static ::GlobalNamespace::GTBlendMode const Normal;

/// @brief Field Overlay value: I32(9)
static ::GlobalNamespace::GTBlendMode const Overlay;

/// @brief Field PinLight value: I32(14)
static ::GlobalNamespace::GTBlendMode const PinLight;

/// @brief Field Screen value: I32(6)
static ::GlobalNamespace::GTBlendMode const Screen;

/// @brief Field SoftLight value: I32(10)
static ::GlobalNamespace::GTBlendMode const SoftLight;

/// @brief Field VividLight value: I32(12)
static ::GlobalNamespace::GTBlendMode const VividLight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTBlendMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTBlendMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
