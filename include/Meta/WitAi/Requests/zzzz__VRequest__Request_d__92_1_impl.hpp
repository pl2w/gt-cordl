#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__Request_d__92_1.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__Request_d__92_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestDecodeDelegate_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
template<typename TValue>
inline void GlobalNamespace::VRequest__Request_d__92_1<TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__Request_d__92_1<TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline void GlobalNamespace::VRequest__Request_d__92_1<TValue>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__Request_d__92_1<TValue>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TValue>
constexpr  GlobalNamespace::VRequest__Request_d__92_1<TValue>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TValue>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::VRequest__Request_d__92_1<TValue>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "decoder", ty: "::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Tuple_2<int32_t,::StringW>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::GlobalNamespace::VRequest__Request_d__92_1<TValue>::VRequest__Request_d__92_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __t__builder, ::Meta::WitAi::Requests::VRequest*  __4__this, ::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder, ::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Tuple_2<int32_t,::StringW>*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->decoder = decoder;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::VRequest__Request_d__92_1<TValue>::VRequest__Request_d__92_1()   {
}
