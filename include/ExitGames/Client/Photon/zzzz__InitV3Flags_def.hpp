#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/InitV3Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitV3Flags)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct InitV3Flags;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::InitV3Flags);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::InitV3Flags, "ExitGames.Client.Photon", "InitV3Flags");
// [Flags]
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.InitV3Flags
struct CORDL_TYPE InitV3Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __InitV3Flags_Unwrapped
enum struct __InitV3Flags_Unwrapped : int16_t {
__E_NoFlags = static_cast<int16_t>(0x0),
__E_EncryptionFlag = static_cast<int16_t>(0x1),
__E_IPv6Flag = static_cast<int16_t>(0x2),
__E_ReleaseSdkFlag = static_cast<int16_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InitV3Flags_Unwrapped () const noexcept {
return static_cast<__InitV3Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InitV3Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr InitV3Flags(int16_t  value__) noexcept;

/// @brief Field EncryptionFlag value: I16(1)
static ::ExitGames::Client::Photon::InitV3Flags const EncryptionFlag;

/// @brief Field IPv6Flag value: I16(2)
static ::ExitGames::Client::Photon::InitV3Flags const IPv6Flag;

/// @brief Field NoFlags value: I16(0)
static ::ExitGames::Client::Photon::InitV3Flags const NoFlags;

/// @brief Field ReleaseSdkFlag value: I16(4)
static ::ExitGames::Client::Photon::InitV3Flags const ReleaseSdkFlag;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::InitV3Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::InitV3Flags) == 0x2, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
