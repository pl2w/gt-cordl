#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_MinMaxCurve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_MinMaxCurve)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct ParticleSystemCurveMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_MinMaxCurve);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
// Dependencies UnityEngine.ParticleSystemCurveMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxCurve
struct CORDL_TYPE ParticleSystem_MinMaxCurve {
public:
// Declarations
 __declspec(property(get=get_constant, put=set_constant)) float_t  constant;

 __declspec(property(get=get_constantMax, put=set_constantMax)) float_t  constantMax;

 __declspec(property(get=get_constantMin, put=set_constantMin)) float_t  constantMin;

 __declspec(property(get=get_curveMultiplier, put=set_curveMultiplier)) float_t  curveMultiplier;

 __declspec(property(get=get_mode)) ::UnityEngine::ParticleSystemCurveMode  mode;

/// @brief Method .ctor, addr 0xb670ab4, size 0x44, virtual false, abstract: false, final false
inline void _ctor(float_t  constant) ;

/// @brief Method .ctor, addr 0xb6707f4, size 0x48, virtual false, abstract: false, final false
inline void _ctor(float_t  min, float_t  max) ;

/// @brief Method get_constant, addr 0xb670b30, size 0x8, virtual false, abstract: false, final false
inline float_t get_constant() ;

/// @brief Method get_constantMax, addr 0xb670b10, size 0x8, virtual false, abstract: false, final false
inline float_t get_constantMax() ;

/// @brief Method get_constantMin, addr 0xb670b20, size 0x8, virtual false, abstract: false, final false
inline float_t get_constantMin() ;

/// @brief Method get_curveMultiplier, addr 0xb670b00, size 0x8, virtual false, abstract: false, final false
inline float_t get_curveMultiplier() ;

/// @brief Method get_mode, addr 0xb670af8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystemCurveMode get_mode() ;

/// @brief Method op_Implicit, addr 0xb669ebc, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxCurve op_Implicit___GlobalNamespace__ParticleSystem_MinMaxCurve(float_t  constant) ;

/// @brief Method set_constant, addr 0xb670b38, size 0x8, virtual false, abstract: false, final false
inline void set_constant(float_t  value) ;

/// @brief Method set_constantMax, addr 0xb670b18, size 0x8, virtual false, abstract: false, final false
inline void set_constantMax(float_t  value) ;

/// @brief Method set_constantMin, addr 0xb670b28, size 0x8, virtual false, abstract: false, final false
inline void set_constantMin(float_t  value) ;

/// @brief Method set_curveMultiplier, addr 0xb670b08, size 0x8, virtual false, abstract: false, final false
inline void set_curveMultiplier(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxCurve() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurveMax", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_MinMaxCurve(::UnityEngine::ParticleSystemCurveMode  m_Mode, float_t  m_CurveMultiplier, ::UnityEngine::AnimationCurve*  m_CurveMin, ::UnityEngine::AnimationCurve*  m_CurveMax, float_t  m_ConstantMin, float_t  m_ConstantMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemCurveMode  m_Mode;

/// [SerializeField]
/// @brief Field m_CurveMultiplier, offset: 0x4, size: 0x4, def value: None
 float_t  m_CurveMultiplier;

/// [SerializeField]
/// @brief Field m_CurveMin, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  m_CurveMin;

/// [SerializeField]
/// @brief Field m_CurveMax, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  m_CurveMax;

/// [SerializeField]
/// @brief Field m_ConstantMin, offset: 0x18, size: 0x4, def value: None
 float_t  m_ConstantMin;

/// [SerializeField]
/// @brief Field m_ConstantMax, offset: 0x1c, size: 0x4, def value: None
 float_t  m_ConstantMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurve, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurve, m_CurveMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurve, m_CurveMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurve, m_CurveMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurve, m_ConstantMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurve, m_ConstantMax) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_MinMaxCurve) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
