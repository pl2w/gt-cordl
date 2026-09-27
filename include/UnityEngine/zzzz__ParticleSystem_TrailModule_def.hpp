#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_TrailModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_TrailModule)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurveBlittable;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
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
struct ParticleSystem_TrailModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_TrailModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_TrailModule, "UnityEngine", "ParticleSystem/TrailModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/TrailModule
struct CORDL_TYPE ParticleSystem_TrailModule {
public:
// Declarations
 __declspec(property(put=set_colorOverLifetime)) ::GlobalNamespace::ParticleSystem_MinMaxGradient  colorOverLifetime;

/// @brief [NativeName("ColorOverLifetime")]
 __declspec(property(put=set_colorOverLifetimeBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  colorOverLifetimeBlittable;

 __declspec(property(put=set_widthOverTrail)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  widthOverTrail;

/// @brief [NativeName("WidthOverTrail")]
 __declspec(property(put=set_widthOverTrailBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  widthOverTrailBlittable;

/// @brief Method .ctor, addr 0xb66e764, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method set_colorOverLifetime, addr 0xb671d1c, size 0x80, virtual false, abstract: false, final false
inline void set_colorOverLifetime(::GlobalNamespace::ParticleSystem_MinMaxGradient  value) ;

/// [NativeThrows]
/// @brief Method set_colorOverLifetimeBlittable, addr 0xb671d9c, size 0x44, virtual false, abstract: false, final false
inline void set_colorOverLifetimeBlittable(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  value) ;

/// @brief Method set_colorOverLifetimeBlittable_Injected, addr 0xb671de0, size 0x44, virtual false, abstract: false, final false
static inline void set_colorOverLifetimeBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_TrailModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>  value) ;

/// @brief Method set_widthOverTrail, addr 0xb671e24, size 0x70, virtual false, abstract: false, final false
inline void set_widthOverTrail(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_widthOverTrailBlittable, addr 0xb671e94, size 0x44, virtual false, abstract: false, final false
inline void set_widthOverTrailBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_widthOverTrailBlittable_Injected, addr 0xb671ed8, size 0x44, virtual false, abstract: false, final false
static inline void set_widthOverTrailBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_TrailModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_TrailModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_TrailModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_TrailModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_TrailModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
