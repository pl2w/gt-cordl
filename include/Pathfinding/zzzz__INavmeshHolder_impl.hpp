#pragma once
// IWYU pragma private; include "Pathfinding/INavmeshHolder.hpp"
#include "Pathfinding/zzzz__INavmeshHolder_def.hpp"
#include "Pathfinding/zzzz__INavmesh_def.hpp"
#include "Pathfinding/zzzz__ITransformedGraph_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
//  Writing Method size for method: ::Pathfinding::INavmeshHolder.GetVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::INavmeshHolder::*)(int32_t)>(&::Pathfinding::INavmeshHolder::GetVertex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::INavmeshHolder*>(),
                    {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::INavmeshHolder.GetVertexInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::INavmeshHolder::*)(int32_t)>(&::Pathfinding::INavmeshHolder::GetVertexInGraphSpace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::INavmeshHolder*>(),
                    {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::INavmeshHolder.GetVertexArrayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::INavmeshHolder::*)(int32_t)>(&::Pathfinding::INavmeshHolder::GetVertexArrayIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::INavmeshHolder*>(),
                    {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::INavmeshHolder.GetTileCoordinates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::INavmeshHolder::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Pathfinding::INavmeshHolder::GetTileCoordinates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::INavmeshHolder*>(),
                    {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::Pathfinding::Int3 Pathfinding::INavmeshHolder::GetVertex(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, i);
}
inline ::Pathfinding::Int3 Pathfinding::INavmeshHolder::GetVertexInGraphSpace(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, i);
}
inline int32_t Pathfinding::INavmeshHolder::GetVertexArrayIndex(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void Pathfinding::INavmeshHolder::GetTileCoordinates(int32_t  tileIndex, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::INavmeshHolder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tileIndex, x, z);
}
/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr  Pathfinding::INavmeshHolder::operator ::Pathfinding::ITransformedGraph*() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* Pathfinding::INavmeshHolder::i___Pathfinding__ITransformedGraph() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::INavmesh"
constexpr  Pathfinding::INavmeshHolder::operator ::Pathfinding::INavmesh*() noexcept {
return static_cast<::Pathfinding::INavmesh*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::INavmesh"
constexpr ::Pathfinding::INavmesh* Pathfinding::INavmeshHolder::i___Pathfinding__INavmesh() noexcept {
return static_cast<::Pathfinding::INavmesh*>(static_cast<void*>(this));
}
