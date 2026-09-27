#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/TPeer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TPeer)
namespace ExitGames::Client::Photon {
struct DeliveryMode;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class TPeer;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::TPeer*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::TPeer*, "ExitGames.Client.Photon", "TPeer");
// Dependencies ExitGames.Client.Photon.PeerBase
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.TPeer
class CORDL_TYPE TPeer : public ::ExitGames::Client::Photon::PeerBase {
public:
// Declarations
/// @brief Field DoFraming, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get_DoFraming, put=__cordl_internal_set_DoFraming)) bool  DoFraming;

 __declspec(property(get=get_QueuedIncomingCommandsCount)) int32_t  QueuedIncomingCommandsCount;

 __declspec(property(get=get_QueuedOutgoingCommandsCount)) int32_t  QueuedOutgoingCommandsCount;

/// @brief Field incomingList, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_incomingList, put=__cordl_internal_set_incomingList)) ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*  incomingList;

/// @brief Field lastPingActivity, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPingActivity, put=__cordl_internal_set_lastPingActivity)) int32_t  lastPingActivity;

/// @brief Field outgoingStream, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_outgoingStream, put=__cordl_internal_set_outgoingStream)) ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*  outgoingStream;

/// @brief Field pingParamDict, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_pingParamDict, put=__cordl_internal_set_pingParamDict)) ::ExitGames::Client::Photon::ParameterDictionary*  pingParamDict;

/// @brief Field pingRequest, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_pingRequest, put=__cordl_internal_set_pingRequest)) ::ArrayW<uint8_t>  pingRequest;

/// @brief Field tcpFramedMessageHead, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tcpFramedMessageHead, put=setStaticF_tcpFramedMessageHead)) ::ArrayW<uint8_t>  tcpFramedMessageHead;

/// @brief Field tcpMsgHead, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tcpMsgHead, put=setStaticF_tcpMsgHead)) ::ArrayW<uint8_t>  tcpMsgHead;

/// @brief Field waitForInitResponse, offset 0x149, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitForInitResponse, put=__cordl_internal_set_waitForInitResponse)) bool  waitForInitResponse;

/// @brief Method Connect, addr 0xa6ec7dc, size 0x164, virtual true, abstract: false, final false
inline bool Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::StringW  appID, ::System::Object*  photonToken) ;

/// @brief Method Disconnect, addr 0xa6ecb20, size 0x110, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method DispatchIncomingCommands, addr 0xa6ed434, size 0x380, virtual true, abstract: false, final false
inline bool DispatchIncomingCommands() ;

/// @brief Method EnqueueInit, addr 0xa6ec9a4, size 0x17c, virtual false, abstract: false, final false
inline void EnqueueInit(::ArrayW<uint8_t>  data) ;

/// @brief Method EnqueueMessageAsPayload, addr 0xa6ed0a0, size 0x394, virtual false, abstract: false, final false
inline bool EnqueueMessageAsPayload(::ExitGames::Client::Photon::DeliveryMode  deliveryMode, ::ExitGames::Client::Photon::StreamBuffer*  opMessage, uint8_t  channelId) ;

/// @brief Method EnqueuePhotonMessage, addr 0xa6edd2c, size 0x14, virtual true, abstract: false, final false
inline bool EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer*  opBytes, ::ExitGames::Client::Photon::SendOptions  sendParams) ;

/// @brief Method FetchServerTimestamp, addr 0xa6ecd70, size 0x18, virtual true, abstract: false, final false
inline void FetchServerTimestamp() ;

/// @brief Method IsTransportEncrypted, addr 0xa6ec6e8, size 0x10, virtual true, abstract: false, final false
inline bool IsTransportEncrypted() ;

static inline ::ExitGames::Client::Photon::TPeer* New_ctor() ;

/// @brief Method OnConnect, addr 0xa6ec940, size 0x64, virtual true, abstract: false, final false
inline void OnConnect() ;

/// @brief Method ReadPingResult, addr 0xa6ee14c, size 0xf8, virtual false, abstract: false, final false
inline void ReadPingResult(::ArrayW<uint8_t>  inbuff) ;

/// @brief Method ReadPingResult, addr 0xa6ee244, size 0xfc, virtual false, abstract: false, final false
inline void ReadPingResult(::ExitGames::Client::Photon::OperationResponse*  operationResponse) ;

/// @brief Method ReceiveIncomingCommands, addr 0xa6edd58, size 0x3f4, virtual true, abstract: false, final false
inline void ReceiveIncomingCommands(::ArrayW<uint8_t>  inbuff, int32_t  dataLength) ;

/// @brief Method Reset, addr 0xa6ec6f8, size 0xe4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SendAcksOnly, addr 0xa6edd10, size 0x1c, virtual true, abstract: false, final false
inline bool SendAcksOnly() ;

/// @brief Method SendData, addr 0xa6eda70, size 0x2a0, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketError SendData(::ArrayW<uint8_t>  data, int32_t  length) ;

/// @brief Method SendOutgoingCommands, addr 0xa6ed7b4, size 0x2bc, virtual true, abstract: false, final false
inline bool SendOutgoingCommands() ;

/// @brief Method SendPing, addr 0xa6ecd88, size 0x2fc, virtual false, abstract: false, final false
inline void SendPing() ;

/// @brief Method StopConnection, addr 0xa6ecc30, size 0x140, virtual true, abstract: false, final false
inline void StopConnection() ;

constexpr bool const& __cordl_internal_get_DoFraming() const;

constexpr bool& __cordl_internal_get_DoFraming() ;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* const& __cordl_internal_get_incomingList() const;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*& __cordl_internal_get_incomingList() ;

constexpr int32_t const& __cordl_internal_get_lastPingActivity() const;

constexpr int32_t& __cordl_internal_get_lastPingActivity() ;

constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>* const& __cordl_internal_get_outgoingStream() const;

constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*& __cordl_internal_get_outgoingStream() ;

constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& __cordl_internal_get_pingParamDict() const;

constexpr ::ExitGames::Client::Photon::ParameterDictionary*& __cordl_internal_get_pingParamDict() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_pingRequest() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_pingRequest() ;

constexpr bool const& __cordl_internal_get_waitForInitResponse() const;

constexpr bool& __cordl_internal_get_waitForInitResponse() ;

constexpr void __cordl_internal_set_DoFraming(bool  value) ;

constexpr void __cordl_internal_set_incomingList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*  value) ;

constexpr void __cordl_internal_set_lastPingActivity(int32_t  value) ;

constexpr void __cordl_internal_set_outgoingStream(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*  value) ;

constexpr void __cordl_internal_set_pingParamDict(::ExitGames::Client::Photon::ParameterDictionary*  value) ;

constexpr void __cordl_internal_set_pingRequest(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_waitForInitResponse(bool  value) ;

/// @brief Method .ctor, addr 0xa6ec5a4, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_tcpFramedMessageHead() ;

static inline ::ArrayW<uint8_t> getStaticF_tcpMsgHead() ;

/// @brief Method get_QueuedIncomingCommandsCount, addr 0xa6ec554, size 0x48, virtual true, abstract: false, final false
inline int32_t get_QueuedIncomingCommandsCount() ;

/// @brief Method get_QueuedOutgoingCommandsCount, addr 0xa6ec59c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_QueuedOutgoingCommandsCount() ;

static inline void setStaticF_tcpFramedMessageHead(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_tcpMsgHead(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TPeer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TPeer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TPeer(TPeer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TPeer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TPeer(TPeer const& ) = delete;

/// @brief Field ALL_HEADER_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  ALL_HEADER_BYTES{static_cast<int32_t>(0x9)};

/// @brief Field MSG_HEADER_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  MSG_HEADER_BYTES{static_cast<int32_t>(0x2)};

/// @brief Field TCP_HEADER_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  TCP_HEADER_BYTES{static_cast<int32_t>(0x7)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26485};

/// @brief Field incomingList, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*  ___incomingList;

/// @brief Field outgoingStream, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*  ___outgoingStream;

/// @brief Field lastPingActivity, offset: 0x130, size: 0x4, def value: None
 int32_t  ___lastPingActivity;

/// @brief Field pingRequest, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___pingRequest;

/// @brief Field pingParamDict, offset: 0x140, size: 0x8, def value: None
 ::ExitGames::Client::Photon::ParameterDictionary*  ___pingParamDict;

/// @brief Field DoFraming, offset: 0x148, size: 0x1, def value: None
 bool  ___DoFraming;

/// @brief Field waitForInitResponse, offset: 0x149, size: 0x1, def value: None
 bool  ___waitForInitResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___incomingList) == 0x120, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___outgoingStream) == 0x128, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___lastPingActivity) == 0x130, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___pingRequest) == 0x138, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___pingParamDict) == 0x140, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___DoFraming) == 0x148, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___waitForInitResponse) == 0x149, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::TPeer) == 0x150, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
