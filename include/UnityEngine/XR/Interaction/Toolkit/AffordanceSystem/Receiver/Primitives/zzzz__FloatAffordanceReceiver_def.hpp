#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/FloatAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatAffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class FloatUnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class FloatAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "FloatAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Primitives/Float Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace has ")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver
class CORDL_TYPE FloatAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<float_t> {
public:
// Declarations
/// @brief Field <affordanceValue>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__affordanceValue_k__BackingField, put=__cordl_internal_set__affordanceValue_k__BackingField)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  _affordanceValue_k__BackingField;

 __declspec(property(get=get_affordanceThemeDatum, put=set_affordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*  affordanceThemeDatum;

 __declspec(property(get=get_affordanceValue)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  affordanceValue;

 __declspec(property(get=get_defaultAffordanceTheme)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t>*  defaultAffordanceTheme;

/// @brief Field m_AffordanceThemeDatum, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffordanceThemeDatum, put=__cordl_internal_set_m_AffordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*  m_AffordanceThemeDatum;

/// @brief Field m_ValueUpdated, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValueUpdated, put=__cordl_internal_set_m_ValueUpdated)) ::Unity::XR::CoreUtils::FloatUnityEvent*  m_ValueUpdated;

 __declspec(property(get=get_valueUpdated, put=set_valueUpdated)) ::Unity::XR::CoreUtils::FloatUnityEvent*  valueUpdated;

/// @brief Method GenerateNewAffordanceThemeInstance, addr 0xb4dc31c, size 0x54, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t>* GenerateNewAffordanceThemeInstance() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4da670, size 0x6c, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(float_t  newValue) ;

/// @brief Method ScheduleTweenJob, addr 0xb4dc284, size 0x98, virtual true, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>>  jobData) ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* const& __cordl_internal_get__affordanceValue_k__BackingField() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& __cordl_internal_get__affordanceValue_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* const& __cordl_internal_get_m_AffordanceThemeDatum() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum() ;

constexpr ::Unity::XR::CoreUtils::FloatUnityEvent* const& __cordl_internal_get_m_ValueUpdated() const;

constexpr ::Unity::XR::CoreUtils::FloatUnityEvent*& __cordl_internal_get_m_ValueUpdated() ;

constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::FloatUnityEvent*  value) ;

/// @brief Method .ctor, addr 0xb4da7c8, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_affordanceThemeDatum, addr 0xb4dc204, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* get_affordanceThemeDatum() ;

/// [CompilerGenerated]
/// @brief Method get_affordanceValue, addr 0xb4dc27c, size 0x8, virtual true, abstract: false, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* get_affordanceValue() ;

/// @brief Method get_defaultAffordanceTheme, addr 0xb4dc224, size 0x58, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t>* get_defaultAffordanceTheme() ;

/// @brief Method get_valueUpdated, addr 0xb4dc214, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::FloatUnityEvent* get_valueUpdated() ;

/// @brief Method set_affordanceThemeDatum, addr 0xb4dc20c, size 0x8, virtual false, abstract: false, final false
inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*  value) ;

/// @brief Method set_valueUpdated, addr 0xb4dc21c, size 0x8, virtual false, abstract: false, final false
inline void set_valueUpdated(::Unity::XR::CoreUtils::FloatUnityEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatAffordanceReceiver(FloatAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatAffordanceReceiver(FloatAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11763};

/// [SerializeField]
/// [Tooltip("Float Affordance Theme datum property used to map affordance state to a float affordance value. Can store an asset or a serialized value.")]
/// @brief Field m_AffordanceThemeDatum, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*  ___m_AffordanceThemeDatum;

/// [SerializeField]
/// [Tooltip("The event that is called when the current affordance value is updated.")]
/// @brief Field m_ValueUpdated, offset: 0x98, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::FloatUnityEvent*  ___m_ValueUpdated;

/// [CompilerGenerated]
/// @brief Field <affordanceValue>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  ____affordanceValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver, ___m_AffordanceThemeDatum) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver, ___m_ValueUpdated) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver, ____affordanceValue_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver) == 0xa8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
