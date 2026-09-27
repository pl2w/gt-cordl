#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/DebugLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugLevel)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::DebugLevel);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::DebugLevel, "ExitGames.Client.Photon", "DebugLevel");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.DebugLevel
struct CORDL_TYPE DebugLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DebugLevel_Unwrapped
enum struct __DebugLevel_Unwrapped : uint8_t {
__E_OFF = static_cast<uint8_t>(0x0u),
__E_ERROR = static_cast<uint8_t>(0x1u),
__E_WARNING = static_cast<uint8_t>(0x2u),
__E_INFO = static_cast<uint8_t>(0x3u),
__E_ALL = static_cast<uint8_t>(0x5u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugLevel_Unwrapped () const noexcept {
return static_cast<__DebugLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugLevel(uint8_t  value__) noexcept;

/// @brief Field ALL value: U8(5)
static ::ExitGames::Client::Photon::DebugLevel const ALL;

/// @brief Field ERROR value: U8(1)
static ::ExitGames::Client::Photon::DebugLevel const ERROR;

/// @brief Field INFO value: U8(3)
static ::ExitGames::Client::Photon::DebugLevel const INFO;

/// @brief Field OFF value: U8(0)
static ::ExitGames::Client::Photon::DebugLevel const OFF;

/// @brief Field WARNING value: U8(2)
static ::ExitGames::Client::Photon::DebugLevel const WARNING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::DebugLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::DebugLevel) == 0x1, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
