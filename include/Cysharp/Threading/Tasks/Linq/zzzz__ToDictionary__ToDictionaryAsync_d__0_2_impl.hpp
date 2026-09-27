#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToDictionary__ToDictionaryAsync_d__0_2.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary__ToDictionaryAsync_d__0_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource,typename TKey>
inline void GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TSource,typename TKey>
inline void GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TKey>
constexpr  GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TKey>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TKey>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TSource,TKey>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dict_5__2", ty: "::System::Collections::Generic::Dictionary_2<TKey,TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource,typename TKey>
constexpr ::GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>::ToDictionary__ToDictionaryAsync_d__0_2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>  __t__builder, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::Dictionary_2<TKey,TSource>*  _dict_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->comparer = comparer;
this->source = source;
this->cancellationToken = cancellationToken;
this->keySelector = keySelector;
this->_dict_5__2 = _dict_5__2;
this->_e_5__3 = _e_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource,TKey>::ToDictionary__ToDictionaryAsync_d__0_2()   {
}
