#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset_ReadFileJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadMapJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_ReadFileJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionAsset_ReadFileJson.ToAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActionAsset_ReadFileJson::*)(::UnityEngine::InputSystem::InputActionAsset*)>(&::GlobalNamespace::InputActionAsset_ReadFileJson::ToAsset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaf10304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionAsset_ReadFileJson>(),
                        {"ToAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputActionAsset_ReadFileJson::ToAsset(::UnityEngine::InputSystem::InputActionAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionAsset_ReadFileJson>(),
                        {"ToAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asset);
}
// Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_ReadMapJson>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlSchemes", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionAsset_ReadFileJson::InputActionAsset_ReadFileJson(int32_t  version, ::StringW  name, ::ArrayW<::GlobalNamespace::InputActionMap_ReadMapJson>  maps, ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  controlSchemes) noexcept  {
this->version = version;
this->name = name;
this->maps = maps;
this->controlSchemes = controlSchemes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionAsset_ReadFileJson::InputActionAsset_ReadFileJson()   {
}
