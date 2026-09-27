#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/EventCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCode)
// Forward declare root types
namespace Fusion::Photon::Realtime {
class EventCode;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::EventCode*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::EventCode*, "Fusion.Photon.Realtime", "EventCode");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.EventCode
class CORDL_TYPE EventCode : public ::System::Object {
public:
// Declarations
static inline ::Fusion::Photon::Realtime::EventCode* New_ctor() ;

/// @brief Method .ctor, addr 0x5f5dbf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventCode(EventCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventCode(EventCode const& ) = delete;

/// @brief Field AppStats offset 0xffffffff size 0x1
static constexpr uint8_t  AppStats{static_cast<uint8_t>(0xe2u)};

/// @brief Field AuthEvent offset 0xffffffff size 0x1
static constexpr uint8_t  AuthEvent{static_cast<uint8_t>(0xdfu)};

/// @brief Field AzureNodeInfo offset 0xffffffff size 0x1
static constexpr uint8_t  AzureNodeInfo{static_cast<uint8_t>(0xd2u)};

/// @brief Field CacheSliceChanged offset 0xffffffff size 0x1
static constexpr uint8_t  CacheSliceChanged{static_cast<uint8_t>(0xfau)};

/// @brief Field ErrorInfo offset 0xffffffff size 0x1
static constexpr uint8_t  ErrorInfo{static_cast<uint8_t>(0xfbu)};

/// @brief Field GameList offset 0xffffffff size 0x1
static constexpr uint8_t  GameList{static_cast<uint8_t>(0xe6u)};

/// @brief Field GameListUpdate offset 0xffffffff size 0x1
static constexpr uint8_t  GameListUpdate{static_cast<uint8_t>(0xe5u)};

/// @brief Field Join offset 0xffffffff size 0x1
static constexpr uint8_t  Join{static_cast<uint8_t>(0xffu)};

/// @brief Field Leave offset 0xffffffff size 0x1
static constexpr uint8_t  Leave{static_cast<uint8_t>(0xfeu)};

/// @brief Field LobbyStats offset 0xffffffff size 0x1
static constexpr uint8_t  LobbyStats{static_cast<uint8_t>(0xe0u)};

/// @brief Field Match offset 0xffffffff size 0x1
static constexpr uint8_t  Match{static_cast<uint8_t>(0xe3u)};

/// @brief Field PropertiesChanged offset 0xffffffff size 0x1
static constexpr uint8_t  PropertiesChanged{static_cast<uint8_t>(0xfdu)};

/// @brief Field QueueState offset 0xffffffff size 0x1
static constexpr uint8_t  QueueState{static_cast<uint8_t>(0xe4u)};

/// @brief Field SetProperties offset 0xffffffff size 0x1
static constexpr uint8_t  SetProperties{static_cast<uint8_t>(0xfdu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28077};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::EventCode) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
