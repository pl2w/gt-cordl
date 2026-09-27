#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractor_HandState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceInteractor_HandState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceInteractor_HandState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceInteractor_HandState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceInteractor_HandState, "", "BuilderPieceInteractor/HandState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderPieceInteractor/HandState
struct CORDL_TYPE BuilderPieceInteractor_HandState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceInteractor_HandState_Unwrapped
enum struct __BuilderPieceInteractor_HandState_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_Empty = static_cast<int32_t>(0x0),
__E_Grabbed = static_cast<int32_t>(0x1),
__E_PotentialGrabbed = static_cast<int32_t>(0x2),
__E_WaitForGrabbed = static_cast<int32_t>(0x3),
__E_WaitingForSnap = static_cast<int32_t>(0x4),
__E_WaitingForUnSnap = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceInteractor_HandState_Unwrapped () const noexcept {
return static_cast<__BuilderPieceInteractor_HandState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceInteractor_HandState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceInteractor_HandState(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(0)
static ::GlobalNamespace::BuilderPieceInteractor_HandState const Empty;

/// @brief Field Grabbed value: I32(1)
static ::GlobalNamespace::BuilderPieceInteractor_HandState const Grabbed;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::BuilderPieceInteractor_HandState const Invalid;

/// @brief Field PotentialGrabbed value: I32(2)
static ::GlobalNamespace::BuilderPieceInteractor_HandState const PotentialGrabbed;

/// @brief Field WaitForGrabbed value: I32(3)
static ::GlobalNamespace::BuilderPieceInteractor_HandState const WaitForGrabbed;

/// @brief Field WaitingForSnap value: I32(4)
static ::GlobalNamespace::BuilderPieceInteractor_HandState const WaitingForSnap;

/// @brief Field WaitingForUnSnap value: I32(5)
static ::GlobalNamespace::BuilderPieceInteractor_HandState const WaitingForUnSnap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1608};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor_HandState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceInteractor_HandState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
