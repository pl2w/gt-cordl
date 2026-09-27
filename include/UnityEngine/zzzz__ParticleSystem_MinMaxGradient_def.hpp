#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_MinMaxGradient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_MinMaxGradient)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_MinMaxGradient;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_MinMaxGradient);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
// Dependencies UnityEngine.Color, UnityEngine.ParticleSystemGradientMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxGradient
struct CORDL_TYPE ParticleSystem_MinMaxGradient {
public:
// Declarations
 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

/// @brief Method .ctor, addr 0xb670b40, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Method .ctor, addr 0xb670ba4, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Gradient*  gradient) ;

/// @brief Method .ctor, addr 0xb670bf4, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  min, ::UnityEngine::Color  max) ;

/// @brief Method get_color, addr 0xb66a2f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method op_Implicit, addr 0xb66a39c, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxGradient op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient(::UnityEngine::Color  color) ;

/// @brief Method op_Implicit, addr 0xb670c78, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxGradient op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient(::UnityEngine::Gradient*  gradient) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxGradient() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystemGradientMode  m_Mode, ::UnityEngine::Gradient*  m_GradientMin, ::UnityEngine::Gradient*  m_GradientMax, ::UnityEngine::Color  m_ColorMin, ::UnityEngine::Color  m_ColorMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [SerializeField]
/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemGradientMode  m_Mode;

/// [SerializeField]
/// @brief Field m_GradientMin, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Gradient*  m_GradientMin;

/// [SerializeField]
/// @brief Field m_GradientMax, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Gradient*  m_GradientMax;

/// [SerializeField]
/// @brief Field m_ColorMin, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMin;

/// [SerializeField]
/// @brief Field m_ColorMax, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradient, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradient, m_GradientMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradient, m_GradientMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradient, m_ColorMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradient, m_ColorMax) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_MinMaxGradient) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
