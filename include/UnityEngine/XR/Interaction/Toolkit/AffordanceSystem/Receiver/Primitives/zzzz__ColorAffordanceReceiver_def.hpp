#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/ColorAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ColorAffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class ColorUnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class BaseAffordanceTheme_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class ColorAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "ColorAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Primitives/Color Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.Color, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver
class CORDL_TYPE ColorAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<::UnityEngine::Color> {
public:
// Declarations
/// @brief Field <affordanceValue>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__affordanceValue_k__BackingField, put=__cordl_internal_set__affordanceValue_k__BackingField)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*  _affordanceValue_k__BackingField;

 __declspec(property(get=get_affordanceThemeDatum, put=set_affordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*  affordanceThemeDatum;

 __declspec(property(get=get_affordanceValue)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*  affordanceValue;

 __declspec(property(get=get_defaultAffordanceTheme)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>*  defaultAffordanceTheme;

/// @brief Field m_AffordanceThemeDatum, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffordanceThemeDatum, put=__cordl_internal_set_m_AffordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*  m_AffordanceThemeDatum;

/// @brief Field m_ValueUpdated, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValueUpdated, put=__cordl_internal_set_m_ValueUpdated)) ::Unity::XR::CoreUtils::ColorUnityEvent*  m_ValueUpdated;

 __declspec(property(get=get_valueUpdated, put=set_valueUpdated)) ::Unity::XR::CoreUtils::ColorUnityEvent*  valueUpdated;

/// @brief Method GenerateNewAffordanceThemeInstance, addr 0xb4dc1b0, size 0x54, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* GenerateNewAffordanceThemeInstance() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4da2fc, size 0x90, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::UnityEngine::Color  newValue) ;

/// @brief Method ScheduleTweenJob, addr 0xb4dc034, size 0x17c, virtual true, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>  jobData) ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* const& __cordl_internal_get__affordanceValue_k__BackingField() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*& __cordl_internal_get__affordanceValue_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* const& __cordl_internal_get_m_AffordanceThemeDatum() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum() ;

constexpr ::Unity::XR::CoreUtils::ColorUnityEvent* const& __cordl_internal_get_m_ValueUpdated() const;

constexpr ::Unity::XR::CoreUtils::ColorUnityEvent*& __cordl_internal_get_m_ValueUpdated() ;

constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::ColorUnityEvent*  value) ;

/// @brief Method .ctor, addr 0xb4da404, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_affordanceThemeDatum, addr 0xb4dbfb4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* get_affordanceThemeDatum() ;

/// [CompilerGenerated]
/// @brief Method get_affordanceValue, addr 0xb4dc02c, size 0x8, virtual true, abstract: false, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* get_affordanceValue() ;

/// @brief Method get_defaultAffordanceTheme, addr 0xb4dbfd4, size 0x58, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* get_defaultAffordanceTheme() ;

/// @brief Method get_valueUpdated, addr 0xb4dbfc4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::ColorUnityEvent* get_valueUpdated() ;

/// @brief Method set_affordanceThemeDatum, addr 0xb4dbfbc, size 0x8, virtual false, abstract: false, final false
inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*  value) ;

/// @brief Method set_valueUpdated, addr 0xb4dbfcc, size 0x8, virtual false, abstract: false, final false
inline void set_valueUpdated(::Unity::XR::CoreUtils::ColorUnityEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorAffordanceReceiver(ColorAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorAffordanceReceiver(ColorAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11762};

/// [SerializeField]
/// [Tooltip("Color Affordance Theme datum property used to map affordance state to a color affordance value. Can store an asset or a serialized value.")]
/// @brief Field m_AffordanceThemeDatum, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*  ___m_AffordanceThemeDatum;

/// [SerializeField]
/// [Tooltip("The event that is called when the current affordance value is updated.")]
/// @brief Field m_ValueUpdated, offset: 0xa0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::ColorUnityEvent*  ___m_ValueUpdated;

/// [CompilerGenerated]
/// @brief Field <affordanceValue>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*  ____affordanceValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver, ___m_AffordanceThemeDatum) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver, ___m_ValueUpdated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver, ____affordanceValue_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
