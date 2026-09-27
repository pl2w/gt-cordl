#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_RotationOverLifetimeModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_RotationOverLifetimeModule)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_RotationOverLifetimeModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule, "UnityEngine", "ParticleSystem/RotationOverLifetimeModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct CORDL_TYPE ParticleSystem_RotationOverLifetimeModule {
public:
// Declarations
/// @brief Method .ctor, addr 0xb66e620, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_RotationOverLifetimeModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_RotationOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30826};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_RotationOverLifetimeModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
