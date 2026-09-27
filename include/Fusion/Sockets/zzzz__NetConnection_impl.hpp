#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_EntryState_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionStatus_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateConnectingData_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateDisconnectedData_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateShutdownData_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSendEnvelopeRingBuffer_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSequencer_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableBuffer_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableList_impl.hpp"
#include "Fusion/zzzz__TimerDelta_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionStatus_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateConnectingData_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateDisconnectedData_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateShutdownData_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetConnection::*)()>(&::Fusion::Sockets::NetConnection::get_Active)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x602a168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.get_RoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Sockets::NetConnection::*)()>(&::Fusion::Sockets::NetConnection::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.get_RemoteAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::NetConnection::*)()>(&::Fusion::Sockets::NetConnection::get_RemoteAddress)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602a180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_RemoteAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.get_ConnectionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnectionStatus (::Fusion::Sockets::NetConnection::*)()>(&::Fusion::Sockets::NetConnection::get_ConnectionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_ConnectionStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.get_LocalConnectionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnectionId (::Fusion::Sockets::NetConnection::*)()>(&::Fusion::Sockets::NetConnection::get_LocalConnectionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_LocalConnectionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.NextNotifySendSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetConnection::NextNotifySendSequence)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x602a1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"NextNotifySendSequence", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetConnection*, int16_t, int16_t, ::Fusion::Sockets::NetConfig*)>(&::Fusion::Sockets::NetConnection::Initialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x602a1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::Sockets::NetConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.SetRtt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetConnection*, double_t)>(&::Fusion::Sockets::NetConnection::SetRtt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602a3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"SetRtt", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetConnection::Reset)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x602a27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"Reset", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnection.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::NetConnection::*)()>(&::Fusion::Sockets::NetConnection::ToString)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x602a3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                    {::i2c::class_of<::Fusion::Sockets::NetConnection>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Fusion::Sockets::NetConnection::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t Fusion::Sockets::NetConnection::get_RoundTripTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetConnection::get_RemoteAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_RemoteAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetConnectionStatus Fusion::Sockets::NetConnection::get_ConnectionStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_ConnectionStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnectionStatus>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetConnectionId Fusion::Sockets::NetConnection::get_LocalConnectionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"get_LocalConnectionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnectionId>(*this, ___internal_method);
}
inline uint16_t Fusion::Sockets::NetConnection::NextNotifySendSequence(::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"NextNotifySendSequence", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, c);
}
inline void Fusion::Sockets::NetConnection::Initialize(::Fusion::Sockets::NetConnection*  c, int16_t  group, int16_t  index, ::Fusion::Sockets::NetConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::Sockets::NetConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, group, index, config);
}
inline void Fusion::Sockets::NetConnection::SetRtt(::Fusion::Sockets::NetConnection*  c, double_t  rtt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"SetRtt", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, rtt);
}
inline void Fusion::Sockets::NetConnection::Reset(::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnection>(),
                        {"Reset", {}, {::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c);
}
inline ::StringW Fusion::Sockets::NetConnection::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetConnection>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "MapHash", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MapNext", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MapState", ty: "::GlobalNamespace::NetConnectionMap_EntryState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LocalId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RemoteId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "::Fusion::Sockets::NetConnectionStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rtt", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SendTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RecvTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StateConnecting", ty: "::GlobalNamespace::NetConnection_StateConnectingData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StateDisconnected", ty: "::GlobalNamespace::NetConnection_StateDisconnectedData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StateShutdown", ty: "::GlobalNamespace::NetConnection_StateShutdownData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifySendWindow", ty: "::Fusion::Sockets::NetSendEnvelopeRingBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifySendSequencer", ty: "::Fusion::Sockets::NetSequencer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifySendTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvAckTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvAckOutdatedCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvMask", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvSequence", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvUnackedCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvFragment", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvFragmentBuffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvFragmentBufferLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NotifyRecvFragmentSequenceDistance", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionToken", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionTokenLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisconnectToken", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisconnectTokenLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UniqueIdHash", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UniqueId", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Counter", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReliableBuffer", ty: "::Fusion::Sockets::ReliableBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReliableSendList", ty: "::Fusion::Sockets::ReliableList", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReliableSendTimer", ty: "::Fusion::TimerDelta", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConnection::NetConnection(uint64_t  MapHash, ::Fusion::Sockets::NetConnection*  MapNext, ::GlobalNamespace::NetConnectionMap_EntryState  MapState, ::Fusion::Sockets::NetConnectionId  LocalId, ::Fusion::Sockets::NetConnectionId  RemoteId, ::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::NetConnectionStatus  Status, double_t  Rtt, double_t  SendTime, double_t  RecvTime, ::GlobalNamespace::NetConnection_StateConnectingData  StateConnecting, ::GlobalNamespace::NetConnection_StateDisconnectedData  StateDisconnected, ::GlobalNamespace::NetConnection_StateShutdownData  StateShutdown, ::Fusion::Sockets::NetSendEnvelopeRingBuffer  NotifySendWindow, ::Fusion::Sockets::NetSequencer  NotifySendSequencer, double_t  NotifySendTime, double_t  NotifyRecvAckTime, int32_t  NotifyRecvAckOutdatedCount, double_t  NotifyRecvTime, uint64_t  NotifyRecvMask, uint16_t  NotifyRecvSequence, int32_t  NotifyRecvUnackedCount, int32_t  NotifyRecvFragment, uint8_t*  NotifyRecvFragmentBuffer, int32_t  NotifyRecvFragmentBufferLength, int32_t  NotifyRecvFragmentSequenceDistance, uint8_t*  ConnectionToken, int32_t  ConnectionTokenLength, uint8_t*  DisconnectToken, int32_t  DisconnectTokenLength, int64_t  UniqueIdHash, uint8_t*  UniqueId, uint32_t  Counter, ::Fusion::Sockets::ReliableBuffer  ReliableBuffer, ::Fusion::Sockets::ReliableList  ReliableSendList, ::Fusion::TimerDelta  ReliableSendTimer) noexcept  {
this->MapHash = MapHash;
this->MapNext = MapNext;
this->MapState = MapState;
this->LocalId = LocalId;
this->RemoteId = RemoteId;
this->Address = Address;
this->Status = Status;
this->Rtt = Rtt;
this->SendTime = SendTime;
this->RecvTime = RecvTime;
this->StateConnecting = StateConnecting;
this->StateDisconnected = StateDisconnected;
this->StateShutdown = StateShutdown;
this->NotifySendWindow = NotifySendWindow;
this->NotifySendSequencer = NotifySendSequencer;
this->NotifySendTime = NotifySendTime;
this->NotifyRecvAckTime = NotifyRecvAckTime;
this->NotifyRecvAckOutdatedCount = NotifyRecvAckOutdatedCount;
this->NotifyRecvTime = NotifyRecvTime;
this->NotifyRecvMask = NotifyRecvMask;
this->NotifyRecvSequence = NotifyRecvSequence;
this->NotifyRecvUnackedCount = NotifyRecvUnackedCount;
this->NotifyRecvFragment = NotifyRecvFragment;
this->NotifyRecvFragmentBuffer = NotifyRecvFragmentBuffer;
this->NotifyRecvFragmentBufferLength = NotifyRecvFragmentBufferLength;
this->NotifyRecvFragmentSequenceDistance = NotifyRecvFragmentSequenceDistance;
this->ConnectionToken = ConnectionToken;
this->ConnectionTokenLength = ConnectionTokenLength;
this->DisconnectToken = DisconnectToken;
this->DisconnectTokenLength = DisconnectTokenLength;
this->UniqueIdHash = UniqueIdHash;
this->UniqueId = UniqueId;
this->Counter = Counter;
this->ReliableBuffer = ReliableBuffer;
this->ReliableSendList = ReliableSendList;
this->ReliableSendTimer = ReliableSendTimer;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConnection::NetConnection()   {
}
