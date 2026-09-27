#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_MinMaxGradientBlittable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_MinMaxGradientBlittable)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxGradient;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_MinMaxGradientBlittable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable, "UnityEngine", "ParticleSystem/MinMaxGradientBlittable");
// [RequiredByNativeCode]
// [NativeType((UnityEngine.Bindings.CodegenOptions)1, "MonoMinMaxGradient", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
// Dependencies System.IntPtr, UnityEngine.Color, UnityEngine.ParticleSystemGradientMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxGradientBlittable
struct CORDL_TYPE ParticleSystem_MinMaxGradientBlittable {
public:
// Declarations
/// @brief Method FromMixMaxGradient, addr 0xb670dd0, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable FromMixMaxGradient(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradient>  minMaxGradient) ;

/// @brief Method ToMinMaxGradient, addr 0xb670cd0, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxGradient ToMinMaxGradient(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>  minMaxGradientBlittable) ;

/// @brief Method op_Implicit, addr 0xb66f77c, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxGradient op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  minMaxGradientBlittable) ;

/// @brief Method op_Implicit, addr 0xb66f7b8, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradientBlittable(::GlobalNamespace::ParticleSystem_MinMaxGradient  minMaxGradient) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxGradientBlittable() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GradientMin", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GradientMax", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_MinMaxGradientBlittable(::UnityEngine::ParticleSystemGradientMode  m_Mode, ::System::IntPtr  m_GradientMin, ::System::IntPtr  m_GradientMax, ::UnityEngine::Color  m_ColorMin, ::UnityEngine::Color  m_ColorMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemGradientMode  m_Mode;

/// @brief Field m_GradientMin, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_GradientMin;

/// @brief Field m_GradientMax, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_GradientMax;

/// @brief Field m_ColorMin, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMin;

/// @brief Field m_ColorMax, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable, m_GradientMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable, m_GradientMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable, m_ColorMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable, m_ColorMax) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
