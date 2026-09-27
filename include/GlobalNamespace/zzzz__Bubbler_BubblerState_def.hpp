#pragma once
// IWYU pragma private; include "GlobalNamespace/Bubbler_BubblerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bubbler_BubblerState)
// Forward declare root types
namespace GlobalNamespace {
struct Bubbler_BubblerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bubbler_BubblerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bubbler_BubblerState, "", "Bubbler/BubblerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bubbler/BubblerState
struct CORDL_TYPE Bubbler_BubblerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Bubbler_BubblerState_Unwrapped
enum struct __Bubbler_BubblerState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x1),
__E_Bubbling = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Bubbler_BubblerState_Unwrapped () const noexcept {
return static_cast<__Bubbler_BubblerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Bubbler_BubblerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Bubbler_BubblerState(int32_t  value__) noexcept;

/// @brief Field Bubbling value: I32(2)
static ::GlobalNamespace::Bubbler_BubblerState const Bubbling;

/// @brief Field None value: I32(1)
static ::GlobalNamespace::Bubbler_BubblerState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1448};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bubbler_BubblerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bubbler_BubblerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
