#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI_ServiceToService__RequestUserDelegationTokenAsJToken_d__0.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/API/zzzz__ModioAPI_ServiceToService__RequestUserDelegationTokenAsJToken_d__0_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::*)()>(&::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xa0cffdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa0d05ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_request_5__2", ty: "::Modio::API::ModioAPIRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __t__builder, ::Modio::API::ModioAPIRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->_request_5__2 = _request_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0()   {
}
