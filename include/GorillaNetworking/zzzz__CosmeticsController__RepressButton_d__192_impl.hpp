#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController__RepressButton_d__192.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController__RepressButton_d__192_def.hpp"
#include "GlobalNamespace/zzzz__FittingRoomButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsController__RepressButton_d__192.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsController__RepressButton_d__192::*)()>(&::GlobalNamespace::CosmeticsController__RepressButton_d__192::MoveNext)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5c6f358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController__RepressButton_d__192>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsController__RepressButton_d__192.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsController__RepressButton_d__192::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CosmeticsController__RepressButton_d__192::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c6f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController__RepressButton_d__192>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticsController__RepressButton_d__192::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController__RepressButton_d__192>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsController__RepressButton_d__192::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController__RepressButton_d__192>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::CosmeticsController__RepressButton_d__192::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::CosmeticsController__RepressButton_d__192::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pressedButton", ty: "::UnityW<::GlobalNamespace::FittingRoomButton>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::CosmeticsController>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timeEntered_5__2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_maxTime_5__3", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_itemSet_5__4", ty: "::GlobalNamespace::CosmeticsController_CosmeticItem", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticsController__RepressButton_d__192::CosmeticsController__RepressButton_d__192(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::FittingRoomButton>  pressedButton, ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this, bool  isLeftHand, float_t  _timeEntered_5__2, float_t  _maxTime_5__3, ::GlobalNamespace::CosmeticsController_CosmeticItem  _itemSet_5__4, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->pressedButton = pressedButton;
this->__4__this = __4__this;
this->isLeftHand = isLeftHand;
this->_timeEntered_5__2 = _timeEntered_5__2;
this->_maxTime_5__3 = _maxTime_5__3;
this->_itemSet_5__4 = _itemSet_5__4;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsController__RepressButton_d__192::CosmeticsController__RepressButton_d__192()   {
}
