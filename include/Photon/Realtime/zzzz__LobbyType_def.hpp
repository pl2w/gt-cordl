#pragma once
// IWYU pragma private; include "Photon/Realtime/LobbyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyType)
// Forward declare root types
namespace Photon::Realtime {
struct LobbyType;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::LobbyType);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::LobbyType, "Photon.Realtime", "LobbyType");
// Dependencies 
namespace Photon::Realtime {
// Is value type: true
// CS Name: Photon.Realtime.LobbyType
struct CORDL_TYPE LobbyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __LobbyType_Unwrapped
enum struct __LobbyType_Unwrapped : uint8_t {
__E_Default = static_cast<uint8_t>(0x0u),
__E_SqlLobby = static_cast<uint8_t>(0x2u),
__E_AsyncRandomLobby = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LobbyType_Unwrapped () const noexcept {
return static_cast<__LobbyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LobbyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr LobbyType(uint8_t  value__) noexcept;

/// @brief Field AsyncRandomLobby value: U8(3)
static ::Photon::Realtime::LobbyType const AsyncRandomLobby;

/// @brief Field Default value: U8(0)
static ::Photon::Realtime::LobbyType const Default;

/// @brief Field SqlLobby value: U8(2)
static ::Photon::Realtime::LobbyType const SqlLobby;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::LobbyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::LobbyType) == 0x1, "Size mismatch!");

} // namespace end def Photon::Realtime
