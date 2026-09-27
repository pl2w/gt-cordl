#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer_RenderPassDescriptor.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_RenderPassDescriptor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb24e744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScriptableRenderer_RenderPassDescriptor::_ctor(int32_t  width, int32_t  height, int32_t  sampleCount, int32_t  rtID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height, sampleCount, rtID);
}
// Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "samples", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "depthID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor::ScriptableRenderer_RenderPassDescriptor(int32_t  w, int32_t  h, int32_t  samples, int32_t  depthID) noexcept  {
this->w = w;
this->h = h;
this->samples = samples;
this->depthID = depthID;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor::ScriptableRenderer_RenderPassDescriptor()   {
}
