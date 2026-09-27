#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/Vector2AffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
CORDL_MODULE_EXPORT(Vector2AffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class Vector2UnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector2AffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class Vector2AffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "Vector2AffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Primitives/Vector2 Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.Mathematics.float2, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver
class CORDL_TYPE Vector2AffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<::Unity::Mathematics::float2> {
public:
// Declarations
/// @brief Field <affordanceValue>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__affordanceValue_k__BackingField, put=__cordl_internal_set__affordanceValue_k__BackingField)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*  _affordanceValue_k__BackingField;

 __declspec(property(get=get_affordanceThemeDatum, put=set_affordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*  affordanceThemeDatum;

 __declspec(property(get=get_affordanceValue)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*  affordanceValue;

 __declspec(property(get=get_defaultAffordanceTheme)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>*  defaultAffordanceTheme;

/// @brief Field m_AffordanceThemeDatum, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffordanceThemeDatum, put=__cordl_internal_set_m_AffordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*  m_AffordanceThemeDatum;

/// @brief Field m_ValueUpdated, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValueUpdated, put=__cordl_internal_set_m_ValueUpdated)) ::Unity::XR::CoreUtils::Vector2UnityEvent*  m_ValueUpdated;

 __declspec(property(get=get_valueUpdated, put=set_valueUpdated)) ::Unity::XR::CoreUtils::Vector2UnityEvent*  valueUpdated;

/// @brief Method GenerateNewAffordanceThemeInstance, addr 0xb4dc630, size 0x54, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* GenerateNewAffordanceThemeInstance() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4db6a8, size 0x80, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::Unity::Mathematics::float2  newValue) ;

/// @brief Method ScheduleTweenJob, addr 0xb4dc584, size 0xac, virtual true, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>>  jobData) ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* const& __cordl_internal_get__affordanceValue_k__BackingField() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*& __cordl_internal_get__affordanceValue_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* const& __cordl_internal_get_m_AffordanceThemeDatum() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum() ;

constexpr ::Unity::XR::CoreUtils::Vector2UnityEvent* const& __cordl_internal_get_m_ValueUpdated() const;

constexpr ::Unity::XR::CoreUtils::Vector2UnityEvent*& __cordl_internal_get_m_ValueUpdated() ;

constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*  value) ;

constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::Vector2UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xb4db760, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_affordanceThemeDatum, addr 0xb4dc504, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* get_affordanceThemeDatum() ;

/// [CompilerGenerated]
/// @brief Method get_affordanceValue, addr 0xb4dc57c, size 0x8, virtual true, abstract: false, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* get_affordanceValue() ;

/// @brief Method get_defaultAffordanceTheme, addr 0xb4dc524, size 0x58, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* get_defaultAffordanceTheme() ;

/// @brief Method get_valueUpdated, addr 0xb4dc514, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Vector2UnityEvent* get_valueUpdated() ;

/// @brief Method set_affordanceThemeDatum, addr 0xb4dc50c, size 0x8, virtual false, abstract: false, final false
inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*  value) ;

/// @brief Method set_valueUpdated, addr 0xb4dc51c, size 0x8, virtual false, abstract: false, final false
inline void set_valueUpdated(::Unity::XR::CoreUtils::Vector2UnityEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2AffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2AffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2AffordanceReceiver(Vector2AffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2AffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2AffordanceReceiver(Vector2AffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11766};

/// [SerializeField]
/// [Tooltip("Vector2 Affordance Theme datum property used to map affordance state to a Vector2 affordance value. Can store an asset or a serialized value.")]
/// @brief Field m_AffordanceThemeDatum, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*  ___m_AffordanceThemeDatum;

/// [SerializeField]
/// [Tooltip("The event that is called when the current affordance value is updated.")]
/// @brief Field m_ValueUpdated, offset: 0x98, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Vector2UnityEvent*  ___m_ValueUpdated;

/// [CompilerGenerated]
/// @brief Field <affordanceValue>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*  ____affordanceValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver, ___m_AffordanceThemeDatum) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver, ___m_ValueUpdated) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver, ____affordanceValue_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver) == 0xa8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
