#pragma once
// IWYU pragma private; include "Voxels/SDFVoxelGenerator_SDFPrimitive.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_Operation_impl.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_Shape_impl.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_SDFPrimitive_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive.get_ShowRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::*)()>(&::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::get_ShowRadius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5db0ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(),
                        {"get_ShowRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive.get_ShowSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::*)()>(&::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::get_ShowSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5db0ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(),
                        {"get_ShowSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::*)()>(&::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::GetBounds)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5db0b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(),
                        {"GetBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::get_ShowRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(),
                        {"get_ShowRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::get_ShowSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(),
                        {"get_ShowSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Bounds GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::GetBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(),
                        {"GetBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Operation", ty: "::GlobalNamespace::SDFVoxelGenerator_Operation", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Shape", ty: "::GlobalNamespace::SDFVoxelGenerator_Shape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Material", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::SDFVoxelGenerator_SDFPrimitive(::GlobalNamespace::SDFVoxelGenerator_Operation  Operation, ::GlobalNamespace::SDFVoxelGenerator_Shape  Shape, ::Unity::Mathematics::float3  Position, float_t  Radius, ::Unity::Mathematics::float3  Size, uint8_t  Material) noexcept  {
this->Operation = Operation;
this->Shape = Shape;
this->Position = Position;
this->Radius = Radius;
this->Size = Size;
this->Material = Material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive::SDFVoxelGenerator_SDFPrimitive()   {
}
