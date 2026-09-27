#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelPolygonClipper.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelPolygonClipper_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelPolygonClipper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelPolygonClipper::*)(int32_t)>(&::Pathfinding::Voxels::VoxelPolygonClipper::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ec8bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelPolygonClipper.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelPolygonClipper::*)(int32_t, ::UnityEngine::Vector3)>(&::Pathfinding::Voxels::VoxelPolygonClipper::set_Item)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ec8c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelPolygonClipper.ClipPolygonAlongX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelPolygonClipper::*)(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>, float_t, float_t)>(&::Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongX)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5ec8d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"ClipPolygonAlongX", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelPolygonClipper.ClipPolygonAlongZWithYZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelPolygonClipper::*)(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>, float_t, float_t)>(&::Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithYZ)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5ec8f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"ClipPolygonAlongZWithYZ", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelPolygonClipper.ClipPolygonAlongZWithY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelPolygonClipper::*)(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>, float_t, float_t)>(&::Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithY)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ec9104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"ClipPolygonAlongZWithY", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Voxels::VoxelPolygonClipper::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void Pathfinding::Voxels::VoxelPolygonClipper::set_Item(int32_t  i, ::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, value);
}
inline void Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongX(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>  result, float_t  multi, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"ClipPolygonAlongX", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result, multi, offset);
}
inline void Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithYZ(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>  result, float_t  multi, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"ClipPolygonAlongZWithYZ", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result, multi, offset);
}
inline void Pathfinding::Voxels::VoxelPolygonClipper::ClipPolygonAlongZWithY(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>  result, float_t  multi, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelPolygonClipper>(),
                        {"ClipPolygonAlongZWithY", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result, multi, offset);
}
// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "n", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::VoxelPolygonClipper::VoxelPolygonClipper(::ArrayW<float_t>  x, ::ArrayW<float_t>  y, ::ArrayW<float_t>  z, int32_t  n) noexcept  {
this->x = x;
this->y = y;
this->z = z;
this->n = n;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::VoxelPolygonClipper::VoxelPolygonClipper()   {
}
