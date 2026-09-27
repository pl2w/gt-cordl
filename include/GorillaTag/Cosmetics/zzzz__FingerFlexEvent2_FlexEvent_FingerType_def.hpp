#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent2_FlexEvent_FingerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexEvent2_FlexEvent_FingerType)
// Forward declare root types
namespace GlobalNamespace {
struct FlexEvent_FingerFlexEvent2_FingerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType, "GorillaTag.Cosmetics", "FingerFlexEvent2/FlexEvent/FingerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent2/FlexEvent/FingerType
struct CORDL_TYPE FlexEvent_FingerFlexEvent2_FingerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FlexEvent_FingerFlexEvent2_FingerType_Unwrapped
enum struct __FlexEvent_FingerFlexEvent2_FingerType_Unwrapped : int32_t {
__E_Thumb = static_cast<int32_t>(0x0),
__E_Index = static_cast<int32_t>(0x1),
__E_Middle = static_cast<int32_t>(0x2),
__E_IndexAndMiddle = static_cast<int32_t>(0x3),
__E_IndexOrMiddle = static_cast<int32_t>(0x4),
__E_StickLeft = static_cast<int32_t>(0x5),
__E_StickRight = static_cast<int32_t>(0x6),
__E_StickUp = static_cast<int32_t>(0x7),
__E_StickDown = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlexEvent_FingerFlexEvent2_FingerType_Unwrapped () const noexcept {
return static_cast<__FlexEvent_FingerFlexEvent2_FingerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FlexEvent_FingerFlexEvent2_FingerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FlexEvent_FingerFlexEvent2_FingerType(int32_t  value__) noexcept;

/// @brief Field Index value: I32(1)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const Index;

/// @brief Field IndexAndMiddle value: I32(3)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const IndexAndMiddle;

/// @brief Field IndexOrMiddle value: I32(4)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const IndexOrMiddle;

/// @brief Field Middle value: I32(2)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const Middle;

/// @brief Field StickDown value: I32(8)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const StickDown;

/// @brief Field StickLeft value: I32(5)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const StickLeft;

/// @brief Field StickRight value: I32(6)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const StickRight;

/// @brief Field StickUp value: I32(7)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const StickUp;

/// @brief Field Thumb value: I32(0)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const Thumb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4936};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
