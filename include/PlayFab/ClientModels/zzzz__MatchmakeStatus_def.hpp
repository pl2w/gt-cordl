#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/MatchmakeStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakeStatus)
// Forward declare root types
namespace PlayFab::ClientModels {
struct MatchmakeStatus;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::MatchmakeStatus);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::MatchmakeStatus, "PlayFab.ClientModels", "MatchmakeStatus");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.MatchmakeStatus
struct CORDL_TYPE MatchmakeStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MatchmakeStatus_Unwrapped
enum struct __MatchmakeStatus_Unwrapped : int32_t {
__E_Complete = static_cast<int32_t>(0x0),
__E_Waiting = static_cast<int32_t>(0x1),
__E_GameNotFound = static_cast<int32_t>(0x2),
__E_NoAvailableSlots = static_cast<int32_t>(0x3),
__E_SessionClosed = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchmakeStatus_Unwrapped () const noexcept {
return static_cast<__MatchmakeStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MatchmakeStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MatchmakeStatus(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(0)
static ::PlayFab::ClientModels::MatchmakeStatus const Complete;

/// @brief Field GameNotFound value: I32(2)
static ::PlayFab::ClientModels::MatchmakeStatus const GameNotFound;

/// @brief Field NoAvailableSlots value: I32(3)
static ::PlayFab::ClientModels::MatchmakeStatus const NoAvailableSlots;

/// @brief Field SessionClosed value: I32(4)
static ::PlayFab::ClientModels::MatchmakeStatus const SessionClosed;

/// @brief Field Waiting value: I32(1)
static ::PlayFab::ClientModels::MatchmakeStatus const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20167};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::MatchmakeStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::MatchmakeStatus) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
