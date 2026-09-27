#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRUIToolkitHandler)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class PanelInputConfiguration;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct InteractorHitData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct PointerHitData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIToolkitHandler_InteractorInfo;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIToolkitHandler;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIToolkitHandler_InteractorInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIToolkitHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIToolkitHandler/InteractorInfo");
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIToolkitHandler
class CORDL_TYPE XRUIToolkitHandler : public ::System::Object {
public:
// Declarations
using InteractorInfo = ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo;

/// @brief Field <uiToolkitSupportEnabled>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__uiToolkitSupportEnabled_k__BackingField, put=setStaticF__uiToolkitSupportEnabled_k__BackingField)) bool  _uiToolkitSupportEnabled_k__BackingField;

/// @brief Field k_ResetPos, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_k_ResetPos, put=setStaticF_k_ResetPos)) ::UnityEngine::Vector3  k_ResetPos;

/// @brief Field s_DidCheckPanelInputConfiguration, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_DidCheckPanelInputConfiguration, put=setStaticF_s_DidCheckPanelInputConfiguration)) bool  s_DidCheckPanelInputConfiguration;

/// @brief Field s_EventSystemValidated, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_EventSystemValidated, put=setStaticF_s_EventSystemValidated)) bool  s_EventSystemValidated;

/// @brief Field s_InitialZDepth, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InitialZDepth, put=setStaticF_s_InitialZDepth)) ::System::Collections::Generic::Dictionary_2<uint32_t,float_t>*  s_InitialZDepth;

/// @brief Field s_InteractorElements, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractorElements, put=setStaticF_s_InteractorElements)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>*  s_InteractorElements;

/// @brief Field s_InteractorHitData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractorHitData, put=setStaticF_s_InteractorHitData)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>*  s_InteractorHitData;

/// @brief Field s_LastWasDown, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LastWasDown, put=setStaticF_s_LastWasDown)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  s_LastWasDown;

/// @brief Field s_PanelInputConfigurationRef, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PanelInputConfigurationRef, put=setStaticF_s_PanelInputConfigurationRef)) ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>  s_PanelInputConfigurationRef;

/// @brief Field s_PanelInputConfigurationValidated, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_PanelInputConfigurationValidated, put=setStaticF_s_PanelInputConfigurationValidated)) bool  s_PanelInputConfigurationValidated;

/// @brief Field s_RegisteredInteractors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RegisteredInteractors, put=setStaticF_s_RegisteredInteractors)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>*  s_RegisteredInteractors;

/// @brief Field s_UsedIndices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UsedIndices, put=setStaticF_s_UsedIndices)) ::ArrayW<bool>  s_UsedIndices;

/// @brief Field s_WasReset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_WasReset, put=setStaticF_s_WasReset)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  s_WasReset;

/// @brief Method Clear, addr 0xb441b74, size 0x160, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method ClearInteractorHitData, addr 0xb441aec, size 0x88, virtual false, abstract: false, final false
static inline void ClearInteractorHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method ClearZDepthForInteractor, addr 0xb441810, size 0xe8, virtual false, abstract: false, final false
static inline void ClearZDepthForInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method HandlePointerUpdate, addr 0xb441d54, size 0x490, virtual false, abstract: false, final false
static inline void HandlePointerUpdate(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, bool  isUiSelectInputActive, bool  shouldReset) ;

/// @brief Method HasUIDocument, addr 0xb442e30, size 0x60, virtual false, abstract: false, final false
static inline bool HasUIDocument(::UnityEngine::Collider*  collider) ;

/// @brief Method IsRegistered, addr 0xb441cd4, size 0x80, virtual false, abstract: false, final false
static inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method IsValidUIToolkitInteraction, addr 0xb442d80, size 0xb0, virtual false, abstract: false, final false
static inline bool IsValidUIToolkitInteraction(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders) ;

/// @brief Method Register, addr 0xb44141c, size 0x254, virtual false, abstract: false, final false
static inline int32_t Register(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method ResetDepth, addr 0xb4429e0, size 0x314, virtual false, abstract: false, final false
static inline float_t ResetDepth(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method SetZDepthForInteractor, addr 0xb4426ec, size 0x2f4, virtual false, abstract: false, final false
static inline float_t SetZDepthForInteractor(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  z) ;

/// @brief Method ShouldCheckPanelInputConfigurationValidation, addr 0xb4421e4, size 0x154, virtual false, abstract: false, final false
static inline bool ShouldCheckPanelInputConfigurationValidation() ;

/// @brief Method TryGetInteractorHitData, addr 0xb441a5c, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetInteractorHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>  hitData) ;

/// @brief Method TryGetPointerHitData, addr 0xb442554, size 0x198, virtual false, abstract: false, final false
static inline bool TryGetPointerHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData>  hitData) ;

/// @brief Method TryGetPointerIndex, addr 0xb4418f8, size 0xb8, virtual false, abstract: false, final false
static inline bool TryGetPointerIndex(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<int32_t>  index) ;

/// @brief Method Unregister, addr 0xb441678, size 0x198, virtual false, abstract: false, final false
static inline void Unregister(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method UpdateEventSystem, addr 0xb442cf4, size 0x8c, virtual false, abstract: false, final false
static inline void UpdateEventSystem() ;

/// @brief Method UpdateInteractorHitData, addr 0xb4419b0, size 0xac, virtual false, abstract: false, final false
static inline void UpdateInteractorHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData  hitData) ;

/// @brief Method ValidatePanelInputConfiguration, addr 0xb442338, size 0x21c, virtual false, abstract: false, final false
static inline void ValidatePanelInputConfiguration() ;

static inline bool getStaticF__uiToolkitSupportEnabled_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF_k_ResetPos() ;

static inline bool getStaticF_s_DidCheckPanelInputConfiguration() ;

static inline bool getStaticF_s_EventSystemValidated() ;

static inline ::System::Collections::Generic::Dictionary_2<uint32_t,float_t>* getStaticF_s_InitialZDepth() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>* getStaticF_s_InteractorElements() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>* getStaticF_s_InteractorHitData() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* getStaticF_s_LastWasDown() ;

static inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> getStaticF_s_PanelInputConfigurationRef() ;

static inline bool getStaticF_s_PanelInputConfigurationValidated() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>* getStaticF_s_RegisteredInteractors() ;

static inline ::ArrayW<bool> getStaticF_s_UsedIndices() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* getStaticF_s_WasReset() ;

/// @brief Method get_count, addr 0xb4413a4, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_count() ;

/// [CompilerGenerated]
/// @brief Method get_uiToolkitSupportEnabled, addr 0xb4412ec, size 0x58, virtual false, abstract: false, final false
static inline bool get_uiToolkitSupportEnabled() ;

static inline void setStaticF__uiToolkitSupportEnabled_k__BackingField(bool  value) ;

static inline void setStaticF_k_ResetPos(::UnityEngine::Vector3  value) ;

static inline void setStaticF_s_DidCheckPanelInputConfiguration(bool  value) ;

static inline void setStaticF_s_EventSystemValidated(bool  value) ;

static inline void setStaticF_s_InitialZDepth(::System::Collections::Generic::Dictionary_2<uint32_t,float_t>*  value) ;

static inline void setStaticF_s_InteractorElements(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>*  value) ;

static inline void setStaticF_s_InteractorHitData(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>*  value) ;

static inline void setStaticF_s_LastWasDown(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

static inline void setStaticF_s_PanelInputConfigurationRef(::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>  value) ;

static inline void setStaticF_s_PanelInputConfigurationValidated(bool  value) ;

static inline void setStaticF_s_RegisteredInteractors(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>*  value) ;

static inline void setStaticF_s_UsedIndices(::ArrayW<bool>  value) ;

static inline void setStaticF_s_WasReset(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_uiToolkitSupportEnabled, addr 0xb441344, size 0x60, virtual false, abstract: false, final false
static inline void set_uiToolkitSupportEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRUIToolkitHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRUIToolkitHandler(XRUIToolkitHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRUIToolkitHandler(XRUIToolkitHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11317};

/// @brief Field k_InvalidIndex offset 0xffffffff size 0x4
static constexpr int32_t  k_InvalidIndex{static_cast<int32_t>(0xffffffff)};

/// @brief Field k_MaxInteractors offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxInteractors{static_cast<int32_t>(0x8)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIToolkitHandler/InteractorInfo
class CORDL_TYPE XRUIToolkitHandler_InteractorInfo : public ::System::Object {
public:
// Declarations
/// @brief Field index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field interactor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactor, put=__cordl_internal_set_interactor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get_interactor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get_interactor() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

/// @brief Method .ctor, addr 0xb441670, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRUIToolkitHandler_InteractorInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitHandler_InteractorInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRUIToolkitHandler_InteractorInfo(XRUIToolkitHandler_InteractorInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitHandler_InteractorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRUIToolkitHandler_InteractorInfo(XRUIToolkitHandler_InteractorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11316};

/// @brief Field interactor, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ___interactor;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo, ___interactor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo, ___index) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
