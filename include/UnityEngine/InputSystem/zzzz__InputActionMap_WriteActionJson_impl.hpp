#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_WriteActionJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteActionJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_WriteActionJson.FromAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionMap_WriteActionJson (*)(::UnityEngine::InputSystem::InputAction*)>(&::GlobalNamespace::InputActionMap_WriteActionJson::FromAction)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaf15da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteActionJson>(),
                        {"FromAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputActionMap_WriteActionJson GlobalNamespace::InputActionMap_WriteActionJson::FromAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteActionJson>(),
                        {"FromAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionMap_WriteActionJson>(nullptr, ___internal_method, action);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_WriteActionJson::InputActionMap_WriteActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  processors, ::StringW  interactions, bool  initialStateCheck) noexcept  {
this->name = name;
this->type = type;
this->id = id;
this->expectedControlType = expectedControlType;
this->processors = processors;
this->interactions = interactions;
this->initialStateCheck = initialStateCheck;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_WriteActionJson::InputActionMap_WriteActionJson()   {
}
