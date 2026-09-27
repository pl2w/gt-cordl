#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer_EKidScreenState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaComputer_EKidScreenState)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaComputer_EKidScreenState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaComputer_EKidScreenState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaComputer_EKidScreenState, "GorillaNetworking", "GorillaComputer/EKidScreenState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.GorillaComputer/EKidScreenState
struct CORDL_TYPE GorillaComputer_EKidScreenState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaComputer_EKidScreenState_Unwrapped
enum struct __GorillaComputer_EKidScreenState_Unwrapped : int32_t {
__E_Ready = static_cast<int32_t>(0x0),
__E_Show_OTP = static_cast<int32_t>(0x1),
__E_Show_Setup_Screen = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaComputer_EKidScreenState_Unwrapped () const noexcept {
return static_cast<__GorillaComputer_EKidScreenState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer_EKidScreenState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaComputer_EKidScreenState(int32_t  value__) noexcept;

/// @brief Field Ready value: I32(0)
static ::GlobalNamespace::GorillaComputer_EKidScreenState const Ready;

/// @brief Field Show_OTP value: I32(1)
static ::GlobalNamespace::GorillaComputer_EKidScreenState const Show_OTP;

/// @brief Field Show_Setup_Screen value: I32(2)
static ::GlobalNamespace::GorillaComputer_EKidScreenState const Show_Setup_Screen;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaComputer_EKidScreenState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaComputer_EKidScreenState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
