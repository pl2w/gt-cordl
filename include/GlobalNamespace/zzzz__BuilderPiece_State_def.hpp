#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPiece_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPiece_State)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPiece_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPiece_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPiece_State, "", "BuilderPiece/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderPiece/State
struct CORDL_TYPE BuilderPiece_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPiece_State_Unwrapped
enum struct __BuilderPiece_State_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_AttachedAndPlaced = static_cast<int32_t>(0x0),
__E_AttachedToDropped = static_cast<int32_t>(0x1),
__E_Grabbed = static_cast<int32_t>(0x2),
__E_Dropped = static_cast<int32_t>(0x3),
__E_OnShelf = static_cast<int32_t>(0x4),
__E_Displayed = static_cast<int32_t>(0x5),
__E_GrabbedLocal = static_cast<int32_t>(0x6),
__E_OnConveyor = static_cast<int32_t>(0x7),
__E_AttachedToArm = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPiece_State_Unwrapped () const noexcept {
return static_cast<__BuilderPiece_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPiece_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPiece_State(int32_t  value__) noexcept;

/// @brief Field AttachedAndPlaced value: I32(0)
static ::GlobalNamespace::BuilderPiece_State const AttachedAndPlaced;

/// @brief Field AttachedToArm value: I32(8)
static ::GlobalNamespace::BuilderPiece_State const AttachedToArm;

/// @brief Field AttachedToDropped value: I32(1)
static ::GlobalNamespace::BuilderPiece_State const AttachedToDropped;

/// @brief Field Displayed value: I32(5)
static ::GlobalNamespace::BuilderPiece_State const Displayed;

/// @brief Field Dropped value: I32(3)
static ::GlobalNamespace::BuilderPiece_State const Dropped;

/// @brief Field Grabbed value: I32(2)
static ::GlobalNamespace::BuilderPiece_State const Grabbed;

/// @brief Field GrabbedLocal value: I32(6)
static ::GlobalNamespace::BuilderPiece_State const GrabbedLocal;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::BuilderPiece_State const None;

/// @brief Field OnConveyor value: I32(7)
static ::GlobalNamespace::BuilderPiece_State const OnConveyor;

/// @brief Field OnShelf value: I32(4)
static ::GlobalNamespace::BuilderPiece_State const OnShelf;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1604};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPiece_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPiece_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
