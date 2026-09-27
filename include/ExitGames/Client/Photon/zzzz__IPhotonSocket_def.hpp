#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IPhotonSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPhotonSocket)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class IPhotonSocket___c;
}
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketState;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
namespace System::Net {
class IPAddress;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class IPhotonSocket;
}
namespace ExitGames::Client::Photon {
class IPhotonSocket___c;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::IPhotonSocket*);
MARK_REF_T(::ExitGames::Client::Photon::IPhotonSocket___c*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::IPhotonSocket*, "ExitGames.Client.Photon", "IPhotonSocket");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::IPhotonSocket___c*, "ExitGames.Client.Photon", "IPhotonSocket/<>c");
// Dependencies ExitGames.Client.Photon.ConnectionProtocol, ExitGames.Client.Photon.PhotonSocketState, System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.IPhotonSocket
class CORDL_TYPE IPhotonSocket : public ::System::Object {
public:
// Declarations
using __c = ::ExitGames::Client::Photon::IPhotonSocket___c;

 __declspec(property(get=get_AddressResolvedAsIpv6, put=set_AddressResolvedAsIpv6)) bool  AddressResolvedAsIpv6;

/// @brief Field ConnectAddress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectAddress, put=__cordl_internal_set_ConnectAddress)) ::StringW  ConnectAddress;

 __declspec(property(get=get_Connected)) bool  Connected;

 __declspec(property(get=get_Listener)) ::ExitGames::Client::Photon::IPhotonPeerListener*  Listener;

 __declspec(property(get=get_MTU)) int32_t  MTU;

/// @brief Field PollReceive, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_PollReceive, put=__cordl_internal_set_PollReceive)) bool  PollReceive;

/// @brief Field Protocol, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_Protocol, put=__cordl_internal_set_Protocol)) ::ExitGames::Client::Photon::ConnectionProtocol  Protocol;

 __declspec(property(get=get_ProxyServerAddress, put=set_ProxyServerAddress)) ::StringW  ProxyServerAddress;

 __declspec(property(get=get_SerializationProtocol)) ::StringW  SerializationProtocol;

 __declspec(property(get=get_ServerAddress, put=set_ServerAddress)) ::StringW  ServerAddress;

 __declspec(property(get=get_ServerPort, put=set_ServerPort)) int32_t  ServerPort;

 __declspec(property(get=get_SocketErrorCode, put=set_SocketErrorCode)) int32_t  SocketErrorCode;

 __declspec(property(get=get_State, put=set_State)) ::ExitGames::Client::Photon::PhotonSocketState  State;

 __declspec(property(get=get_UrlPath, put=set_UrlPath)) ::StringW  UrlPath;

 __declspec(property(get=get_UrlProtocol, put=set_UrlProtocol)) ::StringW  UrlProtocol;

/// @brief Field <AddressResolvedAsIpv6>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__AddressResolvedAsIpv6_k__BackingField, put=__cordl_internal_set__AddressResolvedAsIpv6_k__BackingField)) bool  _AddressResolvedAsIpv6_k__BackingField;

/// @brief Field <ProxyServerAddress>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProxyServerAddress_k__BackingField, put=__cordl_internal_set__ProxyServerAddress_k__BackingField)) ::StringW  _ProxyServerAddress_k__BackingField;

/// @brief Field <ServerAddress>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServerAddress_k__BackingField, put=__cordl_internal_set__ServerAddress_k__BackingField)) ::StringW  _ServerAddress_k__BackingField;

/// @brief Field <ServerIpAddress>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ServerIpAddress_k__BackingField, put=setStaticF__ServerIpAddress_k__BackingField)) ::StringW  _ServerIpAddress_k__BackingField;

/// @brief Field <ServerPort>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__ServerPort_k__BackingField, put=__cordl_internal_set__ServerPort_k__BackingField)) int32_t  _ServerPort_k__BackingField;

/// @brief Field <SocketErrorCode>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__SocketErrorCode_k__BackingField, put=__cordl_internal_set__SocketErrorCode_k__BackingField)) int32_t  _SocketErrorCode_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::ExitGames::Client::Photon::PhotonSocketState  _State_k__BackingField;

/// @brief Field <UrlPath>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__UrlPath_k__BackingField, put=__cordl_internal_set__UrlPath_k__BackingField)) ::StringW  _UrlPath_k__BackingField;

/// @brief Field <UrlProtocol>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__UrlProtocol_k__BackingField, put=__cordl_internal_set__UrlProtocol_k__BackingField)) ::StringW  _UrlProtocol_k__BackingField;

/// @brief Field peerBase, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_peerBase, put=__cordl_internal_set_peerBase)) ::ExitGames::Client::Photon::PeerBase*  peerBase;

/// @brief Method AddressSortComparer, addr 0xa6c4598, size 0x6c, virtual false, abstract: false, final false
inline int32_t AddressSortComparer(::System::Net::IPAddress*  x, ::System::Net::IPAddress*  y) ;

/// @brief Method Connect, addr 0xa6c2fac, size 0x4b0, virtual true, abstract: false, final false
inline bool Connect() ;

/// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Disconnect() ;

/// @brief Method EnqueueDebugReturn, addr 0xa6c3c78, size 0x14, virtual false, abstract: false, final false
inline void EnqueueDebugReturn(::ExitGames::Client::Photon::DebugLevel  debugLevel, ::StringW  message) ;

/// [Obsolete("Use GetIpAddresses instead.")]
/// @brief Method GetIpAddress, addr 0xa6c4604, size 0x204, virtual false, abstract: false, final false
static inline ::System::Net::IPAddress* GetIpAddress(::StringW  address) ;

/// @brief Method GetIpAddresses, addr 0xa6c3eec, size 0x6ac, virtual false, abstract: false, final false
inline ::ArrayW<::System::Net::IPAddress*> GetIpAddresses(::StringW  hostname) ;

/// @brief Method HandleException, addr 0xa6c3c8c, size 0xa8, virtual false, abstract: false, final false
inline void HandleException(::ExitGames::Client::Photon::StatusCode  statusCode) ;

/// @brief Method HandleReceivedDatagram, addr 0xa6c3710, size 0x1ec, virtual false, abstract: false, final false
inline void HandleReceivedDatagram(::ArrayW<uint8_t>  inBuffer, int32_t  length, bool  willBeReused) ;

/// @brief Method IpAddressTryParse, addr 0xa6c3d34, size 0x1b8, virtual false, abstract: false, final false
inline bool IpAddressTryParse(::StringW  strIP, ::by_ref<::System::Net::IPAddress*>  address) ;

static inline ::ExitGames::Client::Photon::IPhotonSocket* New_ctor(::ExitGames::Client::Photon::PeerBase*  peerBase) ;

/// @brief Method Receive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Receive(::by_ref<::ArrayW<uint8_t>>  data) ;

/// @brief Method ReportDebugOfLevel, addr 0xa6c3c4c, size 0x2c, virtual false, abstract: false, final false
inline bool ReportDebugOfLevel(::ExitGames::Client::Photon::DebugLevel  levelOfMessage) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t>  data, int32_t  length) ;

/// @brief Method TryParseAddress, addr 0xa6c345c, size 0x2b4, virtual false, abstract: false, final false
inline bool TryParseAddress(::StringW  url, ::by_ref<::StringW>  host, ::by_ref<uint16_t>  port, ::by_ref<::StringW>  scheme, ::by_ref<::StringW>  absolutePath) ;

/// [CompilerGenerated]
/// @brief Method <HandleException>b__56_0, addr 0xa6c4808, size 0x1c, virtual false, abstract: false, final false
inline void _HandleException_b__56_0() ;

constexpr ::StringW const& __cordl_internal_get_ConnectAddress() const;

constexpr ::StringW& __cordl_internal_get_ConnectAddress() ;

constexpr bool const& __cordl_internal_get_PollReceive() const;

constexpr bool& __cordl_internal_get_PollReceive() ;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& __cordl_internal_get_Protocol() const;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol& __cordl_internal_get_Protocol() ;

constexpr bool const& __cordl_internal_get__AddressResolvedAsIpv6_k__BackingField() const;

constexpr bool& __cordl_internal_get__AddressResolvedAsIpv6_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ProxyServerAddress_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ProxyServerAddress_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ServerAddress_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ServerAddress_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ServerPort_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ServerPort_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SocketErrorCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SocketErrorCode_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::PhotonSocketState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::PhotonSocketState& __cordl_internal_get__State_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UrlPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UrlPath_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UrlProtocol_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UrlProtocol_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::PeerBase* const& __cordl_internal_get_peerBase() const;

constexpr ::ExitGames::Client::Photon::PeerBase*& __cordl_internal_get_peerBase() ;

constexpr void __cordl_internal_set_ConnectAddress(::StringW  value) ;

constexpr void __cordl_internal_set_PollReceive(bool  value) ;

constexpr void __cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol  value) ;

constexpr void __cordl_internal_set__AddressResolvedAsIpv6_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ProxyServerAddress_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ServerAddress_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ServerPort_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SocketErrorCode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::ExitGames::Client::Photon::PhotonSocketState  value) ;

constexpr void __cordl_internal_set__UrlPath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UrlProtocol_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase*  value) ;

/// @brief Method .ctor, addr 0xa6c2f08, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::PeerBase*  peerBase) ;

static inline ::StringW getStaticF__ServerIpAddress_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_AddressResolvedAsIpv6, addr 0xa6c2dd4, size 0x8, virtual false, abstract: false, final false
inline bool get_AddressResolvedAsIpv6() ;

/// @brief Method get_Connected, addr 0xa6bdc20, size 0x10, virtual false, abstract: false, final false
inline bool get_Connected() ;

/// @brief Method get_Listener, addr 0xa6c2c9c, size 0x24, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::IPhotonPeerListener* get_Listener() ;

/// @brief Method get_MTU, addr 0xa6c2cc0, size 0x24, virtual false, abstract: false, final false
inline int32_t get_MTU() ;

/// [CompilerGenerated]
/// @brief Method get_ProxyServerAddress, addr 0xa6c2d14, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ProxyServerAddress() ;

/// @brief Method get_SerializationProtocol, addr 0xa6c2e04, size 0x104, virtual false, abstract: false, final false
inline ::StringW get_SerializationProtocol() ;

/// [CompilerGenerated]
/// @brief Method get_ServerAddress, addr 0xa6c2d04, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ServerAddress() ;

/// [CompilerGenerated]
/// @brief Method get_ServerIpAddress, addr 0xa6c2d24, size 0x48, virtual false, abstract: false, final false
static inline ::StringW get_ServerIpAddress() ;

/// [CompilerGenerated]
/// @brief Method get_ServerPort, addr 0xa6c2dc4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ServerPort() ;

/// [CompilerGenerated]
/// @brief Method get_SocketErrorCode, addr 0xa6c2cf4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SocketErrorCode() ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0xa6c2ce4, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketState get_State() ;

/// [CompilerGenerated]
/// @brief Method get_UrlPath, addr 0xa6c2df4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UrlPath() ;

/// [CompilerGenerated]
/// @brief Method get_UrlProtocol, addr 0xa6c2de4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UrlProtocol() ;

static inline void setStaticF__ServerIpAddress_k__BackingField(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_AddressResolvedAsIpv6, addr 0xa6c2ddc, size 0x8, virtual false, abstract: false, final false
inline void set_AddressResolvedAsIpv6(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ProxyServerAddress, addr 0xa6c2d1c, size 0x8, virtual false, abstract: false, final false
inline void set_ProxyServerAddress(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServerAddress, addr 0xa6c2d0c, size 0x8, virtual false, abstract: false, final false
inline void set_ServerAddress(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServerIpAddress, addr 0xa6c2d6c, size 0x58, virtual false, abstract: false, final false
static inline void set_ServerIpAddress(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServerPort, addr 0xa6c2dcc, size 0x8, virtual false, abstract: false, final false
inline void set_ServerPort(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SocketErrorCode, addr 0xa6c2cfc, size 0x8, virtual false, abstract: false, final false
inline void set_SocketErrorCode(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0xa6c2cec, size 0x8, virtual false, abstract: false, final false
inline void set_State(::ExitGames::Client::Photon::PhotonSocketState  value) ;

/// [CompilerGenerated]
/// @brief Method set_UrlPath, addr 0xa6c2dfc, size 0x8, virtual false, abstract: false, final false
inline void set_UrlPath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_UrlProtocol, addr 0xa6c2dec, size 0x8, virtual false, abstract: false, final false
inline void set_UrlProtocol(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IPhotonSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IPhotonSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IPhotonSocket(IPhotonSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPhotonSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPhotonSocket(IPhotonSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26428};

/// @brief Field peerBase, offset: 0x10, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PeerBase*  ___peerBase;

/// @brief Field Protocol, offset: 0x18, size: 0x1, def value: None
 ::ExitGames::Client::Photon::ConnectionProtocol  ___Protocol;

/// @brief Field PollReceive, offset: 0x19, size: 0x1, def value: None
 bool  ___PollReceive;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <State>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::ExitGames::Client::Photon::PhotonSocketState  ____State_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SocketErrorCode>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____SocketErrorCode_k__BackingField;

/// @brief Field ConnectAddress, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ConnectAddress;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ServerAddress>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____ServerAddress_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ProxyServerAddress>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____ProxyServerAddress_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ServerPort>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____ServerPort_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AddressResolvedAsIpv6>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____AddressResolvedAsIpv6_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UrlProtocol>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____UrlProtocol_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UrlPath>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____UrlPath_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___peerBase) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___Protocol) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___PollReceive) == 0x19, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____State_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____SocketErrorCode_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___ConnectAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____ServerAddress_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____ProxyServerAddress_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____ServerPort_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____AddressResolvedAsIpv6_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____UrlProtocol_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____UrlPath_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::IPhotonSocket) == 0x58, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// [CompilerGenerated]
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.IPhotonSocket/<>c
class CORDL_TYPE IPhotonSocket___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::ExitGames::Client::Photon::IPhotonSocket___c*  __9;

/// @brief Field <>9__59_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__59_0, put=setStaticF___9__59_0)) ::System::Func_2<::System::Net::IPAddress*,::StringW>*  __9__59_0;

static inline ::ExitGames::Client::Photon::IPhotonSocket___c* New_ctor() ;

/// @brief Method <GetIpAddresses>b__59_0, addr 0xa6c4894, size 0x1dc, virtual false, abstract: false, final false
inline ::StringW _GetIpAddresses_b__59_0(::System::Net::IPAddress*  x) ;

/// @brief Method .ctor, addr 0xa6c488c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ExitGames::Client::Photon::IPhotonSocket___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Net::IPAddress*,::StringW>* getStaticF___9__59_0() ;

static inline void setStaticF___9(::ExitGames::Client::Photon::IPhotonSocket___c*  value) ;

static inline void setStaticF___9__59_0(::System::Func_2<::System::Net::IPAddress*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IPhotonSocket___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IPhotonSocket___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IPhotonSocket___c(IPhotonSocket___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPhotonSocket___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPhotonSocket___c(IPhotonSocket___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::IPhotonSocket___c) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
