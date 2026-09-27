#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_LayoutJsonNameAndDescriptorOnly.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_MatcherJson_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_LayoutJsonNameAndDescriptorOnly_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "device", ty: "::GlobalNamespace::InputDeviceMatcher_MatcherJson", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly::InputControlLayout_LayoutJsonNameAndDescriptorOnly(::StringW  name, ::StringW  extend, ::ArrayW<::StringW>  extendMultiple, ::GlobalNamespace::InputDeviceMatcher_MatcherJson  device) noexcept  {
this->name = name;
this->extend = extend;
this->extendMultiple = extendMultiple;
this->device = device;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly::InputControlLayout_LayoutJsonNameAndDescriptorOnly()   {
}
