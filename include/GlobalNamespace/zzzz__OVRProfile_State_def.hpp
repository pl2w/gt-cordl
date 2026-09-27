#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRProfile_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRProfile_State)
// Forward declare root types
namespace GlobalNamespace {
struct OVRProfile_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRProfile_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRProfile_State, "", "OVRProfile/State");
// [Obsolete]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRProfile/State
struct CORDL_TYPE OVRProfile_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRProfile_State_Unwrapped
enum struct __OVRProfile_State_Unwrapped : int32_t {
__E_NOT_TRIGGERED = static_cast<int32_t>(0x0),
__E_LOADING = static_cast<int32_t>(0x1),
__E_READY = static_cast<int32_t>(0x2),
__E_ERROR = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRProfile_State_Unwrapped () const noexcept {
return static_cast<__OVRProfile_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRProfile_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRProfile_State(int32_t  value__) noexcept;

/// @brief Field ERROR value: I32(3)
static ::GlobalNamespace::OVRProfile_State const ERROR;

/// @brief Field LOADING value: I32(1)
static ::GlobalNamespace::OVRProfile_State const LOADING;

/// @brief Field NOT_TRIGGERED value: I32(0)
static ::GlobalNamespace::OVRProfile_State const NOT_TRIGGERED;

/// @brief Field READY value: I32(2)
static ::GlobalNamespace::OVRProfile_State const READY;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12399};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRProfile_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRProfile_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
