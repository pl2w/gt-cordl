#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_CustomDataModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_CustomDataModule)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_CustomDataModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_CustomDataModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_CustomDataModule, "UnityEngine", "ParticleSystem/CustomDataModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/CustomDataModule
struct CORDL_TYPE ParticleSystem_CustomDataModule {
public:
// Declarations
/// @brief Method .ctor, addr 0xb66e788, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_CustomDataModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_CustomDataModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30832};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_CustomDataModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_CustomDataModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
