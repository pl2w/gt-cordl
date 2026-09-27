#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_MinMaxCurveBlittable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_MinMaxCurveBlittable)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurveBlittable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable, "UnityEngine", "ParticleSystem/MinMaxCurveBlittable");
// [NativeType((UnityEngine.Bindings.CodegenOptions)1, "MonoMinMaxCurve", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
// [RequiredByNativeCode]
// Dependencies System.IntPtr, UnityEngine.ParticleSystemCurveMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxCurveBlittable
struct CORDL_TYPE ParticleSystem_MinMaxCurveBlittable {
public:
// Declarations
/// @brief Method FromMixMaxCurve, addr 0xb67083c, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable FromMixMaxCurve(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurve>  minMaxCurve) ;

/// @brief Method ToMinMaxCurve, addr 0xb670898, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxCurve ToMinMaxCurve(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable>  minMaxCurveBlittable) ;

/// @brief Method op_Implicit, addr 0xb66e8fc, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxCurve op_Implicit___GlobalNamespace__ParticleSystem_MinMaxCurve(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  minMaxCurveBlittable) ;

/// @brief Method op_Implicit, addr 0xb66eaac, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable op_Implicit___GlobalNamespace__ParticleSystem_MinMaxCurveBlittable(::GlobalNamespace::ParticleSystem_MinMaxCurve  minMaxCurve) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxCurveBlittable() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurveMin", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurveMax", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_MinMaxCurveBlittable(::UnityEngine::ParticleSystemCurveMode  m_Mode, float_t  m_CurveMultiplier, ::System::IntPtr  m_CurveMin, ::System::IntPtr  m_CurveMax, float_t  m_ConstantMin, float_t  m_ConstantMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemCurveMode  m_Mode;

/// @brief Field m_CurveMultiplier, offset: 0x4, size: 0x4, def value: None
 float_t  m_CurveMultiplier;

/// @brief Field m_CurveMin, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_CurveMin;

/// @brief Field m_CurveMax, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_CurveMax;

/// @brief Field m_ConstantMin, offset: 0x18, size: 0x4, def value: None
 float_t  m_ConstantMin;

/// @brief Field m_ConstantMax, offset: 0x1c, size: 0x4, def value: None
 float_t  m_ConstantMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable, m_CurveMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable, m_CurveMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable, m_CurveMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable, m_ConstantMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable, m_ConstantMax) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
