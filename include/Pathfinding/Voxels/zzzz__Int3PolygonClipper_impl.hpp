#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/Int3PolygonClipper.hpp"
#include "Pathfinding/Voxels/zzzz__Int3PolygonClipper_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::Int3PolygonClipper.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Int3PolygonClipper::*)()>(&::Pathfinding::Voxels::Int3PolygonClipper::Init)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ec9250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Int3PolygonClipper>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Int3PolygonClipper.ClipPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Voxels::Int3PolygonClipper::*)(::ArrayW<::Pathfinding::Int3>, int32_t, ::ArrayW<::Pathfinding::Int3>, int32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::Int3PolygonClipper::ClipPolygon)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5ec92ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Int3PolygonClipper>(),
                        {"ClipPolygon", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Voxels::Int3PolygonClipper::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Int3PolygonClipper>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t Pathfinding::Voxels::Int3PolygonClipper::ClipPolygon(::ArrayW<::Pathfinding::Int3>  vIn, int32_t  n, ::ArrayW<::Pathfinding::Int3>  vOut, int32_t  multi, int32_t  offset, int32_t  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Int3PolygonClipper>(),
                        {"ClipPolygon", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, vIn, n, vOut, multi, offset, axis);
}
// Ctor Parameters [CppParam { name: "clipPolygonCache", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clipPolygonIntCache", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::Int3PolygonClipper::Int3PolygonClipper(::ArrayW<float_t>  clipPolygonCache, ::ArrayW<int32_t>  clipPolygonIntCache) noexcept  {
this->clipPolygonCache = clipPolygonCache;
this->clipPolygonIntCache = clipPolygonIntCache;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::Int3PolygonClipper::Int3PolygonClipper()   {
}
