#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SyncSelectorAsyncEnumerableSorter`2__ComputeKeysAsync_d__6.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SyncSelectorAsyncEnumerableSorter`2__ComputeKeysAsync_d__6_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SyncSelectorAsyncEnumerableSorter_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TElement,typename TKey>
inline void GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TElement,typename TKey>
inline void GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TElement,typename TKey>
constexpr  GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TElement,typename TKey>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2<TElement,TKey>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elements", ty: "::ArrayW<TElement>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TElement,typename TKey>
constexpr ::GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2<TElement,TKey>*  __4__this, int32_t  count, ::ArrayW<TElement>  elements, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->count = count;
this->elements = elements;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TElement,typename TKey>
constexpr ::GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement,TKey>::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6()   {
}
