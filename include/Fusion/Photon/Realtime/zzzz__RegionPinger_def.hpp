#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RegionPinger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegionPinger)
namespace Fusion::Photon::Realtime {
class PhotonPing;
}
namespace Fusion::Photon::Realtime {
class RegionPinger__RegionPingCoroutine_d__22;
}
namespace Fusion::Photon::Realtime {
class Region;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class RegionPinger;
}
namespace Fusion::Photon::Realtime {
class RegionPinger__RegionPingCoroutine_d__22;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::RegionPinger*);
MARK_REF_T(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::RegionPinger*, "Fusion.Photon.Realtime", "RegionPinger");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*, "Fusion.Photon.Realtime", "RegionPinger/<RegionPingCoroutine>d__22");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.RegionPinger
class CORDL_TYPE RegionPinger : public ::System::Object {
public:
// Declarations
using _RegionPingCoroutine_d__22 = ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22;

 __declspec(property(get=get_Aborted, put=set_Aborted)) bool  Aborted;

/// @brief Field Attempts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Attempts, put=setStaticF_Attempts)) int32_t  Attempts;

/// @brief Field CurrentAttempt, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentAttempt, put=__cordl_internal_set_CurrentAttempt)) int32_t  CurrentAttempt;

 __declspec(property(get=get_Done, put=set_Done)) bool  Done;

/// @brief Field MaxMillisecondsPerPing, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxMillisecondsPerPing, put=setStaticF_MaxMillisecondsPerPing)) int32_t  MaxMillisecondsPerPing;

/// @brief Field PingWhenFailed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PingWhenFailed, put=setStaticF_PingWhenFailed)) int32_t  PingWhenFailed;

/// @brief Field <Aborted>k__BackingField, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__Aborted_k__BackingField, put=__cordl_internal_set__Aborted_k__BackingField)) bool  _Aborted_k__BackingField;

/// @brief Field <Done>k__BackingField, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__Done_k__BackingField, put=__cordl_internal_set__Done_k__BackingField)) bool  _Done_k__BackingField;

/// @brief Field onDoneCall, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDoneCall, put=__cordl_internal_set_onDoneCall)) ::System::Action_1<::Fusion::Photon::Realtime::Region*>*  onDoneCall;

/// @brief Field ping, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ping, put=__cordl_internal_set_ping)) ::Fusion::Photon::Realtime::PhotonPing*  ping;

/// @brief Field region, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_region, put=__cordl_internal_set_region)) ::Fusion::Photon::Realtime::Region*  region;

/// @brief Field regionAddress, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_regionAddress, put=__cordl_internal_set_regionAddress)) ::StringW  regionAddress;

/// @brief Field rttResults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rttResults, put=__cordl_internal_set_rttResults)) ::System::Collections::Generic::List_1<int32_t>*  rttResults;

/// @brief Method Abort, addr 0x5f61ab4, size 0x24, virtual false, abstract: false, final false
inline void Abort() ;

/// @brief Method GetPingImplementation, addr 0x5f61e94, size 0x240, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::PhotonPing* GetPingImplementation() ;

/// @brief Method GetResults, addr 0x5f60624, size 0xe8, virtual false, abstract: false, final false
inline ::StringW GetResults() ;

static inline ::Fusion::Photon::Realtime::RegionPinger* New_ctor(::Fusion::Photon::Realtime::Region*  region, ::System::Action_1<::Fusion::Photon::Realtime::Region*>*  onDoneCallback) ;

/// [IteratorStateMachine(typeof(Fusion.Photon.Realtime.RegionPinger::<RegionPingCoroutine>d__22))]
/// @brief Method RegionPingCoroutine, addr 0x5f620d4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RegionPingCoroutine() ;

/// @brief Method RegionPingThreaded, addr 0x5f621dc, size 0x6d0, virtual false, abstract: false, final false
inline bool RegionPingThreaded() ;

/// @brief Method ResolveHost, addr 0x5f628ac, size 0x3d8, virtual false, abstract: false, final false
static inline ::StringW ResolveHost(::StringW  hostName) ;

/// @brief Method Start, addr 0x5f61568, size 0x2cc, virtual false, abstract: false, final false
inline bool Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__19_0, addr 0x5f62d04, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__19_0(::System::Object*  o) ;

constexpr int32_t const& __cordl_internal_get_CurrentAttempt() const;

constexpr int32_t& __cordl_internal_get_CurrentAttempt() ;

constexpr bool const& __cordl_internal_get__Aborted_k__BackingField() const;

constexpr bool& __cordl_internal_get__Aborted_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Done_k__BackingField() const;

constexpr bool& __cordl_internal_get__Done_k__BackingField() ;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::Region*>* const& __cordl_internal_get_onDoneCall() const;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::Region*>*& __cordl_internal_get_onDoneCall() ;

constexpr ::Fusion::Photon::Realtime::PhotonPing* const& __cordl_internal_get_ping() const;

constexpr ::Fusion::Photon::Realtime::PhotonPing*& __cordl_internal_get_ping() ;

constexpr ::Fusion::Photon::Realtime::Region* const& __cordl_internal_get_region() const;

constexpr ::Fusion::Photon::Realtime::Region*& __cordl_internal_get_region() ;

constexpr ::StringW const& __cordl_internal_get_regionAddress() const;

constexpr ::StringW& __cordl_internal_get_regionAddress() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_rttResults() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_rttResults() ;

constexpr void __cordl_internal_set_CurrentAttempt(int32_t  value) ;

constexpr void __cordl_internal_set__Aborted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Done_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_onDoneCall(::System::Action_1<::Fusion::Photon::Realtime::Region*>*  value) ;

constexpr void __cordl_internal_set_ping(::Fusion::Photon::Realtime::PhotonPing*  value) ;

constexpr void __cordl_internal_set_region(::Fusion::Photon::Realtime::Region*  value) ;

constexpr void __cordl_internal_set_regionAddress(::StringW  value) ;

constexpr void __cordl_internal_set_rttResults(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5f614b8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::Region*  region, ::System::Action_1<::Fusion::Photon::Realtime::Region*>*  onDoneCallback) ;

static inline int32_t getStaticF_Attempts() ;

static inline int32_t getStaticF_MaxMillisecondsPerPing() ;

static inline int32_t getStaticF_PingWhenFailed() ;

/// [CompilerGenerated]
/// @brief Method get_Aborted, addr 0x5f61e84, size 0x8, virtual false, abstract: false, final false
inline bool get_Aborted() ;

/// [CompilerGenerated]
/// @brief Method get_Done, addr 0x5f61e74, size 0x8, virtual false, abstract: false, final false
inline bool get_Done() ;

static inline void setStaticF_Attempts(int32_t  value) ;

static inline void setStaticF_MaxMillisecondsPerPing(int32_t  value) ;

static inline void setStaticF_PingWhenFailed(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Aborted, addr 0x5f61e8c, size 0x8, virtual false, abstract: false, final false
inline void set_Aborted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Done, addr 0x5f61e7c, size 0x8, virtual false, abstract: false, final false
inline void set_Done(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionPinger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionPinger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionPinger(RegionPinger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionPinger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionPinger(RegionPinger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28102};

/// @brief Field CurrentAttempt, offset: 0x10, size: 0x4, def value: None
 int32_t  ___CurrentAttempt;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Done>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  ____Done_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Aborted>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  ____Aborted_k__BackingField;

/// @brief Field onDoneCall, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Fusion::Photon::Realtime::Region*>*  ___onDoneCall;

/// @brief Field ping, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::PhotonPing*  ___ping;

/// @brief Field rttResults, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___rttResults;

/// @brief Field region, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Region*  ___region;

/// @brief Field regionAddress, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___regionAddress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ___CurrentAttempt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ____Done_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ____Aborted_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ___onDoneCall) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ___ping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ___rttResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ___region) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger, ___regionAddress) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::RegionPinger) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__22
class CORDL_TYPE RegionPinger__RegionPingCoroutine_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::Photon::Realtime::RegionPinger*  __4__this;

/// @brief Field <address>5__4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__address_5__4, put=__cordl_internal_set__address_5__4)) ::StringW  _address_5__4;

/// @brief Field <bestRtt>5__10, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__bestRtt_5__10, put=__cordl_internal_set__bestRtt_5__10)) int32_t  _bestRtt_5__10;

/// @brief Field <e>5__6, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__6, put=__cordl_internal_set__e_5__6)) ::System::Exception*  _e_5__6;

/// @brief Field <e>5__9, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__9, put=__cordl_internal_set__e_5__9)) ::System::Exception*  _e_5__9;

/// @brief Field <i>5__8, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__8, put=__cordl_internal_set__i_5__8)) int32_t  _i_5__8;

/// @brief Field <indexOfColon>5__5, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__indexOfColon_5__5, put=__cordl_internal_set__indexOfColon_5__5)) int32_t  _indexOfColon_5__5;

/// @brief Field <replyCount>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__replyCount_5__2, put=__cordl_internal_set__replyCount_5__2)) int32_t  _replyCount_5__2;

/// @brief Field <rttSum>5__1, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__rttSum_5__1, put=__cordl_internal_set__rttSum_5__1)) int32_t  _rttSum_5__1;

/// @brief Field <rtt>5__7, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__rtt_5__7, put=__cordl_internal_set__rtt_5__7)) int32_t  _rtt_5__7;

/// @brief Field <sw>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sw_5__3, put=__cordl_internal_set__sw_5__3)) ::System::Diagnostics::Stopwatch*  _sw_5__3;

/// @brief Field <weighedRttSum>5__12, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__weighedRttSum_5__12, put=__cordl_internal_set__weighedRttSum_5__12)) int32_t  _weighedRttSum_5__12;

/// @brief Field <worstRtt>5__11, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__worstRtt_5__11, put=__cordl_internal_set__worstRtt_5__11)) int32_t  _worstRtt_5__11;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5f62d5c, size 0x9f4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5f63750, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5f63758, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f63790, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5f62d08, size 0x54, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Fusion::Photon::Realtime::RegionPinger* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::Photon::Realtime::RegionPinger*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get__address_5__4() const;

constexpr ::StringW& __cordl_internal_get__address_5__4() ;

constexpr int32_t const& __cordl_internal_get__bestRtt_5__10() const;

constexpr int32_t& __cordl_internal_get__bestRtt_5__10() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__6() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__6() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__9() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__9() ;

constexpr int32_t const& __cordl_internal_get__i_5__8() const;

constexpr int32_t& __cordl_internal_get__i_5__8() ;

constexpr int32_t const& __cordl_internal_get__indexOfColon_5__5() const;

constexpr int32_t& __cordl_internal_get__indexOfColon_5__5() ;

constexpr int32_t const& __cordl_internal_get__replyCount_5__2() const;

constexpr int32_t& __cordl_internal_get__replyCount_5__2() ;

constexpr int32_t const& __cordl_internal_get__rttSum_5__1() const;

constexpr int32_t& __cordl_internal_get__rttSum_5__1() ;

constexpr int32_t const& __cordl_internal_get__rtt_5__7() const;

constexpr int32_t& __cordl_internal_get__rtt_5__7() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__sw_5__3() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__sw_5__3() ;

constexpr int32_t const& __cordl_internal_get__weighedRttSum_5__12() const;

constexpr int32_t& __cordl_internal_get__weighedRttSum_5__12() ;

constexpr int32_t const& __cordl_internal_get__worstRtt_5__11() const;

constexpr int32_t& __cordl_internal_get__worstRtt_5__11() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::Photon::Realtime::RegionPinger*  value) ;

constexpr void __cordl_internal_set__address_5__4(::StringW  value) ;

constexpr void __cordl_internal_set__bestRtt_5__10(int32_t  value) ;

constexpr void __cordl_internal_set__e_5__6(::System::Exception*  value) ;

constexpr void __cordl_internal_set__e_5__9(::System::Exception*  value) ;

constexpr void __cordl_internal_set__i_5__8(int32_t  value) ;

constexpr void __cordl_internal_set__indexOfColon_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__replyCount_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__rttSum_5__1(int32_t  value) ;

constexpr void __cordl_internal_set__rtt_5__7(int32_t  value) ;

constexpr void __cordl_internal_set__sw_5__3(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set__weighedRttSum_5__12(int32_t  value) ;

constexpr void __cordl_internal_set__worstRtt_5__11(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5f62c84, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionPinger__RegionPingCoroutine_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionPinger__RegionPingCoroutine_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionPinger__RegionPingCoroutine_d__22(RegionPinger__RegionPingCoroutine_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionPinger__RegionPingCoroutine_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionPinger__RegionPingCoroutine_d__22(RegionPinger__RegionPingCoroutine_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28101};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::RegionPinger*  _____4__this;

/// @brief Field <rttSum>5__1, offset: 0x28, size: 0x4, def value: None
 int32_t  ____rttSum_5__1;

/// @brief Field <replyCount>5__2, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____replyCount_5__2;

/// @brief Field <sw>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____sw_5__3;

/// @brief Field <address>5__4, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____address_5__4;

/// @brief Field <indexOfColon>5__5, offset: 0x40, size: 0x4, def value: None
 int32_t  ____indexOfColon_5__5;

/// @brief Field <e>5__6, offset: 0x48, size: 0x8, def value: None
 ::System::Exception*  ____e_5__6;

/// @brief Field <rtt>5__7, offset: 0x50, size: 0x4, def value: None
 int32_t  ____rtt_5__7;

/// @brief Field <i>5__8, offset: 0x54, size: 0x4, def value: None
 int32_t  ____i_5__8;

/// @brief Field <e>5__9, offset: 0x58, size: 0x8, def value: None
 ::System::Exception*  ____e_5__9;

/// @brief Field <bestRtt>5__10, offset: 0x60, size: 0x4, def value: None
 int32_t  ____bestRtt_5__10;

/// @brief Field <worstRtt>5__11, offset: 0x64, size: 0x4, def value: None
 int32_t  ____worstRtt_5__11;

/// @brief Field <weighedRttSum>5__12, offset: 0x68, size: 0x4, def value: None
 int32_t  ____weighedRttSum_5__12;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____rttSum_5__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____replyCount_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____sw_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____address_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____indexOfColon_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____e_5__6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____rtt_5__7) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____i_5__8) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____e_5__9) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____bestRtt_5__10) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____worstRtt_5__11) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22, ____weighedRttSum_5__12) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22) == 0x70, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
