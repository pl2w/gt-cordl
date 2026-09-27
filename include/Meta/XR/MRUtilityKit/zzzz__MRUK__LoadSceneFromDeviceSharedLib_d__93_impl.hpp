#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__LoadSceneFromDeviceSharedLib_d__93.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SharedRoomsData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromDeviceSharedLib_d__93_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::*)()>(&::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::MoveNext)> {
  constexpr static std::size_t size = 0x938;
  constexpr static std::size_t addrs = 0x9f2825c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f28b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUK>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sharedRoomsData", ty: "::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "removeMissingRooms", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestSceneCaptureIfNoDataFound", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_result_5__2", ty: "::GlobalNamespace::MRUK_LoadDeviceResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::MRUK__LoadSceneFromDeviceSharedLib_d__93(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder, ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>  sharedRoomsData, bool  removeMissingRooms, bool  requestSceneCaptureIfNoDataFound, ::GlobalNamespace::MRUK_LoadDeviceResult  _result_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->sharedRoomsData = sharedRoomsData;
this->removeMissingRooms = removeMissingRooms;
this->requestSceneCaptureIfNoDataFound = requestSceneCaptureIfNoDataFound;
this->_result_5__2 = _result_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93::MRUK__LoadSceneFromDeviceSharedLib_d__93()   {
}
