#pragma once
// IWYU pragma private; include "GlobalNamespace/ActivateGO__SetGOsActive_d__13.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__ActivateGO__SetGOsActive_d__13_def.hpp"
#include "GlobalNamespace/zzzz__ActivateGO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ActivateGO__SetGOsActive_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO__SetGOsActive_d__13::*)()>(&::GlobalNamespace::ActivateGO__SetGOsActive_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x55e4894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO__SetGOsActive_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateGO__SetGOsActive_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO__SetGOsActive_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ActivateGO__SetGOsActive_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55e5148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO__SetGOsActive_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ActivateGO__SetGOsActive_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO__SetGOsActive_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ActivateGO__SetGOsActive_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO__SetGOsActive_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ActivateGO__SetGOsActive_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ActivateGO__SetGOsActive_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ActivateGO>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fls", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_renderers_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ActivateGO__SetGOsActive_d__13::ActivateGO__SetGOsActive_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ActivateGO>  __4__this, int32_t  fls, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  _renderers_5__2, int32_t  _i_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->fls = fls;
this->_renderers_5__2 = _renderers_5__2;
this->_i_5__3 = _i_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActivateGO__SetGOsActive_d__13::ActivateGO__SetGOsActive_d__13()   {
}
