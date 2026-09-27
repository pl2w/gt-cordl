#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentScreen__OnAsyncWorkComplete_d__31.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__MainThreadAwaitable_impl.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen__OnAsyncWorkComplete_d__31_def.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::*)()>(&::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5a6cc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a6cf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ConsentScreen>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "result", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::UnityEngine::MainThreadAwaitable", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::ConsentScreen__OnAsyncWorkComplete_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ConsentScreen>  __4__this, ::StringW  result, ::UnityEngine::MainThreadAwaitable  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->result = result;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31::ConsentScreen__OnAsyncWorkComplete_d__31()   {
}
