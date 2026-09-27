#pragma once
// IWYU pragma private; include "GlobalNamespace/EmitSignalToBiter_EdibleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmitSignalToBiter_EdibleState)
// Forward declare root types
namespace GlobalNamespace {
struct EmitSignalToBiter_EdibleState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EmitSignalToBiter_EdibleState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EmitSignalToBiter_EdibleState, "", "EmitSignalToBiter/EdibleState");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EmitSignalToBiter/EdibleState
struct CORDL_TYPE EmitSignalToBiter_EdibleState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EmitSignalToBiter_EdibleState_Unwrapped
enum struct __EmitSignalToBiter_EdibleState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_State0 = static_cast<int32_t>(0x1),
__E_State1 = static_cast<int32_t>(0x2),
__E_State2 = static_cast<int32_t>(0x4),
__E_State3 = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EmitSignalToBiter_EdibleState_Unwrapped () const noexcept {
return static_cast<__EmitSignalToBiter_EdibleState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EmitSignalToBiter_EdibleState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EmitSignalToBiter_EdibleState(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::EmitSignalToBiter_EdibleState const None;

/// @brief Field State0 value: I32(1)
static ::GlobalNamespace::EmitSignalToBiter_EdibleState const State0;

/// @brief Field State1 value: I32(2)
static ::GlobalNamespace::EmitSignalToBiter_EdibleState const State1;

/// @brief Field State2 value: I32(4)
static ::GlobalNamespace::EmitSignalToBiter_EdibleState const State2;

/// @brief Field State3 value: I32(8)
static ::GlobalNamespace::EmitSignalToBiter_EdibleState const State3;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EmitSignalToBiter_EdibleState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EmitSignalToBiter_EdibleState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
