#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyHornTransferableObject_PartyHornState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyHornTransferableObject_PartyHornState)
// Forward declare root types
namespace GlobalNamespace {
struct PartyHornTransferableObject_PartyHornState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PartyHornTransferableObject_PartyHornState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PartyHornTransferableObject_PartyHornState, "", "PartyHornTransferableObject/PartyHornState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PartyHornTransferableObject/PartyHornState
struct CORDL_TYPE PartyHornTransferableObject_PartyHornState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PartyHornTransferableObject_PartyHornState_Unwrapped
enum struct __PartyHornTransferableObject_PartyHornState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x1),
__E_CoolingDown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PartyHornTransferableObject_PartyHornState_Unwrapped () const noexcept {
return static_cast<__PartyHornTransferableObject_PartyHornState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PartyHornTransferableObject_PartyHornState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PartyHornTransferableObject_PartyHornState(int32_t  value__) noexcept;

/// @brief Field CoolingDown value: I32(2)
static ::GlobalNamespace::PartyHornTransferableObject_PartyHornState const CoolingDown;

/// @brief Field None value: I32(1)
static ::GlobalNamespace::PartyHornTransferableObject_PartyHornState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{524};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject_PartyHornState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PartyHornTransferableObject_PartyHornState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
