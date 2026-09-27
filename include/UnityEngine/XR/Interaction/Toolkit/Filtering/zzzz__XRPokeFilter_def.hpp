#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRPokeFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRPokeFilter)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IPokeStateDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRInteractionStrengthFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRPokeFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeFilter");
// [AddComponentMenu("XR/XR Poke Filter", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeFilter.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeFilter
class CORDL_TYPE XRPokeFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_canProcess)) bool  canProcess;

/// @brief Field m_Interactable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactable, put=__cordl_internal_set_m_Interactable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  m_Interactable;

/// @brief Field m_PokeCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeCollider, put=__cordl_internal_set_m_PokeCollider)) ::UnityW<::UnityEngine::Collider>  m_PokeCollider;

/// @brief Field m_PokeConfiguration, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeConfiguration, put=__cordl_internal_set_m_PokeConfiguration)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*  m_PokeConfiguration;

/// @brief Field m_PokeLogic, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeLogic, put=__cordl_internal_set_m_PokeLogic)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  m_PokeLogic;

/// @brief Field m_SubscribedInteractable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubscribedInteractable, put=__cordl_internal_set_m_SubscribedInteractable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  m_SubscribedInteractable;

 __declspec(property(get=get_pokeCollider, put=set_pokeCollider)) ::UnityW<::UnityEngine::Collider>  pokeCollider;

 __declspec(property(get=get_pokeConfiguration, put=set_pokeConfiguration)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*  pokeConfiguration;

 __declspec(property(get=get_pokeInteractable, put=set_pokeInteractable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  pokeInteractable;

 __declspec(property(get=get_pokeStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  pokeStateData;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*() noexcept;

/// @brief Method Awake, addr 0xb4a5cd8, size 0xdc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindPokeCollider, addr 0xb4a5e48, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> FindPokeCollider() ;

/// @brief Method FindPokeInteractable, addr 0xb4a5db4, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> FindPokeInteractable() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4a611c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method OnDrawGizmosSelected, addr 0xb4a63b0, size 0x4, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnHoverEntered, addr 0xb4a68e8, size 0x190, virtual false, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0xb4a6c20, size 0x38, virtual false, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method OnValidate, addr 0xb4a5cd4, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Process, addr 0xb4a63b4, size 0x228, virtual true, abstract: false, final true
inline bool Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method Process, addr 0xb4a67e4, size 0x104, virtual true, abstract: false, final true
inline float_t Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, float_t  interactionStrength) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb4a5cd0, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0xb4a5a94, size 0x1ac, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Start, addr 0xb4a5edc, size 0x240, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Subscribe, addr 0xb4a7110, size 0x27c, virtual false, abstract: false, final false
inline void Subscribe(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method Unsubscribe, addr 0xb4a6120, size 0x28c, virtual false, abstract: false, final false
inline void Unsubscribe() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> const& __cordl_internal_get_m_Interactable() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>& __cordl_internal_get_m_Interactable() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_PokeCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_PokeCollider() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* const& __cordl_internal_get_m_PokeConfiguration() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*& __cordl_internal_get_m_PokeConfiguration() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* const& __cordl_internal_get_m_PokeLogic() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*& __cordl_internal_get_m_PokeLogic() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> const& __cordl_internal_get_m_SubscribedInteractable() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>& __cordl_internal_get_m_SubscribedInteractable() ;

constexpr void __cordl_internal_set_m_Interactable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  value) ;

constexpr void __cordl_internal_set_m_PokeCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_m_PokeConfiguration(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_PokeLogic(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  value) ;

constexpr void __cordl_internal_set_m_SubscribedInteractable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  value) ;

/// @brief Method .ctor, addr 0xb4a738c, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canProcess, addr 0xb4a5ca0, size 0x30, virtual true, abstract: false, final false
inline bool get_canProcess() ;

/// @brief Method get_pokeCollider, addr 0xb4a5c40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_pokeCollider() ;

/// @brief Method get_pokeConfiguration, addr 0xb4a5c64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* get_pokeConfiguration() ;

/// @brief Method get_pokeInteractable, addr 0xb4a5a70, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> get_pokeInteractable() ;

/// @brief Method get_pokeStateData, addr 0xb4a5c88, size 0x18, virtual true, abstract: false, final true
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IPokeStateDataProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRInteractionStrengthFilter() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRPokeFilter() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRSelectFilter() noexcept;

/// @brief Method set_pokeCollider, addr 0xb4a5c48, size 0x1c, virtual false, abstract: false, final false
inline void set_pokeCollider(::UnityEngine::Collider*  value) ;

/// @brief Method set_pokeConfiguration, addr 0xb4a5c6c, size 0x1c, virtual false, abstract: false, final false
inline void set_pokeConfiguration(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*  value) ;

/// @brief Method set_pokeInteractable, addr 0xb4a5a78, size 0x1c, virtual false, abstract: false, final false
inline void set_pokeInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeFilter(XRPokeFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeFilter(XRPokeFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11555};

/// [SerializeField]
/// [Tooltip("The interactable associated with this poke filter.")]
/// @brief Field m_Interactable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  ___m_Interactable;

/// [SerializeField]
/// [Tooltip("The collider used to compute bounds of the poke interaction.")]
/// @brief Field m_PokeCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___m_PokeCollider;

/// [SerializeField]
/// [Tooltip("The settings used to fine tune the vector and offsets which dictate how the poke interaction will be evaluated.")]
/// @brief Field m_PokeConfiguration, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*  ___m_PokeConfiguration;

/// @brief Field m_PokeLogic, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  ___m_PokeLogic;

/// @brief Field m_SubscribedInteractable, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  ___m_SubscribedInteractable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_Interactable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_PokeCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_PokeConfiguration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_PokeLogic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_SubscribedInteractable) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
