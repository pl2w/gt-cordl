#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ContextContainer_Item.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_Item_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
// Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContextContainer_Item::ContextContainer_Item(::UnityEngine::Rendering::ContextItem*  storage, bool  isSet) noexcept  {
this->storage = storage;
this->isSet = isSet;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContextContainer_Item::ContextContainer_Item()   {
}
