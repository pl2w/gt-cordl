#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CreationContext_SerializedDataOverrideRange.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_SerializedDataOverrideRange_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_UxmlSerializedDataOverride_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreationContext_SerializedDataOverrideRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreationContext_SerializedDataOverrideRange::*)(::UnityEngine::UIElements::VisualTreeAsset*, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*, int32_t)>(&::GlobalNamespace::CreationContext_SerializedDataOverrideRange::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb7c1134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreationContext_SerializedDataOverrideRange>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CreationContext_SerializedDataOverrideRange::_ctor(::UnityEngine::UIElements::VisualTreeAsset*  sourceAsset, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  attributeOverrides, int32_t  templateId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreationContext_SerializedDataOverrideRange>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceAsset, attributeOverrides, templateId);
}
// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "templateId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attributeOverrides", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CreationContext_SerializedDataOverrideRange::CreationContext_SerializedDataOverrideRange(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  sourceAsset, int32_t  templateId, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  attributeOverrides) noexcept  {
this->sourceAsset = sourceAsset;
this->templateId = templateId;
this->attributeOverrides = attributeOverrides;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreationContext_SerializedDataOverrideRange::CreationContext_SerializedDataOverrideRange()   {
}
