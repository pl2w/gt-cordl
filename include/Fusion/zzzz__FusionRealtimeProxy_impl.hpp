#pragma once
// IWYU pragma private; include "Fusion/FusionRealtimeProxy.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionRealtimeProxy_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonAppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Region_def.hpp"
#include "Fusion/zzzz__FusionRealtimeProxy_def.hpp"
#include "Fusion/zzzz__RegionInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Fusion::FusionRealtimeProxy.GetEnabledRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>* (*)(::StringW, ::System::Threading::CancellationToken)>(&::Fusion::FusionRealtimeProxy::GetEnabledRegions)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f46cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy*>(),
                        {"GetEnabledRegions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionRealtimeProxy::setStaticF__lastRegionRequestTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_lastRegionRequestTime", ::Fusion::FusionRealtimeProxy*>(std::forward<float_t>(value));
}
inline float_t Fusion::FusionRealtimeProxy::getStaticF__lastRegionRequestTime()  {
return ::cordl_internals::getStaticField<float_t, "_lastRegionRequestTime", ::Fusion::FusionRealtimeProxy*>();
}
inline void Fusion::FusionRealtimeProxy::setStaticF__cachedRegionInfo(::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*, "_cachedRegionInfo", ::Fusion::FusionRealtimeProxy*>(std::forward<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>(value));
}
inline ::System::Collections::Generic::List_1<::Fusion::RegionInfo>* Fusion::FusionRealtimeProxy::getStaticF__cachedRegionInfo()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*, "_cachedRegionInfo", ::Fusion::FusionRealtimeProxy*>();
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>* Fusion::FusionRealtimeProxy::GetEnabledRegions(::StringW  appId, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy*>(),
                        {"GetEnabledRegions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>*>(nullptr, ___internal_method, appId, cancellationToken);
}
// Ctor Parameters []
constexpr ::Fusion::FusionRealtimeProxy::FusionRealtimeProxy()   {
}
//  Writing Method size for method: ::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::*)()>(&::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::*)()>(&::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::MoveNext)> {
  constexpr static std::size_t size = 0xaf0;
  constexpr static std::size_t addrs = 0x5f46e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f47dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*> const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::StringW& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get_appId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appId;
}
constexpr ::StringW const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get_appId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appId;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set_appId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appId = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__global_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____global_5__1;
}
constexpr ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings> const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__global_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____global_5__1;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set__global_5__1(::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____global_5__1 = value;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__client_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client_5__2;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__client_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client_5__2;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set__client_5__2(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client_5__2 = value;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler*& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__regionHandler_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regionHandler_5__3;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler* const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__regionHandler_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regionHandler_5__3;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set__regionHandler_5__3(::Fusion::Photon::Realtime::RegionHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____regionHandler_5__3 = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__list_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list_5__4;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>* const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__list_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list_5__4;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set__list_5__4(::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____list_5__4 = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>*& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___s__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::RegionInfo>* const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___s__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___s__5(::System::Collections::Generic::List_1<::Fusion::RegionInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__5 = value;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler*& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___s__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler* const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___s__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__6;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___s__6(::Fusion::Photon::Realtime::RegionHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__6 = value;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*>& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___s__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*> const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___s__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__7;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___s__7(::GlobalNamespace::List_1_Enumerator<::Fusion::Photon::Realtime::Region*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__7 = value;
}
constexpr ::Fusion::Photon::Realtime::Region*& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__region_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____region_5__8;
}
constexpr ::Fusion::Photon::Realtime::Region* const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get__region_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____region_5__8;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set__region_5__8(::Fusion::Photon::Realtime::Region*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____region_5__8 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*> const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::RegionInfo>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*>& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*> const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Photon::Realtime::RegionHandler*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___u__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_get___u__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__3;
}
constexpr void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::__cordl_internal_set___u__3(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__3 = value;
}
inline void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3* Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FusionRealtimeProxy__GetEnabledRegions_d__3::FusionRealtimeProxy__GetEnabledRegions_d__3()   {
}
