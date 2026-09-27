#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaitableAsyncMethodBuilder_1.hpp"
#include "UnityEngine/zzzz__Awaitable_AwaitableAsyncMethodBuilder_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
// Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_resultingCoroutine", ty: "::UnityEngine::Awaitable_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder_1<T>::Awaitable_AwaitableAsyncMethodBuilder_1(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*  _stateMachineBox, ::UnityEngine::Awaitable_1<T>*  _resultingCoroutine) noexcept  {
this->_stateMachineBox = _stateMachineBox;
this->_resultingCoroutine = _resultingCoroutine;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder_1<T>::Awaitable_AwaitableAsyncMethodBuilder_1()   {
}
