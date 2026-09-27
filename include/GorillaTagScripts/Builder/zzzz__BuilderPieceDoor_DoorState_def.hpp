#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoor_DoorState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceDoor_DoorState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceDoor_DoorState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceDoor_DoorState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceDoor_DoorState, "GorillaTagScripts.Builder", "BuilderPieceDoor/DoorState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderPieceDoor/DoorState
struct CORDL_TYPE BuilderPieceDoor_DoorState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceDoor_DoorState_Unwrapped
enum struct __BuilderPieceDoor_DoorState_Unwrapped : int32_t {
__E_Closed = static_cast<int32_t>(0x0),
__E_Closing = static_cast<int32_t>(0x1),
__E_Open = static_cast<int32_t>(0x2),
__E_Opening = static_cast<int32_t>(0x3),
__E_HeldOpen = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceDoor_DoorState_Unwrapped () const noexcept {
return static_cast<__BuilderPieceDoor_DoorState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceDoor_DoorState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceDoor_DoorState(int32_t  value__) noexcept;

/// @brief Field Closed value: I32(0)
static ::GlobalNamespace::BuilderPieceDoor_DoorState const Closed;

/// @brief Field Closing value: I32(1)
static ::GlobalNamespace::BuilderPieceDoor_DoorState const Closing;

/// @brief Field HeldOpen value: I32(4)
static ::GlobalNamespace::BuilderPieceDoor_DoorState const HeldOpen;

/// @brief Field Open value: I32(2)
static ::GlobalNamespace::BuilderPieceDoor_DoorState const Open;

/// @brief Field Opening value: I32(3)
static ::GlobalNamespace::BuilderPieceDoor_DoorState const Opening;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceDoor_DoorState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceDoor_DoorState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
