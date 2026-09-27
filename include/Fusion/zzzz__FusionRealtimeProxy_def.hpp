#pragma once
// IWYU pragma private; include "Fusion/FusionRealtimeProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionRealtimeProxy)
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class PhotonAppSettings;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace Fusion::Photon::Realtime {
class Region;
}
namespace Fusion {
class FusionRealtimeProxy__GetEnabledRegions_d__3;
}
namespace Fusion {
struct RegionInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Fusion {
class FusionRealtimeProxy;
}
namespace Fusion {
class FusionRealtimeProxy__GetEnabledRegions_d__3;
}
// Write type traits
MARK_REF_T(::Fusion::FusionRealtimeProxy*);
MARK_REF_T(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionRealtimeProxy*, "Fusion", "FusionRealtimeProxy");
DEFINE_IL2CPP_CLASS(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*, "Fusion", "FusionRealtimeProxy/<GetEnabledRegions>d__3");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionRealtimeProxy
class CORDL_TYPE FusionRealtimeProxy : public ::System::Object {
public:
// Declarations
using _GetEnabledRegions_d__3 = ::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3;

/// @brief Field _cachedRegionInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedRegionInfo, put=setStaticF__cachedRegionInfo)) ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  _cachedRegionInfo;

/// @brief Field _lastRegionRequestTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastRegionRequestTime, put=setStaticF__lastRegionRequestTime)) float_t  _lastRegionRequestTime;

/// [AsyncStateMachine(typeof(Fusion.FusionRealtimeProxy::<GetEnabledRegions>d__3))]
/// [DebuggerStepThrough]
/// @brief Method GetEnabledRegions, addr 0x5f46cac, size 0x150, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>* GetEnabledRegions(::StringW  appId, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Collections::Generic::List_1<::Fusion::RegionInfo>* getStaticF__cachedRegionInfo() ;

static inline float_t getStaticF__lastRegionRequestTime() ;

static inline void setStaticF__cachedRegionInfo(::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  value) ;

static inline void setStaticF__lastRegionRequestTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionRealtimeProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRealtimeProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRealtimeProxy(FusionRealtimeProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRealtimeProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRealtimeProxy(FusionRealtimeProxy const& ) = delete;

/// @brief Field REGION_INFO_CACHE_TIME offset 0xffffffff size 0x4
static constexpr float_t  REGION_INFO_CACHE_TIME{static_cast<float_t>(10.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28034};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionRealtimeProxy) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionRealtimeProxy/<GetEnabledRegions>d__3
class CORDL_TYPE FusionRealtimeProxy__GetEnabledRegions_d__3 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>s__5, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__5, put=__cordl_internal_set___s__5)) ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  __s__5;

/// @brief Field <>s__6, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__6, put=__cordl_internal_set___s__6)) ::Fusion::Photon::Realtime::RegionHandler*  __s__6;

/// @brief Field <>s__7, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__7, put=__cordl_internal_set___s__7)) ::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*>  __s__7;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  __t__builder;

/// @brief Field <>u__1, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  __u__1;

/// @brief Field <>u__2, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*>  __u__2;

/// @brief Field <>u__3, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__3, put=__cordl_internal_set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__3;

/// @brief Field <client>5__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__client_5__2, put=__cordl_internal_set__client_5__2)) ::Fusion::Photon::Realtime::LoadBalancingClient*  _client_5__2;

/// @brief Field <global>5__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__global_5__1, put=__cordl_internal_set__global_5__1)) ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>  _global_5__1;

/// @brief Field <list>5__4, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__list_5__4, put=__cordl_internal_set__list_5__4)) ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  _list_5__4;

/// @brief Field <regionHandler>5__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__regionHandler_5__3, put=__cordl_internal_set__regionHandler_5__3)) ::Fusion::Photon::Realtime::RegionHandler*  _regionHandler_5__3;

/// @brief Field <region>5__8, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__region_5__8, put=__cordl_internal_set__region_5__8)) ::Fusion::Photon::Realtime::Region*  _region_5__8;

/// @brief Field appId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_appId, put=__cordl_internal_set_appId)) ::StringW  appId;

/// @brief Field cancellationToken, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f46e04, size 0xaf0, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f47dec, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>* const& __cordl_internal_get___s__5() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*& __cordl_internal_get___s__5() ;

constexpr ::Fusion::Photon::Realtime::RegionHandler* const& __cordl_internal_get___s__6() const;

constexpr ::Fusion::Photon::Realtime::RegionHandler*& __cordl_internal_get___s__6() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*> const& __cordl_internal_get___s__7() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*>& __cordl_internal_get___s__7() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*> const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*>& __cordl_internal_get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__3() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__3() ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get__client_5__2() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get__client_5__2() ;

constexpr ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings> const& __cordl_internal_get__global_5__1() const;

constexpr ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>& __cordl_internal_get__global_5__1() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>* const& __cordl_internal_get__list_5__4() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*& __cordl_internal_get__list_5__4() ;

constexpr ::Fusion::Photon::Realtime::RegionHandler* const& __cordl_internal_get__regionHandler_5__3() const;

constexpr ::Fusion::Photon::Realtime::RegionHandler*& __cordl_internal_get__regionHandler_5__3() ;

constexpr ::Fusion::Photon::Realtime::Region* const& __cordl_internal_get__region_5__8() const;

constexpr ::Fusion::Photon::Realtime::Region*& __cordl_internal_get__region_5__8() ;

constexpr ::StringW const& __cordl_internal_get_appId() const;

constexpr ::StringW& __cordl_internal_get_appId() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___s__5(::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  value) ;

constexpr void __cordl_internal_set___s__6(::Fusion::Photon::Realtime::RegionHandler*  value) ;

constexpr void __cordl_internal_set___s__7(::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*>  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*>  value) ;

constexpr void __cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__client_5__2(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set__global_5__1(::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>  value) ;

constexpr void __cordl_internal_set__list_5__4(::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  value) ;

constexpr void __cordl_internal_set__regionHandler_5__3(::Fusion::Photon::Realtime::RegionHandler*  value) ;

constexpr void __cordl_internal_set__region_5__8(::Fusion::Photon::Realtime::Region*  value) ;

constexpr void __cordl_internal_set_appId(::StringW  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f46dfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionRealtimeProxy__GetEnabledRegions_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRealtimeProxy__GetEnabledRegions_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRealtimeProxy__GetEnabledRegions_d__3(FusionRealtimeProxy__GetEnabledRegions_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRealtimeProxy__GetEnabledRegions_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRealtimeProxy__GetEnabledRegions_d__3(FusionRealtimeProxy__GetEnabledRegions_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28033};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  _____t__builder;

/// @brief Field appId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___appId;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field <global>5__1, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>  ____global_5__1;

/// @brief Field <client>5__2, offset: 0x48, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ____client_5__2;

/// @brief Field <regionHandler>5__3, offset: 0x50, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::RegionHandler*  ____regionHandler_5__3;

/// @brief Field <list>5__4, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  ____list_5__4;

/// @brief Field <>s__5, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  _____s__5;

/// @brief Field <>s__6, offset: 0x68, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::RegionHandler*  _____s__6;

/// @brief Field <>s__7, offset: 0x70, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*>  _____s__7;

/// @brief Field <region>5__8, offset: 0x88, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Region*  ____region_5__8;

/// @brief Field <>u__1, offset: 0x90, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  _____u__1;

/// @brief Field <>u__2, offset: 0x98, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*>  _____u__2;

/// @brief Field <>u__3, offset: 0xa0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, ___appId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, ___cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, ____global_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, ____client_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, ____regionHandler_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, ____list_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____s__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____s__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____s__7) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, ____region_5__8) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____u__1) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____u__2) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3, _____u__3) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3) == 0xa8, "Size mismatch!");

} // namespace end def Fusion
