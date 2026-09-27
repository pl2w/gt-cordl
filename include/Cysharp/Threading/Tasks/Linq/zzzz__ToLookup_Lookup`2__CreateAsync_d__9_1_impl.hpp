#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToLookup_Lookup`2__CreateAsync_d__9_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_Lookup`2__CreateAsync_d__9_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TKey,typename TElement,typename TSource>
inline void GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TElement,typename TSource>
inline void GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TKey,typename TElement,typename TSource>
constexpr  GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TKey,typename TElement,typename TSource>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TKey>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::System::ArraySegment_1<TSource>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "keySelector", ty: "::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elementSelector", ty: "::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dict_5__2", ty: "::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_arr_5__3", ty: "::ArrayW<TSource>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_c_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_key_5__6", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<TKey>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_1_Awaiter<TElement>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TElement,typename TSource>
constexpr ::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>::Lookup_2_ToLookup__CreateAsync_d__9_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>  __t__builder, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::ArraySegment_1<TSource>  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Threading::CancellationToken  cancellationToken, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  _dict_5__2, ::ArrayW<TSource>  _arr_5__3, int32_t  _c_5__4, int32_t  _i_5__5, TKey  _key_5__6, ::GlobalNamespace::UniTask_1_Awaiter<TKey>  __u__1, ::GlobalNamespace::UniTask_1_Awaiter<TElement>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->comparer = comparer;
this->source = source;
this->keySelector = keySelector;
this->cancellationToken = cancellationToken;
this->elementSelector = elementSelector;
this->_dict_5__2 = _dict_5__2;
this->_arr_5__3 = _arr_5__3;
this->_c_5__4 = _c_5__4;
this->_i_5__5 = _i_5__5;
this->_key_5__6 = _key_5__6;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename TKey,typename TElement,typename TSource>
constexpr ::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey,TElement,TSource>::Lookup_2_ToLookup__CreateAsync_d__9_1()   {
}
