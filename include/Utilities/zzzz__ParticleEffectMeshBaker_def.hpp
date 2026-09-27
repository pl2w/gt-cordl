#pragma once
// IWYU pragma private; include "Utilities/ParticleEffectMeshBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ParticleEffectMeshBaker)
// Forward declare root types
namespace Utilities {
class ParticleEffectMeshBaker;
}
// Write type traits
MARK_REF_T(::Utilities::ParticleEffectMeshBaker*);
DEFINE_IL2CPP_CLASS(::Utilities::ParticleEffectMeshBaker*, "Utilities", "ParticleEffectMeshBaker");
// Dependencies UnityEngine.MonoBehaviour
namespace Utilities {
// Is value type: false
// CS Name: Utilities.ParticleEffectMeshBaker
class CORDL_TYPE ParticleEffectMeshBaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Utilities::ParticleEffectMeshBaker* New_ctor() ;

/// @brief Method .ctor, addr 0x5b710d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleEffectMeshBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectMeshBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleEffectMeshBaker(ParticleEffectMeshBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectMeshBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleEffectMeshBaker(ParticleEffectMeshBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3876};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Utilities::ParticleEffectMeshBaker) == 0x20, "Size mismatch!");

} // namespace end def Utilities
