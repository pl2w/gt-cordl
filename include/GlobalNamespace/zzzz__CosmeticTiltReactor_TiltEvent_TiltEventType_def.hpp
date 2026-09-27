#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticTiltReactor_TiltEvent_TiltEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticTiltReactor_TiltEvent_TiltEventType)
// Forward declare root types
namespace GlobalNamespace {
struct TiltEvent_CosmeticTiltReactor_TiltEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType, "", "CosmeticTiltReactor/TiltEvent/TiltEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CosmeticTiltReactor/TiltEvent/TiltEventType
struct CORDL_TYPE TiltEvent_CosmeticTiltReactor_TiltEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TiltEvent_CosmeticTiltReactor_TiltEventType_Unwrapped
enum struct __TiltEvent_CosmeticTiltReactor_TiltEventType_Unwrapped : int32_t {
__E_LessThanThreshold = static_cast<int32_t>(0x0),
__E_GreaterThanThreshold = static_cast<int32_t>(0x1),
__E_LessThanThresholdForDuration = static_cast<int32_t>(0x2),
__E_GreaterThanThresholdForDuration = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TiltEvent_CosmeticTiltReactor_TiltEventType_Unwrapped () const noexcept {
return static_cast<__TiltEvent_CosmeticTiltReactor_TiltEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TiltEvent_CosmeticTiltReactor_TiltEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TiltEvent_CosmeticTiltReactor_TiltEventType(int32_t  value__) noexcept;

/// @brief Field GreaterThanThreshold value: I32(1)
static ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType const GreaterThanThreshold;

/// @brief Field GreaterThanThresholdForDuration value: I32(3)
static ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType const GreaterThanThresholdForDuration;

/// @brief Field LessThanThreshold value: I32(0)
static ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType const LessThanThreshold;

/// @brief Field LessThanThresholdForDuration value: I32(2)
static ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType const LessThanThresholdForDuration;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
