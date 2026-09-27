#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerable`1__OrderedAsyncEnumerator__CreateSortSource_d__11.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable`1__OrderedAsyncEnumerator__CreateSortSource_d__11_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TElement>
inline void GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TElement>
inline void GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TElement>
constexpr  GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TElement>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TElement>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TElement>
constexpr ::GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TElement>>  __u__1, ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<int32_t>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename TElement>
constexpr ::GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11()   {
}
