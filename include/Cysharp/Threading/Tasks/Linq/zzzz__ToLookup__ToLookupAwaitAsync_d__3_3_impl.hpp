#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToLookup__ToLookupAwaitAsync_d__3_3.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup__ToLookupAwaitAsync_d__3_3_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Linq/zzzz__ILookup_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource,typename TKey,typename TElement>
inline void GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement>
inline void GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TKey,typename TElement>
constexpr  GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Linq::ILookup_2<TKey,TElement>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elementSelector", ty: "::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TKey>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pool_5__2", ty: "::Cysharp::Threading::Tasks::Internal::ArrayPool_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_array_5__3", ty: "::ArrayW<TSource>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e_5__4", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap6", ty: "::System::Linq::ILookup_2<TKey,TElement>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__8", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_1_Awaiter<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource,typename TKey,typename TElement>
constexpr ::GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>::ToLookup__ToLookupAwaitAsync_d__3_3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Linq::ILookup_2<TKey,TElement>*>  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<TSource>*  _pool_5__2, ::ArrayW<TSource>  _array_5__3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__4, ::System::Object*  __7__wrap4, int32_t  __7__wrap5, ::System::Linq::ILookup_2<TKey,TElement>*  __7__wrap6, int32_t  _i_5__8, ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::UniTask_1_Awaiter<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>  __u__2, ::GlobalNamespace::UniTask_Awaiter  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->source = source;
this->cancellationToken = cancellationToken;
this->keySelector = keySelector;
this->elementSelector = elementSelector;
this->comparer = comparer;
this->_pool_5__2 = _pool_5__2;
this->_array_5__3 = _array_5__3;
this->_e_5__4 = _e_5__4;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__7__wrap6 = __7__wrap6;
this->_i_5__8 = _i_5__8;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TElement>
constexpr ::GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource,TKey,TElement>::ToLookup__ToLookupAwaitAsync_d__3_3()   {
}
