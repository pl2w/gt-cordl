#pragma once
// IWYU pragma private; include "Voxels/ChunkComponent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Voxels/zzzz__ChunkComponent_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::ChunkComponent.get_World
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Voxels::VoxelWorld> (::Voxels::ChunkComponent::*)()>(&::Voxels::ChunkComponent::get_World)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {"get_World", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkComponent.set_World
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkComponent::*)(::Voxels::VoxelWorld*)>(&::Voxels::ChunkComponent::set_World)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {"set_World", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkComponent.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkComponent::*)()>(&::Voxels::ChunkComponent::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5dac268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkComponent::*)()>(&::Voxels::ChunkComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& Voxels::ChunkComponent::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& Voxels::ChunkComponent::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void Voxels::ChunkComponent::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Voxels::ChunkComponent::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Voxels::ChunkComponent::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void Voxels::ChunkComponent::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& Voxels::ChunkComponent::__cordl_internal_get_meshCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& Voxels::ChunkComponent::__cordl_internal_get_meshCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCollider;
}
constexpr void Voxels::ChunkComponent::__cordl_internal_set_meshCollider(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshCollider = value;
}
constexpr ::UnityW<::Voxels::VoxelWorld>& Voxels::ChunkComponent::__cordl_internal_get__World_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____World_k__BackingField;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& Voxels::ChunkComponent::__cordl_internal_get__World_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____World_k__BackingField;
}
constexpr void Voxels::ChunkComponent::__cordl_internal_set__World_k__BackingField(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____World_k__BackingField = value;
}
inline ::UnityW<::Voxels::VoxelWorld> Voxels::ChunkComponent::get_World()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {"get_World", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Voxels::VoxelWorld>>(this, ___internal_method);
}
inline void Voxels::ChunkComponent::set_World(::Voxels::VoxelWorld*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {"set_World", {}, {::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Voxels::ChunkComponent::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::ChunkComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::ChunkComponent* Voxels::ChunkComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::ChunkComponent*>());
}
// Ctor Parameters []
constexpr ::Voxels::ChunkComponent::ChunkComponent()   {
}
