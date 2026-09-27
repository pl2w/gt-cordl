#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_ChangesFromUI.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_ChangesFromUI_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_ChangesFromUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataBindingManager_ChangesFromUI::*)(::UnityEngine::UIElements::DataBindingManager_BindingData*)>(&::GlobalNamespace::DataBindingManager_ChangesFromUI::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb729abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_ChangesFromUI>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_ChangesFromUI.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DataBindingManager_ChangesFromUI::*)()>(&::GlobalNamespace::DataBindingManager_ChangesFromUI::get_IsValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb729afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_ChangesFromUI>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DataBindingManager_ChangesFromUI::_ctor(::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_ChangesFromUI>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindingData);
}
inline bool GlobalNamespace::DataBindingManager_ChangesFromUI::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_ChangesFromUI>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binding", ty: "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindingData", ty: "::UnityEngine::UIElements::DataBindingManager_BindingData*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataBindingManager_ChangesFromUI::DataBindingManager_ChangesFromUI(int64_t  version, ::UnityEngine::UIElements::Binding*  binding, ::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData) noexcept  {
this->version = version;
this->binding = binding;
this->bindingData = bindingData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataBindingManager_ChangesFromUI::DataBindingManager_ChangesFromUI()   {
}
