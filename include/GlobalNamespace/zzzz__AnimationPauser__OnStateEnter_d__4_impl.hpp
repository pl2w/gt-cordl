#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationPauser__OnStateEnter_d__4.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationPauser__OnStateEnter_d__4_def.hpp"
#include "GlobalNamespace/zzzz__AnimationPauser_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimationPauser__OnStateEnter_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationPauser__OnStateEnter_d__4::*)()>(&::GlobalNamespace::AnimationPauser__OnStateEnter_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5a448f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser__OnStateEnter_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationPauser__OnStateEnter_d__4.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationPauser__OnStateEnter_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AnimationPauser__OnStateEnter_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a44b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser__OnStateEnter_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AnimationPauser__OnStateEnter_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser__OnStateEnter_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AnimationPauser__OnStateEnter_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser__OnStateEnter_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::AnimationPauser__OnStateEnter_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AnimationPauser__OnStateEnter_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AnimationPauser>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "animator", ty: "::UnityW<::UnityEngine::Animator>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateInfo", ty: "::UnityEngine::AnimatorStateInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimationPauser__OnStateEnter_d__4::AnimationPauser__OnStateEnter_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::AnimationPauser>  __4__this, ::UnityW<::UnityEngine::Animator>  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->animator = animator;
this->stateInfo = stateInfo;
this->layerIndex = layerIndex;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationPauser__OnStateEnter_d__4::AnimationPauser__OnStateEnter_d__4()   {
}
