#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/DebugTree`1__BuildTreeAsync_d__8.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree`1__BuildTreeAsync_d__8_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TLeaf>
inline void GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TLeaf>
inline void GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TLeaf>
constexpr  GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TLeaf>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "root", ty: "TLeaf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TLeaf>
constexpr ::GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>::DebugTree_1__BuildTreeAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>  __t__builder, ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*  __4__this, TLeaf  root, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->root = root;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TLeaf>
constexpr ::GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>::DebugTree_1__BuildTreeAsync_d__8()   {
}
