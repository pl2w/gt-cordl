#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IPhotonPeerListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IPhotonPeerListener)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::IPhotonPeerListener*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::IPhotonPeerListener*, "ExitGames.Client.Photon", "IPhotonPeerListener");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.IPhotonPeerListener
class CORDL_TYPE IPhotonPeerListener {
public:
// Declarations
/// @brief Method DebugReturn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DebugReturn(::ExitGames::Client::Photon::DebugLevel  level, ::StringW  message) ;

/// @brief Method OnEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEvent(::ExitGames::Client::Photon::EventData*  eventData) ;

/// @brief Method OnOperationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnOperationResponse(::ExitGames::Client::Photon::OperationResponse*  operationResponse) ;

/// @brief Method OnStatusChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnStatusChanged(::ExitGames::Client::Photon::StatusCode  statusCode) ;

// Ctor Parameters [CppParam { name: "", ty: "IPhotonPeerListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPhotonPeerListener(IPhotonPeerListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26424};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ExitGames::Client::Photon
