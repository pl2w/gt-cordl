#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalCameraHistory_Item.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraHistory_Item_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UniversalCameraHistory_Item.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniversalCameraHistory_Item::*)()>(&::GlobalNamespace::UniversalCameraHistory_Item::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb2aaf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalCameraHistory_Item>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UniversalCameraHistory_Item::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalCameraHistory_Item>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "writeVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalCameraHistory_Item::UniversalCameraHistory_Item(::UnityEngine::Rendering::ContextItem*  storage, int32_t  requestVersion, int32_t  writeVersion) noexcept  {
this->storage = storage;
this->requestVersion = requestVersion;
this->writeVersion = writeVersion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalCameraHistory_Item::UniversalCameraHistory_Item()   {
}
