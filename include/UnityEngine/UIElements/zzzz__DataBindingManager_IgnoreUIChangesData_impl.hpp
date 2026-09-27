#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_IgnoreUIChangesData.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_IgnoreUIChangesData_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_IgnoreUIChangesData.ShouldIgnoreChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DataBindingManager_IgnoreUIChangesData::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::Binding*, ::UnityEngine::UIElements::BindingId)>(&::GlobalNamespace::DataBindingManager_IgnoreUIChangesData::ShouldIgnoreChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb729ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_IgnoreUIChangesData>(),
                        {"ShouldIgnoreChange", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingId>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::DataBindingManager_IgnoreUIChangesData::ShouldIgnoreChange(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::Binding*  b, ::UnityEngine::UIElements::BindingId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_IgnoreUIChangesData>(),
                        {"ShouldIgnoreChange", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ve, b, id);
}
// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binding", ty: "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindingId", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataBindingManager_IgnoreUIChangesData::DataBindingManager_IgnoreUIChangesData(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::Binding*  binding, ::UnityEngine::UIElements::BindingId  bindingId) noexcept  {
this->element = element;
this->binding = binding;
this->bindingId = bindingId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataBindingManager_IgnoreUIChangesData::DataBindingManager_IgnoreUIChangesData()   {
}
