#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent2_FlexEvent_HandType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexEvent2_FlexEvent_HandType)
// Forward declare root types
namespace GlobalNamespace {
struct FlexEvent_FingerFlexEvent2_HandType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType, "GorillaTag.Cosmetics", "FingerFlexEvent2/FlexEvent/HandType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent2/FlexEvent/HandType
struct CORDL_TYPE FlexEvent_FingerFlexEvent2_HandType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FlexEvent_FingerFlexEvent2_HandType_Unwrapped
enum struct __FlexEvent_FingerFlexEvent2_HandType_Unwrapped : int32_t {
__E_HeldItemHand = static_cast<int32_t>(0x0),
__E_EquippedSide = static_cast<int32_t>(0x1),
__E_LeftHand = static_cast<int32_t>(0x2),
__E_RightHand = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlexEvent_FingerFlexEvent2_HandType_Unwrapped () const noexcept {
return static_cast<__FlexEvent_FingerFlexEvent2_HandType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FlexEvent_FingerFlexEvent2_HandType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FlexEvent_FingerFlexEvent2_HandType(int32_t  value__) noexcept;

/// @brief Field EquippedSide value: I32(1)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType const EquippedSide;

/// @brief Field HeldItemHand value: I32(0)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType const HeldItemHand;

/// @brief Field LeftHand value: I32(2)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType const LeftHand;

/// @brief Field RightHand value: I32(3)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType const RightHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4937};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
