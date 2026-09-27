#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCreateDrawCallSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_DrawCallJob_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawCallChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.get_maxDrawDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(&::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb234140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"get_maxDrawDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.set_maxDrawDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(float_t)>(&::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb234148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"set_maxDrawDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, float_t)>(&::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb234150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(&::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb234204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb234410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_EntityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_EntityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EntityManager = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_Sampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_Sampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sampler = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_MaxDrawDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDrawDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_MaxDrawDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDrawDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_MaxDrawDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxDrawDistance = value;
}
inline float_t UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"get_maxDrawDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"set_maxDrawDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager, float_t  maxDrawDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityManager, maxDrawDistance);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk*  cachedChunk, ::UnityEngine::Rendering::Universal::DecalCulledChunk*  culledChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*  drawCallChunk, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cachedChunk, culledChunk, drawCallChunk, count);
}
inline ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager, float_t  maxDrawDistance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(entityManager, maxDrawDistance));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::DecalCreateDrawCallSystem()   {
}
