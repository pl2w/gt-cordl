#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent2_FlexEvent_TriggerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexEvent2_FlexEvent_TriggerType)
// Forward declare root types
namespace GlobalNamespace {
struct FlexEvent_FingerFlexEvent2_TriggerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType, "GorillaTag.Cosmetics", "FingerFlexEvent2/FlexEvent/TriggerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent2/FlexEvent/TriggerType
struct CORDL_TYPE FlexEvent_FingerFlexEvent2_TriggerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FlexEvent_FingerFlexEvent2_TriggerType_Unwrapped
enum struct __FlexEvent_FingerFlexEvent2_TriggerType_Unwrapped : int32_t {
__E_OnFlex = static_cast<int32_t>(0x0),
__E_OnRelease = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlexEvent_FingerFlexEvent2_TriggerType_Unwrapped () const noexcept {
return static_cast<__FlexEvent_FingerFlexEvent2_TriggerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FlexEvent_FingerFlexEvent2_TriggerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FlexEvent_FingerFlexEvent2_TriggerType(int32_t  value__) noexcept;

/// @brief Field OnFlex value: I32(0)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType const OnFlex;

/// @brief Field OnRelease value: I32(2)
static ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType const OnRelease;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4935};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
