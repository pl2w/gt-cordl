#pragma once
// IWYU pragma private; include "LitJson/PropertyMetadata.hpp"
#include "LitJson/zzzz__PropertyMetadata_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "Info", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::LitJson::PropertyMetadata::PropertyMetadata(::System::Reflection::MemberInfo*  Info, bool  IsField, ::System::Type*  Type) noexcept  {
this->Info = Info;
this->IsField = IsField;
this->Type = Type;
}
// Ctor Parameters []
constexpr ::LitJson::PropertyMetadata::PropertyMetadata()   {
}
