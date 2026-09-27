#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/Utility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Voxels/zzzz__Utility_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::Utility.Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Pathfinding::Voxels::Utility::Min)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ec956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {"Min", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Utility.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Pathfinding::Voxels::Utility::Max)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ec9580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {"Max", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Utility.RemoveDuplicateVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::Int3> (*)(::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Utility::RemoveDuplicateVertices)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5ec9594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {"RemoveDuplicateVertices", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Utility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Utility::*)()>(&::Pathfinding::Voxels::Utility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ec98c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Pathfinding::Voxels::Utility::Min(float_t  a, float_t  b, float_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {"Min", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, c);
}
inline float_t Pathfinding::Voxels::Utility::Max(float_t  a, float_t  b, float_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {"Max", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, c);
}
inline ::ArrayW<::Pathfinding::Int3> Pathfinding::Voxels::Utility::RemoveDuplicateVertices(::ArrayW<::Pathfinding::Int3>  vertices, ::ArrayW<int32_t>  triangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {"RemoveDuplicateVertices", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::Int3>>(nullptr, ___internal_method, vertices, triangles);
}
inline void Pathfinding::Voxels::Utility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Utility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Voxels::Utility* Pathfinding::Voxels::Utility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::Utility*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::Utility::Utility()   {
}
