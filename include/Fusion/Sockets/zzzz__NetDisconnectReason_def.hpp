#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetDisconnectReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetDisconnectReason)
// Forward declare root types
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetDisconnectReason);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetDisconnectReason, "Fusion.Sockets", "NetDisconnectReason");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetDisconnectReason
struct CORDL_TYPE NetDisconnectReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __NetDisconnectReason_Unwrapped
enum struct __NetDisconnectReason_Unwrapped : uint8_t {
__E_Unknown = static_cast<uint8_t>(0x1u),
__E_Timeout = static_cast<uint8_t>(0x2u),
__E_Requested = static_cast<uint8_t>(0x3u),
__E_SequenceOutOfBounds = static_cast<uint8_t>(0x4u),
__E_SendWindowFull = static_cast<uint8_t>(0x5u),
__E_ByRemote = static_cast<uint8_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetDisconnectReason_Unwrapped () const noexcept {
return static_cast<__NetDisconnectReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetDisconnectReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NetDisconnectReason(uint8_t  value__) noexcept;

/// @brief Field ByRemote value: U8(6)
static ::Fusion::Sockets::NetDisconnectReason const ByRemote;

/// @brief Field Requested value: U8(3)
static ::Fusion::Sockets::NetDisconnectReason const Requested;

/// @brief Field SendWindowFull value: U8(5)
static ::Fusion::Sockets::NetDisconnectReason const SendWindowFull;

/// @brief Field SequenceOutOfBounds value: U8(4)
static ::Fusion::Sockets::NetDisconnectReason const SequenceOutOfBounds;

/// @brief Field Timeout value: U8(2)
static ::Fusion::Sockets::NetDisconnectReason const Timeout;

/// @brief Field Unknown value: U8(1)
static ::Fusion::Sockets::NetDisconnectReason const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29371};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetDisconnectReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetDisconnectReason) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Sockets
