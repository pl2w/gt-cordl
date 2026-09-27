#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCreateDrawCallSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalCreateDrawCallSystem)
namespace GlobalNamespace {
struct DecalCreateDrawCallSystem_DrawCallJob;
}
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawCallChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalCreateDrawCallSystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*, "UnityEngine.Rendering.Universal", "DecalCreateDrawCallSystem");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalCreateDrawCallSystem
class CORDL_TYPE DecalCreateDrawCallSystem : public ::System::Object {
public:
// Declarations
using DrawCallJob = ::GlobalNamespace::DecalCreateDrawCallSystem_DrawCallJob;

/// @brief Field m_EntityManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EntityManager, put=__cordl_internal_set_m_EntityManager)) ::UnityEngine::Rendering::Universal::DecalEntityManager*  m_EntityManager;

/// @brief Field m_MaxDrawDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDrawDistance, put=__cordl_internal_set_m_MaxDrawDistance)) float_t  m_MaxDrawDistance;

/// @brief Field m_Sampler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Sampler, put=__cordl_internal_set_m_Sampler)) ::UnityEngine::Rendering::ProfilingSampler*  m_Sampler;

 __declspec(property(get=get_maxDrawDistance, put=set_maxDrawDistance)) float_t  maxDrawDistance;

/// @brief Method Execute, addr 0xb234204, size 0x20c, virtual false, abstract: false, final false
inline void Execute() ;

/// @brief Method Execute, addr 0xb234410, size 0x1f0, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk*  cachedChunk, ::UnityEngine::Rendering::Universal::DecalCulledChunk*  culledChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*  drawCallChunk, int32_t  count) ;

static inline ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager, float_t  maxDrawDistance) ;

constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& __cordl_internal_get_m_EntityManager() const;

constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager() ;

constexpr float_t const& __cordl_internal_get_m_MaxDrawDistance() const;

constexpr float_t& __cordl_internal_get_m_MaxDrawDistance() ;

constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_Sampler() const;

constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler() ;

constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager*  value) ;

constexpr void __cordl_internal_set_m_MaxDrawDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

/// @brief Method .ctor, addr 0xb234150, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager*  entityManager, float_t  maxDrawDistance) ;

/// @brief Method get_maxDrawDistance, addr 0xb234140, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxDrawDistance() ;

/// @brief Method set_maxDrawDistance, addr 0xb234148, size 0x8, virtual false, abstract: false, final false
inline void set_maxDrawDistance(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecalCreateDrawCallSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecalCreateDrawCallSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecalCreateDrawCallSystem(DecalCreateDrawCallSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecalCreateDrawCallSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecalCreateDrawCallSystem(DecalCreateDrawCallSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18335};

/// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DecalEntityManager*  ___m_EntityManager;

/// @brief Field m_Sampler, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::ProfilingSampler*  ___m_Sampler;

/// @brief Field m_MaxDrawDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_MaxDrawDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem, ___m_Sampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem, ___m_MaxDrawDistance) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
