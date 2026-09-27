#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerCondition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerCondition)
// Forward declare root types
namespace GlobalNamespace {
struct TriggerCondition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TriggerCondition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerCondition, "", "TriggerCondition");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TriggerCondition
struct CORDL_TYPE TriggerCondition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TriggerCondition_Unwrapped
enum struct __TriggerCondition_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TimeElapsed = static_cast<int32_t>(0x1),
__E_Proximity = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriggerCondition_Unwrapped () const noexcept {
return static_cast<__TriggerCondition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TriggerCondition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TriggerCondition(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TriggerCondition const None;

/// @brief Field Proximity value: I32(2)
static ::GlobalNamespace::TriggerCondition const Proximity;

/// @brief Field TimeElapsed value: I32(1)
static ::GlobalNamespace::TriggerCondition const TimeElapsed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1652};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerCondition, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerCondition) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
