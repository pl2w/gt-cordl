#pragma once
// IWYU pragma private; include "Drawing/DrawingData_CommandBufferWrapper.hpp"
#include "Drawing/zzzz__DrawingData_CommandBufferWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrawingData_CommandBufferWrapper.SetWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_CommandBufferWrapper::*)(bool)>(&::GlobalNamespace::DrawingData_CommandBufferWrapper::SetWireframe)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55cdcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(),
                        {"SetWireframe", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_CommandBufferWrapper.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_CommandBufferWrapper::*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::GlobalNamespace::DrawingData_CommandBufferWrapper::DrawMesh)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55ce408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DrawingData_CommandBufferWrapper::SetWireframe(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(),
                        {"SetWireframe", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enable);
}
inline void GlobalNamespace::DrawingData_CommandBufferWrapper::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, matrix, material, submeshIndex, shaderPass, properties);
}
// Ctor Parameters [CppParam { name: "cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allowDisablingWireframe", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cmd2", ty: "::UnityEngine::Rendering::RasterCommandBuffer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_CommandBufferWrapper::DrawingData_CommandBufferWrapper(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  allowDisablingWireframe, ::UnityEngine::Rendering::RasterCommandBuffer*  cmd2) noexcept  {
this->cmd = cmd;
this->allowDisablingWireframe = allowDisablingWireframe;
this->cmd2 = cmd2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_CommandBufferWrapper::DrawingData_CommandBufferWrapper()   {
}
