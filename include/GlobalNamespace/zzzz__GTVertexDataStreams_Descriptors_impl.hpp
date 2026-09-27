#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVertexDataStreams_Descriptors.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_impl.hpp"
#include "GlobalNamespace/zzzz__GTVertexDataStreams_Descriptors_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTVertexDataStreams_Descriptors.DoSetVertexBufferParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, int32_t)>(&::GlobalNamespace::GTVertexDataStreams_Descriptors::DoSetVertexBufferParams)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x569b6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVertexDataStreams_Descriptors*>(),
                        {"DoSetVertexBufferParams", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTVertexDataStreams_Descriptors::setStaticF_position(::UnityEngine::Rendering::VertexAttributeDescriptor  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "position", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>(std::forward<::UnityEngine::Rendering::VertexAttributeDescriptor>(value));
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor GlobalNamespace::GTVertexDataStreams_Descriptors::getStaticF_position()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "position", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>();
}
inline void GlobalNamespace::GTVertexDataStreams_Descriptors::setStaticF_color(::UnityEngine::Rendering::VertexAttributeDescriptor  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "color", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>(std::forward<::UnityEngine::Rendering::VertexAttributeDescriptor>(value));
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor GlobalNamespace::GTVertexDataStreams_Descriptors::getStaticF_color()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "color", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>();
}
inline void GlobalNamespace::GTVertexDataStreams_Descriptors::setStaticF_uv1(::UnityEngine::Rendering::VertexAttributeDescriptor  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "uv1", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>(std::forward<::UnityEngine::Rendering::VertexAttributeDescriptor>(value));
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor GlobalNamespace::GTVertexDataStreams_Descriptors::getStaticF_uv1()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "uv1", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>();
}
inline void GlobalNamespace::GTVertexDataStreams_Descriptors::setStaticF_lightmapUv(::UnityEngine::Rendering::VertexAttributeDescriptor  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "lightmapUv", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>(std::forward<::UnityEngine::Rendering::VertexAttributeDescriptor>(value));
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor GlobalNamespace::GTVertexDataStreams_Descriptors::getStaticF_lightmapUv()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "lightmapUv", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>();
}
inline void GlobalNamespace::GTVertexDataStreams_Descriptors::setStaticF_normal(::UnityEngine::Rendering::VertexAttributeDescriptor  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "normal", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>(std::forward<::UnityEngine::Rendering::VertexAttributeDescriptor>(value));
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor GlobalNamespace::GTVertexDataStreams_Descriptors::getStaticF_normal()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "normal", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>();
}
inline void GlobalNamespace::GTVertexDataStreams_Descriptors::setStaticF_tangent(::UnityEngine::Rendering::VertexAttributeDescriptor  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "tangent", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>(std::forward<::UnityEngine::Rendering::VertexAttributeDescriptor>(value));
}
inline ::UnityEngine::Rendering::VertexAttributeDescriptor GlobalNamespace::GTVertexDataStreams_Descriptors::getStaticF_tangent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VertexAttributeDescriptor, "tangent", ::GlobalNamespace::GTVertexDataStreams_Descriptors*>();
}
inline void GlobalNamespace::GTVertexDataStreams_Descriptors::DoSetVertexBufferParams(::by_ref<::GlobalNamespace::Mesh_MeshData>  writeData, int32_t  totalVertexCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVertexDataStreams_Descriptors*>(),
                        {"DoSetVertexBufferParams", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writeData, totalVertexCount);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTVertexDataStreams_Descriptors::GTVertexDataStreams_Descriptors()   {
}
