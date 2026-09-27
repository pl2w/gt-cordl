#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_ColorOverLifetimeModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_ColorOverLifetimeModule)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxGradientBlittable;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_ColorOverLifetimeModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule, "UnityEngine", "ParticleSystem/ColorOverLifetimeModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct CORDL_TYPE ParticleSystem_ColorOverLifetimeModule {
public:
// Declarations
 __declspec(property(put=set_color)) ::GlobalNamespace::ParticleSystem_MinMaxGradient  color;

/// @brief [NativeName("Color")]
 __declspec(property(put=set_colorBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  colorBlittable;

/// @brief Method .ctor, addr 0xb66e590, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method set_color, addr 0xb671b0c, size 0x80, virtual false, abstract: false, final false
inline void set_color(::GlobalNamespace::ParticleSystem_MinMaxGradient  value) ;

/// [NativeThrows]
/// @brief Method set_colorBlittable, addr 0xb671b8c, size 0x44, virtual false, abstract: false, final false
inline void set_colorBlittable(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  value) ;

/// @brief Method set_colorBlittable_Injected, addr 0xb671bd0, size 0x44, virtual false, abstract: false, final false
static inline void set_colorBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_ColorOverLifetimeModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_ColorOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_ColorOverLifetimeModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
