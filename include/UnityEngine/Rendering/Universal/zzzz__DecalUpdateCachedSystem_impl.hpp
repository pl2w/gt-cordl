#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalUpdateCachedSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCachedSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCachedSystem_UpdateTransformsJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb2394ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)()>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb2395d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xb239788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_EntityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_EntityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EntityManager = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_Sampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_Sampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sampler = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_SamplerJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplerJob;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_SamplerJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplerJob;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_set_m_SamplerJob(::UnityEngine::Rendering::ProfilingSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SamplerJob = value;
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityManager);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute(::UnityEngine::Rendering::Universal::DecalEntityChunk*  entityChunk, ::UnityEngine::Rendering::Universal::DecalCachedChunk*  cachedChunk, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityChunk, cachedChunk, count);
}
inline ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(entityManager));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::DecalUpdateCachedSystem()   {
}
