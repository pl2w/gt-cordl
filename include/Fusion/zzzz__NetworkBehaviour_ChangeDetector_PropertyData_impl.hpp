#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ChangeDetector_PropertyData.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_PropertyData_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkedWeavedAttribute_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
// Ctor Parameters [CppParam { name: "PropertyInfo", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WeavedAttribute", ty: "::Fusion::NetworkedWeavedAttribute*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OnChanged", ty: "::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OnChangedPrev", ty: "::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData::ChangeDetector_NetworkBehaviour_PropertyData(::System::Reflection::MemberInfo*  PropertyInfo, ::Fusion::NetworkedWeavedAttribute*  WeavedAttribute, ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*  OnChanged, ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*  OnChangedPrev) noexcept  {
this->PropertyInfo = PropertyInfo;
this->WeavedAttribute = WeavedAttribute;
this->OnChanged = OnChanged;
this->OnChangedPrev = OnChangedPrev;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData::ChangeDetector_NetworkBehaviour_PropertyData()   {
}
