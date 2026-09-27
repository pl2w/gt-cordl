#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleCountdown_Mode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCountdown_Mode)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleCountdown_Mode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleCountdown_Mode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleCountdown_Mode, "", "SimpleCountdown/Mode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SimpleCountdown/Mode
struct CORDL_TYPE SimpleCountdown_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimpleCountdown_Mode_Unwrapped
enum struct __SimpleCountdown_Mode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TitleData = static_cast<int32_t>(0x1),
__E_FixedDate = static_cast<int32_t>(0x2),
__E_TimeSync = static_cast<int32_t>(0x3),
__E_ScheduledEvent = static_cast<int32_t>(0x4),
__E_EventStart = static_cast<int32_t>(0x5),
__E_EventEnd = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimpleCountdown_Mode_Unwrapped () const noexcept {
return static_cast<__SimpleCountdown_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimpleCountdown_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleCountdown_Mode(int32_t  value__) noexcept;

/// @brief Field EventEnd value: I32(6)
static ::GlobalNamespace::SimpleCountdown_Mode const EventEnd;

/// @brief Field EventStart value: I32(5)
static ::GlobalNamespace::SimpleCountdown_Mode const EventStart;

/// @brief Field FixedDate value: I32(2)
static ::GlobalNamespace::SimpleCountdown_Mode const FixedDate;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SimpleCountdown_Mode const None;

/// @brief Field ScheduledEvent value: I32(4)
static ::GlobalNamespace::SimpleCountdown_Mode const ScheduledEvent;

/// @brief Field TimeSync value: I32(3)
static ::GlobalNamespace::SimpleCountdown_Mode const TimeSync;

/// @brief Field TitleData value: I32(1)
static ::GlobalNamespace::SimpleCountdown_Mode const TitleData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{472};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleCountdown_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleCountdown_Mode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
