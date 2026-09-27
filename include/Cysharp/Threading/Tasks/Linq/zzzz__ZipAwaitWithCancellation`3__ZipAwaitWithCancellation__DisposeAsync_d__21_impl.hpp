#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ZipAwaitWithCancellation`3__ZipAwaitWithCancellation__DisposeAsync_d__21.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ZipAwaitWithCancellation`3__ZipAwaitWithCancellation__DisposeAsync_d__21_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ZipAwaitWithCancellation_3_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TFirst,typename TSecond,typename TResult>
inline void GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TFirst,typename TSecond,typename TResult>
inline void GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TFirst,typename TSecond,typename TResult>
constexpr  GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*  __4__this, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst,TSecond,TResult>::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21()   {
}
