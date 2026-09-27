#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__ParseNumberPositiveInfinityAsync_d__27.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseNumberPositiveInfinityAsync_d__27_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::*)()>(&::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa384380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa384664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>  __t__builder, ::Newtonsoft::Json::ReadType  readType, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::ReadType  __7__wrap1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->readType = readType;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27()   {
}
