#pragma once
// IWYU pragma private; include "Meta/WitAi/ComponentExtensions_ComponentCopyData.hpp"
#include "System/Reflection/zzzz__FieldInfo_impl.hpp"
#include "System/Reflection/zzzz__PropertyInfo_impl.hpp"
#include "Meta/WitAi/zzzz__ComponentExtensions_ComponentCopyData_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "ComponentType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fields", ty: "::ArrayW<::System::Reflection::FieldInfo*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Properties", ty: "::ArrayW<::System::Reflection::PropertyInfo*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ComponentExtensions_ComponentCopyData::ComponentExtensions_ComponentCopyData(::System::Type*  ComponentType, ::ArrayW<::System::Reflection::FieldInfo*>  Fields, ::ArrayW<::System::Reflection::PropertyInfo*>  Properties) noexcept  {
this->ComponentType = ComponentType;
this->Fields = Fields;
this->Properties = Properties;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComponentExtensions_ComponentCopyData::ComponentExtensions_ComponentCopyData()   {
}
