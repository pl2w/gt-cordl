#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapLoader_LoadZoneRequest.hpp"
#include "GlobalNamespace/zzzz__CustomMapLoader_LoadZoneRequest_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "sceneIndexesToLoad", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sceneIndexesToUnload", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onSceneLoadedCallback", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onSceneUnloadedCallback", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMapLoader_LoadZoneRequest::CustomMapLoader_LoadZoneRequest(::ArrayW<int32_t>  sceneIndexesToLoad, ::ArrayW<int32_t>  sceneIndexesToUnload, ::System::Action_1<::StringW>*  onSceneLoadedCallback, ::System::Action_1<::StringW>*  onSceneUnloadedCallback) noexcept  {
this->sceneIndexesToLoad = sceneIndexesToLoad;
this->sceneIndexesToUnload = sceneIndexesToUnload;
this->onSceneLoadedCallback = onSceneLoadedCallback;
this->onSceneUnloadedCallback = onSceneUnloadedCallback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader_LoadZoneRequest::CustomMapLoader_LoadZoneRequest()   {
}
