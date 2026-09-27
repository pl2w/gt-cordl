#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncEnumerableSorter`1__SortAsync_d__2.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter`1__SortAsync_d__2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TElement>
inline void GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TElement>
inline void GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TElement>
constexpr  GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TElement>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elements", ty: "::ArrayW<TElement>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TElement>
constexpr ::GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>::AsyncEnumerableSorter_1__SortAsync_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<int32_t>>  __t__builder, ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  __4__this, ::ArrayW<TElement>  elements, int32_t  count, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->elements = elements;
this->count = count;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TElement>
constexpr ::GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>::AsyncEnumerableSorter_1__SortAsync_d__2()   {
}
