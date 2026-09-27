#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionMediator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionMediator)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionMediator_LocomotionProviderData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
struct LocomotionState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyTransformer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionMediator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionMediator_LocomotionProviderData;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "LocomotionMediator");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "LocomotionMediator/LocomotionProviderData");
// [AddComponentMenu("XR/Locomotion/Locomotion Mediator", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator.html")]
// [RequireComponent(typeof(UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer))]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator
class CORDL_TYPE LocomotionMediator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LocomotionProviderData = ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData;

 __declspec(property(get=get_bodyTransformer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  bodyTransformer;

/// @brief Field m_ProviderDataMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProviderDataMap, put=__cordl_internal_set_m_ProviderDataMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>*  m_ProviderDataMap;

/// @brief Field m_XRBodyTransformer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XRBodyTransformer, put=__cordl_internal_set_m_XRBodyTransformer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  m_XRBodyTransformer;

/// @brief Field s_ProvidersToRemove, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProvidersToRemove, put=setStaticF_s_ProvidersToRemove)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  s_ProvidersToRemove;

 __declspec(property(get=get_xrOrigin, put=set_xrOrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  xrOrigin;

/// @brief Method Awake, addr 0xb447000, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeState, addr 0xb4474f8, size 0x7c, virtual false, abstract: false, final false
inline void ChangeState(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*  providerData, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state) ;

/// @brief Method GetProviderLocomotionState, addr 0xb447680, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState GetProviderLocomotionState(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator* New_ctor() ;

/// @brief Method TryEndLocomotion, addr 0xb447800, size 0xa8, virtual false, abstract: false, final false
inline bool TryEndLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

/// @brief Method TryPrepareLocomotion, addr 0xb447574, size 0x104, virtual false, abstract: false, final false
inline bool TryPrepareLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

/// @brief Method TryStartLocomotion, addr 0xb447704, size 0xfc, virtual false, abstract: false, final false
inline bool TryStartLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

/// @brief Method Update, addr 0xb447058, size 0x4a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>* const& __cordl_internal_get_m_ProviderDataMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>*& __cordl_internal_get_m_ProviderDataMap() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& __cordl_internal_get_m_XRBodyTransformer() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& __cordl_internal_get_m_XRBodyTransformer() ;

constexpr void __cordl_internal_set_m_ProviderDataMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>*  value) ;

constexpr void __cordl_internal_set_m_XRBodyTransformer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value) ;

/// @brief Method .ctor, addr 0xb447a7c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* getStaticF_s_ProvidersToRemove() ;

/// @brief Method get_bodyTransformer, addr 0xb446ff8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> get_bodyTransformer() ;

/// @brief Method get_xrOrigin, addr 0xb446fc8, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> get_xrOrigin() ;

static inline void setStaticF_s_ProvidersToRemove(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// @brief Method set_xrOrigin, addr 0xb446fe0, size 0x18, virtual false, abstract: false, final false
inline void set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionMediator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionMediator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionMediator(LocomotionMediator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionMediator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionMediator(LocomotionMediator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11333};

/// @brief Field m_XRBodyTransformer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  ___m_XRBodyTransformer;

/// @brief Field m_ProviderDataMap, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>*  ___m_ProviderDataMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator, ___m_XRBodyTransformer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator, ___m_ProviderDataMap) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionState
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator/LocomotionProviderData
class CORDL_TYPE LocomotionMediator_LocomotionProviderData : public ::System::Object {
public:
// Declarations
/// @brief Field locomotionEndFrame, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_locomotionEndFrame, put=__cordl_internal_set_locomotionEndFrame)) int32_t  locomotionEndFrame;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_locomotionEndFrame() const;

constexpr int32_t& __cordl_internal_get_locomotionEndFrame() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState const& __cordl_internal_get_state() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_locomotionEndFrame(int32_t  value) ;

constexpr void __cordl_internal_set_state(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  value) ;

/// @brief Method .ctor, addr 0xb447678, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionMediator_LocomotionProviderData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionMediator_LocomotionProviderData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionMediator_LocomotionProviderData(LocomotionMediator_LocomotionProviderData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionMediator_LocomotionProviderData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionMediator_LocomotionProviderData(LocomotionMediator_LocomotionProviderData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11332};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  ___state;

/// @brief Field locomotionEndFrame, offset: 0x14, size: 0x4, def value: None
 int32_t  ___locomotionEndFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData, ___locomotionEndFrame) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
