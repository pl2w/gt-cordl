#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CreationContext_AttributeOverrideRange.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_AttributeOverrideRange_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_AttributeOverride_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreationContext_AttributeOverrideRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreationContext_AttributeOverrideRange::*)(::UnityEngine::UIElements::VisualTreeAsset*, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*)>(&::GlobalNamespace::CreationContext_AttributeOverrideRange::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb7c1104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreationContext_AttributeOverrideRange>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CreationContext_AttributeOverrideRange::_ctor(::UnityEngine::UIElements::VisualTreeAsset*  sourceAsset, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  attributeOverrides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreationContext_AttributeOverrideRange>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceAsset, attributeOverrides);
}
// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attributeOverrides", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CreationContext_AttributeOverrideRange::CreationContext_AttributeOverrideRange(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  sourceAsset, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  attributeOverrides) noexcept  {
this->sourceAsset = sourceAsset;
this->attributeOverrides = attributeOverrides;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreationContext_AttributeOverrideRange::CreationContext_AttributeOverrideRange()   {
}
