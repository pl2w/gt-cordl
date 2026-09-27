#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/EgMessageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EgMessageType)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct EgMessageType;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::EgMessageType);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::EgMessageType, "ExitGames.Client.Photon", "EgMessageType");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.EgMessageType
struct CORDL_TYPE EgMessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __EgMessageType_Unwrapped
enum struct __EgMessageType_Unwrapped : uint8_t {
__E_Init = static_cast<uint8_t>(0x0u),
__E_InitResponse = static_cast<uint8_t>(0x1u),
__E_Operation = static_cast<uint8_t>(0x2u),
__E_OperationResponse = static_cast<uint8_t>(0x3u),
__E_Event = static_cast<uint8_t>(0x4u),
__E_DisconnectReason = static_cast<uint8_t>(0x5u),
__E_InternalOperationRequest = static_cast<uint8_t>(0x6u),
__E_InternalOperationResponse = static_cast<uint8_t>(0x7u),
__E_Message = static_cast<uint8_t>(0x8u),
__E_RawMessage = static_cast<uint8_t>(0x9u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EgMessageType_Unwrapped () const noexcept {
return static_cast<__EgMessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EgMessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr EgMessageType(uint8_t  value__) noexcept;

/// @brief Field DisconnectReason value: U8(5)
static ::ExitGames::Client::Photon::EgMessageType const DisconnectReason;

/// @brief Field Event value: U8(4)
static ::ExitGames::Client::Photon::EgMessageType const Event;

/// @brief Field Init value: U8(0)
static ::ExitGames::Client::Photon::EgMessageType const Init;

/// @brief Field InitResponse value: U8(1)
static ::ExitGames::Client::Photon::EgMessageType const InitResponse;

/// @brief Field InternalOperationRequest value: U8(6)
static ::ExitGames::Client::Photon::EgMessageType const InternalOperationRequest;

/// @brief Field InternalOperationResponse value: U8(7)
static ::ExitGames::Client::Photon::EgMessageType const InternalOperationResponse;

/// @brief Field Message value: U8(8)
static ::ExitGames::Client::Photon::EgMessageType const Message;

/// @brief Field Operation value: U8(2)
static ::ExitGames::Client::Photon::EgMessageType const Operation;

/// @brief Field OperationResponse value: U8(3)
static ::ExitGames::Client::Photon::EgMessageType const OperationResponse;

/// @brief Field RawMessage value: U8(9)
static ::ExitGames::Client::Photon::EgMessageType const RawMessage;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26441};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::EgMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::EgMessageType) == 0x1, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
