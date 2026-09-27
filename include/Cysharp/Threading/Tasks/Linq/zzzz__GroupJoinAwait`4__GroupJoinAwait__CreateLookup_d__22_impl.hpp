#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupJoinAwait`4__GroupJoinAwait__CreateLookup_d__22.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupJoinAwait`4__GroupJoinAwait__CreateLookup_d__22_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupJoinAwait_4_def.hpp"
#include "System/Linq/zzzz__ILookup_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr  GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TInner>*>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TInner>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22<TOuter,TInner,TKey,TResult>::_GroupJoinAwait_GroupJoinAwait_4__CreateLookup_d__22()   {
}
