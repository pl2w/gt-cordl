#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/TPeer.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__TPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeliveryMode_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.get_QueuedIncomingCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::get_QueuedIncomingCommandsCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa6ec554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.get_QueuedOutgoingCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::get_QueuedOutgoingCommandsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ec59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa6ec5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.IsTransportEncrypted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::IsTransportEncrypted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6ec6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::Reset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa6ec6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)(::StringW, ::StringW, ::StringW, ::System::Object*)>(&::ExitGames::Client::Photon::TPeer::Connect)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa6ec7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.OnConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::OnConnect)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6ec940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::Disconnect)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa6ecb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.StopConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::StopConnection)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa6ecc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.FetchServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6ecd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.EnqueueInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::TPeer::EnqueueInit)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa6ec9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"EnqueueInit", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.DispatchIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::DispatchIncomingCommands)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa6ed434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendOutgoingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::SendOutgoingCommands)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xa6ed7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::SendAcksOnly)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6edd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.EnqueuePhotonMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::TPeer::EnqueuePhotonMessage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6edd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.EnqueueMessageAsPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::TPeer::*)(::ExitGames::Client::Photon::DeliveryMode, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::TPeer::EnqueueMessageAsPayload)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xa6ed0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"EnqueueMessageAsPayload", {}, {::i2c::type_of<::ExitGames::Client::Photon::DeliveryMode>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)()>(&::ExitGames::Client::Photon::TPeer::SendPing)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xa6ecd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"SendPing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.SendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::TPeer::SendData)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa6eda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"SendData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.ReceiveIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::TPeer::ReceiveIncomingCommands)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xa6edd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.ReadPingResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::TPeer::ReadPingResult)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa6ee14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"ReadPingResult", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::TPeer.ReadPingResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::TPeer::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::ExitGames::Client::Photon::TPeer::ReadPingResult)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa6ee244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"ReadPingResult", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*& ExitGames::Client::Photon::TPeer::__cordl_internal_get_incomingList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingList;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_incomingList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingList;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_incomingList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingList = value;
}
constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*& ExitGames::Client::Photon::TPeer::__cordl_internal_get_outgoingStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingStream;
}
constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>* const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_outgoingStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingStream;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_outgoingStream(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingStream = value;
}
constexpr int32_t& ExitGames::Client::Photon::TPeer::__cordl_internal_get_lastPingActivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPingActivity;
}
constexpr int32_t const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_lastPingActivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPingActivity;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_lastPingActivity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPingActivity = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::TPeer::__cordl_internal_get_pingRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingRequest;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_pingRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingRequest;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_pingRequest(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingRequest = value;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary*& ExitGames::Client::Photon::TPeer::__cordl_internal_get_pingParamDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingParamDict;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_pingParamDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingParamDict;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_pingParamDict(::ExitGames::Client::Photon::ParameterDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingParamDict = value;
}
constexpr bool& ExitGames::Client::Photon::TPeer::__cordl_internal_get_DoFraming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DoFraming;
}
constexpr bool const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_DoFraming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DoFraming;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_DoFraming(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DoFraming = value;
}
constexpr bool& ExitGames::Client::Photon::TPeer::__cordl_internal_get_waitForInitResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForInitResponse;
}
constexpr bool const& ExitGames::Client::Photon::TPeer::__cordl_internal_get_waitForInitResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForInitResponse;
}
constexpr void ExitGames::Client::Photon::TPeer::__cordl_internal_set_waitForInitResponse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForInitResponse = value;
}
inline void ExitGames::Client::Photon::TPeer::setStaticF_tcpFramedMessageHead(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "tcpFramedMessageHead", ::ExitGames::Client::Photon::TPeer*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::TPeer::getStaticF_tcpFramedMessageHead()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "tcpFramedMessageHead", ::ExitGames::Client::Photon::TPeer*>();
}
inline void ExitGames::Client::Photon::TPeer::setStaticF_tcpMsgHead(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "tcpMsgHead", ::ExitGames::Client::Photon::TPeer*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::TPeer::getStaticF_tcpMsgHead()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "tcpMsgHead", ::ExitGames::Client::Photon::TPeer*>();
}
inline int32_t ExitGames::Client::Photon::TPeer::get_QueuedIncomingCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::TPeer::get_QueuedOutgoingCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::IsTransportEncrypted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::StringW  appID, ::System::Object*  photonToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverAddress, proxyServerAddress, appID, photonToken);
}
inline void ExitGames::Client::Photon::TPeer::OnConnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::StopConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::FetchServerTimestamp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::TPeer::EnqueueInit(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"EnqueueInit", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool ExitGames::Client::Photon::TPeer::DispatchIncomingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::SendOutgoingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::SendAcksOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::TPeer::EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer*  opBytes, ::ExitGames::Client::Photon::SendOptions  sendParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opBytes, sendParams);
}
inline bool ExitGames::Client::Photon::TPeer::EnqueueMessageAsPayload(::ExitGames::Client::Photon::DeliveryMode  deliveryMode, ::ExitGames::Client::Photon::StreamBuffer*  opMessage, uint8_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"EnqueueMessageAsPayload", {}, {::i2c::type_of<::ExitGames::Client::Photon::DeliveryMode>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deliveryMode, opMessage, channelId);
}
inline void ExitGames::Client::Photon::TPeer::SendPing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"SendPing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::TPeer::SendData(::ArrayW<uint8_t>  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"SendData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data, length);
}
inline void ExitGames::Client::Photon::TPeer::ReceiveIncomingCommands(::ArrayW<uint8_t>  inbuff, int32_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inbuff, dataLength);
}
inline void ExitGames::Client::Photon::TPeer::ReadPingResult(::ArrayW<uint8_t>  inbuff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"ReadPingResult", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inbuff);
}
inline void ExitGames::Client::Photon::TPeer::ReadPingResult(::ExitGames::Client::Photon::OperationResponse*  operationResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::TPeer*>(),
                        {"ReadPingResult", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationResponse);
}
inline ::ExitGames::Client::Photon::TPeer* ExitGames::Client::Photon::TPeer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::TPeer*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::TPeer::TPeer()   {
}
