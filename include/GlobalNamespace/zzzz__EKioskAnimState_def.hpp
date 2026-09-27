#pragma once
// IWYU pragma private; include "GlobalNamespace/EKioskAnimState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EKioskAnimState)
// Forward declare root types
namespace GlobalNamespace {
struct EKioskAnimState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EKioskAnimState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EKioskAnimState, "", "EKioskAnimState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EKioskAnimState
struct CORDL_TYPE EKioskAnimState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EKioskAnimState_Unwrapped
enum struct __EKioskAnimState_Unwrapped : int32_t {
__E_Closing = static_cast<int32_t>(0x0),
__E_Opening = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EKioskAnimState_Unwrapped () const noexcept {
return static_cast<__EKioskAnimState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EKioskAnimState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EKioskAnimState(int32_t  value__) noexcept;

/// @brief Field Closing value: I32(0)
static ::GlobalNamespace::EKioskAnimState const Closing;

/// @brief Field Opening value: I32(1)
static ::GlobalNamespace::EKioskAnimState const Opening;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EKioskAnimState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EKioskAnimState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
