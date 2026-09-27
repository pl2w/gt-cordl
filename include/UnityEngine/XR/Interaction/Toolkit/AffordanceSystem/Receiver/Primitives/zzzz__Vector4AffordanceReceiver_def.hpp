#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/Vector4AffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
CORDL_MODULE_EXPORT(Vector4AffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class Vector4UnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector4AffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class Vector4AffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "Vector4AffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Primitives/Vector4 Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.Mathematics.float4, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver
class CORDL_TYPE Vector4AffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<::Unity::Mathematics::float4> {
public:
// Declarations
/// @brief Field <affordanceValue>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__affordanceValue_k__BackingField, put=__cordl_internal_set__affordanceValue_k__BackingField)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float4>*  _affordanceValue_k__BackingField;

 __declspec(property(get=get_affordanceThemeDatum, put=set_affordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty*  affordanceThemeDatum;

 __declspec(property(get=get_affordanceValue)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float4>*  affordanceValue;

 __declspec(property(get=get_defaultAffordanceTheme)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float4>*  defaultAffordanceTheme;

/// @brief Field m_AffordanceThemeDatum, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffordanceThemeDatum, put=__cordl_internal_set_m_AffordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty*  m_AffordanceThemeDatum;

/// @brief Field m_ValueUpdated, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValueUpdated, put=__cordl_internal_set_m_ValueUpdated)) ::Unity::XR::CoreUtils::Vector4UnityEvent*  m_ValueUpdated;

 __declspec(property(get=get_valueUpdated, put=set_valueUpdated)) ::Unity::XR::CoreUtils::Vector4UnityEvent*  valueUpdated;

/// @brief Method GenerateNewAffordanceThemeInstance, addr 0xb4dc92c, size 0x54, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float4>* GenerateNewAffordanceThemeInstance() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4dbe28, size 0x9c, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::Unity::Mathematics::float4  newValue) ;

/// @brief Method ScheduleTweenJob, addr 0xb4dc87c, size 0xb0, virtual true, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4>>  jobData) ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float4>* const& __cordl_internal_get__affordanceValue_k__BackingField() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float4>*& __cordl_internal_get__affordanceValue_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty* const& __cordl_internal_get_m_AffordanceThemeDatum() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum() ;

constexpr ::Unity::XR::CoreUtils::Vector4UnityEvent* const& __cordl_internal_get_m_ValueUpdated() const;

constexpr ::Unity::XR::CoreUtils::Vector4UnityEvent*& __cordl_internal_get_m_ValueUpdated() ;

constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float4>*  value) ;

constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::Vector4UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xb4dbefc, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_affordanceThemeDatum, addr 0xb4dc7fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty* get_affordanceThemeDatum() ;

/// [CompilerGenerated]
/// @brief Method get_affordanceValue, addr 0xb4dc874, size 0x8, virtual true, abstract: false, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float4>* get_affordanceValue() ;

/// @brief Method get_defaultAffordanceTheme, addr 0xb4dc81c, size 0x58, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float4>* get_defaultAffordanceTheme() ;

/// @brief Method get_valueUpdated, addr 0xb4dc80c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Vector4UnityEvent* get_valueUpdated() ;

/// @brief Method set_affordanceThemeDatum, addr 0xb4dc804, size 0x8, virtual false, abstract: false, final false
inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty*  value) ;

/// @brief Method set_valueUpdated, addr 0xb4dc814, size 0x8, virtual false, abstract: false, final false
inline void set_valueUpdated(::Unity::XR::CoreUtils::Vector4UnityEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector4AffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector4AffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector4AffordanceReceiver(Vector4AffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector4AffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector4AffordanceReceiver(Vector4AffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11768};

/// [SerializeField]
/// [Tooltip("Vector4 Affordance Theme datum property used to map affordance state to a Vector4 affordance value. Can store an asset or a serialized value.")]
/// @brief Field m_AffordanceThemeDatum, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceThemeDatumProperty*  ___m_AffordanceThemeDatum;

/// [SerializeField]
/// [Tooltip("The event that is called when the current affordance value is updated.")]
/// @brief Field m_ValueUpdated, offset: 0xa0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Vector4UnityEvent*  ___m_ValueUpdated;

/// [CompilerGenerated]
/// @brief Field <affordanceValue>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float4>*  ____affordanceValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver, ___m_AffordanceThemeDatum) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver, ___m_ValueUpdated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver, ____affordanceValue_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
