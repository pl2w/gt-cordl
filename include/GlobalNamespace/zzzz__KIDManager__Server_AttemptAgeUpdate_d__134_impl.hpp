#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__Server_AttemptAgeUpdate_d__134.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager__Server_AttemptAgeUpdate_d__134_def.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateData_def.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateRequest_def.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::*)()>(&::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::MoveNext)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5a36a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a36df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AttemptAgeUpdateData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "request", ty: "::GlobalNamespace::AttemptAgeUpdateRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::AttemptAgeUpdateResponse*,::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::KIDManager__Server_AttemptAgeUpdate_d__134(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AttemptAgeUpdateData*>  __t__builder, ::GlobalNamespace::AttemptAgeUpdateRequest*  request, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::AttemptAgeUpdateResponse*,::StringW>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->request = request;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134::KIDManager__Server_AttemptAgeUpdate_d__134()   {
}
