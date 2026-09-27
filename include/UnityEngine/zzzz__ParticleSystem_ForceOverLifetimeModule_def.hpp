#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_ForceOverLifetimeModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_ForceOverLifetimeModule)
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
struct ParticleSystem_ForceOverLifetimeModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule, "UnityEngine", "ParticleSystem/ForceOverLifetimeModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ForceOverLifetimeModule
struct CORDL_TYPE ParticleSystem_ForceOverLifetimeModule {
public:
// Declarations
 __declspec(property(get=get_x, put=set_x)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  x;

/// @brief [NativeName("X")]
 __declspec(property(get=get_xBlittable, put=set_xBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  xBlittable;

 __declspec(property(get=get_y, put=set_y)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  y;

/// @brief [NativeName("Y")]
 __declspec(property(get=get_yBlittable, put=set_yBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  yBlittable;

 __declspec(property(get=get_z, put=set_z)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  z;

/// @brief [NativeName("Z")]
 __declspec(property(get=get_zBlittable, put=set_zBlittable)) ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  zBlittable;

/// @brief Method .ctor, addr 0xb66e56c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_x, addr 0xb6714dc, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_x() ;

/// @brief Method get_xBlittable, addr 0xb671550, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_xBlittable() ;

/// @brief Method get_xBlittable_Injected, addr 0xb671664, size 0x44, virtual false, abstract: false, final false
static inline void get_xBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_y, addr 0xb6716ec, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_y() ;

/// @brief Method get_yBlittable, addr 0xb671760, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_yBlittable() ;

/// @brief Method get_yBlittable_Injected, addr 0xb671874, size 0x44, virtual false, abstract: false, final false
static inline void get_yBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method get_z, addr 0xb6718fc, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_z() ;

/// @brief Method get_zBlittable, addr 0xb671970, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable get_zBlittable() ;

/// @brief Method get_zBlittable_Injected, addr 0xb671a84, size 0x44, virtual false, abstract: false, final false
static inline void get_zBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method set_x, addr 0xb6715b0, size 0x70, virtual false, abstract: false, final false
inline void set_x(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_xBlittable, addr 0xb671620, size 0x44, virtual false, abstract: false, final false
inline void set_xBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_xBlittable_Injected, addr 0xb6716a8, size 0x44, virtual false, abstract: false, final false
static inline void set_xBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_y, addr 0xb6717c0, size 0x70, virtual false, abstract: false, final false
inline void set_y(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_yBlittable, addr 0xb671830, size 0x44, virtual false, abstract: false, final false
inline void set_yBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_yBlittable_Injected, addr 0xb6718b8, size 0x44, virtual false, abstract: false, final false
static inline void set_yBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

/// @brief Method set_z, addr 0xb6719d0, size 0x70, virtual false, abstract: false, final false
inline void set_z(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// [NativeThrows]
/// @brief Method set_zBlittable, addr 0xb671a40, size 0x44, virtual false, abstract: false, final false
inline void set_zBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_zBlittable_Injected, addr 0xb671ac8, size 0x44, virtual false, abstract: false, final false
static inline void set_zBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_ForceOverLifetimeModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_ForceOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
