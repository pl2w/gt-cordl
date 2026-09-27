#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_ReadFileJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadMapJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadFileJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_ReadFileJson.ToMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap*> (::GlobalNamespace::InputActionMap_ReadFileJson::*)()>(&::GlobalNamespace::InputActionMap_ReadFileJson::ToMaps)> {
  constexpr static std::size_t size = 0xfc0;
  constexpr static std::size_t addrs = 0xaf11a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_ReadFileJson>(),
                        {"ToMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> GlobalNamespace::InputActionMap_ReadFileJson::ToMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_ReadFileJson>(),
                        {"ToMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap*>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_ReadMapJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_ReadFileJson::InputActionMap_ReadFileJson(::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>  actions, ::ArrayW<::GlobalNamespace::InputActionMap_ReadMapJson>  maps) noexcept  {
this->actions = actions;
this->maps = maps;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_ReadFileJson::InputActionMap_ReadFileJson()   {
}
