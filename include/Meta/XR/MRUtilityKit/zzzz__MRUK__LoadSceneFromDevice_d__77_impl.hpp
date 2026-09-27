#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__LoadSceneFromDevice_d__77.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromDevice_d__77_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::*)()>(&::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x9f27b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f27db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUK>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestSceneCaptureIfNoDataFound", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "removeMissingRooms", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::MRUK__LoadSceneFromDevice_d__77(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder, ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this, bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->requestSceneCaptureIfNoDataFound = requestSceneCaptureIfNoDataFound;
this->removeMissingRooms = removeMissingRooms;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77::MRUK__LoadSceneFromDevice_d__77()   {
}
