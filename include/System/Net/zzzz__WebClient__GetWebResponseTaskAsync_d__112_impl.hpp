#pragma once
// IWYU pragma private; include "System/Net/WebClient__GetWebResponseTaskAsync_d__112.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Net/zzzz__WebClient__GetWebResponseTaskAsync_d__112_def.hpp"
#include "System/Net/zzzz__WebClient_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::*)()>(&::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::MoveNext)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xac50480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xac5081c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebResponse*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "request", ty: "::System::Net::WebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebClient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Net::WebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::WebClient__GetWebResponseTaskAsync_d__112(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebResponse*>  __t__builder, ::System::Net::WebRequest*  request, ::System::Net::WebClient*  __4__this, ::System::Net::WebRequest*  __7__wrap1, ::System::Object*  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->request = request;
this->__4__this = __4__this;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112::WebClient__GetWebResponseTaskAsync_d__112()   {
}
