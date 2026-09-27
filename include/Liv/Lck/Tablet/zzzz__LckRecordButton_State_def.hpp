#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckRecordButton_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckRecordButton_State)
// Forward declare root types
namespace GlobalNamespace {
struct LckRecordButton_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckRecordButton_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckRecordButton_State, "Liv.Lck.Tablet", "LckRecordButton/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Tablet.LckRecordButton/State
struct CORDL_TYPE LckRecordButton_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckRecordButton_State_Unwrapped
enum struct __LckRecordButton_State_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Saving = static_cast<int32_t>(0x1),
__E_Paused = static_cast<int32_t>(0x2),
__E_Recording = static_cast<int32_t>(0x3),
__E_Error = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckRecordButton_State_Unwrapped () const noexcept {
return static_cast<__LckRecordButton_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckRecordButton_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckRecordButton_State(int32_t  value__) noexcept;

/// @brief Field Error value: I32(4)
static ::GlobalNamespace::LckRecordButton_State const Error;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::LckRecordButton_State const Idle;

/// @brief Field Paused value: I32(2)
static ::GlobalNamespace::LckRecordButton_State const Paused;

/// @brief Field Recording value: I32(3)
static ::GlobalNamespace::LckRecordButton_State const Recording;

/// @brief Field Saving value: I32(1)
static ::GlobalNamespace::LckRecordButton_State const Saving;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckRecordButton_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckRecordButton_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
