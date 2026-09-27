#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceManager_DeferredCallbackRegisterRequest.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_DeferredCallbackRegisterRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
// Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "incrementRefCount", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ResourceManager_DeferredCallbackRegisterRequest::ResourceManager_DeferredCallbackRegisterRequest(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, bool  incrementRefCount) noexcept  {
this->operation = operation;
this->incrementRefCount = incrementRefCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResourceManager_DeferredCallbackRegisterRequest::ResourceManager_DeferredCallbackRegisterRequest()   {
}
