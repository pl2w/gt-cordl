#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__ParseUnicodeAsync_d__12.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseUnicodeAsync_d__12_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::*)()>(&::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa385f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3861d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::JsonTextReader__ParseUnicodeAsync_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t>  __t__builder, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonTextReader__ParseUnicodeAsync_d__12::JsonTextReader__ParseUnicodeAsync_d__12()   {
}
