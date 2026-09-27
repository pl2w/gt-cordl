#pragma once
// IWYU pragma private; include "Photon/Realtime/ConnectionCallbacksContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConnectionCallbacksContainer)
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class IConnectionCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
class RegionHandler;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class ConnectionCallbacksContainer;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::ConnectionCallbacksContainer*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ConnectionCallbacksContainer*, "Photon.Realtime", "ConnectionCallbacksContainer");
// Dependencies System.Collections.Generic.List`1<T>
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.ConnectionCallbacksContainer
class CORDL_TYPE ConnectionCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IConnectionCallbacks*> {
public:
// Declarations
/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
constexpr operator  ::Photon::Realtime::IConnectionCallbacks*() noexcept;

static inline ::Photon::Realtime::ConnectionCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method OnConnected, addr 0xa703bb4, size 0x1a4, virtual true, abstract: false, final true
inline void OnConnected() ;

/// @brief Method OnConnectedToMaster, addr 0xa701ec0, size 0x1a8, virtual true, abstract: false, final true
inline void OnConnectedToMaster() ;

/// @brief Method OnCustomAuthenticationFailed, addr 0xa701958, size 0x1b8, virtual true, abstract: false, final true
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0xa702068, size 0x1b8, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnected, addr 0xa703fdc, size 0x1b8, virtual true, abstract: false, final true
inline void OnDisconnected(::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnRegionListReceived, addr 0xa7025d8, size 0x1b8, virtual true, abstract: false, final true
inline void OnRegionListReceived(::Photon::Realtime::RegionHandler*  regionHandler) ;

constexpr ::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method .ctor, addr 0xa6fa55c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
constexpr ::Photon::Realtime::IConnectionCallbacks* i___Photon__Realtime__IConnectionCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectionCallbacksContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectionCallbacksContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionCallbacksContainer(ConnectionCallbacksContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionCallbacksContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionCallbacksContainer(ConnectionCallbacksContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29858};

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Photon::Realtime::LoadBalancingClient*  ___client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::ConnectionCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::ConnectionCallbacksContainer) == 0x30, "Size mismatch!");

} // namespace end def Photon::Realtime
