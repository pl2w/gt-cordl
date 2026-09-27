#pragma once
// IWYU pragma private; include "Photon/Realtime/IWebRpcCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWebRpcCallback)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
// Forward declare root types
namespace Photon::Realtime {
class IWebRpcCallback;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::IWebRpcCallback*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::IWebRpcCallback*, "Photon.Realtime", "IWebRpcCallback");
// Dependencies 
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.IWebRpcCallback
class CORDL_TYPE IWebRpcCallback {
public:
// Declarations
/// @brief Method OnWebRpcResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse*  response) ;

// Ctor Parameters [CppParam { name: "", ty: "IWebRpcCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebRpcCallback(IWebRpcCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Realtime
