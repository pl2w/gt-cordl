#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSaveEchoButton_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GtSaveEchoButton_State)
// Forward declare root types
namespace GlobalNamespace {
struct GtSaveEchoButton_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GtSaveEchoButton_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GtSaveEchoButton_State, "Liv.Lck.GorillaTag", "GtSaveEchoButton/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.GtSaveEchoButton/State
struct CORDL_TYPE GtSaveEchoButton_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GtSaveEchoButton_State_Unwrapped
enum struct __GtSaveEchoButton_State_Unwrapped : int32_t {
__E_EchoStarting = static_cast<int32_t>(0x0),
__E_Ready = static_cast<int32_t>(0x1),
__E_LowStorage = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GtSaveEchoButton_State_Unwrapped () const noexcept {
return static_cast<__GtSaveEchoButton_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GtSaveEchoButton_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GtSaveEchoButton_State(int32_t  value__) noexcept;

/// @brief Field EchoStarting value: I32(0)
static ::GlobalNamespace::GtSaveEchoButton_State const EchoStarting;

/// @brief Field Error value: I32(3)
static ::GlobalNamespace::GtSaveEchoButton_State const Error;

/// @brief Field LowStorage value: I32(2)
static ::GlobalNamespace::GtSaveEchoButton_State const LowStorage;

/// @brief Field Ready value: I32(1)
static ::GlobalNamespace::GtSaveEchoButton_State const Ready;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29646};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GtSaveEchoButton_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GtSaveEchoButton_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
