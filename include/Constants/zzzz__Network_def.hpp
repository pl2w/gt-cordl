#pragma once
// IWYU pragma private; include "Constants/Network.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Network)
// Forward declare root types
namespace Constants {
class Network;
}
// Write type traits
MARK_REF_T(::Constants::Network*);
DEFINE_IL2CPP_CLASS(::Constants::Network*, "Constants", "Network");
// Dependencies System.Object
namespace Constants {
// Is value type: false
// CS Name: Constants.Network
class CORDL_TYPE Network : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Network() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Network", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Network(Network && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Network", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Network(Network const& ) = delete;

/// @brief Field COSMETICS_LOOKUP offset 0xffffffff size 0x1
static constexpr uint8_t  COSMETICS_LOOKUP{static_cast<uint8_t>(0xc7u)};

/// @brief Field COSMETIC_EVENT offset 0xffffffff size 0x1
static constexpr uint8_t  COSMETIC_EVENT{static_cast<uint8_t>(0xb0u)};

/// @brief Field COSMETIC_PURCHASE offset 0xffffffff size 0x1
static constexpr uint8_t  COSMETIC_PURCHASE{static_cast<uint8_t>(0x9u)};

/// @brief Field GT_SIGNAL offset 0xffffffff size 0x1
static constexpr uint8_t  GT_SIGNAL{static_cast<uint8_t>(0xbau)};

/// @brief Field MAX_PHOTON_SERVER_TIME offset 0xffffffff size 0x8
static constexpr double_t  MAX_PHOTON_SERVER_TIME{static_cast<double_t>(4294967.295)};

/// @brief Field REPORT_MUTE offset 0xffffffff size 0x1
static constexpr uint8_t  REPORT_MUTE{static_cast<uint8_t>(0x33u)};

/// @brief Field REPORT_PLAYER offset 0xffffffff size 0x1
static constexpr uint8_t  REPORT_PLAYER{static_cast<uint8_t>(0x32u)};

/// @brief Field ROOM_SYSTEM offset 0xffffffff size 0x1
static constexpr uint8_t  ROOM_SYSTEM{static_cast<uint8_t>(0x3u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3845};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Constants::Network) == 0x10, "Size mismatch!");

} // namespace end def Constants
