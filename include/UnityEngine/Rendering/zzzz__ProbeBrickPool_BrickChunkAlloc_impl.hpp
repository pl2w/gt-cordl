#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickPool_BrickChunkAlloc.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_BrickChunkAlloc_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc.flattenIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc::*)(int32_t, int32_t)>(&::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc::flattenIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb159354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>(),
                        {"flattenIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ProbeBrickPool_BrickChunkAlloc::flattenIndex(int32_t  sx, int32_t  sy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc>(),
                        {"flattenIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sx, sy);
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc::ProbeBrickPool_BrickChunkAlloc(int32_t  x, int32_t  y, int32_t  z) noexcept  {
this->x = x;
this->y = y;
this->z = z;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc::ProbeBrickPool_BrickChunkAlloc()   {
}
