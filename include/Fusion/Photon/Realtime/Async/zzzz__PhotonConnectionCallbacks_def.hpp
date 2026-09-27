#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/PhotonConnectionCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PhotonConnectionCallbacks)
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class PhotonConnectionCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*, "Fusion.Photon.Realtime.Async", "PhotonConnectionCallbacks");
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.PhotonConnectionCallbacks
class CORDL_TYPE PhotonConnectionCallbacks : public ::System::Object {
public:
// Declarations
/// @brief Field ConnectedToMaster, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedToMaster, put=__cordl_internal_set_ConnectedToMaster)) ::System::Action*  ConnectedToMaster;

/// @brief Field ConnectedToNameServer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedToNameServer, put=__cordl_internal_set_ConnectedToNameServer)) ::System::Action*  ConnectedToNameServer;

/// @brief Field CustomAuthenticationFailed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomAuthenticationFailed, put=__cordl_internal_set_CustomAuthenticationFailed)) ::System::Action_1<::StringW>*  CustomAuthenticationFailed;

/// @brief Field CustomAuthenticationResponse, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomAuthenticationResponse, put=__cordl_internal_set_CustomAuthenticationResponse)) ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  CustomAuthenticationResponse;

/// @brief Field Disconnected, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Disconnected, put=__cordl_internal_set_Disconnected)) ::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>*  Disconnected;

/// @brief Field RegionListReceived, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RegionListReceived, put=__cordl_internal_set_RegionListReceived)) ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  RegionListReceived;

static inline ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_ConnectedToMaster() const;

constexpr ::System::Action*& __cordl_internal_get_ConnectedToMaster() ;

constexpr ::System::Action* const& __cordl_internal_get_ConnectedToNameServer() const;

constexpr ::System::Action*& __cordl_internal_get_ConnectedToNameServer() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_CustomAuthenticationFailed() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_CustomAuthenticationFailed() ;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& __cordl_internal_get_CustomAuthenticationResponse() const;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& __cordl_internal_get_CustomAuthenticationResponse() ;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>* const& __cordl_internal_get_Disconnected() const;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>*& __cordl_internal_get_Disconnected() ;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& __cordl_internal_get_RegionListReceived() const;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& __cordl_internal_get_RegionListReceived() ;

constexpr void __cordl_internal_set_ConnectedToMaster(::System::Action*  value) ;

constexpr void __cordl_internal_set_ConnectedToNameServer(::System::Action*  value) ;

constexpr void __cordl_internal_set_CustomAuthenticationFailed(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_CustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_Disconnected(::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>*  value) ;

constexpr void __cordl_internal_set_RegionListReceived(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value) ;

/// @brief Method .ctor, addr 0x5f6910c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonConnectionCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonConnectionCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonConnectionCallbacks(PhotonConnectionCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonConnectionCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonConnectionCallbacks(PhotonConnectionCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28118};

/// @brief Field ConnectedToMaster, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___ConnectedToMaster;

/// @brief Field ConnectedToNameServer, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___ConnectedToNameServer;

/// @brief Field RegionListReceived, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  ___RegionListReceived;

/// @brief Field Disconnected, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>*  ___Disconnected;

/// @brief Field CustomAuthenticationFailed, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___CustomAuthenticationFailed;

/// @brief Field CustomAuthenticationResponse, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  ___CustomAuthenticationResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks, ___ConnectedToMaster) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks, ___ConnectedToNameServer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks, ___RegionListReceived) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks, ___Disconnected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks, ___CustomAuthenticationFailed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks, ___CustomAuthenticationResponse) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
