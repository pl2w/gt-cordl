#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SequenceEqual__SequenceEqualAsync_d__0_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SequenceEqual__SequenceEqualAsync_d__0_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource>
inline void GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TSource>
inline void GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource>
constexpr  GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "first", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "second", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e1_5__2", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e2_5__6", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap6", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap7", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap8", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource>
constexpr ::GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>::SequenceEqual__SequenceEqualAsync_d__0_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::System::Threading::CancellationToken  cancellationToken, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e1_5__2, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, bool  __7__wrap4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e2_5__6, ::System::Object*  __7__wrap6, int32_t  __7__wrap7, bool  __7__wrap8, ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->first = first;
this->cancellationToken = cancellationToken;
this->second = second;
this->comparer = comparer;
this->_e1_5__2 = _e1_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_e2_5__6 = _e2_5__6;
this->__7__wrap6 = __7__wrap6;
this->__7__wrap7 = __7__wrap7;
this->__7__wrap8 = __7__wrap8;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename TSource>
constexpr ::GlobalNamespace::SequenceEqual__SequenceEqualAsync_d__0_1<TSource>::SequenceEqual__SequenceEqualAsync_d__0_1()   {
}
