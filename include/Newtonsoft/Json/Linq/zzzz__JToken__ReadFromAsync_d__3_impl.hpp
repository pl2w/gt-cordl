#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JToken__ReadFromAsync_d__3.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken__ReadFromAsync_d__3_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JConstructor_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JToken__ReadFromAsync_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JToken__ReadFromAsync_d__3::*)()>(&::GlobalNamespace::JToken__ReadFromAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0xa3e2fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JToken__ReadFromAsync_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JToken__ReadFromAsync_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JToken__ReadFromAsync_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::JToken__ReadFromAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3e3a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JToken__ReadFromAsync_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JToken__ReadFromAsync_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JToken__ReadFromAsync_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::JToken__ReadFromAsync_d__3::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JToken__ReadFromAsync_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::JToken__ReadFromAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::JToken__ReadFromAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__5", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JToken__ReadFromAsync_d__3::JToken__ReadFromAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*>  __t__builder, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*>  __u__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*>  __u__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*>  __u__4, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*>  __u__5) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->reader = reader;
this->settings = settings;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
this->__u__5 = __u__5;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JToken__ReadFromAsync_d__3::JToken__ReadFromAsync_d__3()   {
}
