#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_WriteFileJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteFileJson_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_WriteFileJson.FromMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionMap_WriteFileJson (*)(::UnityEngine::InputSystem::InputActionMap*)>(&::GlobalNamespace::InputActionMap_WriteFileJson::FromMap)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaf153dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteFileJson>(),
                        {"FromMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_WriteFileJson.FromMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionMap_WriteFileJson (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*)>(&::GlobalNamespace::InputActionMap_WriteFileJson::FromMaps)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xaf0f0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteFileJson>(),
                        {"FromMaps", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputActionMap_WriteFileJson GlobalNamespace::InputActionMap_WriteFileJson::FromMap(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteFileJson>(),
                        {"FromMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionMap_WriteFileJson>(nullptr, ___internal_method, map);
}
inline ::GlobalNamespace::InputActionMap_WriteFileJson GlobalNamespace::InputActionMap_WriteFileJson::FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_WriteFileJson>(),
                        {"FromMaps", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionMap_WriteFileJson>(nullptr, ___internal_method, maps);
}
// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_WriteFileJson::InputActionMap_WriteFileJson(::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps) noexcept  {
this->maps = maps;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_WriteFileJson::InputActionMap_WriteFileJson()   {
}
