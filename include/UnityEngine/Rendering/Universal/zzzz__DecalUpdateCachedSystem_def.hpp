#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalUpdateCachedSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalUpdateCachedSystem)
namespace GlobalNamespace {
struct DecalUpdateCachedSystem_UpdateTransformsJob;
}
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalUpdateCachedSystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*, "UnityEngine.Rendering.Universal", "DecalUpdateCachedSystem");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalUpdateCachedSystem
class CORDL_TYPE DecalUpdateCachedSystem : public ::System::Object {
public:
// Declarations
using UpdateTransformsJob = ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob;

/// @brief Field m_EntityManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EntityManager, put=__cordl_internal_set_m_EntityManager)) ::UnityEngine::Rendering::Universal::DecalEntityManager*  m_EntityManager;

/// @brief Field m_Sampler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Sampler, put=__cordl_internal_set_m_Sampler)) ::UnityEngine::Rendering::ProfilingSampler*  m_Sampler;

/// @brief Field m_SamplerJob, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SamplerJob, put=__cordl_internal_set_m_SamplerJob)) ::UnityEngine::Rendering::ProfilingSampler*  m_SamplerJob;

/// @brief Method Execute, addr 0xb2395d0, size 0x1b8, virtual false, abstract: false, final false
inline void Execute() ;

/// @brief Method Execute, addr 0xb239788, size 0x288, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::Universal::DecalEntityChunk*  entityChunk, ::UnityEngine::Rendering::Universal::DecalCachedChunk*  cachedChunk, int32_t  count) ;

static inline ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager) ;

constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& __cordl_internal_get_m_EntityManager() const;

constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager() ;

constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_Sampler() const;

constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler() ;

constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_SamplerJob() const;

constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_SamplerJob() ;

constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager*  value) ;

constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

constexpr void __cordl_internal_set_m_SamplerJob(::UnityEngine::Rendering::ProfilingSampler*  value) ;

/// @brief Method .ctor, addr 0xb2394ec, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecalUpdateCachedSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCachedSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecalUpdateCachedSystem(DecalUpdateCachedSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCachedSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecalUpdateCachedSystem(DecalUpdateCachedSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18347};

/// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DecalEntityManager*  ___m_EntityManager;

/// @brief Field m_Sampler, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::ProfilingSampler*  ___m_Sampler;

/// @brief Field m_SamplerJob, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::ProfilingSampler*  ___m_SamplerJob;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem, ___m_Sampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem, ___m_SamplerJob) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
