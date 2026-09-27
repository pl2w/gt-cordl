#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunServers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StunServers)
namespace Fusion::Sockets::Stun {
class StunServer_StunServers_Pv4AddrEqualityComparer;
}
namespace Fusion::Sockets::Stun {
class StunServers_StunServer;
}
namespace Fusion::Sockets::Stun {
class StunServers__ResolveStunServerInfo_d__7;
}
namespace Fusion::Sockets::Stun {
class StunServers__SetupStunServers_d__6;
}
namespace Fusion::Sockets::Stun {
class StunServers___c;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Fusion::Sockets::Stun {
class StunServer_StunServers_Pv4AddrEqualityComparer;
}
namespace Fusion::Sockets::Stun {
class StunServers;
}
namespace Fusion::Sockets::Stun {
class StunServers_StunServer;
}
namespace Fusion::Sockets::Stun {
class StunServers__ResolveStunServerInfo_d__7;
}
namespace Fusion::Sockets::Stun {
class StunServers__SetupStunServers_d__6;
}
namespace Fusion::Sockets::Stun {
class StunServers___c;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*);
MARK_REF_T(::Fusion::Sockets::Stun::StunServers*);
MARK_REF_T(::Fusion::Sockets::Stun::StunServers_StunServer*);
MARK_REF_T(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*);
MARK_REF_T(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*);
MARK_REF_T(::Fusion::Sockets::Stun::StunServers___c*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer*, "Fusion.Sockets.Stun", "StunServers/StunServer/Pv4AddrEqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunServers*, "Fusion.Sockets.Stun", "StunServers");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunServers_StunServer*, "Fusion.Sockets.Stun", "StunServers/StunServer");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7*, "Fusion.Sockets.Stun", "StunServers/<ResolveStunServerInfo>d__7");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6*, "Fusion.Sockets.Stun", "StunServers/<SetupStunServers>d__6");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunServers___c*, "Fusion.Sockets.Stun", "StunServers/<>c");
// Dependencies Fusion.Sockets.Stun.StunServers::StunServer, System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunServers
class CORDL_TYPE StunServers : public ::System::Object {
public:
// Declarations
using StunServer = ::Fusion::Sockets::Stun::StunServers_StunServer;

using _ResolveStunServerInfo_d__7 = ::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7;

using _SetupStunServers_d__6 = ::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6;

using __c = ::Fusion::Sockets::Stun::StunServers___c;

/// @brief Field DefaultStunServerList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultStunServerList, put=setStaticF_DefaultStunServerList)) ::ArrayW<::StringW>  DefaultStunServerList;

/// @brief Field _runningResolution, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__runningResolution, put=setStaticF__runningResolution)) bool  _runningResolution;

/// @brief Field _stunServers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__stunServers, put=setStaticF__stunServers)) ::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*>  _stunServers;

/// @brief Method GetStunServer, addr 0x6037444, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* GetStunServer(bool  IPv6Support) ;

/// [AsyncStateMachine(typeof(Fusion.Sockets.Stun.StunServers::<ResolveStunServerInfo>d__7))]
/// [DebuggerStepThrough]
/// @brief Method ResolveStunServerInfo, addr 0x603a8d4, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* ResolveStunServerInfo(::StringW  stunServerAddress) ;

/// [AsyncStateMachine(typeof(Fusion.Sockets.Stun.StunServers::<SetupStunServers>d__6))]
/// [DebuggerStepThrough]
/// @brief Method SetupStunServers, addr 0x6038b28, size 0x114, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SetupStunServers(::StringW  customStunServer) ;

static inline ::ArrayW<::StringW> getStaticF_DefaultStunServerList() ;

static inline bool getStaticF__runningResolution() ;

static inline ::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*> getStaticF__stunServers() ;

static inline void setStaticF_DefaultStunServerList(::ArrayW<::StringW>  value) ;

static inline void setStaticF__runningResolution(bool  value) ;

static inline void setStaticF__stunServers(::ArrayW<::Fusion::Sockets::Stun::StunServers_StunServer*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunServers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunServers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunServers(StunServers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunServers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunServers(StunServers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::Stun::StunServers) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__6
class CORDL_TYPE StunServers__SetupStunServers_d__6 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>s__12, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__12, put=__cordl_internal_set___s__12)) ::Fusion::Sockets::Stun::StunServers_StunServer*  __s__12;

/// @brief Field <>s__3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__3, put=__cordl_internal_set___s__3)) ::ArrayW<::StringW>  __s__3;

/// @brief Field <>s__4, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) int32_t  __s__4;

/// @brief Field <>s__7, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__7, put=__cordl_internal_set___s__7)) ::Fusion::Sockets::Stun::StunServers_StunServer*  __s__7;

/// @brief Field <>s__8, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__8, put=__cordl_internal_set___s__8)) ::ArrayW<::StringW>  __s__8;

/// @brief Field <>s__9, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__9, put=__cordl_internal_set___s__9)) int32_t  __s__9;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  __u__2;

/// @brief Field <customStunServerResolved>5__6, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__customStunServerResolved_5__6, put=__cordl_internal_set__customStunServerResolved_5__6)) ::Fusion::Sockets::Stun::StunServers_StunServer*  _customStunServerResolved_5__6;

/// @brief Field <customStunServers>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__customStunServers_5__2, put=__cordl_internal_set__customStunServers_5__2)) ::ArrayW<::StringW>  _customStunServers_5__2;

/// @brief Field <server>5__11, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__server_5__11, put=__cordl_internal_set__server_5__11)) ::Fusion::Sockets::Stun::StunServers_StunServer*  _server_5__11;

/// @brief Field <stunServerAddress>5__10, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__stunServerAddress_5__10, put=__cordl_internal_set__stunServerAddress_5__10)) ::StringW  _stunServerAddress_5__10;

/// @brief Field <stunServerAddress>5__5, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__stunServerAddress_5__5, put=__cordl_internal_set__stunServerAddress_5__5)) ::StringW  _stunServerAddress_5__5;

/// @brief Field <stunServers>5__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stunServers_5__1, put=__cordl_internal_set__stunServers_5__1)) ::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*  _stunServers_5__1;

/// @brief Field customStunServer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_customStunServer, put=__cordl_internal_set_customStunServer)) ::StringW  customStunServer;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x603bcf8, size 0xa08, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x603c700, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& __cordl_internal_get___s__12() const;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& __cordl_internal_get___s__12() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get___s__3() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get___s__3() ;

constexpr int32_t const& __cordl_internal_get___s__4() const;

constexpr int32_t& __cordl_internal_get___s__4() ;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& __cordl_internal_get___s__7() const;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& __cordl_internal_get___s__7() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get___s__8() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get___s__8() ;

constexpr int32_t const& __cordl_internal_get___s__9() const;

constexpr int32_t& __cordl_internal_get___s__9() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*> const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*>& __cordl_internal_get___u__2() ;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& __cordl_internal_get__customStunServerResolved_5__6() const;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& __cordl_internal_get__customStunServerResolved_5__6() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__customStunServers_5__2() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__customStunServers_5__2() ;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& __cordl_internal_get__server_5__11() const;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& __cordl_internal_get__server_5__11() ;

constexpr ::StringW const& __cordl_internal_get__stunServerAddress_5__10() const;

constexpr ::StringW& __cordl_internal_get__stunServerAddress_5__10() ;

constexpr ::StringW const& __cordl_internal_get__stunServerAddress_5__5() const;

constexpr ::StringW& __cordl_internal_get__stunServerAddress_5__5() ;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* const& __cordl_internal_get__stunServers_5__1() const;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*& __cordl_internal_get__stunServers_5__1() ;

constexpr ::StringW const& __cordl_internal_get_customStunServer() const;

constexpr ::StringW& __cordl_internal_get_customStunServer() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___s__12(::Fusion::Sockets::Stun::StunServers_StunServer*  value) ;

constexpr void __cordl_internal_set___s__3(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set___s__4(int32_t  value) ;

constexpr void __cordl_internal_set___s__7(::Fusion::Sockets::Stun::StunServers_StunServer*  value) ;

constexpr void __cordl_internal_set___s__8(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set___s__9(int32_t  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  value) ;

constexpr void __cordl_internal_set__customStunServerResolved_5__6(::Fusion::Sockets::Stun::StunServers_StunServer*  value) ;

constexpr void __cordl_internal_set__customStunServers_5__2(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__server_5__11(::Fusion::Sockets::Stun::StunServers_StunServer*  value) ;

constexpr void __cordl_internal_set__stunServerAddress_5__10(::StringW  value) ;

constexpr void __cordl_internal_set__stunServerAddress_5__5(::StringW  value) ;

constexpr void __cordl_internal_set__stunServers_5__1(::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*  value) ;

constexpr void __cordl_internal_set_customStunServer(::StringW  value) ;

/// @brief Method .ctor, addr 0x603a8cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunServers__SetupStunServers_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunServers__SetupStunServers_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunServers__SetupStunServers_d__6(StunServers__SetupStunServers_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunServers__SetupStunServers_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunServers__SetupStunServers_d__6(StunServers__SetupStunServers_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29412};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field customStunServer, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___customStunServer;

/// @brief Field <stunServers>5__1, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*  ____stunServers_5__1;

/// @brief Field <customStunServers>5__2, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____customStunServers_5__2;

/// @brief Field <>s__3, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  _____s__3;

/// @brief Field <>s__4, offset: 0x50, size: 0x4, def value: None
 int32_t  _____s__4;

/// @brief Field <stunServerAddress>5__5, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____stunServerAddress_5__5;

/// @brief Field <customStunServerResolved>5__6, offset: 0x60, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunServers_StunServer*  ____customStunServerResolved_5__6;

/// @brief Field <>s__7, offset: 0x68, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunServers_StunServer*  _____s__7;

/// @brief Field <>s__8, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::StringW>  _____s__8;

/// @brief Field <>s__9, offset: 0x78, size: 0x4, def value: None
 int32_t  _____s__9;

/// @brief Field <stunServerAddress>5__10, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____stunServerAddress_5__10;

/// @brief Field <server>5__11, offset: 0x88, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunServers_StunServer*  ____server_5__11;

/// @brief Field <>s__12, offset: 0x90, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunServers_StunServer*  _____s__12;

/// @brief Field <>u__1, offset: 0x98, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

/// @brief Field <>u__2, offset: 0xa0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  _____u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, ___customStunServer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, ____stunServers_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, ____customStunServers_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____s__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____s__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, ____stunServerAddress_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, ____customStunServerResolved_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____s__7) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____s__8) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____s__9) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, ____stunServerAddress_5__10) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, ____server_5__11) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____s__12) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____u__1) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6, _____u__2) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::StunServers__SetupStunServers_d__6) == 0xa8, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
// [CompilerGenerated]
// Dependencies Fusion.Sockets.NetAddress, System.Net.IPAddress, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunServers/<ResolveStunServerInfo>d__7
class CORDL_TYPE StunServers__ResolveStunServerInfo_d__7 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>s__10, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__10, put=__cordl_internal_set___s__10)) int32_t  __s__10;

/// @brief Field <>s__8, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__8, put=__cordl_internal_set___s__8)) ::ArrayW<::System::Net::IPAddress*>  __s__8;

/// @brief Field <>s__9, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__9, put=__cordl_internal_set___s__9)) ::ArrayW<::System::Net::IPAddress*>  __s__9;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  __t__builder;

/// @brief Field <>u__1, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>  __u__1;

/// @brief Field <addressList>5__7, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__addressList_5__7, put=__cordl_internal_set__addressList_5__7)) ::ArrayW<::System::Net::IPAddress*>  _addressList_5__7;

/// @brief Field <addressParts>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__addressParts_5__2, put=__cordl_internal_set__addressParts_5__2)) ::ArrayW<::StringW>  _addressParts_5__2;

/// @brief Field <address>5__5, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__address_5__5, put=__cordl_internal_set__address_5__5)) ::System::Net::IPAddress*  _address_5__5;

/// @brief Field <ipOrName>5__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ipOrName_5__1, put=__cordl_internal_set__ipOrName_5__1)) ::StringW  _ipOrName_5__1;

/// @brief Field <netAddress>5__6, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get__netAddress_5__6, put=__cordl_internal_set__netAddress_5__6)) ::Fusion::Sockets::NetAddress  _netAddress_5__6;

/// @brief Field <port>5__3, offset 0x48, size 0x2 
 __declspec(property(get=__cordl_internal_get__port_5__3, put=__cordl_internal_set__port_5__3)) uint16_t  _port_5__3;

/// @brief Field <serverAddress>5__11, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverAddress_5__11, put=__cordl_internal_set__serverAddress_5__11)) ::System::Net::IPAddress*  _serverAddress_5__11;

/// @brief Field <stunServer>5__4, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__stunServer_5__4, put=__cordl_internal_set__stunServer_5__4)) ::Fusion::Sockets::Stun::StunServers_StunServer*  _stunServer_5__4;

/// @brief Field stunServerAddress, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stunServerAddress, put=__cordl_internal_set_stunServerAddress)) ::StringW  stunServerAddress;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x603afac, size 0xd48, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x603bcf4, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr int32_t const& __cordl_internal_get___s__10() const;

constexpr int32_t& __cordl_internal_get___s__10() ;

constexpr ::ArrayW<::System::Net::IPAddress*> const& __cordl_internal_get___s__8() const;

constexpr ::ArrayW<::System::Net::IPAddress*>& __cordl_internal_get___s__8() ;

constexpr ::ArrayW<::System::Net::IPAddress*> const& __cordl_internal_get___s__9() const;

constexpr ::ArrayW<::System::Net::IPAddress*>& __cordl_internal_get___s__9() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>& __cordl_internal_get___u__1() ;

constexpr ::ArrayW<::System::Net::IPAddress*> const& __cordl_internal_get__addressList_5__7() const;

constexpr ::ArrayW<::System::Net::IPAddress*>& __cordl_internal_get__addressList_5__7() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__addressParts_5__2() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__addressParts_5__2() ;

constexpr ::System::Net::IPAddress* const& __cordl_internal_get__address_5__5() const;

constexpr ::System::Net::IPAddress*& __cordl_internal_get__address_5__5() ;

constexpr ::StringW const& __cordl_internal_get__ipOrName_5__1() const;

constexpr ::StringW& __cordl_internal_get__ipOrName_5__1() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__netAddress_5__6() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__netAddress_5__6() ;

constexpr uint16_t const& __cordl_internal_get__port_5__3() const;

constexpr uint16_t& __cordl_internal_get__port_5__3() ;

constexpr ::System::Net::IPAddress* const& __cordl_internal_get__serverAddress_5__11() const;

constexpr ::System::Net::IPAddress*& __cordl_internal_get__serverAddress_5__11() ;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer* const& __cordl_internal_get__stunServer_5__4() const;

constexpr ::Fusion::Sockets::Stun::StunServers_StunServer*& __cordl_internal_get__stunServer_5__4() ;

constexpr ::StringW const& __cordl_internal_get_stunServerAddress() const;

constexpr ::StringW& __cordl_internal_get_stunServerAddress() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___s__10(int32_t  value) ;

constexpr void __cordl_internal_set___s__8(::ArrayW<::System::Net::IPAddress*>  value) ;

constexpr void __cordl_internal_set___s__9(::ArrayW<::System::Net::IPAddress*>  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>  value) ;

constexpr void __cordl_internal_set__addressList_5__7(::ArrayW<::System::Net::IPAddress*>  value) ;

constexpr void __cordl_internal_set__addressParts_5__2(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__address_5__5(::System::Net::IPAddress*  value) ;

constexpr void __cordl_internal_set__ipOrName_5__1(::StringW  value) ;

constexpr void __cordl_internal_set__netAddress_5__6(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set__port_5__3(uint16_t  value) ;

constexpr void __cordl_internal_set__serverAddress_5__11(::System::Net::IPAddress*  value) ;

constexpr void __cordl_internal_set__stunServer_5__4(::Fusion::Sockets::Stun::StunServers_StunServer*  value) ;

constexpr void __cordl_internal_set_stunServerAddress(::StringW  value) ;

/// @brief Method .ctor, addr 0x603aa10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunServers__ResolveStunServerInfo_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunServers__ResolveStunServerInfo_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunServers__ResolveStunServerInfo_d__7(StunServers__ResolveStunServerInfo_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunServers__ResolveStunServerInfo_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunServers__ResolveStunServerInfo_d__7(StunServers__ResolveStunServerInfo_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29411};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers_StunServer*>  _____t__builder;

/// @brief Field stunServerAddress, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___stunServerAddress;

/// @brief Field <ipOrName>5__1, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____ipOrName_5__1;

/// @brief Field <addressParts>5__2, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____addressParts_5__2;

/// @brief Field <port>5__3, offset: 0x48, size: 0x2, def value: None
 uint16_t  ____port_5__3;

/// @brief Field <stunServer>5__4, offset: 0x50, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunServers_StunServer*  ____stunServer_5__4;

/// @brief Field <address>5__5, offset: 0x58, size: 0x8, def value: None
 ::System::Net::IPAddress*  ____address_5__5;

/// @brief Field <netAddress>5__6, offset: 0x60, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____netAddress_5__6;

/// @brief Field <addressList>5__7, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::System::Net::IPAddress*>  ____addressList_5__7;

/// @brief Field <>s__8, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::System::Net::IPAddress*>  _____s__8;

/// @brief Field <>s__9, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::System::Net::IPAddress*>  _____s__9;

/// @brief Field <>s__10, offset: 0x90, size: 0x4, def value: None
 int32_t  _____s__10;

/// @brief Field <serverAddress>5__11, offset: 0x98, size: 0x8, def value: None
 ::System::Net::IPAddress*  ____serverAddress_5__11;

/// @brief Field <>u__1, offset: 0xa0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ___stunServerAddress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____ipOrName_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____addressParts_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____port_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____stunServer_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____address_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____netAddress_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____addressList_5__7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, _____s__8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, _____s__9) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, _____s__10) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, ____serverAddress_5__11) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7, _____u__1) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::StunServers__ResolveStunServerInfo_d__7) == 0xa8, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunServers/<>c
class CORDL_TYPE StunServers___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::Sockets::Stun::StunServers___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_2<::StringW,::StringW>*  __9__6_0;

static inline ::Fusion::Sockets::Stun::StunServers___c* New_ctor() ;

/// @brief Method <SetupStunServers>b__6_0, addr 0x603af94, size 0x18, virtual false, abstract: false, final false
inline ::StringW _SetupStunServers_b__6_0(::StringW  s) ;

/// @brief Method .ctor, addr 0x603af8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::Sockets::Stun::StunServers___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,::StringW>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::Fusion::Sockets::Stun::StunServers___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunServers___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunServers___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunServers___c(StunServers___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunServers___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunServers___c(StunServers___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::Stun::StunServers___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
// Dependencies Fusion.Sockets.NetAddress, System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunServers/StunServer
class CORDL_TYPE StunServers_StunServer : public ::System::Object {
public:
// Declarations
using Pv4AddrEqualityComparer = ::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer;

 __declspec(property(get=get_HasIPv4Support)) bool  HasIPv4Support;

 __declspec(property(get=get_HasIPv6Support)) bool  HasIPv6Support;

/// @brief Field IPv4Addr, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_IPv4Addr, put=__cordl_internal_set_IPv4Addr)) ::Fusion::Sockets::NetAddress  IPv4Addr;

/// @brief Field IPv6Addr, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_IPv6Addr, put=__cordl_internal_set_IPv6Addr)) ::Fusion::Sockets::NetAddress  IPv6Addr;

/// @brief Field <StunServerEqualityComparer>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__StunServerEqualityComparer_k__BackingField, put=setStaticF__StunServerEqualityComparer_k__BackingField)) ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*  _StunServerEqualityComparer_k__BackingField;

static inline ::Fusion::Sockets::Stun::StunServers_StunServer* New_ctor() ;

/// @brief Method ToString, addr 0x603aa18, size 0x29c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get_IPv4Addr() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get_IPv4Addr() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get_IPv6Addr() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get_IPv6Addr() ;

constexpr void __cordl_internal_set_IPv4Addr(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set_IPv6Addr(::Fusion::Sockets::NetAddress  value) ;

/// @brief Method .ctor, addr 0x603ad0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* getStaticF__StunServerEqualityComparer_k__BackingField() ;

/// @brief Method get_HasIPv4Support, addr 0x603a81c, size 0x58, virtual false, abstract: false, final false
inline bool get_HasIPv4Support() ;

/// @brief Method get_HasIPv6Support, addr 0x603a874, size 0x58, virtual false, abstract: false, final false
inline bool get_HasIPv6Support() ;

/// [CompilerGenerated]
/// @brief Method get_StunServerEqualityComparer, addr 0x603acb4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* get_StunServerEqualityComparer() ;

static inline void setStaticF__StunServerEqualityComparer_k__BackingField(::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunServers_StunServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunServers_StunServer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunServers_StunServer(StunServers_StunServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunServers_StunServer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunServers_StunServer(StunServers_StunServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29409};

/// @brief Field IPv4Addr, offset: 0x10, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ___IPv4Addr;

/// @brief Field IPv6Addr, offset: 0x28, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ___IPv6Addr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::StunServers_StunServer, ___IPv4Addr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunServers_StunServer, ___IPv6Addr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::StunServers_StunServer) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
// Dependencies System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunServers/StunServer/Pv4AddrEqualityComparer
class CORDL_TYPE StunServer_StunServers_Pv4AddrEqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>*() noexcept;

/// @brief Method Equals, addr 0x603ad98, size 0x12c, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Sockets::Stun::StunServers_StunServer*  x, ::Fusion::Sockets::Stun::StunServers_StunServer*  y) ;

/// @brief Method GetHashCode, addr 0x603aec4, size 0x60, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::Sockets::Stun::StunServers_StunServer*  obj) ;

static inline ::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x603ad90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Sockets::Stun::StunServers_StunServer*>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__Sockets__Stun__StunServers_StunServer__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunServer_StunServers_Pv4AddrEqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunServer_StunServers_Pv4AddrEqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunServer_StunServers_Pv4AddrEqualityComparer(StunServer_StunServers_Pv4AddrEqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunServer_StunServers_Pv4AddrEqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunServer_StunServers_Pv4AddrEqualityComparer(StunServer_StunServers_Pv4AddrEqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29408};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::Stun::StunServer_StunServers_Pv4AddrEqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
