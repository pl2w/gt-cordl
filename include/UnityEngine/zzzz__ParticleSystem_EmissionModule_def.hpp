#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_EmissionModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_EmissionModule)
namespace GlobalNamespace {
struct ParticleSystem_Burst;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurveBlittable;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_EmissionModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_EmissionModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/EmissionModule
struct CORDL_TYPE ParticleSystem_EmissionModule {
public:
// Declarations
 __declspec(property(get=get_burstCount, put=set_burstCount)) int32_t  burstCount;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_rateOverTime, put=set_rateOverTime)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  rateOverTime;

/// @brief [NativeName("RateOverTime")]
 __declspec(property(get=get_rateOverTimeBlittable, put=set_rateOverTimeBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  rateOverTimeBlittable;

 __declspec(property(get=get_rateOverTimeMultiplier, put=set_rateOverTimeMultiplier)) float_t  rateOverTimeMultiplier;

/// [NativeThrows]
/// @brief Method GetBurst, addr 0xb66fee0, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_Burst GetBurst(int32_t  index) ;

/// @brief Method GetBurst_Injected, addr 0xb66ffbc, size 0x54, virtual false, abstract: false, final false
static inline void GetBurst_Injected(::by_ref<::GlobalNamespace::ParticleSystem_EmissionModule>  _unity_self, int32_t  index, ::by_ref<::GlobalNamespace::ParticleSystem_Burst>  ret) ;

/// @brief Method GetBursts, addr 0xb66fd88, size 0x11c, virtual false, abstract: false, final false
inline int32_t GetBursts(::ArrayW<::GlobalNamespace::ParticleSystem_Burst>  bursts) ;

/// [NativeThrows]
/// @brief Method SetBurst, addr 0xb66fd34, size 0x54, virtual false, abstract: false, final false
inline void SetBurst(int32_t  index, ::GlobalNamespace::ParticleSystem_Burst  burst) ;

/// @brief Method SetBurst_Injected, addr 0xb66ff68, size 0x54, virtual false, abstract: false, final false
static inline void SetBurst_Injected(::by_ref<::GlobalNamespace::ParticleSystem_EmissionModule>  _unity_self, int32_t  index, ::by_ref<::GlobalNamespace::ParticleSystem_Burst>  burst) ;

/// @brief Method SetBursts, addr 0xb66fbf0, size 0x14, virtual false, abstract: false, final false
inline void SetBursts(::ArrayW<::GlobalNamespace::ParticleSystem_Burst>  bursts) ;

/// @brief Method SetBursts, addr 0xb66fc04, size 0xec, virtual false, abstract: false, final false
inline void SetBursts(::ArrayW<::GlobalNamespace::ParticleSystem_Burst>  bursts, int32_t  size) ;

/// @brief Method .ctor, addr 0xb66e494, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_burstCount, addr 0xb66fea4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_burstCount() ;

/// @brief Method get_enabled, addr 0xb669cf8, size 0x3c, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_rateOverTime, addr 0xb66fa04, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_rateOverTime() ;

/// @brief Method get_rateOverTimeBlittable, addr 0xb66fa78, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_rateOverTimeBlittable() ;

/// @brief Method get_rateOverTimeBlittable_Injected, addr 0xb66fb1c, size 0x44, virtual false, abstract: false, final false
static inline void get_rateOverTimeBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_EmissionModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_rateOverTimeMultiplier, addr 0xb669e30, size 0x3c, virtual false, abstract: false, final false
inline float_t get_rateOverTimeMultiplier() ;

/// [NativeThrows]
/// @brief Method set_burstCount, addr 0xb66fcf0, size 0x44, virtual false, abstract: false, final false
inline void set_burstCount(int32_t  value) ;

/// [NativeThrows]
/// @brief Method set_enabled, addr 0xb669d98, size 0x44, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_rateOverTime, addr 0xb669f24, size 0x70, virtual false, abstract: false, final false
inline void set_rateOverTime(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_rateOverTimeBlittable, addr 0xb66fad8, size 0x44, virtual false, abstract: false, final false
inline void set_rateOverTimeBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_rateOverTimeBlittable_Injected, addr 0xb66fb60, size 0x44, virtual false, abstract: false, final false
static inline void set_rateOverTimeBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_EmissionModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// [NativeThrows]
/// @brief Method set_rateOverTimeMultiplier, addr 0xb66fba4, size 0x4c, virtual false, abstract: false, final false
inline void set_rateOverTimeMultiplier(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_EmissionModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_EmissionModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmissionModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_EmissionModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
