#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunClient.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunClient_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunClient_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunResult_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::Sockets::Stun::StunClient::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6036000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient.QueryReflexiveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>* (*)(::Fusion::Sockets::NetAddress, ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*, ::System::Nullable_1<::Fusion::Sockets::NetAddress>, ::StringW, bool, ::System::Func_1<bool>*)>(&::Fusion::Sockets::Stun::StunClient::QueryReflexiveInfo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6036078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"QueryReflexiveInfo", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::Sockets::NetAddress>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient.TryParseAndStoreStunMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetAddress*, uint8_t*, int32_t)>(&::Fusion::Sockets::Stun::StunClient::TryParseAndStoreStunMessage)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x6035084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"TryParseAndStoreStunMessage", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient.QueryLocalAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetAddress, ::by_ref<::System::Net::Sockets::AddressFamily>, ::by_ref<::Fusion::Sockets::NetAddress>)>(&::Fusion::Sockets::Stun::StunClient::QueryLocalAddress)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x60365cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"QueryLocalAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::AddressFamily>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetAddress>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient.QueryPublicAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*, ::System::Net::Sockets::AddressFamily, ::by_ref<::System::Guid>, ::by_ref<bool>)>(&::Fusion::Sockets::Stun::StunClient::QueryPublicAddress)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x6036e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"QueryPublicAddress", {}, {::i2c::type_of<::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*>(), ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient.GetLocalAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Net::Sockets::AddressFamily>, ::by_ref<::System::Net::IPAddress*>)>(&::Fusion::Sockets::Stun::StunClient::GetLocalAddress)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x6036a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"GetLocalAddress", {}, {::i2c::type_of<::by_ref<::System::Net::Sockets::AddressFamily>>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::Stun::StunClient::setStaticF_PendingRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>*, "PendingRequests", ::Fusion::Sockets::Stun::StunClient*>(std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>* Fusion::Sockets::Stun::StunClient::getStaticF_PendingRequests()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>*, "PendingRequests", ::Fusion::Sockets::Stun::StunClient*>();
}
inline void Fusion::Sockets::Stun::StunClient::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>* Fusion::Sockets::Stun::StunClient::QueryReflexiveInfo(::Fusion::Sockets::NetAddress  boundLocalAddress, ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  sendDataViaSocket, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  customPublicAddress, ::StringW  customStunServer, bool  extendedAttempts, ::System::Func_1<bool>*  keepRunning)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"QueryReflexiveInfo", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*>(), ::i2c::type_of<::System::Nullable_1<::Fusion::Sockets::NetAddress>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>*>(nullptr, ___internal_method, boundLocalAddress, sendDataViaSocket, customPublicAddress, customStunServer, extendedAttempts, keepRunning);
}
inline bool Fusion::Sockets::Stun::StunClient::TryParseAndStoreStunMessage(::Fusion::Sockets::NetAddress*  origin, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"TryParseAndStoreStunMessage", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, buffer, bufferLength);
}
inline bool Fusion::Sockets::Stun::StunClient::QueryLocalAddress(::Fusion::Sockets::NetAddress  boundLocalAddress, ::by_ref<::System::Net::Sockets::AddressFamily>  addressFamily, ::by_ref<::Fusion::Sockets::NetAddress>  localAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"QueryLocalAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::AddressFamily>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetAddress>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boundLocalAddress, addressFamily, localAddress);
}
inline bool Fusion::Sockets::Stun::StunClient::QueryPublicAddress(::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  sendAnyData, ::System::Net::Sockets::AddressFamily  originalFamily, ::by_ref<::System::Guid>  requestID, ::by_ref<bool>  skipNATDiscovery)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"QueryPublicAddress", {}, {::i2c::type_of<::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*>(), ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sendAnyData, originalFamily, requestID, skipNATDiscovery);
}
inline bool Fusion::Sockets::Stun::StunClient::GetLocalAddress(::by_ref<::System::Net::Sockets::AddressFamily>  addressFamily, ::by_ref<::System::Net::IPAddress*>  localIP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient*>(),
                        {"GetLocalAddress", {}, {::i2c::type_of<::by_ref<::System::Net::Sockets::AddressFamily>>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, addressFamily, localIP);
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunClient::StunClient()   {
}
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::*)()>(&::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6036218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::*)()>(&::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x1060;
  constexpr static std::size_t addrs = 0x6037ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6038e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*> const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_boundLocalAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundLocalAddress;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_boundLocalAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundLocalAddress;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set_boundLocalAddress(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundLocalAddress = value;
}
constexpr ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_sendDataViaSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendDataViaSocket;
}
constexpr ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>* const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_sendDataViaSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendDataViaSocket;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set_sendDataViaSocket(::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendDataViaSocket = value;
}
constexpr ::System::Nullable_1<::Fusion::Sockets::NetAddress>& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_customPublicAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customPublicAddress;
}
constexpr ::System::Nullable_1<::Fusion::Sockets::NetAddress> const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_customPublicAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customPublicAddress;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set_customPublicAddress(::System::Nullable_1<::Fusion::Sockets::NetAddress>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customPublicAddress = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_customStunServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customStunServer;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_customStunServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customStunServer;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set_customStunServer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customStunServer = value;
}
constexpr bool& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_extendedAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedAttempts;
}
constexpr bool const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_extendedAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedAttempts;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set_extendedAttempts(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendedAttempts = value;
}
constexpr ::System::Func_1<bool>*& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_keepRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepRunning;
}
constexpr ::System::Func_1<bool>* const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get_keepRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepRunning;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set_keepRunning(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepRunning = value;
}
constexpr ::System::Net::Sockets::AddressFamily& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__localAddressFamily_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAddressFamily_5__1;
}
constexpr ::System::Net::Sockets::AddressFamily const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__localAddressFamily_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAddressFamily_5__1;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__localAddressFamily_5__1(::System::Net::Sockets::AddressFamily  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localAddressFamily_5__1 = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__localAddress_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAddress_5__2;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__localAddress_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAddress_5__2;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__localAddress_5__2(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localAddress_5__2 = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__publicAddr1_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____publicAddr1_5__3;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__publicAddr1_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____publicAddr1_5__3;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__publicAddr1_5__3(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____publicAddr1_5__3 = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__publicAddr2_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____publicAddr2_5__4;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__publicAddr2_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____publicAddr2_5__4;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__publicAddr2_5__4(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____publicAddr2_5__4 = value;
}
constexpr int32_t& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__debugMultiplier_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMultiplier_5__5;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__debugMultiplier_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMultiplier_5__5;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__debugMultiplier_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugMultiplier_5__5 = value;
}
constexpr int32_t& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__stunTimeout_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunTimeout_5__6;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__stunTimeout_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stunTimeout_5__6;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__stunTimeout_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stunTimeout_5__6 = value;
}
constexpr ::System::Guid& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__requestID_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestID_5__7;
}
constexpr ::System::Guid const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__requestID_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestID_5__7;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__requestID_5__7(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestID_5__7 = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__queryWatch_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryWatch_5__8;
}
constexpr ::System::Diagnostics::Stopwatch* const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__queryWatch_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryWatch_5__8;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__queryWatch_5__8(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queryWatch_5__8 = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__attemptWatch_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attemptWatch_5__9;
}
constexpr ::System::Diagnostics::Stopwatch* const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__attemptWatch_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attemptWatch_5__9;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__attemptWatch_5__9(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attemptWatch_5__9 = value;
}
constexpr bool& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__skipNATDiscovery_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipNATDiscovery_5__10;
}
constexpr bool const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__skipNATDiscovery_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipNATDiscovery_5__10;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__skipNATDiscovery_5__10(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skipNATDiscovery_5__10 = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__addresses_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addresses_5__11;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>* const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__addresses_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addresses_5__11;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__addresses_5__11(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addresses_5__11 = value;
}
constexpr ::ArrayW<::Fusion::Sockets::NetAddress>& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__publicAddresses_5__12()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____publicAddresses_5__12;
}
constexpr ::ArrayW<::Fusion::Sockets::NetAddress> const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get__publicAddresses_5__12() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____publicAddresses_5__12;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set__publicAddresses_5__12(::ArrayW<::Fusion::Sockets::NetAddress>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____publicAddresses_5__12 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3* Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3::StunClient__QueryReflexiveInfo_d__3()   {
}
inline void Fusion::Sockets::Stun::StunClient_TestIPs::setStaticF_TestNetIpv4(::System::Net::IPEndPoint*  value)  {
::cordl_internals::setStaticField<::System::Net::IPEndPoint*, "TestNetIpv4", ::Fusion::Sockets::Stun::StunClient_TestIPs*>(std::forward<::System::Net::IPEndPoint*>(value));
}
inline ::System::Net::IPEndPoint* Fusion::Sockets::Stun::StunClient_TestIPs::getStaticF_TestNetIpv4()  {
return ::cordl_internals::getStaticField<::System::Net::IPEndPoint*, "TestNetIpv4", ::Fusion::Sockets::Stun::StunClient_TestIPs*>();
}
inline void Fusion::Sockets::Stun::StunClient_TestIPs::setStaticF_TestNetIpv6(::System::Net::IPEndPoint*  value)  {
::cordl_internals::setStaticField<::System::Net::IPEndPoint*, "TestNetIpv6", ::Fusion::Sockets::Stun::StunClient_TestIPs*>(std::forward<::System::Net::IPEndPoint*>(value));
}
inline ::System::Net::IPEndPoint* Fusion::Sockets::Stun::StunClient_TestIPs::getStaticF_TestNetIpv6()  {
return ::cordl_internals::getStaticField<::System::Net::IPEndPoint*, "TestNetIpv6", ::Fusion::Sockets::Stun::StunClient_TestIPs*>();
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunClient_TestIPs::StunClient_TestIPs()   {
}
