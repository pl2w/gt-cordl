#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Gaze/XRGazeAssistance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRGazeAssistance)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class IXRAimAssist;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class XRGazeAssistance_InteractorData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorReticleVisual;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRRayProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRGazeInteractor;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class XRGazeAssistance;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class XRGazeAssistance_InteractorData;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*, "UnityEngine.XR.Interaction.Toolkit.Gaze", "XRGazeAssistance");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Gaze", "XRGazeAssistance/GetAssistedVelocityInternal_0000101E$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Gaze", "XRGazeAssistance/GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*, "UnityEngine.XR.Interaction.Toolkit.Gaze", "XRGazeAssistance/InteractorData");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/XR Gaze Assistance", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance.html")]
// [DefaultExecutionOrder(-29980)]
// [BurstCompile]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance
class CORDL_TYPE XRGazeAssistance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GetAssistedVelocityInternal_0000101E$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall;

using GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate;

using InteractorData = ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData;

 __declspec(property(get=get_aimAssistMaxSpeedPercent, put=set_aimAssistMaxSpeedPercent)) float_t  aimAssistMaxSpeedPercent;

 __declspec(property(get=get_aimAssistPercent, put=set_aimAssistPercent)) float_t  aimAssistPercent;

 __declspec(property(get=get_aimAssistRequiredAngle, put=set_aimAssistRequiredAngle)) float_t  aimAssistRequiredAngle;

 __declspec(property(get=get_aimAssistRequiredSpeed, put=set_aimAssistRequiredSpeed)) float_t  aimAssistRequiredSpeed;

 __declspec(property(get=get_fallbackDivergence, put=set_fallbackDivergence)) float_t  fallbackDivergence;

 __declspec(property(get=get_gazeInteractor, put=set_gazeInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>  gazeInteractor;

 __declspec(property(get=get_hideCursorWithNoActiveRays, put=set_hideCursorWithNoActiveRays)) bool  hideCursorWithNoActiveRays;

/// @brief Field m_AimAssistMaxSpeedPercent, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AimAssistMaxSpeedPercent, put=__cordl_internal_set_m_AimAssistMaxSpeedPercent)) float_t  m_AimAssistMaxSpeedPercent;

/// @brief Field m_AimAssistPercent, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AimAssistPercent, put=__cordl_internal_set_m_AimAssistPercent)) float_t  m_AimAssistPercent;

/// @brief Field m_AimAssistRequiredAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AimAssistRequiredAngle, put=__cordl_internal_set_m_AimAssistRequiredAngle)) float_t  m_AimAssistRequiredAngle;

/// @brief Field m_AimAssistRequiredSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AimAssistRequiredSpeed, put=__cordl_internal_set_m_AimAssistRequiredSpeed)) float_t  m_AimAssistRequiredSpeed;

/// @brief Field m_FallbackDivergence, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FallbackDivergence, put=__cordl_internal_set_m_FallbackDivergence)) float_t  m_FallbackDivergence;

/// @brief Field m_GazeInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GazeInteractor, put=__cordl_internal_set_m_GazeInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>  m_GazeInteractor;

/// @brief Field m_GazeReticleVisual, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GazeReticleVisual, put=__cordl_internal_set_m_GazeReticleVisual)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual>  m_GazeReticleVisual;

/// @brief Field m_HasGazeReticleVisual, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasGazeReticleVisual, put=__cordl_internal_set_m_HasGazeReticleVisual)) bool  m_HasGazeReticleVisual;

/// @brief Field m_HideCursorWithNoActiveRays, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HideCursorWithNoActiveRays, put=__cordl_internal_set_m_HideCursorWithNoActiveRays)) bool  m_HideCursorWithNoActiveRays;

/// @brief Field m_RayInteractors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RayInteractors, put=__cordl_internal_set_m_RayInteractors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*  m_RayInteractors;

/// @brief Field m_SelectingInteractorData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectingInteractorData, put=__cordl_internal_set_m_SelectingInteractorData)) ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*  m_SelectingInteractorData;

 __declspec(property(get=get_rayInteractors, put=set_rayInteractors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*  rayInteractors;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*() noexcept;

/// @brief Method GetAssistedVelocity, addr 0xb4a2c8c, size 0xc8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity) ;

/// @brief Method GetAssistedVelocity, addr 0xb4a2d54, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Gaze.UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance::GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate))]
/// @brief Method GetAssistedVelocityInternal, addr 0xb4a262c, size 0x8, virtual false, abstract: false, final false
static inline void GetAssistedVelocityInternal(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity) ;

/// [BurstCompile]
/// @brief Method GetAssistedVelocityInternal$BurstManaged, addr 0xb4a2ed0, size 0xf38, virtual false, abstract: false, final false
static inline void GetAssistedVelocityInternal$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity) ;

/// @brief Method Initialize, addr 0xb4a2704, size 0x174, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method LateUpdate, addr 0xb4a2a78, size 0x188, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance* New_ctor() ;

/// [BeforeRenderOrder(95)]
/// @brief Method OnBeforeRender, addr 0xb4a2c00, size 0x8c, virtual false, abstract: false, final false
inline void OnBeforeRender() ;

/// @brief Method OnDisable, addr 0xb4a291c, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4a2878, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xb4a29c0, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist.GetAssistedVelocity, addr 0xb4a2ec8, size 0x4, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist.GetAssistedVelocity, addr 0xb4a2ecc, size 0x4, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle) ;

/// @brief Method Update, addr 0xb4a29c4, size 0xb4, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_m_AimAssistMaxSpeedPercent() const;

constexpr float_t& __cordl_internal_get_m_AimAssistMaxSpeedPercent() ;

constexpr float_t const& __cordl_internal_get_m_AimAssistPercent() const;

constexpr float_t& __cordl_internal_get_m_AimAssistPercent() ;

constexpr float_t const& __cordl_internal_get_m_AimAssistRequiredAngle() const;

constexpr float_t& __cordl_internal_get_m_AimAssistRequiredAngle() ;

constexpr float_t const& __cordl_internal_get_m_AimAssistRequiredSpeed() const;

constexpr float_t& __cordl_internal_get_m_AimAssistRequiredSpeed() ;

constexpr float_t const& __cordl_internal_get_m_FallbackDivergence() const;

constexpr float_t& __cordl_internal_get_m_FallbackDivergence() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor> const& __cordl_internal_get_m_GazeInteractor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>& __cordl_internal_get_m_GazeInteractor() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual> const& __cordl_internal_get_m_GazeReticleVisual() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual>& __cordl_internal_get_m_GazeReticleVisual() ;

constexpr bool const& __cordl_internal_get_m_HasGazeReticleVisual() const;

constexpr bool& __cordl_internal_get_m_HasGazeReticleVisual() ;

constexpr bool const& __cordl_internal_get_m_HideCursorWithNoActiveRays() const;

constexpr bool& __cordl_internal_get_m_HideCursorWithNoActiveRays() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>* const& __cordl_internal_get_m_RayInteractors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*& __cordl_internal_get_m_RayInteractors() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData* const& __cordl_internal_get_m_SelectingInteractorData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*& __cordl_internal_get_m_SelectingInteractorData() ;

constexpr void __cordl_internal_set_m_AimAssistMaxSpeedPercent(float_t  value) ;

constexpr void __cordl_internal_set_m_AimAssistPercent(float_t  value) ;

constexpr void __cordl_internal_set_m_AimAssistRequiredAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_AimAssistRequiredSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_FallbackDivergence(float_t  value) ;

constexpr void __cordl_internal_set_m_GazeInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>  value) ;

constexpr void __cordl_internal_set_m_GazeReticleVisual(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual>  value) ;

constexpr void __cordl_internal_set_m_HasGazeReticleVisual(bool  value) ;

constexpr void __cordl_internal_set_m_HideCursorWithNoActiveRays(bool  value) ;

constexpr void __cordl_internal_set_m_RayInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*  value) ;

constexpr void __cordl_internal_set_m_SelectingInteractorData(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*  value) ;

/// @brief Method .ctor, addr 0xb4a2e24, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_aimAssistMaxSpeedPercent, addr 0xb4a26f4, size 0x8, virtual false, abstract: false, final false
inline float_t get_aimAssistMaxSpeedPercent() ;

/// @brief Method get_aimAssistPercent, addr 0xb4a26cc, size 0x8, virtual false, abstract: false, final false
inline float_t get_aimAssistPercent() ;

/// @brief Method get_aimAssistRequiredAngle, addr 0xb4a2690, size 0x8, virtual false, abstract: false, final false
inline float_t get_aimAssistRequiredAngle() ;

/// @brief Method get_aimAssistRequiredSpeed, addr 0xb4a26bc, size 0x8, virtual false, abstract: false, final false
inline float_t get_aimAssistRequiredSpeed() ;

/// @brief Method get_fallbackDivergence, addr 0xb4a2644, size 0x8, virtual false, abstract: false, final false
inline float_t get_fallbackDivergence() ;

/// @brief Method get_gazeInteractor, addr 0xb4a2634, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor> get_gazeInteractor() ;

/// @brief Method get_hideCursorWithNoActiveRays, addr 0xb4a2670, size 0x8, virtual false, abstract: false, final false
inline bool get_hideCursorWithNoActiveRays() ;

/// @brief Method get_rayInteractors, addr 0xb4a2680, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>* get_rayInteractors() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist* i___UnityEngine__XR__Interaction__Toolkit__Gaze__IXRAimAssist() noexcept;

/// @brief Method set_aimAssistMaxSpeedPercent, addr 0xb4a26fc, size 0x8, virtual false, abstract: false, final false
inline void set_aimAssistMaxSpeedPercent(float_t  value) ;

/// @brief Method set_aimAssistPercent, addr 0xb4a26d4, size 0x20, virtual false, abstract: false, final false
inline void set_aimAssistPercent(float_t  value) ;

/// @brief Method set_aimAssistRequiredAngle, addr 0xb4a2698, size 0x24, virtual false, abstract: false, final false
inline void set_aimAssistRequiredAngle(float_t  value) ;

/// @brief Method set_aimAssistRequiredSpeed, addr 0xb4a26c4, size 0x8, virtual false, abstract: false, final false
inline void set_aimAssistRequiredSpeed(float_t  value) ;

/// @brief Method set_fallbackDivergence, addr 0xb4a264c, size 0x24, virtual false, abstract: false, final false
inline void set_fallbackDivergence(float_t  value) ;

/// @brief Method set_gazeInteractor, addr 0xb4a263c, size 0x8, virtual false, abstract: false, final false
inline void set_gazeInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor*  value) ;

/// @brief Method set_hideCursorWithNoActiveRays, addr 0xb4a2678, size 0x8, virtual false, abstract: false, final false
inline void set_hideCursorWithNoActiveRays(bool  value) ;

/// @brief Method set_rayInteractors, addr 0xb4a2688, size 0x8, virtual false, abstract: false, final false
inline void set_rayInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGazeAssistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGazeAssistance(XRGazeAssistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGazeAssistance(XRGazeAssistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11539};

/// @brief Field k_MaxAimAssistRequiredAngle offset 0xffffffff size 0x4
static constexpr float_t  k_MaxAimAssistRequiredAngle{static_cast<float_t>(90.0f)};

/// @brief Field k_MaxFallbackDivergence offset 0xffffffff size 0x4
static constexpr float_t  k_MaxFallbackDivergence{static_cast<float_t>(90.0f)};

/// @brief Field k_MinAimAssistRequiredAngle offset 0xffffffff size 0x4
static constexpr float_t  k_MinAimAssistRequiredAngle{static_cast<float_t>(0.0f)};

/// @brief Field k_MinAttachDistance offset 0xffffffff size 0x4
static constexpr float_t  k_MinAttachDistance{static_cast<float_t>(0.5f)};

/// @brief Field k_MinFallbackDivergence offset 0xffffffff size 0x4
static constexpr float_t  k_MinFallbackDivergence{static_cast<float_t>(0.0f)};

/// [SerializeField]
/// [Tooltip("Eye data source used as fallback data and to determine if fallback data should be used.")]
/// @brief Field m_GazeInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>  ___m_GazeInteractor;

/// [SerializeField]
/// [Range(0, 90)]
/// [Tooltip("How far an interactor must point away from the user\'s view area before eye gaze will be used instead.")]
/// @brief Field m_FallbackDivergence, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_FallbackDivergence;

/// [SerializeField]
/// [Tooltip("If the eye reticle should be hidden when all interactors are using their original data.")]
/// @brief Field m_HideCursorWithNoActiveRays, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_HideCursorWithNoActiveRays;

/// [SerializeField]
/// [Tooltip("Interactors that can fall back to gaze data.")]
/// @brief Field m_RayInteractors, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*  ___m_RayInteractors;

/// [SerializeField]
/// [Tooltip("How far projectiles can aim outside of eye gaze and still be considered for aim assist.")]
/// [Range(0, 90)]
/// @brief Field m_AimAssistRequiredAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_AimAssistRequiredAngle;

/// [SerializeField]
/// [Tooltip("How fast a projectile must be moving to be considered for aim assist.")]
/// @brief Field m_AimAssistRequiredSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_AimAssistRequiredSpeed;

/// [SerializeField]
/// [Tooltip("How much of the corrected aim velocity to use, as a percentage.")]
/// [Range(0, 1)]
/// @brief Field m_AimAssistPercent, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_AimAssistPercent;

/// [SerializeField]
/// [Tooltip("How much additional speed a projectile can receive from aim assistance, as a percentage.")]
/// @brief Field m_AimAssistMaxSpeedPercent, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_AimAssistMaxSpeedPercent;

/// @brief Field m_SelectingInteractorData, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*  ___m_SelectingInteractorData;

/// @brief Field m_GazeReticleVisual, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual>  ___m_GazeReticleVisual;

/// @brief Field m_HasGazeReticleVisual, offset: 0x58, size: 0x1, def value: None
 bool  ___m_HasGazeReticleVisual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_GazeInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_FallbackDivergence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_HideCursorWithNoActiveRays) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_RayInteractors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_AimAssistRequiredAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_AimAssistRequiredSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_AimAssistPercent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_AimAssistMaxSpeedPercent) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_SelectingInteractorData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_GazeReticleVisual) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance, ___m_HasGazeReticleVisual) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Gaze
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance/GetAssistedVelocityInternal_0000101E$BurstDirectCall
class CORDL_TYPE XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4a4fdc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4a4eec, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a4ff4, size 0x130, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall(XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall(XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11538};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Gaze
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance/GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate
class CORDL_TYPE XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4a4d64, size 0x17c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method EndInvoke, addr 0xb4a4ee0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a4d50, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4a4c9c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate(XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate(XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Gaze
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance/InteractorData
class CORDL_TYPE XRGazeAssistance_InteractorData : public ::System::Object {
public:
// Declarations
/// @brief Field <fallback>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__fallback_k__BackingField, put=__cordl_internal_set__fallback_k__BackingField)) bool  _fallback_k__BackingField;

 __declspec(property(get=get_fallback, put=set_fallback)) bool  fallback;

 __declspec(property(get=get_interactor, put=set_interactor)) ::UnityW<::UnityEngine::Object>  interactor;

/// @brief Field m_FallbackAttach, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FallbackAttach, put=__cordl_internal_set_m_FallbackAttach)) ::UnityW<::UnityEngine::Transform>  m_FallbackAttach;

/// @brief Field m_FallbackRayOrigin, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FallbackRayOrigin, put=__cordl_internal_set_m_FallbackRayOrigin)) ::UnityW<::UnityEngine::Transform>  m_FallbackRayOrigin;

/// @brief Field m_FallbackVisualLineOrigin, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FallbackVisualLineOrigin, put=__cordl_internal_set_m_FallbackVisualLineOrigin)) ::UnityW<::UnityEngine::Transform>  m_FallbackVisualLineOrigin;

/// @brief Field m_HasLineVisual, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasLineVisual, put=__cordl_internal_set_m_HasLineVisual)) bool  m_HasLineVisual;

/// @brief Field m_Initialized, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Initialized, put=__cordl_internal_set_m_Initialized)) bool  m_Initialized;

/// @brief Field m_Interactor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactor, put=__cordl_internal_set_m_Interactor)) ::UnityW<::UnityEngine::Object>  m_Interactor;

/// @brief Field m_LineVisual, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineVisual, put=__cordl_internal_set_m_LineVisual)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual>  m_LineVisual;

/// @brief Field m_OriginalAttach, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalAttach, put=__cordl_internal_set_m_OriginalAttach)) ::UnityW<::UnityEngine::Transform>  m_OriginalAttach;

/// @brief Field m_OriginalOverrideVisualLineOrigin, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OriginalOverrideVisualLineOrigin, put=__cordl_internal_set_m_OriginalOverrideVisualLineOrigin)) bool  m_OriginalOverrideVisualLineOrigin;

/// @brief Field m_OriginalRayOrigin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalRayOrigin, put=__cordl_internal_set_m_OriginalRayOrigin)) ::UnityW<::UnityEngine::Transform>  m_OriginalRayOrigin;

/// @brief Field m_OriginalVisualLineOrigin, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalVisualLineOrigin, put=__cordl_internal_set_m_OriginalVisualLineOrigin)) ::UnityW<::UnityEngine::Transform>  m_OriginalVisualLineOrigin;

/// @brief Field m_RayProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RayProvider, put=__cordl_internal_set_m_RayProvider)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  m_RayProvider;

/// @brief Field m_RestoreVisuals, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RestoreVisuals, put=__cordl_internal_set_m_RestoreVisuals)) bool  m_RestoreVisuals;

/// @brief Field m_SelectInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectInteractor, put=__cordl_internal_set_m_SelectInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  m_SelectInteractor;

/// @brief Field m_TeleportRay, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TeleportRay, put=__cordl_internal_set_m_TeleportRay)) bool  m_TeleportRay;

 __declspec(property(get=get_teleportRay, put=set_teleportRay)) bool  teleportRay;

/// @brief Method Initialize, addr 0xb4a3e38, size 0x4bc, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData* New_ctor() ;

/// @brief Method RestoreVisuals, addr 0xb4a4c50, size 0x44, virtual false, abstract: false, final false
inline void RestoreVisuals() ;

/// @brief Method UpdateFallbackRayOrigin, addr 0xb4a42f4, size 0x58, virtual false, abstract: false, final false
inline void UpdateFallbackRayOrigin(::UnityEngine::Transform*  gazeTransform) ;

/// @brief Method UpdateFallbackState, addr 0xb4a4588, size 0x6c8, virtual false, abstract: false, final false
inline bool UpdateFallbackState(::UnityEngine::Transform*  gazeTransform, float_t  fallbackDivergence, bool  selectionLocked) ;

/// @brief Method UpdateLineVisualOrigin, addr 0xb4a434c, size 0x23c, virtual false, abstract: false, final false
inline void UpdateLineVisualOrigin() ;

constexpr bool const& __cordl_internal_get__fallback_k__BackingField() const;

constexpr bool& __cordl_internal_get__fallback_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_FallbackAttach() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_FallbackAttach() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_FallbackRayOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_FallbackRayOrigin() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_FallbackVisualLineOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_FallbackVisualLineOrigin() ;

constexpr bool const& __cordl_internal_get_m_HasLineVisual() const;

constexpr bool& __cordl_internal_get_m_HasLineVisual() ;

constexpr bool const& __cordl_internal_get_m_Initialized() const;

constexpr bool& __cordl_internal_get_m_Initialized() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_Interactor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_Interactor() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual> const& __cordl_internal_get_m_LineVisual() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual>& __cordl_internal_get_m_LineVisual() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_OriginalAttach() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_OriginalAttach() ;

constexpr bool const& __cordl_internal_get_m_OriginalOverrideVisualLineOrigin() const;

constexpr bool& __cordl_internal_get_m_OriginalOverrideVisualLineOrigin() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_OriginalRayOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_OriginalRayOrigin() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_OriginalVisualLineOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_OriginalVisualLineOrigin() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* const& __cordl_internal_get_m_RayProvider() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*& __cordl_internal_get_m_RayProvider() ;

constexpr bool const& __cordl_internal_get_m_RestoreVisuals() const;

constexpr bool& __cordl_internal_get_m_RestoreVisuals() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& __cordl_internal_get_m_SelectInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& __cordl_internal_get_m_SelectInteractor() ;

constexpr bool const& __cordl_internal_get_m_TeleportRay() const;

constexpr bool& __cordl_internal_get_m_TeleportRay() ;

constexpr void __cordl_internal_set__fallback_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_FallbackAttach(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_FallbackRayOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_FallbackVisualLineOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_HasLineVisual(bool  value) ;

constexpr void __cordl_internal_set_m_Initialized(bool  value) ;

constexpr void __cordl_internal_set_m_Interactor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_LineVisual(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual>  value) ;

constexpr void __cordl_internal_set_m_OriginalAttach(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_OriginalOverrideVisualLineOrigin(bool  value) ;

constexpr void __cordl_internal_set_m_OriginalRayOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_OriginalVisualLineOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RayProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value) ;

constexpr void __cordl_internal_set_m_RestoreVisuals(bool  value) ;

constexpr void __cordl_internal_set_m_SelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value) ;

constexpr void __cordl_internal_set_m_TeleportRay(bool  value) ;

/// @brief Method .ctor, addr 0xb4a4c94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_fallback, addr 0xb4a3e28, size 0x8, virtual false, abstract: false, final false
inline bool get_fallback() ;

/// @brief Method get_interactor, addr 0xb4a3e08, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_interactor() ;

/// @brief Method get_teleportRay, addr 0xb4a3e18, size 0x8, virtual false, abstract: false, final false
inline bool get_teleportRay() ;

/// [CompilerGenerated]
/// @brief Method set_fallback, addr 0xb4a3e30, size 0x8, virtual false, abstract: false, final false
inline void set_fallback(bool  value) ;

/// @brief Method set_interactor, addr 0xb4a3e10, size 0x8, virtual false, abstract: false, final false
inline void set_interactor(::UnityEngine::Object*  value) ;

/// @brief Method set_teleportRay, addr 0xb4a3e20, size 0x8, virtual false, abstract: false, final false
inline void set_teleportRay(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGazeAssistance_InteractorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance_InteractorData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGazeAssistance_InteractorData(XRGazeAssistance_InteractorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGazeAssistance_InteractorData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGazeAssistance_InteractorData(XRGazeAssistance_InteractorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11536};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider))]
/// [Tooltip("The interactor that can fall back to gaze data.")]
/// @brief Field m_Interactor, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_Interactor;

/// [SerializeField]
/// [Tooltip("Changes mediation behavior to account for teleportation controls.")]
/// @brief Field m_TeleportRay, offset: 0x18, size: 0x1, def value: None
 bool  ___m_TeleportRay;

/// [CompilerGenerated]
/// @brief Field <fallback>k__BackingField, offset: 0x19, size: 0x1, def value: None
 bool  ____fallback_k__BackingField;

/// @brief Field m_Initialized, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_Initialized;

/// @brief Field m_RayProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  ___m_RayProvider;

/// @brief Field m_SelectInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  ___m_SelectInteractor;

/// @brief Field m_RestoreVisuals, offset: 0x30, size: 0x1, def value: None
 bool  ___m_RestoreVisuals;

/// @brief Field m_LineVisual, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual>  ___m_LineVisual;

/// @brief Field m_HasLineVisual, offset: 0x40, size: 0x1, def value: None
 bool  ___m_HasLineVisual;

/// @brief Field m_OriginalRayOrigin, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_OriginalRayOrigin;

/// @brief Field m_OriginalAttach, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_OriginalAttach;

/// @brief Field m_OriginalVisualLineOrigin, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_OriginalVisualLineOrigin;

/// @brief Field m_OriginalOverrideVisualLineOrigin, offset: 0x60, size: 0x1, def value: None
 bool  ___m_OriginalOverrideVisualLineOrigin;

/// @brief Field m_FallbackRayOrigin, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_FallbackRayOrigin;

/// @brief Field m_FallbackAttach, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_FallbackAttach;

/// @brief Field m_FallbackVisualLineOrigin, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_FallbackVisualLineOrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_Interactor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_TeleportRay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ____fallback_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_Initialized) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_RayProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_SelectInteractor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_RestoreVisuals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_LineVisual) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_HasLineVisual) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_OriginalRayOrigin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_OriginalAttach) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_OriginalVisualLineOrigin) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_OriginalOverrideVisualLineOrigin) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_FallbackRayOrigin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_FallbackAttach) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData, ___m_FallbackVisualLineOrigin) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Gaze
