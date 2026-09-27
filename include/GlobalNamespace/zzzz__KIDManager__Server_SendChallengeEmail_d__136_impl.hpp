#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__Server_SendChallengeEmail_d__136.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_SendChallengeEmail_d__136_def.hpp"
#include "GlobalNamespace/zzzz__SendChallengeEmailRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::*)()>(&::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::MoveNext)> {
  constexpr static std::size_t size = 0xd00;
  constexpr static std::size_t addrs = 0x5a37aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a387ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "request", ty: "::GlobalNamespace::SendChallengeEmailRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_success_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::System::Object*,::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::KIDManager__Server_SendChallengeEmail_d__136(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::StringW>>  __t__builder, ::GlobalNamespace::SendChallengeEmailRequest*  request, bool  _success_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::System::Object*,::StringW>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->request = request;
this->_success_5__2 = _success_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136::KIDManager__Server_SendChallengeEmail_d__136()   {
}
