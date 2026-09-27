#pragma once
// IWYU pragma private; include "Voxels/MeshVertexData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_impl.hpp"
#include "Voxels/zzzz__MeshVertexData_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::Voxels::MeshVertexData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::MeshVertexData::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::Voxels::MeshVertexData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5dafb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshVertexData>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MeshVertexData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Voxels::MeshVertexData::*)()>(&::Voxels::MeshVertexData::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5dafb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::MeshVertexData>(),
                    {::i2c::class_of<::Voxels::MeshVertexData>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Voxels::MeshVertexData::setStaticF_VertexBufferMemoryLayout(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>, "VertexBufferMemoryLayout", ::Voxels::MeshVertexData>(std::forward<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> Voxels::MeshVertexData::getStaticF_VertexBufferMemoryLayout()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>, "VertexBufferMemoryLayout", ::Voxels::MeshVertexData>();
}
inline void Voxels::MeshVertexData::_ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float4  tangent, ::Unity::Mathematics::float4  materials, ::Unity::Mathematics::float4  blend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshVertexData>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, normal, tangent, materials, blend);
}
inline ::StringW Voxels::MeshVertexData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::MeshVertexData>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangent", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materials", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "blend", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::MeshVertexData::MeshVertexData(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float4  tangent, ::Unity::Mathematics::float4  materials, ::Unity::Mathematics::float4  blend) noexcept  {
this->position = position;
this->normal = normal;
this->tangent = tangent;
this->materials = materials;
this->blend = blend;
}
// Ctor Parameters []
constexpr ::Voxels::MeshVertexData::MeshVertexData()   {
}
