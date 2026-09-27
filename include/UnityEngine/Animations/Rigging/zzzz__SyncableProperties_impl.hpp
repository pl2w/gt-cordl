#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/SyncableProperties.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__ConstraintProperties_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigProperties_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__SyncableProperties_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__ConstraintProperties_def.hpp"
// Ctor Parameters [CppParam { name: "rig", ty: "::UnityEngine::Animations::Rigging::RigProperties", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "constraints", ty: "::ArrayW<::UnityEngine::Animations::Rigging::ConstraintProperties>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Rigging::SyncableProperties::SyncableProperties(::UnityEngine::Animations::Rigging::RigProperties  rig, ::ArrayW<::UnityEngine::Animations::Rigging::ConstraintProperties>  constraints) noexcept  {
this->rig = rig;
this->constraints = constraints;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::SyncableProperties::SyncableProperties()   {
}
