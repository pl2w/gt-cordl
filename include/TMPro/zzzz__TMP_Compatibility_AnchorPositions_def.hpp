#pragma once
// IWYU pragma private; include "TMPro/TMP_Compatibility_AnchorPositions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Compatibility_AnchorPositions)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_Compatibility_AnchorPositions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_Compatibility_AnchorPositions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_Compatibility_AnchorPositions, "TMPro", "TMP_Compatibility/AnchorPositions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_Compatibility/AnchorPositions
struct CORDL_TYPE TMP_Compatibility_AnchorPositions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TMP_Compatibility_AnchorPositions_Unwrapped
enum struct __TMP_Compatibility_AnchorPositions_Unwrapped : int32_t {
__E_TopLeft = static_cast<int32_t>(0x0),
__E_Top = static_cast<int32_t>(0x1),
__E_TopRight = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
__E_Center = static_cast<int32_t>(0x4),
__E_Right = static_cast<int32_t>(0x5),
__E_BottomLeft = static_cast<int32_t>(0x6),
__E_Bottom = static_cast<int32_t>(0x7),
__E_BottomRight = static_cast<int32_t>(0x8),
__E_BaseLine = static_cast<int32_t>(0x9),
__E_None = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_Compatibility_AnchorPositions_Unwrapped () const noexcept {
return static_cast<__TMP_Compatibility_AnchorPositions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TMP_Compatibility_AnchorPositions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_Compatibility_AnchorPositions(int32_t  value__) noexcept;

/// @brief Field BaseLine value: I32(9)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const BaseLine;

/// @brief Field Bottom value: I32(7)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const Bottom;

/// @brief Field BottomLeft value: I32(6)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const BottomLeft;

/// @brief Field BottomRight value: I32(8)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const BottomRight;

/// @brief Field Center value: I32(4)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const Center;

/// @brief Field Left value: I32(3)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const Left;

/// @brief Field None value: I32(10)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const None;

/// @brief Field Right value: I32(5)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const Right;

/// @brief Field Top value: I32(1)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const Top;

/// @brief Field TopLeft value: I32(0)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const TopLeft;

/// @brief Field TopRight value: I32(2)
static ::GlobalNamespace::TMP_Compatibility_AnchorPositions const TopRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_Compatibility_AnchorPositions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_Compatibility_AnchorPositions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
