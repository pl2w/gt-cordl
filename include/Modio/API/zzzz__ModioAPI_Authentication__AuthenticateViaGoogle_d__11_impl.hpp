#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI_Authentication__AuthenticateViaGoogle_d__11.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AccessTokenObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GoogleAuthenticationRequest_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/API/zzzz__ModioAPI_Authentication__AuthenticateViaGoogle_d__11_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::*)()>(&::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0xa09cf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa09d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "body", ty: "::System::Nullable_1<::Modio::API::SchemaDefinitions::GoogleAuthenticationRequest>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_request_5__2", ty: "::Modio::API::ModioAPIRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::Authentication_ModioAPI__AuthenticateViaGoogle_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>  __t__builder, ::System::Nullable_1<::Modio::API::SchemaDefinitions::GoogleAuthenticationRequest>  body, ::Modio::API::ModioAPIRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->body = body;
this->_request_5__2 = _request_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11::Authentication_ModioAPI__AuthenticateViaGoogle_d__11()   {
}
