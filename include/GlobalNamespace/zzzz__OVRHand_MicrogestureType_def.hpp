#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHand_MicrogestureType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHand_MicrogestureType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRHand_MicrogestureType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRHand_MicrogestureType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRHand_MicrogestureType, "", "OVRHand/MicrogestureType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRHand/MicrogestureType
struct CORDL_TYPE OVRHand_MicrogestureType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRHand_MicrogestureType_Unwrapped
enum struct __OVRHand_MicrogestureType_Unwrapped : int32_t {
__E_NoGesture = static_cast<int32_t>(0x0),
__E_SwipeLeft = static_cast<int32_t>(0x1),
__E_SwipeRight = static_cast<int32_t>(0x2),
__E_SwipeForward = static_cast<int32_t>(0x3),
__E_SwipeBackward = static_cast<int32_t>(0x4),
__E_ThumbTap = static_cast<int32_t>(0x5),
__E_Invalid = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRHand_MicrogestureType_Unwrapped () const noexcept {
return static_cast<__OVRHand_MicrogestureType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRHand_MicrogestureType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRHand_MicrogestureType(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::OVRHand_MicrogestureType const Invalid;

/// @brief Field NoGesture value: I32(0)
static ::GlobalNamespace::OVRHand_MicrogestureType const NoGesture;

/// @brief Field SwipeBackward value: I32(4)
static ::GlobalNamespace::OVRHand_MicrogestureType const SwipeBackward;

/// @brief Field SwipeForward value: I32(3)
static ::GlobalNamespace::OVRHand_MicrogestureType const SwipeForward;

/// @brief Field SwipeLeft value: I32(1)
static ::GlobalNamespace::OVRHand_MicrogestureType const SwipeLeft;

/// @brief Field SwipeRight value: I32(2)
static ::GlobalNamespace::OVRHand_MicrogestureType const SwipeRight;

/// @brief Field ThumbTap value: I32(5)
static ::GlobalNamespace::OVRHand_MicrogestureType const ThumbTap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12648};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHand_MicrogestureType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRHand_MicrogestureType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
