#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/TunnelingVignetteController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__EaseState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TunnelingVignetteController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
struct EaseState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class ITunnelingVignetteProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class LocomotionVignetteProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class TunnelingVignetteController_ProviderRecord;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class TunnelingVignetteController_ShaderPropertyLookup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class VignetteParameters;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class TunnelingVignetteController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class TunnelingVignetteController_ProviderRecord;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class TunnelingVignetteController_ShaderPropertyLookup;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "TunnelingVignetteController");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "TunnelingVignetteController/ProviderRecord");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "TunnelingVignetteController/ShaderPropertyLookup");
// [AddComponentMenu("XR/Locomotion/Tunneling Vignette Controller", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.TunnelingVignetteController.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.TunnelingVignetteController
class CORDL_TYPE TunnelingVignetteController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ProviderRecord = ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord;

using ShaderPropertyLookup = ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup;

 __declspec(property(get=get_currentParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  currentParameters;

 __declspec(property(get=get_defaultParameters, put=set_defaultParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  defaultParameters;

 __declspec(property(get=get_locomotionVignetteProviders, put=set_locomotionVignetteProviders)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*  locomotionVignetteProviders;

/// @brief Field m_CurrentParameters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentParameters, put=__cordl_internal_set_m_CurrentParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  m_CurrentParameters;

/// @brief Field m_DefaultParameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultParameters, put=__cordl_internal_set_m_DefaultParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  m_DefaultParameters;

/// @brief Field m_LocomotionVignetteProviders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocomotionVignetteProviders, put=__cordl_internal_set_m_LocomotionVignetteProviders)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*  m_LocomotionVignetteProviders;

/// @brief Field m_MeshFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MeshFilter, put=__cordl_internal_set_m_MeshFilter)) ::UnityW<::UnityEngine::MeshFilter>  m_MeshFilter;

/// @brief Field m_MeshRender, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MeshRender, put=__cordl_internal_set_m_MeshRender)) ::UnityW<::UnityEngine::MeshRenderer>  m_MeshRender;

/// @brief Field m_ProviderRecords, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProviderRecords, put=__cordl_internal_set_m_ProviderRecords)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>*  m_ProviderRecords;

/// @brief Field m_SharedMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SharedMaterial, put=__cordl_internal_set_m_SharedMaterial)) ::UnityW<::UnityEngine::Material>  m_SharedMaterial;

/// @brief Field m_VignettePropertyBlock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VignettePropertyBlock, put=__cordl_internal_set_m_VignettePropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  m_VignettePropertyBlock;

/// @brief Field vignetteProviderQueued, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vignetteProviderQueued, put=setStaticF_vignetteProviderQueued)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*  vignetteProviderQueued;

/// @brief Method Awake, addr 0xb455bd0, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginTunnelingVignette, addr 0xb45538c, size 0x258, virtual false, abstract: false, final false
inline void BeginTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider) ;

/// @brief Method EndTunnelingVignette, addr 0xb45561c, size 0x310, virtual false, abstract: false, final false
inline void EndTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController* New_ctor() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method PreviewInEditor, addr 0xb45592c, size 0xa0, virtual false, abstract: false, final false
inline void PreviewInEditor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  previewParameters) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb455c50, size 0x90, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method TrySetUpMaterial, addr 0xb45640c, size 0x424, virtual false, abstract: false, final false
inline bool TrySetUpMaterial() ;

/// @brief Method Update, addr 0xb455ce0, size 0x72c, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTunnelingVignette, addr 0xb4559cc, size 0x204, virtual false, abstract: false, final false
inline void UpdateTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  parameters) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* const& __cordl_internal_get_m_CurrentParameters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*& __cordl_internal_get_m_CurrentParameters() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* const& __cordl_internal_get_m_DefaultParameters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*& __cordl_internal_get_m_DefaultParameters() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>* const& __cordl_internal_get_m_LocomotionVignetteProviders() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*& __cordl_internal_get_m_LocomotionVignetteProviders() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_m_MeshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_m_MeshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_m_MeshRender() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_m_MeshRender() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>* const& __cordl_internal_get_m_ProviderRecords() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>*& __cordl_internal_get_m_ProviderRecords() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SharedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SharedMaterial() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_VignettePropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_VignettePropertyBlock() ;

constexpr void __cordl_internal_set_m_CurrentParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value) ;

constexpr void __cordl_internal_set_m_DefaultParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value) ;

constexpr void __cordl_internal_set_m_LocomotionVignetteProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*  value) ;

constexpr void __cordl_internal_set_m_MeshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_m_MeshRender(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_m_ProviderRecords(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>*  value) ;

constexpr void __cordl_internal_set_m_SharedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_VignettePropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0xb456830, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_vignetteProviderQueued, addr 0xb4551f4, size 0xcc, virtual false, abstract: false, final false
static inline void add_vignetteProviderQueued(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*  value) ;

static inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>* getStaticF_vignetteProviderQueued() ;

/// @brief Method get_currentParameters, addr 0xb4551dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* get_currentParameters() ;

/// @brief Method get_defaultParameters, addr 0xb4551cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* get_defaultParameters() ;

/// @brief Method get_locomotionVignetteProviders, addr 0xb4551e4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>* get_locomotionVignetteProviders() ;

/// [CompilerGenerated]
/// @brief Method remove_vignetteProviderQueued, addr 0xb4552c0, size 0xcc, virtual false, abstract: false, final false
static inline void remove_vignetteProviderQueued(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*  value) ;

static inline void setStaticF_vignetteProviderQueued(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*  value) ;

/// @brief Method set_defaultParameters, addr 0xb4551d4, size 0x8, virtual false, abstract: false, final false
inline void set_defaultParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value) ;

/// @brief Method set_locomotionVignetteProviders, addr 0xb4551ec, size 0x8, virtual false, abstract: false, final false
inline void set_locomotionVignetteProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TunnelingVignetteController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TunnelingVignetteController(TunnelingVignetteController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TunnelingVignetteController(TunnelingVignetteController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11386};

/// @brief Field k_DefaultShader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DefaultShader{u"VR/TunnelingVignette"};

/// [SerializeField]
/// @brief Field m_DefaultParameters, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  ___m_DefaultParameters;

/// [SerializeField]
/// @brief Field m_CurrentParameters, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  ___m_CurrentParameters;

/// [SerializeField]
/// @brief Field m_LocomotionVignetteProviders, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*  ___m_LocomotionVignetteProviders;

/// @brief Field m_ProviderRecords, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>*  ___m_ProviderRecords;

/// @brief Field m_MeshRender, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___m_MeshRender;

/// @brief Field m_MeshFilter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___m_MeshFilter;

/// @brief Field m_SharedMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_SharedMaterial;

/// @brief Field m_VignettePropertyBlock, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_VignettePropertyBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_DefaultParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_CurrentParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_LocomotionVignetteProviders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_ProviderRecords) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_MeshRender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_MeshFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_SharedMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController, ___m_VignettePropertyBlock) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.EaseState
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.TunnelingVignetteController/ProviderRecord
class CORDL_TYPE TunnelingVignetteController_ProviderRecord : public ::System::Object {
public:
// Declarations
/// @brief Field <dynamicApertureSize>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dynamicApertureSize_k__BackingField, put=__cordl_internal_set__dynamicApertureSize_k__BackingField)) float_t  _dynamicApertureSize_k__BackingField;

/// @brief Field <dynamicEaseOutDelayTime>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField, put=__cordl_internal_set__dynamicEaseOutDelayTime_k__BackingField)) float_t  _dynamicEaseOutDelayTime_k__BackingField;

/// @brief Field <easeInLockEnded>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__easeInLockEnded_k__BackingField, put=__cordl_internal_set__easeInLockEnded_k__BackingField)) bool  _easeInLockEnded_k__BackingField;

/// @brief Field <easeState>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__easeState_k__BackingField, put=__cordl_internal_set__easeState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  _easeState_k__BackingField;

/// @brief Field <provider>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__provider_k__BackingField, put=__cordl_internal_set__provider_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  _provider_k__BackingField;

 __declspec(property(get=get_dynamicApertureSize, put=set_dynamicApertureSize)) float_t  dynamicApertureSize;

 __declspec(property(get=get_dynamicEaseOutDelayTime, put=set_dynamicEaseOutDelayTime)) float_t  dynamicEaseOutDelayTime;

 __declspec(property(get=get_easeInLockEnded, put=set_easeInLockEnded)) bool  easeInLockEnded;

 __declspec(property(get=get_easeState, put=set_easeState)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  easeState;

 __declspec(property(get=get_provider)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider) ;

constexpr float_t const& __cordl_internal_get__dynamicApertureSize_k__BackingField() const;

constexpr float_t& __cordl_internal_get__dynamicApertureSize_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get__easeInLockEnded_k__BackingField() const;

constexpr bool& __cordl_internal_get__easeInLockEnded_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState const& __cordl_internal_get__easeState_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState& __cordl_internal_get__easeState_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider* const& __cordl_internal_get__provider_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*& __cordl_internal_get__provider_k__BackingField() ;

constexpr void __cordl_internal_set__dynamicApertureSize_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__dynamicEaseOutDelayTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__easeInLockEnded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__easeState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  value) ;

constexpr void __cordl_internal_set__provider_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  value) ;

/// @brief Method .ctor, addr 0xb4555e4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider) ;

/// [CompilerGenerated]
/// @brief Method get_dynamicApertureSize, addr 0xb456a80, size 0x8, virtual false, abstract: false, final false
inline float_t get_dynamicApertureSize() ;

/// [CompilerGenerated]
/// @brief Method get_dynamicEaseOutDelayTime, addr 0xb456aa0, size 0x8, virtual false, abstract: false, final false
inline float_t get_dynamicEaseOutDelayTime() ;

/// [CompilerGenerated]
/// @brief Method get_easeInLockEnded, addr 0xb456a90, size 0x8, virtual false, abstract: false, final false
inline bool get_easeInLockEnded() ;

/// [CompilerGenerated]
/// @brief Method get_easeState, addr 0xb456a70, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState get_easeState() ;

/// [CompilerGenerated]
/// @brief Method get_provider, addr 0xb456a68, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider* get_provider() ;

/// [CompilerGenerated]
/// @brief Method set_dynamicApertureSize, addr 0xb456a88, size 0x8, virtual false, abstract: false, final false
inline void set_dynamicApertureSize(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_dynamicEaseOutDelayTime, addr 0xb456aa8, size 0x8, virtual false, abstract: false, final false
inline void set_dynamicEaseOutDelayTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_easeInLockEnded, addr 0xb456a98, size 0x8, virtual false, abstract: false, final false
inline void set_easeInLockEnded(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_easeState, addr 0xb456a78, size 0x8, virtual false, abstract: false, final false
inline void set_easeState(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TunnelingVignetteController_ProviderRecord() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController_ProviderRecord", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TunnelingVignetteController_ProviderRecord(TunnelingVignetteController_ProviderRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController_ProviderRecord", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TunnelingVignetteController_ProviderRecord(TunnelingVignetteController_ProviderRecord const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11385};

/// [CompilerGenerated]
/// @brief Field <provider>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  ____provider_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <easeState>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  ____easeState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <dynamicApertureSize>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____dynamicApertureSize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <easeInLockEnded>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____easeInLockEnded_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <dynamicEaseOutDelayTime>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____dynamicEaseOutDelayTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord, ____provider_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord, ____easeState_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord, ____dynamicApertureSize_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord, ____easeInLockEnded_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord, ____dynamicEaseOutDelayTime_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.TunnelingVignetteController/ShaderPropertyLookup
class CORDL_TYPE TunnelingVignetteController_ShaderPropertyLookup : public ::System::Object {
public:
// Declarations
/// @brief Field apertureSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_apertureSize, put=setStaticF_apertureSize)) int32_t  apertureSize;

/// @brief Field featheringEffect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_featheringEffect, put=setStaticF_featheringEffect)) int32_t  featheringEffect;

/// @brief Field vignetteColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_vignetteColor, put=setStaticF_vignetteColor)) int32_t  vignetteColor;

/// @brief Field vignetteColorBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_vignetteColorBlend, put=setStaticF_vignetteColorBlend)) int32_t  vignetteColorBlend;

static inline int32_t getStaticF_apertureSize() ;

static inline int32_t getStaticF_featheringEffect() ;

static inline int32_t getStaticF_vignetteColor() ;

static inline int32_t getStaticF_vignetteColorBlend() ;

static inline void setStaticF_apertureSize(int32_t  value) ;

static inline void setStaticF_featheringEffect(int32_t  value) ;

static inline void setStaticF_vignetteColor(int32_t  value) ;

static inline void setStaticF_vignetteColorBlend(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TunnelingVignetteController_ShaderPropertyLookup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController_ShaderPropertyLookup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TunnelingVignetteController_ShaderPropertyLookup(TunnelingVignetteController_ShaderPropertyLookup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController_ShaderPropertyLookup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TunnelingVignetteController_ShaderPropertyLookup(TunnelingVignetteController_ShaderPropertyLookup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort
