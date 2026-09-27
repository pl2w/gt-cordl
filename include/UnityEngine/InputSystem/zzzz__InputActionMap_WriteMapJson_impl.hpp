#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_WriteMapJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteActionJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteActionJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_WriteMapJson.FromMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionMap_WriteMapJson (*)(::UnityEngine::InputSystem::InputActionMap*)>(&::GlobalNamespace::InputActionMap_WriteMapJson::FromMap)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xaf15ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteMapJson>(),
                        {"FromMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputActionMap_WriteMapJson GlobalNamespace::InputActionMap_WriteMapJson::FromMap(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteMapJson>(),
                        {"FromMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionMap_WriteMapJson>(nullptr, ___internal_method, map);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actions", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteActionJson>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindings", ty: "::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_WriteMapJson::InputActionMap_WriteMapJson(::StringW  name, ::StringW  id, ::ArrayW<::GlobalNamespace::InputActionMap_WriteActionJson>  actions, ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings) noexcept  {
this->name = name;
this->id = id;
this->actions = actions;
this->bindings = bindings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_WriteMapJson::InputActionMap_WriteMapJson()   {
}
