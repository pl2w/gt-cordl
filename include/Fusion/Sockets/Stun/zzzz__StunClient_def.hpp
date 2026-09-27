#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StunClient)
namespace Fusion::Sockets::Stun {
class StunClient_TestIPs;
}
namespace Fusion::Sockets::Stun {
class StunClient__QueryReflexiveInfo_d__3;
}
namespace Fusion::Sockets::Stun {
class StunResult;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion::Sockets::Stun {
class StunClient;
}
namespace Fusion::Sockets::Stun {
class StunClient_TestIPs;
}
namespace Fusion::Sockets::Stun {
class StunClient__QueryReflexiveInfo_d__3;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::Stun::StunClient*);
MARK_REF_T(::Fusion::Sockets::Stun::StunClient_TestIPs*);
MARK_REF_T(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunClient*, "Fusion.Sockets.Stun", "StunClient");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunClient_TestIPs*, "Fusion.Sockets.Stun", "StunClient/TestIPs");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3*, "Fusion.Sockets.Stun", "StunClient/<QueryReflexiveInfo>d__3");
// Dependencies System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunClient
class CORDL_TYPE StunClient : public ::System::Object {
public:
// Declarations
using TestIPs = ::Fusion::Sockets::Stun::StunClient_TestIPs;

using _QueryReflexiveInfo_d__3 = ::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3;

/// @brief Field PendingRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PendingRequests, put=setStaticF_PendingRequests)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>*  PendingRequests;

/// @brief Method GetLocalAddress, addr 0x6036a4c, size 0x3c8, virtual false, abstract: false, final false
static inline bool GetLocalAddress(::by_ref<::System::Net::Sockets::AddressFamily>  addressFamily, ::by_ref<::System::Net::IPAddress*>  localIP) ;

/// @brief Method QueryLocalAddress, addr 0x60365cc, size 0x480, virtual false, abstract: false, final false
static inline bool QueryLocalAddress(::Fusion::Sockets::NetAddress  boundLocalAddress, ::by_ref<::System::Net::Sockets::AddressFamily>  addressFamily, ::by_ref<::Fusion::Sockets::NetAddress>  localAddress) ;

/// @brief Method QueryPublicAddress, addr 0x6036e14, size 0x630, virtual false, abstract: false, final false
static inline bool QueryPublicAddress(::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  sendAnyData, ::System::Net::Sockets::AddressFamily  originalFamily, ::by_ref<::System::Guid>  requestID, ::by_ref<bool>  skipNATDiscovery) ;

/// [AsyncStateMachine(typeof(Fusion.Sockets.Stun.StunClient::<QueryReflexiveInfo>d__3))]
/// [DebuggerStepThrough]
/// @brief Method QueryReflexiveInfo, addr 0x6036078, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>* QueryReflexiveInfo(::Fusion::Sockets::NetAddress  boundLocalAddress, ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  sendDataViaSocket, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  customPublicAddress, ::StringW  customStunServer, bool  extendedAttempts, ::System::Func_1<bool>*  keepRunning) ;

/// @brief Method Reset, addr 0x6036000, size 0x78, virtual false, abstract: false, final false
static inline void Reset() ;

/// @brief Method TryParseAndStoreStunMessage, addr 0x6035084, size 0x3bc, virtual false, abstract: false, final false
static inline bool TryParseAndStoreStunMessage(::Fusion::Sockets::NetAddress*  origin, uint8_t*  buffer, int32_t  bufferLength) ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>* getStaticF_PendingRequests() ;

static inline void setStaticF_PendingRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid,::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunClient(StunClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunClient(StunClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::Stun::StunClient) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
// [CompilerGenerated]
// Dependencies Fusion.Sockets.NetAddress, System.Guid, System.Net.Sockets.AddressFamily, System.Nullable`1<T>, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunClient/<QueryReflexiveInfo>d__3
class CORDL_TYPE StunClient__QueryReflexiveInfo_d__3 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  __t__builder;

/// @brief Field <>u__1, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <addresses>5__11, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__addresses_5__11, put=__cordl_internal_set__addresses_5__11)) ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*  _addresses_5__11;

/// @brief Field <attemptWatch>5__9, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__attemptWatch_5__9, put=__cordl_internal_set__attemptWatch_5__9)) ::System::Diagnostics::Stopwatch*  _attemptWatch_5__9;

/// @brief Field <debugMultiplier>5__5, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__debugMultiplier_5__5, put=__cordl_internal_set__debugMultiplier_5__5)) int32_t  _debugMultiplier_5__5;

/// @brief Field <localAddressFamily>5__1, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__localAddressFamily_5__1, put=__cordl_internal_set__localAddressFamily_5__1)) ::System::Net::Sockets::AddressFamily  _localAddressFamily_5__1;

/// @brief Field <localAddress>5__2, offset 0x80, size 0x18 
 __declspec(property(get=__cordl_internal_get__localAddress_5__2, put=__cordl_internal_set__localAddress_5__2)) ::Fusion::Sockets::NetAddress  _localAddress_5__2;

/// @brief Field <publicAddr1>5__3, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get__publicAddr1_5__3, put=__cordl_internal_set__publicAddr1_5__3)) ::Fusion::Sockets::NetAddress  _publicAddr1_5__3;

/// @brief Field <publicAddr2>5__4, offset 0xb0, size 0x18 
 __declspec(property(get=__cordl_internal_get__publicAddr2_5__4, put=__cordl_internal_set__publicAddr2_5__4)) ::Fusion::Sockets::NetAddress  _publicAddr2_5__4;

/// @brief Field <publicAddresses>5__12, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__publicAddresses_5__12, put=__cordl_internal_set__publicAddresses_5__12)) ::ArrayW<::Fusion::Sockets::NetAddress>  _publicAddresses_5__12;

/// @brief Field <queryWatch>5__8, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__queryWatch_5__8, put=__cordl_internal_set__queryWatch_5__8)) ::System::Diagnostics::Stopwatch*  _queryWatch_5__8;

/// @brief Field <requestID>5__7, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get__requestID_5__7, put=__cordl_internal_set__requestID_5__7)) ::System::Guid  _requestID_5__7;

/// @brief Field <skipNATDiscovery>5__10, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__skipNATDiscovery_5__10, put=__cordl_internal_set__skipNATDiscovery_5__10)) bool  _skipNATDiscovery_5__10;

/// @brief Field <stunTimeout>5__6, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__stunTimeout_5__6, put=__cordl_internal_set__stunTimeout_5__6)) int32_t  _stunTimeout_5__6;

/// @brief Field boundLocalAddress, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_boundLocalAddress, put=__cordl_internal_set_boundLocalAddress)) ::Fusion::Sockets::NetAddress  boundLocalAddress;

/// @brief Field customPublicAddress, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_customPublicAddress, put=__cordl_internal_set_customPublicAddress)) ::System::Nullable_1<::Fusion::Sockets::NetAddress>  customPublicAddress;

/// @brief Field customStunServer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_customStunServer, put=__cordl_internal_set_customStunServer)) ::StringW  customStunServer;

/// @brief Field extendedAttempts, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_extendedAttempts, put=__cordl_internal_set_extendedAttempts)) bool  extendedAttempts;

/// @brief Field keepRunning, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_keepRunning, put=__cordl_internal_set_keepRunning)) ::System::Func_1<bool>*  keepRunning;

/// @brief Field sendDataViaSocket, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendDataViaSocket, put=__cordl_internal_set_sendDataViaSocket)) ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  sendDataViaSocket;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x6037ac8, size 0x1060, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x6038e68, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>* const& __cordl_internal_get__addresses_5__11() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*& __cordl_internal_get__addresses_5__11() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__attemptWatch_5__9() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__attemptWatch_5__9() ;

constexpr int32_t const& __cordl_internal_get__debugMultiplier_5__5() const;

constexpr int32_t& __cordl_internal_get__debugMultiplier_5__5() ;

constexpr ::System::Net::Sockets::AddressFamily const& __cordl_internal_get__localAddressFamily_5__1() const;

constexpr ::System::Net::Sockets::AddressFamily& __cordl_internal_get__localAddressFamily_5__1() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__localAddress_5__2() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__localAddress_5__2() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__publicAddr1_5__3() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__publicAddr1_5__3() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__publicAddr2_5__4() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__publicAddr2_5__4() ;

constexpr ::ArrayW<::Fusion::Sockets::NetAddress> const& __cordl_internal_get__publicAddresses_5__12() const;

constexpr ::ArrayW<::Fusion::Sockets::NetAddress>& __cordl_internal_get__publicAddresses_5__12() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__queryWatch_5__8() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__queryWatch_5__8() ;

constexpr ::System::Guid const& __cordl_internal_get__requestID_5__7() const;

constexpr ::System::Guid& __cordl_internal_get__requestID_5__7() ;

constexpr bool const& __cordl_internal_get__skipNATDiscovery_5__10() const;

constexpr bool& __cordl_internal_get__skipNATDiscovery_5__10() ;

constexpr int32_t const& __cordl_internal_get__stunTimeout_5__6() const;

constexpr int32_t& __cordl_internal_get__stunTimeout_5__6() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get_boundLocalAddress() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get_boundLocalAddress() ;

constexpr ::System::Nullable_1<::Fusion::Sockets::NetAddress> const& __cordl_internal_get_customPublicAddress() const;

constexpr ::System::Nullable_1<::Fusion::Sockets::NetAddress>& __cordl_internal_get_customPublicAddress() ;

constexpr ::StringW const& __cordl_internal_get_customStunServer() const;

constexpr ::StringW& __cordl_internal_get_customStunServer() ;

constexpr bool const& __cordl_internal_get_extendedAttempts() const;

constexpr bool& __cordl_internal_get_extendedAttempts() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_keepRunning() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_keepRunning() ;

constexpr ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>* const& __cordl_internal_get_sendDataViaSocket() const;

constexpr ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*& __cordl_internal_get_sendDataViaSocket() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__addresses_5__11(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*  value) ;

constexpr void __cordl_internal_set__attemptWatch_5__9(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set__debugMultiplier_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__localAddressFamily_5__1(::System::Net::Sockets::AddressFamily  value) ;

constexpr void __cordl_internal_set__localAddress_5__2(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set__publicAddr1_5__3(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set__publicAddr2_5__4(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set__publicAddresses_5__12(::ArrayW<::Fusion::Sockets::NetAddress>  value) ;

constexpr void __cordl_internal_set__queryWatch_5__8(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set__requestID_5__7(::System::Guid  value) ;

constexpr void __cordl_internal_set__skipNATDiscovery_5__10(bool  value) ;

constexpr void __cordl_internal_set__stunTimeout_5__6(int32_t  value) ;

constexpr void __cordl_internal_set_boundLocalAddress(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set_customPublicAddress(::System::Nullable_1<::Fusion::Sockets::NetAddress>  value) ;

constexpr void __cordl_internal_set_customStunServer(::StringW  value) ;

constexpr void __cordl_internal_set_extendedAttempts(bool  value) ;

constexpr void __cordl_internal_set_keepRunning(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_sendDataViaSocket(::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  value) ;

/// @brief Method .ctor, addr 0x6036218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunClient__QueryReflexiveInfo_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunClient__QueryReflexiveInfo_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunClient__QueryReflexiveInfo_d__3(StunClient__QueryReflexiveInfo_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunClient__QueryReflexiveInfo_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunClient__QueryReflexiveInfo_d__3(StunClient__QueryReflexiveInfo_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29400};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  _____t__builder;

/// @brief Field boundLocalAddress, offset: 0x30, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ___boundLocalAddress;

/// @brief Field sendDataViaSocket, offset: 0x48, size: 0x8, def value: None
 ::System::Func_3<::ArrayW<uint8_t>,::Fusion::Sockets::NetAddress,bool>*  ___sendDataViaSocket;

/// @brief Field customPublicAddress, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Sockets::NetAddress>  ___customPublicAddress;

/// @brief Field customStunServer, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___customStunServer;

/// @brief Field extendedAttempts, offset: 0x68, size: 0x1, def value: None
 bool  ___extendedAttempts;

/// @brief Field keepRunning, offset: 0x70, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___keepRunning;

/// @brief Field <localAddressFamily>5__1, offset: 0x78, size: 0x4, def value: None
 ::System::Net::Sockets::AddressFamily  ____localAddressFamily_5__1;

/// @brief Field <localAddress>5__2, offset: 0x80, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____localAddress_5__2;

/// @brief Field <publicAddr1>5__3, offset: 0x98, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____publicAddr1_5__3;

/// @brief Field <publicAddr2>5__4, offset: 0xb0, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____publicAddr2_5__4;

/// @brief Field <debugMultiplier>5__5, offset: 0xc8, size: 0x4, def value: None
 int32_t  ____debugMultiplier_5__5;

/// @brief Field <stunTimeout>5__6, offset: 0xcc, size: 0x4, def value: None
 int32_t  ____stunTimeout_5__6;

/// @brief Field <requestID>5__7, offset: 0xd0, size: 0x10, def value: None
 ::System::Guid  ____requestID_5__7;

/// @brief Field <queryWatch>5__8, offset: 0xe0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____queryWatch_5__8;

/// @brief Field <attemptWatch>5__9, offset: 0xe8, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____attemptWatch_5__9;

/// @brief Field <skipNATDiscovery>5__10, offset: 0xf0, size: 0x1, def value: None
 bool  ____skipNATDiscovery_5__10;

/// @brief Field <addresses>5__11, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Fusion::Sockets::NetAddress>*  ____addresses_5__11;

/// @brief Field <publicAddresses>5__12, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::Fusion::Sockets::NetAddress>  ____publicAddresses_5__12;

/// @brief Field <>u__1, offset: 0x108, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

/// @brief Size padding 0x120 - 0x110 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ___boundLocalAddress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ___sendDataViaSocket) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ___customPublicAddress) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ___customStunServer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ___extendedAttempts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ___keepRunning) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____localAddressFamily_5__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____localAddress_5__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____publicAddr1_5__3) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____publicAddr2_5__4) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____debugMultiplier_5__5) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____stunTimeout_5__6) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____requestID_5__7) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____queryWatch_5__8) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____attemptWatch_5__9) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____skipNATDiscovery_5__10) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____addresses_5__11) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, ____publicAddresses_5__12) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3, _____u__1) == 0x108, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::StunClient__QueryReflexiveInfo_d__3) == 0x120, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
// Dependencies System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunClient/TestIPs
class CORDL_TYPE StunClient_TestIPs : public ::System::Object {
public:
// Declarations
/// @brief Field TestNetIpv4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TestNetIpv4, put=setStaticF_TestNetIpv4)) ::System::Net::IPEndPoint*  TestNetIpv4;

/// @brief Field TestNetIpv6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TestNetIpv6, put=setStaticF_TestNetIpv6)) ::System::Net::IPEndPoint*  TestNetIpv6;

static inline ::System::Net::IPEndPoint* getStaticF_TestNetIpv4() ;

static inline ::System::Net::IPEndPoint* getStaticF_TestNetIpv6() ;

static inline void setStaticF_TestNetIpv4(::System::Net::IPEndPoint*  value) ;

static inline void setStaticF_TestNetIpv6(::System::Net::IPEndPoint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunClient_TestIPs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunClient_TestIPs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunClient_TestIPs(StunClient_TestIPs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunClient_TestIPs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunClient_TestIPs(StunClient_TestIPs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29399};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::Stun::StunClient_TestIPs) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
