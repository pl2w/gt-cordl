#pragma once
// IWYU pragma private; include "GlobalNamespace/TryOnBundlesStand__LoadBundle_d__35.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__TryOnBundlesStand__LoadBundle_d__35_def.hpp"
#include "GlobalNamespace/zzzz__TryOnBundleButton_def.hpp"
#include "GlobalNamespace/zzzz__TryOnBundlesStand_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::*)()>(&::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x5782554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5782950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pressedTryOnBundleButton", ty: "::UnityW<::GlobalNamespace::TryOnBundleButton>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TryOnBundlesStand>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BundleToTry_5__2", ty: "::GlobalNamespace::CosmeticsController_CosmeticItem", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timeEntered_5__3", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_maxTime_5__4", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::TryOnBundlesStand__LoadBundle_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::TryOnBundleButton>  pressedTryOnBundleButton, ::UnityW<::GlobalNamespace::TryOnBundlesStand>  __4__this, bool  isLeftHand, ::GlobalNamespace::CosmeticsController_CosmeticItem  _BundleToTry_5__2, float_t  _timeEntered_5__3, float_t  _maxTime_5__4, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->pressedTryOnBundleButton = pressedTryOnBundleButton;
this->__4__this = __4__this;
this->isLeftHand = isLeftHand;
this->_BundleToTry_5__2 = _BundleToTry_5__2;
this->_timeEntered_5__3 = _timeEntered_5__3;
this->_maxTime_5__4 = _maxTime_5__4;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35::TryOnBundlesStand__LoadBundle_d__35()   {
}
