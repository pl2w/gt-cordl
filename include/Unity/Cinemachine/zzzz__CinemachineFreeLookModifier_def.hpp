#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLookModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_NoiseModifier_NoiseSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_TopBottomRigs_1_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineFreeLookModifier)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
template<typename T>
struct CinemachineFreeLookModifier_TopBottomRigs_1;
}
namespace GlobalNamespace {
struct NoiseModifier_CinemachineFreeLookModifier_NoiseSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
template<typename T>
class CinemachineFreeLookModifier_ComponentModifier_1;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_CompositionModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_DistanceModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableComposition;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableDistance;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableNoise;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiablePositionDamping;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifierValueSource;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_LensModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_Modifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_NoiseModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_PositionDampingModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_TiltModifier;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
struct ScreenComposerSettings;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier;
}
namespace Unity::Cinemachine {
template<typename T>
class CinemachineFreeLookModifier_ComponentModifier_1;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_CompositionModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_DistanceModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableComposition;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableDistance;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableNoise;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiablePositionDamping;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifierValueSource;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_LensModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_Modifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_NoiseModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_PositionDampingModifier;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_TiltModifier;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier*);
MARK_GEN_REF_T_PTR(::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_CompositionModifier*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_DistanceModifier*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_LensModifier*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_NoiseModifier*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_PositionDampingModifier*);
MARK_REF_T(::Unity::Cinemachine::CinemachineFreeLookModifier_TiltModifier*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1, "Unity.Cinemachine", "CinemachineFreeLookModifier/ComponentModifier`1");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_CompositionModifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier/CompositionModifier");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_DistanceModifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier/DistanceModifier");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*, "Unity.Cinemachine", "CinemachineFreeLookModifier/IModifiableComposition");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*, "Unity.Cinemachine", "CinemachineFreeLookModifier/IModifiableDistance");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise*, "Unity.Cinemachine", "CinemachineFreeLookModifier/IModifiableNoise");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*, "Unity.Cinemachine", "CinemachineFreeLookModifier/IModifiablePositionDamping");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*, "Unity.Cinemachine", "CinemachineFreeLookModifier/IModifierValueSource");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_LensModifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier/LensModifier");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier/Modifier");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_NoiseModifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier/NoiseModifier");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_PositionDampingModifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier/PositionDampingModifier");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFreeLookModifier_TiltModifier*, "Unity.Cinemachine", "CinemachineFreeLookModifier/TiltModifier");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine FreeLook Modifier")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineFreeLookModifier.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier
class CORDL_TYPE CinemachineFreeLookModifier : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
template<typename T>
using TopBottomRigs_1 = ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<T>;

template<typename T>
using ComponentModifier_1 = ::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1<T>;

using CompositionModifier = ::Unity::Cinemachine::CinemachineFreeLookModifier_CompositionModifier;

using DistanceModifier = ::Unity::Cinemachine::CinemachineFreeLookModifier_DistanceModifier;

using IModifiableComposition = ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition;

using IModifiableDistance = ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance;

using IModifiableNoise = ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise;

using IModifiablePositionDamping = ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping;

using IModifierValueSource = ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource;

using LensModifier = ::Unity::Cinemachine::CinemachineFreeLookModifier_LensModifier;

using Modifier = ::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier;

using NoiseModifier = ::Unity::Cinemachine::CinemachineFreeLookModifier_NoiseModifier;

using PositionDampingModifier = ::Unity::Cinemachine::CinemachineFreeLookModifier_PositionDampingModifier;

using TiltModifier = ::Unity::Cinemachine::CinemachineFreeLookModifier_TiltModifier;

/// @brief Field Easing, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Easing, put=__cordl_internal_set_Easing)) float_t  Easing;

/// @brief Field Modifiers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Modifiers, put=__cordl_internal_set_Modifiers)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier*>*  Modifiers;

/// @brief Field m_CachedEasingValue, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedEasingValue, put=__cordl_internal_set_m_CachedEasingValue)) float_t  m_CachedEasingValue;

/// @brief Field m_CurrentValue, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentValue, put=__cordl_internal_set_m_CurrentValue)) float_t  m_CurrentValue;

/// @brief Field m_EasingCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EasingCurve, put=__cordl_internal_set_m_EasingCurve)) ::UnityEngine::AnimationCurve*  m_EasingCurve;

/// @brief Field m_ValueSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValueSource, put=__cordl_internal_set_m_ValueSource)) ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*  m_ValueSource;

/// @brief Method HasValueSource, addr 0xae92970, size 0x20, virtual false, abstract: false, final false
inline bool HasValueSource() ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier* New_ctor() ;

/// @brief Method OnEnable, addr 0xae92888, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xae927d8, size 0xb0, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae92bfc, size 0x11c, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method PrePipelineMutateCameraStateCallback, addr 0xae92990, size 0x26c, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraStateCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

/// @brief Method RefreshComponentCache, addr 0xae928a4, size 0xcc, virtual false, abstract: false, final false
inline void RefreshComponentCache() ;

/// @brief Method TryGetVcamComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void TryGetVcamComponent(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<T>  component) ;

constexpr float_t const& __cordl_internal_get_Easing() const;

constexpr float_t& __cordl_internal_get_Easing() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier*>* const& __cordl_internal_get_Modifiers() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier*>*& __cordl_internal_get_Modifiers() ;

constexpr float_t const& __cordl_internal_get_m_CachedEasingValue() const;

constexpr float_t& __cordl_internal_get_m_CachedEasingValue() ;

constexpr float_t const& __cordl_internal_get_m_CurrentValue() const;

constexpr float_t& __cordl_internal_get_m_CurrentValue() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_EasingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_EasingCurve() ;

constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* const& __cordl_internal_get_m_ValueSource() const;

constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*& __cordl_internal_get_m_ValueSource() ;

constexpr void __cordl_internal_set_Easing(float_t  value) ;

constexpr void __cordl_internal_set_Modifiers(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier*>*  value) ;

constexpr void __cordl_internal_set_m_CachedEasingValue(float_t  value) ;

constexpr void __cordl_internal_set_m_CurrentValue(float_t  value) ;

constexpr void __cordl_internal_set_m_EasingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_ValueSource(::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*  value) ;

/// @brief Method .ctor, addr 0xae92d18, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier(CinemachineFreeLookModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier(CinemachineFreeLookModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22186};

/// [Tooltip("The amount of easing to apply towards the center value. Zero easing blends linearly through the center value, while an easing of 1 smooths the result as it passes over the center value.")]
/// [Range(0, 1)]
/// @brief Field Easing, offset: 0x30, size: 0x4, def value: None
 float_t  ___Easing;

/// [Tooltip("These will modify settings as a function of the FreeLook\'s Vertical axis value")]
/// [SerializeReference]
/// @brief Field Modifiers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier*>*  ___Modifiers;

/// @brief Field m_ValueSource, offset: 0x40, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*  ___m_ValueSource;

/// @brief Field m_CurrentValue, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_CurrentValue;

/// @brief Field m_EasingCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_EasingCurve;

/// @brief Field m_CachedEasingValue, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_CachedEasingValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier, ___Easing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier, ___Modifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier, ___m_ValueSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier, ___m_CurrentValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier, ___m_EasingCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier, ___m_CachedEasingValue) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier) == 0x60, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.ValueTuple`2<T1, T2>, Unity.Cinemachine.CinemachineFreeLookModifier::ComponentModifier`1<T>, Unity.Cinemachine.CinemachineFreeLookModifier::NoiseModifier::NoiseSettings, Unity.Cinemachine.CinemachineFreeLookModifier::TopBottomRigs`1<T>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/NoiseModifier
class CORDL_TYPE CinemachineFreeLookModifier_NoiseModifier : public ::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise*> {
public:
// Declarations
using NoiseSettings = ::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings;

/// @brief Field Noise, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Noise, put=__cordl_internal_set_Noise)) ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings>  Noise;

/// @brief Field m_CenterNoise, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CenterNoise, put=__cordl_internal_set_m_CenterNoise)) ::System::ValueTuple_2<float_t,float_t>  m_CenterNoise;

/// @brief Method AfterPipeline, addr 0xae93f38, size 0xc4, virtual true, abstract: false, final false
inline void AfterPipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

/// @brief Method BeforePipeline, addr 0xae93d24, size 0x214, virtual true, abstract: false, final false
inline void BeforePipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_NoiseModifier* New_ctor() ;

/// @brief Method Reset, addr 0xae93c7c, size 0xa8, virtual true, abstract: false, final false
inline void Reset(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings> const& __cordl_internal_get_Noise() const;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings>& __cordl_internal_get_Noise() ;

constexpr ::System::ValueTuple_2<float_t,float_t> const& __cordl_internal_get_m_CenterNoise() const;

constexpr ::System::ValueTuple_2<float_t,float_t>& __cordl_internal_get_m_CenterNoise() ;

constexpr void __cordl_internal_set_Noise(::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings>  value) ;

constexpr void __cordl_internal_set_m_CenterNoise(::System::ValueTuple_2<float_t,float_t>  value) ;

/// @brief Method .ctor, addr 0xae93ffc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_NoiseModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_NoiseModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_NoiseModifier(CinemachineFreeLookModifier_NoiseModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_NoiseModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_NoiseModifier(CinemachineFreeLookModifier_NoiseModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22184};

/// [HideFoldout]
/// @brief Field Noise, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::GlobalNamespace::NoiseModifier_CinemachineFreeLookModifier_NoiseSettings>  ___Noise;

/// @brief Field m_CenterNoise, offset: 0x28, size: 0x10, def value: None
 ::System::ValueTuple_2<float_t,float_t>  ___m_CenterNoise;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_NoiseModifier, ___Noise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_NoiseModifier, ___m_CenterNoise) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier_NoiseModifier) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineFreeLookModifier::ComponentModifier`1<T>, Unity.Cinemachine.CinemachineFreeLookModifier::TopBottomRigs`1<T>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/DistanceModifier
class CORDL_TYPE CinemachineFreeLookModifier_DistanceModifier : public ::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*> {
public:
// Declarations
/// @brief Field Distance, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Distance, put=__cordl_internal_set_Distance)) ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>  Distance;

/// @brief Field m_CenterDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CenterDistance, put=__cordl_internal_set_m_CenterDistance)) float_t  m_CenterDistance;

/// @brief Method AfterPipeline, addr 0xae93b74, size 0xc0, virtual true, abstract: false, final false
inline void AfterPipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

/// @brief Method BeforePipeline, addr 0xae939f0, size 0x184, virtual true, abstract: false, final false
inline void BeforePipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_DistanceModifier* New_ctor() ;

/// @brief Method Reset, addr 0xae9394c, size 0xa4, virtual true, abstract: false, final false
inline void Reset(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method Validate, addr 0xae93938, size 0x14, virtual true, abstract: false, final false
inline void Validate(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t> const& __cordl_internal_get_Distance() const;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>& __cordl_internal_get_Distance() ;

constexpr float_t const& __cordl_internal_get_m_CenterDistance() const;

constexpr float_t& __cordl_internal_get_m_CenterDistance() ;

constexpr void __cordl_internal_set_Distance(::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>  value) ;

constexpr void __cordl_internal_set_m_CenterDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xae93c34, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_DistanceModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_DistanceModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_DistanceModifier(CinemachineFreeLookModifier_DistanceModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_DistanceModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_DistanceModifier(CinemachineFreeLookModifier_DistanceModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22182};

/// [HideFoldout]
/// @brief Field Distance, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>  ___Distance;

/// @brief Field m_CenterDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_CenterDistance;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_DistanceModifier, ___Distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_DistanceModifier, ___m_CenterDistance) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier_DistanceModifier) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineFreeLookModifier::ComponentModifier`1<T>, Unity.Cinemachine.CinemachineFreeLookModifier::TopBottomRigs`1<T>, Unity.Cinemachine.ScreenComposerSettings
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/CompositionModifier
class CORDL_TYPE CinemachineFreeLookModifier_CompositionModifier : public ::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*> {
public:
// Declarations
/// @brief Field Composition, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Composition, put=__cordl_internal_set_Composition)) ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::Unity::Cinemachine::ScreenComposerSettings>  Composition;

/// @brief Field m_SavedComposition, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_SavedComposition, put=__cordl_internal_set_m_SavedComposition)) ::Unity::Cinemachine::ScreenComposerSettings  m_SavedComposition;

/// @brief Method AfterPipeline, addr 0xae93818, size 0xd8, virtual true, abstract: false, final false
inline void AfterPipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

/// @brief Method BeforePipeline, addr 0xae93678, size 0x1a0, virtual true, abstract: false, final false
inline void BeforePipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_CompositionModifier* New_ctor() ;

/// @brief Method Reset, addr 0xae935ac, size 0xcc, virtual true, abstract: false, final false
inline void Reset(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method Validate, addr 0xae93588, size 0x24, virtual true, abstract: false, final false
inline void Validate(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::Unity::Cinemachine::ScreenComposerSettings> const& __cordl_internal_get_Composition() const;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::Unity::Cinemachine::ScreenComposerSettings>& __cordl_internal_get_Composition() ;

constexpr ::Unity::Cinemachine::ScreenComposerSettings const& __cordl_internal_get_m_SavedComposition() const;

constexpr ::Unity::Cinemachine::ScreenComposerSettings& __cordl_internal_get_m_SavedComposition() ;

constexpr void __cordl_internal_set_Composition(::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::Unity::Cinemachine::ScreenComposerSettings>  value) ;

constexpr void __cordl_internal_set_m_SavedComposition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

/// @brief Method .ctor, addr 0xae938f0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_CompositionModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_CompositionModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_CompositionModifier(CinemachineFreeLookModifier_CompositionModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_CompositionModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_CompositionModifier(CinemachineFreeLookModifier_CompositionModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22181};

/// [HideFoldout]
/// @brief Field Composition, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::Unity::Cinemachine::ScreenComposerSettings>  ___Composition;

/// @brief Field m_SavedComposition, offset: 0x28, size: 0x28, def value: None
 ::Unity::Cinemachine::ScreenComposerSettings  ___m_SavedComposition;

/// @brief Size padding 0x90 - 0x50 = 0x40, packed as 0x40
 uint8_t  _cordl_size_padding[0x40];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_CompositionModifier, ___Composition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_CompositionModifier, ___m_SavedComposition) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier_CompositionModifier) == 0x90, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineFreeLookModifier::ComponentModifier`1<T>, Unity.Cinemachine.CinemachineFreeLookModifier::TopBottomRigs`1<T>, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/PositionDampingModifier
class CORDL_TYPE CinemachineFreeLookModifier_PositionDampingModifier : public ::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*> {
public:
// Declarations
/// @brief Field Damping, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::UnityEngine::Vector3>  Damping;

/// @brief Field m_CenterDamping, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CenterDamping, put=__cordl_internal_set_m_CenterDamping)) ::UnityEngine::Vector3  m_CenterDamping;

/// @brief Method AfterPipeline, addr 0xae93468, size 0xd8, virtual true, abstract: false, final false
inline void AfterPipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

/// @brief Method BeforePipeline, addr 0xae9329c, size 0x1cc, virtual true, abstract: false, final false
inline void BeforePipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_PositionDampingModifier* New_ctor() ;

/// @brief Method Reset, addr 0xae931f0, size 0xac, virtual true, abstract: false, final false
inline void Reset(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method Validate, addr 0xae931cc, size 0x24, virtual true, abstract: false, final false
inline void Validate(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::UnityEngine::Vector3> const& __cordl_internal_get_Damping() const;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::UnityEngine::Vector3>& __cordl_internal_get_Damping() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CenterDamping() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CenterDamping() ;

constexpr void __cordl_internal_set_Damping(::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_CenterDamping(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xae93540, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_PositionDampingModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_PositionDampingModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_PositionDampingModifier(CinemachineFreeLookModifier_PositionDampingModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_PositionDampingModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_PositionDampingModifier(CinemachineFreeLookModifier_PositionDampingModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22180};

/// [HideFoldout]
/// @brief Field Damping, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<::UnityEngine::Vector3>  ___Damping;

/// @brief Field m_CenterDamping, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CenterDamping;

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_PositionDampingModifier, ___Damping) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_PositionDampingModifier, ___m_CenterDamping) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier_PositionDampingModifier) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineFreeLookModifier::Modifier, Unity.Cinemachine.LensSettings
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/LensModifier
class CORDL_TYPE CinemachineFreeLookModifier_LensModifier : public ::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier {
public:
// Declarations
/// @brief Field Bottom, offset 0x68, size 0x58 
 __declspec(property(get=__cordl_internal_get_Bottom, put=__cordl_internal_set_Bottom)) ::Unity::Cinemachine::LensSettings  Bottom;

/// @brief Field Top, offset 0x10, size 0x58 
 __declspec(property(get=__cordl_internal_get_Top, put=__cordl_internal_set_Top)) ::Unity::Cinemachine::LensSettings  Top;

/// @brief Method BeforePipeline, addr 0xae93158, size 0x6c, virtual true, abstract: false, final false
inline void BeforePipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_LensModifier* New_ctor() ;

/// @brief Method Reset, addr 0xae93030, size 0x128, virtual true, abstract: false, final false
inline void Reset(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method Validate, addr 0xae9300c, size 0x24, virtual true, abstract: false, final false
inline void Validate(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr ::Unity::Cinemachine::LensSettings const& __cordl_internal_get_Bottom() const;

constexpr ::Unity::Cinemachine::LensSettings& __cordl_internal_get_Bottom() ;

constexpr ::Unity::Cinemachine::LensSettings const& __cordl_internal_get_Top() const;

constexpr ::Unity::Cinemachine::LensSettings& __cordl_internal_get_Top() ;

constexpr void __cordl_internal_set_Bottom(::Unity::Cinemachine::LensSettings  value) ;

constexpr void __cordl_internal_set_Top(::Unity::Cinemachine::LensSettings  value) ;

/// @brief Method .ctor, addr 0xae931c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_LensModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_LensModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_LensModifier(CinemachineFreeLookModifier_LensModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_LensModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_LensModifier(CinemachineFreeLookModifier_LensModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22179};

/// [Tooltip("Value to take at the top of the axis range")]
/// [LensSettingsHideModeOverrideProperty]
/// @brief Field Top, offset: 0x10, size: 0x58, def value: None
 ::Unity::Cinemachine::LensSettings  ___Top;

/// [Tooltip("Value to take at the bottom of the axis range")]
/// [LensSettingsHideModeOverrideProperty]
/// @brief Field Bottom, offset: 0x68, size: 0x58, def value: None
 ::Unity::Cinemachine::LensSettings  ___Bottom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_LensModifier, ___Top) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_LensModifier, ___Bottom) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier_LensModifier) == 0xc0, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineFreeLookModifier::Modifier, Unity.Cinemachine.CinemachineFreeLookModifier::TopBottomRigs`1<T>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/TiltModifier
class CORDL_TYPE CinemachineFreeLookModifier_TiltModifier : public ::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier {
public:
// Declarations
/// @brief Field Tilt, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Tilt, put=__cordl_internal_set_Tilt)) ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>  Tilt;

/// @brief Method AfterPipeline, addr 0xae92e00, size 0x204, virtual true, abstract: false, final false
inline void AfterPipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_TiltModifier* New_ctor() ;

/// @brief Method Reset, addr 0xae92df0, size 0x10, virtual true, abstract: false, final false
inline void Reset(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method Validate, addr 0xae92dcc, size 0x24, virtual true, abstract: false, final false
inline void Validate(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t> const& __cordl_internal_get_Tilt() const;

constexpr ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>& __cordl_internal_get_Tilt() ;

constexpr void __cordl_internal_set_Tilt(::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>  value) ;

/// @brief Method .ctor, addr 0xae93004, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_TiltModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_TiltModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_TiltModifier(CinemachineFreeLookModifier_TiltModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_TiltModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_TiltModifier(CinemachineFreeLookModifier_TiltModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22178};

/// [HideFoldout]
/// @brief Field Tilt, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1<float_t>  ___Tilt;

/// @brief Size padding 0x18 - 0x20 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFreeLookModifier_TiltModifier, ___Tilt) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier_TiltModifier) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineFreeLookModifier::Modifier
namespace Unity::Cinemachine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/ComponentModifier`1<T>
class CORDL_TYPE CinemachineFreeLookModifier_ComponentModifier_1 : public ::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier {
public:
// Declarations
/// @brief Field CachedComponent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CachedComponent, put=__cordl_internal_set_CachedComponent)) T  CachedComponent;

 __declspec(property(get=get_CachedComponentType)) ::System::Type*  CachedComponentType;

 __declspec(property(get=get_HasRequiredComponent)) bool  HasRequiredComponent;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_ComponentModifier_1<T>* New_ctor() ;

/// @brief Method RefreshCache, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RefreshCache(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr T const& __cordl_internal_get_CachedComponent() const;

constexpr T& __cordl_internal_get_CachedComponent() ;

constexpr void __cordl_internal_set_CachedComponent(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedComponentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Type* get_CachedComponentType() ;

/// @brief Method get_HasRequiredComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_HasRequiredComponent() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_ComponentModifier_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_ComponentModifier_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_ComponentModifier_1(CinemachineFreeLookModifier_ComponentModifier_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_ComponentModifier_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_ComponentModifier_1(CinemachineFreeLookModifier_ComponentModifier_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22177};

/// @brief Field CachedComponent, offset: 0x10, size: 0x8, def value: None
 T  ___CachedComponent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/Modifier
class CORDL_TYPE CinemachineFreeLookModifier_Modifier : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CachedComponentType)) ::System::Type*  CachedComponentType;

 __declspec(property(get=get_HasRequiredComponent)) bool  HasRequiredComponent;

/// @brief Method AfterPipeline, addr 0xae92dc0, size 0x4, virtual true, abstract: false, final false
inline void AfterPipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

/// @brief Method BeforePipeline, addr 0xae92dbc, size 0x4, virtual true, abstract: false, final false
inline void BeforePipeline(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime, float_t  modifierValue) ;

static inline ::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier* New_ctor() ;

/// @brief Method RefreshCache, addr 0xae92db8, size 0x4, virtual true, abstract: false, final false
inline void RefreshCache(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method Reset, addr 0xae92da4, size 0x4, virtual true, abstract: false, final false
inline void Reset(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method Validate, addr 0xae92da0, size 0x4, virtual true, abstract: false, final false
inline void Validate(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method .ctor, addr 0xae92dc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedComponentType, addr 0xae92da8, size 0x8, virtual true, abstract: false, final false
inline ::System::Type* get_CachedComponentType() ;

/// @brief Method get_HasRequiredComponent, addr 0xae92db0, size 0x8, virtual true, abstract: false, final false
inline bool get_HasRequiredComponent() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_Modifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_Modifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFreeLookModifier_Modifier(CinemachineFreeLookModifier_Modifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_Modifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_Modifier(CinemachineFreeLookModifier_Modifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineFreeLookModifier_Modifier) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/IModifiableNoise
class CORDL_TYPE CinemachineFreeLookModifier_IModifiableNoise {
public:
// Declarations
 __declspec(property(get=get_NoiseAmplitudeFrequency, put=set_NoiseAmplitudeFrequency)) ::System::ValueTuple_2<float_t,float_t>  NoiseAmplitudeFrequency;

/// @brief Method get_NoiseAmplitudeFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ValueTuple_2<float_t,float_t> get_NoiseAmplitudeFrequency() ;

/// @brief Method set_NoiseAmplitudeFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_NoiseAmplitudeFrequency(::System::ValueTuple_2<float_t,float_t>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_IModifiableNoise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_IModifiableNoise(CinemachineFreeLookModifier_IModifiableNoise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/IModifiableDistance
class CORDL_TYPE CinemachineFreeLookModifier_IModifiableDistance {
public:
// Declarations
 __declspec(property(get=get_Distance, put=set_Distance)) float_t  Distance;

/// @brief Method get_Distance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Distance() ;

/// @brief Method set_Distance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Distance(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_IModifiableDistance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_IModifiableDistance(CinemachineFreeLookModifier_IModifiableDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/IModifiableComposition
class CORDL_TYPE CinemachineFreeLookModifier_IModifiableComposition {
public:
// Declarations
 __declspec(property(get=get_Composition, put=set_Composition)) ::Unity::Cinemachine::ScreenComposerSettings  Composition;

/// @brief Method get_Composition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Cinemachine::ScreenComposerSettings get_Composition() ;

/// @brief Method set_Composition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_IModifiableComposition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_IModifiableComposition(CinemachineFreeLookModifier_IModifiableComposition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/IModifiablePositionDamping
class CORDL_TYPE CinemachineFreeLookModifier_IModifiablePositionDamping {
public:
// Declarations
 __declspec(property(get=get_PositionDamping, put=set_PositionDamping)) ::UnityEngine::Vector3  PositionDamping;

/// @brief Method get_PositionDamping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_PositionDamping() ;

/// @brief Method set_PositionDamping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PositionDamping(::UnityEngine::Vector3  value) ;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_IModifiablePositionDamping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_IModifiablePositionDamping(CinemachineFreeLookModifier_IModifiablePositionDamping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/IModifierValueSource
class CORDL_TYPE CinemachineFreeLookModifier_IModifierValueSource {
public:
// Declarations
 __declspec(property(get=get_NormalizedModifierValue)) float_t  NormalizedModifierValue;

/// @brief Method get_NormalizedModifierValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_NormalizedModifierValue() ;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFreeLookModifier_IModifierValueSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFreeLookModifier_IModifierValueSource(CinemachineFreeLookModifier_IModifierValueSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
