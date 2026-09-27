#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonConvert__DeserializeObjectAsync_d__8_1.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConvert__DeserializeObjectAsync_d__8_1_def.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConvert_def.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename IN_TYPE>
inline void GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename IN_TYPE>
inline void GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename IN_TYPE>
constexpr  GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename IN_TYPE>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<IN_TYPE>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jsonString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "customConverters", ty: "::ArrayW<::Meta::WitAi::Json::JsonConverter*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "suppressWarnings", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<IN_TYPE>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename IN_TYPE>
constexpr ::GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>::JsonConvert__DeserializeObjectAsync_d__8_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<IN_TYPE>  __t__builder, ::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings, ::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<IN_TYPE>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->jsonString = jsonString;
this->customConverters = customConverters;
this->suppressWarnings = suppressWarnings;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename IN_TYPE>
constexpr ::GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>::JsonConvert__DeserializeObjectAsync_d__8_1()   {
}
