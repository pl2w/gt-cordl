#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_HistoryUpdateInfo.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__STP_HistoryUpdateInfo_def.hpp"
// Ctor Parameters [CppParam { name: "preUpscaleSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "postUpscaleSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useHwDrs", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useTexArray", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::STP_HistoryUpdateInfo::STP_HistoryUpdateInfo(::UnityEngine::Vector2Int  preUpscaleSize, ::UnityEngine::Vector2Int  postUpscaleSize, bool  useHwDrs, bool  useTexArray) noexcept  {
this->preUpscaleSize = preUpscaleSize;
this->postUpscaleSize = postUpscaleSize;
this->useHwDrs = useHwDrs;
this->useTexArray = useTexArray;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::STP_HistoryUpdateInfo::STP_HistoryUpdateInfo()   {
}
