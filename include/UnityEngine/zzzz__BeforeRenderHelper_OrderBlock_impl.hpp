#pragma once
// IWYU pragma private; include "UnityEngine/BeforeRenderHelper_OrderBlock.hpp"
#include "UnityEngine/zzzz__BeforeRenderHelper_OrderBlock_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callback", ty: "::UnityEngine::Events::UnityAction*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeforeRenderHelper_OrderBlock::BeforeRenderHelper_OrderBlock(int32_t  order, ::UnityEngine::Events::UnityAction*  callback) noexcept  {
this->order = order;
this->callback = callback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeforeRenderHelper_OrderBlock::BeforeRenderHelper_OrderBlock()   {
}
