#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLab_EntranceDoorsState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostLab_EntranceDoorsState)
// Forward declare root types
namespace GlobalNamespace {
struct GhostLab_EntranceDoorsState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostLab_EntranceDoorsState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostLab_EntranceDoorsState, "", "GhostLab/EntranceDoorsState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostLab/EntranceDoorsState
struct CORDL_TYPE GhostLab_EntranceDoorsState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostLab_EntranceDoorsState_Unwrapped
enum struct __GhostLab_EntranceDoorsState_Unwrapped : int32_t {
__E_BothClosed = static_cast<int32_t>(0x0),
__E_InnerDoorOpen = static_cast<int32_t>(0x1),
__E_OuterDoorOpen = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostLab_EntranceDoorsState_Unwrapped () const noexcept {
return static_cast<__GhostLab_EntranceDoorsState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostLab_EntranceDoorsState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostLab_EntranceDoorsState(int32_t  value__) noexcept;

/// @brief Field BothClosed value: I32(0)
static ::GlobalNamespace::GhostLab_EntranceDoorsState const BothClosed;

/// @brief Field InnerDoorOpen value: I32(1)
static ::GlobalNamespace::GhostLab_EntranceDoorsState const InnerDoorOpen;

/// @brief Field OuterDoorOpen value: I32(2)
static ::GlobalNamespace::GhostLab_EntranceDoorsState const OuterDoorOpen;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{456};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostLab_EntranceDoorsState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostLab_EntranceDoorsState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
