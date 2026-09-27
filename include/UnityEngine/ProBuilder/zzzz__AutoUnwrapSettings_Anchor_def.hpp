#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/AutoUnwrapSettings_Anchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoUnwrapSettings_Anchor)
// Forward declare root types
namespace GlobalNamespace {
struct AutoUnwrapSettings_Anchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutoUnwrapSettings_Anchor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutoUnwrapSettings_Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor
struct CORDL_TYPE AutoUnwrapSettings_Anchor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AutoUnwrapSettings_Anchor_Unwrapped
enum struct __AutoUnwrapSettings_Anchor_Unwrapped : int32_t {
__E_UpperLeft = static_cast<int32_t>(0x0),
__E_UpperCenter = static_cast<int32_t>(0x1),
__E_UpperRight = static_cast<int32_t>(0x2),
__E_MiddleLeft = static_cast<int32_t>(0x3),
__E_MiddleCenter = static_cast<int32_t>(0x4),
__E_MiddleRight = static_cast<int32_t>(0x5),
__E_LowerLeft = static_cast<int32_t>(0x6),
__E_LowerCenter = static_cast<int32_t>(0x7),
__E_LowerRight = static_cast<int32_t>(0x8),
__E_None = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AutoUnwrapSettings_Anchor_Unwrapped () const noexcept {
return static_cast<__AutoUnwrapSettings_Anchor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AutoUnwrapSettings_Anchor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AutoUnwrapSettings_Anchor(int32_t  value__) noexcept;

/// @brief Field LowerCenter value: I32(7)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const LowerCenter;

/// @brief Field LowerLeft value: I32(6)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const LowerLeft;

/// @brief Field LowerRight value: I32(8)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const LowerRight;

/// @brief Field MiddleCenter value: I32(4)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const MiddleCenter;

/// @brief Field MiddleLeft value: I32(3)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const MiddleLeft;

/// @brief Field MiddleRight value: I32(5)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const MiddleRight;

/// @brief Field None value: I32(9)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const None;

/// @brief Field UpperCenter value: I32(1)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const UpperCenter;

/// @brief Field UpperLeft value: I32(0)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const UpperLeft;

/// @brief Field UpperRight value: I32(2)
static ::GlobalNamespace::AutoUnwrapSettings_Anchor const UpperRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24184};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoUnwrapSettings_Anchor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutoUnwrapSettings_Anchor) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
