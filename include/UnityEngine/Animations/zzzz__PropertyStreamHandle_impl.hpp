#pragma once
// IWYU pragma private; include "UnityEngine/Animations/PropertyStreamHandle.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handleIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valueArrayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::PropertyStreamHandle::PropertyStreamHandle(uint32_t  m_AnimatorBindingsVersion, int32_t  handleIndex, int32_t  valueArrayIndex, int32_t  bindType) noexcept  {
this->m_AnimatorBindingsVersion = m_AnimatorBindingsVersion;
this->handleIndex = handleIndex;
this->valueArrayIndex = valueArrayIndex;
this->bindType = bindType;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::PropertyStreamHandle::PropertyStreamHandle()   {
}
