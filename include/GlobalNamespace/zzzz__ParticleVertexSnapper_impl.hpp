#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleVertexSnapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleVertexSnapper_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleVertexSnapper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleVertexSnapper::*)()>(&::GlobalNamespace::ParticleVertexSnapper::Start)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5643124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleVertexSnapper.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleVertexSnapper::*)()>(&::GlobalNamespace::ParticleVertexSnapper::LateUpdate)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5643254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleVertexSnapper.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleVertexSnapper::*)()>(&::GlobalNamespace::ParticleVertexSnapper::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5643548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleVertexSnapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleVertexSnapper::*)()>(&::GlobalNamespace::ParticleVertexSnapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56435d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_targetSkinnedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSkinnedMesh;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_targetSkinnedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSkinnedMesh;
}
constexpr void GlobalNamespace::ParticleVertexSnapper::__cordl_internal_set_targetSkinnedMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSkinnedMesh = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_particleSystemComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystemComponent;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_particleSystemComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystemComponent;
}
constexpr void GlobalNamespace::ParticleVertexSnapper::__cordl_internal_set_particleSystemComponent(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystemComponent = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle> const& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr void GlobalNamespace::ParticleVertexSnapper::__cordl_internal_set_particles(::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particles = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_bakedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_bakedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedMesh;
}
constexpr void GlobalNamespace::ParticleVertexSnapper::__cordl_internal_set_bakedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedMesh = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_vertexPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::ParticleVertexSnapper::__cordl_internal_get_vertexPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexPositions;
}
constexpr void GlobalNamespace::ParticleVertexSnapper::__cordl_internal_set_vertexPositions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertexPositions = value;
}
inline void GlobalNamespace::ParticleVertexSnapper::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleVertexSnapper::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleVertexSnapper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleVertexSnapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleVertexSnapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleVertexSnapper* GlobalNamespace::ParticleVertexSnapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleVertexSnapper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleVertexSnapper::ParticleVertexSnapper()   {
}
