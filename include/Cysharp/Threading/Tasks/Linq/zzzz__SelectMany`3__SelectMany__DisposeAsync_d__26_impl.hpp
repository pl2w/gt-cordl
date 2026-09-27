#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SelectMany`3__SelectMany__DisposeAsync_d__26.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SelectMany`3__SelectMany__DisposeAsync_d__26_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SelectMany_3_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TSource,typename TCollection,typename TResult>
inline void GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TSource,typename TCollection,typename TResult>
inline void GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TCollection,typename TResult>
constexpr  GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::SelectMany_3__SelectMany<TSource,TCollection,TResult>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>::_SelectMany_SelectMany_3__DisposeAsync_d__26(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::SelectMany_3__SelectMany<TSource,TCollection,TResult>*  __4__this, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource,TCollection,TResult>::_SelectMany_SelectMany_3__DisposeAsync_d__26()   {
}
