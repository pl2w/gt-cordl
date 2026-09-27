#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PhotonSocketError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonSocketError)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::PhotonSocketError);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PhotonSocketError, "ExitGames.Client.Photon", "PhotonSocketError");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.PhotonSocketError
struct CORDL_TYPE PhotonSocketError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PhotonSocketError_Unwrapped
enum struct __PhotonSocketError_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Skipped = static_cast<int32_t>(0x1),
__E_NoData = static_cast<int32_t>(0x2),
__E_Exception = static_cast<int32_t>(0x3),
__E_Busy = static_cast<int32_t>(0x4),
__E_PendingSend = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonSocketError_Unwrapped () const noexcept {
return static_cast<__PhotonSocketError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonSocketError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonSocketError(int32_t  value__) noexcept;

/// @brief Field Busy value: I32(4)
static ::ExitGames::Client::Photon::PhotonSocketError const Busy;

/// @brief Field Exception value: I32(3)
static ::ExitGames::Client::Photon::PhotonSocketError const Exception;

/// @brief Field NoData value: I32(2)
static ::ExitGames::Client::Photon::PhotonSocketError const NoData;

/// @brief Field PendingSend value: I32(5)
static ::ExitGames::Client::Photon::PhotonSocketError const PendingSend;

/// @brief Field Skipped value: I32(1)
static ::ExitGames::Client::Photon::PhotonSocketError const Skipped;

/// @brief Field Success value: I32(0)
static ::ExitGames::Client::Photon::PhotonSocketError const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::PhotonSocketError, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::PhotonSocketError) == 0x4, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
