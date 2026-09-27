#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger__ConfirmUpdatedFrameRate_d__180.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger__ConfirmUpdatedFrameRate_d__180_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::*)()>(&::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::MoveNext)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x5937b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59384ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GorillaTagger>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::GorillaTagger__ConfirmUpdatedFrameRate_d__180(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::GorillaTagger>  __4__this, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180::GorillaTagger__ConfirmUpdatedFrameRate_d__180()   {
}
