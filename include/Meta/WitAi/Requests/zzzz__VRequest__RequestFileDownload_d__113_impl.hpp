#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__RequestFileDownload_d__113.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestFileDownload_d__113_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRequest__RequestFileDownload_d__113.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRequest__RequestFileDownload_d__113::*)()>(&::GlobalNamespace::VRequest__RequestFileDownload_d__113::MoveNext)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x9e8bca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__RequestFileDownload_d__113>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRequest__RequestFileDownload_d__113.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRequest__RequestFileDownload_d__113::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::VRequest__RequestFileDownload_d__113::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e8c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__RequestFileDownload_d__113>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VRequest__RequestFileDownload_d__113::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__RequestFileDownload_d__113>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::VRequest__RequestFileDownload_d__113::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__RequestFileDownload_d__113>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::VRequest__RequestFileDownload_d__113::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::VRequest__RequestFileDownload_d__113::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "downloadPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VRequest__RequestFileDownload_d__113::VRequest__RequestFileDownload_d__113(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __t__builder, ::Meta::WitAi::Requests::VRequest*  __4__this, ::StringW  url, ::StringW  downloadPath, ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->url = url;
this->downloadPath = downloadPath;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRequest__RequestFileDownload_d__113::VRequest__RequestFileDownload_d__113()   {
}
