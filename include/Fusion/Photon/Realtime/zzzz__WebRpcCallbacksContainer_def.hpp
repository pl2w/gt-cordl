#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/WebRpcCallbacksContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(WebRpcCallbacksContainer)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace Fusion::Photon::Realtime {
class IWebRpcCallback;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class WebRpcCallbacksContainer;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::WebRpcCallbacksContainer*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::WebRpcCallbacksContainer*, "Fusion.Photon.Realtime", "WebRpcCallbacksContainer");
// Dependencies System.Collections.Generic.List`1<T>
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.WebRpcCallbacksContainer
class CORDL_TYPE WebRpcCallbacksContainer : public ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::IWebRpcCallback*> {
public:
// Declarations
/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IWebRpcCallback"
constexpr operator  ::Fusion::Photon::Realtime::IWebRpcCallback*() noexcept;

static inline ::Fusion::Photon::Realtime::WebRpcCallbacksContainer* New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method OnWebRpcResponse, addr 0x5f59974, size 0x1b8, virtual true, abstract: false, final true
inline void OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse*  response) ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr void __cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method .ctor, addr 0x5f598ec, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Convert to "::Fusion::Photon::Realtime::IWebRpcCallback"
constexpr ::Fusion::Photon::Realtime::IWebRpcCallback* i___Fusion__Photon__Realtime__IWebRpcCallback() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRpcCallbacksContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRpcCallbacksContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRpcCallbacksContainer(WebRpcCallbacksContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRpcCallbacksContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRpcCallbacksContainer(WebRpcCallbacksContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28065};

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ___client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::WebRpcCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::WebRpcCallbacksContainer) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
