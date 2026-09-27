#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PeerStateValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerStateValue)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct PeerStateValue;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::PeerStateValue);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PeerStateValue, "ExitGames.Client.Photon", "PeerStateValue");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.PeerStateValue
struct CORDL_TYPE PeerStateValue {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PeerStateValue_Unwrapped
enum struct __PeerStateValue_Unwrapped : uint8_t {
__E_Disconnected = static_cast<uint8_t>(0x0u),
__E_Connecting = static_cast<uint8_t>(0x1u),
__E_InitializingApplication = static_cast<uint8_t>(0xau),
__E_Connected = static_cast<uint8_t>(0x3u),
__E_Disconnecting = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeerStateValue_Unwrapped () const noexcept {
return static_cast<__PeerStateValue_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeerStateValue() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PeerStateValue(uint8_t  value__) noexcept;

/// @brief Field Connected value: U8(3)
static ::ExitGames::Client::Photon::PeerStateValue const Connected;

/// @brief Field Connecting value: U8(1)
static ::ExitGames::Client::Photon::PeerStateValue const Connecting;

/// @brief Field Disconnected value: U8(0)
static ::ExitGames::Client::Photon::PeerStateValue const Disconnected;

/// @brief Field Disconnecting value: U8(4)
static ::ExitGames::Client::Photon::PeerStateValue const Disconnecting;

/// @brief Field InitializingApplication value: U8(10)
static ::ExitGames::Client::Photon::PeerStateValue const InitializingApplication;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26449};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::PeerStateValue, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::PeerStateValue) == 0x1, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
