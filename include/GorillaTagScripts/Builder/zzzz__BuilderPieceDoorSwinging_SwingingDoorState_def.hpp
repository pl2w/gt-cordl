#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoorSwinging_SwingingDoorState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceDoorSwinging_SwingingDoorState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceDoorSwinging_SwingingDoorState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState, "GorillaTagScripts.Builder", "BuilderPieceDoorSwinging/SwingingDoorState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderPieceDoorSwinging/SwingingDoorState
struct CORDL_TYPE BuilderPieceDoorSwinging_SwingingDoorState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceDoorSwinging_SwingingDoorState_Unwrapped
enum struct __BuilderPieceDoorSwinging_SwingingDoorState_Unwrapped : int32_t {
__E_Closed = static_cast<int32_t>(0x0),
__E_ClosingOut = static_cast<int32_t>(0x1),
__E_OpenOut = static_cast<int32_t>(0x2),
__E_OpeningOut = static_cast<int32_t>(0x3),
__E_HeldOpenOut = static_cast<int32_t>(0x4),
__E_ClosingIn = static_cast<int32_t>(0x5),
__E_OpenIn = static_cast<int32_t>(0x6),
__E_OpeningIn = static_cast<int32_t>(0x7),
__E_HeldOpenIn = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceDoorSwinging_SwingingDoorState_Unwrapped () const noexcept {
return static_cast<__BuilderPieceDoorSwinging_SwingingDoorState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceDoorSwinging_SwingingDoorState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceDoorSwinging_SwingingDoorState(int32_t  value__) noexcept;

/// @brief Field Closed value: I32(0)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const Closed;

/// @brief Field ClosingIn value: I32(5)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const ClosingIn;

/// @brief Field ClosingOut value: I32(1)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const ClosingOut;

/// @brief Field HeldOpenIn value: I32(8)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const HeldOpenIn;

/// @brief Field HeldOpenOut value: I32(4)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const HeldOpenOut;

/// @brief Field OpenIn value: I32(6)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const OpenIn;

/// @brief Field OpenOut value: I32(2)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const OpenOut;

/// @brief Field OpeningIn value: I32(7)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const OpeningIn;

/// @brief Field OpeningOut value: I32(3)
static ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState const OpeningOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
