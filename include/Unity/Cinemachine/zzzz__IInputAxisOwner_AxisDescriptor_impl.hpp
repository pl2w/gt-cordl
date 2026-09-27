#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisOwner_AxisDescriptor.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_Hints_impl.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_Hints_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_def.hpp"
// Ctor Parameters [CppParam { name: "DrivenAxis", ty: "::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hint", ty: "::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IInputAxisOwner_AxisDescriptor::IInputAxisOwner_AxisDescriptor(::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*  DrivenAxis, ::StringW  Name, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  Hint) noexcept  {
this->DrivenAxis = DrivenAxis;
this->Name = Name;
this->Hint = Hint;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IInputAxisOwner_AxisDescriptor::IInputAxisOwner_AxisDescriptor()   {
}
