#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_LimitVelocityOverLifetimeModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_LimitVelocityOverLifetimeModule)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_LimitVelocityOverLifetimeModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule, "UnityEngine", "ParticleSystem/LimitVelocityOverLifetimeModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct CORDL_TYPE ParticleSystem_LimitVelocityOverLifetimeModule {
public:
// Declarations
/// @brief [NativeName("MagnitudeMultiplier")]
 __declspec(property(get=get_limitMultiplier, put=set_limitMultiplier)) float_t  limitMultiplier;

/// @brief Method .ctor, addr 0xb66e500, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_limitMultiplier, addr 0xb671454, size 0x3c, virtual false, abstract: false, final false
inline float_t get_limitMultiplier() ;

/// [NativeThrows]
/// @brief Method set_limitMultiplier, addr 0xb671490, size 0x4c, virtual false, abstract: false, final false
inline void set_limitMultiplier(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_LimitVelocityOverLifetimeModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_LimitVelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
