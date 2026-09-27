#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__CheckKIDNewPlayerDateTime_d__103.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager__CheckKIDNewPlayerDateTime_d__103_def.hpp"
#include "GlobalNamespace/zzzz__KIDManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::*)()>(&::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::MoveNext)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5a32870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a32cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::KIDManager___c__DisplayClass103_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::KIDManager__CheckKIDNewPlayerDateTime_d__103(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>>  __t__builder, ::GlobalNamespace::KIDManager___c__DisplayClass103_0*  __8__1, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103::KIDManager__CheckKIDNewPlayerDateTime_d__103()   {
}
