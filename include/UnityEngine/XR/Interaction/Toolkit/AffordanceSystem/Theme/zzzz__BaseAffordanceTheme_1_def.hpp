#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/BaseAffordanceTheme_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAffordanceTheme_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class AffordanceThemeData_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class BaseAffordanceTheme_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme", "BaseAffordanceTheme`1");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T>
class CORDL_TYPE BaseAffordanceTheme_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_animationCurve)) ::UnityEngine::AnimationCurve*  animationCurve;

/// @brief Field m_List, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_List, put=__cordl_internal_set_m_List)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*  m_List;

/// @brief Field m_StateAnimationCurve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StateAnimationCurve, put=__cordl_internal_set_m_StateAnimationCurve)) ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  m_StateAnimationCurve;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>*() noexcept;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*  other) ;

/// @brief Method GetAffordanceThemeDataForIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>* GetAffordanceThemeDataForIndex(uint8_t  stateIndex) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* New_ctor() ;

/// @brief Method SetAffordanceThemeDataList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetAffordanceThemeDataList(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*  newList) ;

/// @brief Method SetAnimationCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetAnimationCurve(::UnityEngine::AnimationCurve*  newAnimationCurve) ;

/// @brief Method ValidateTheme, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ValidateTheme() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>* const& __cordl_internal_get_m_List() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*& __cordl_internal_get_m_List() ;

constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* const& __cordl_internal_get_m_StateAnimationCurve() const;

constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& __cordl_internal_get_m_StateAnimationCurve() ;

constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*  value) ;

constexpr void __cordl_internal_set_m_StateAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_animationCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_animationCurve() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>* i___System__IEquatable_1___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Theme__BaseAffordanceTheme_1_T___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAffordanceTheme_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceTheme_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAffordanceTheme_1(BaseAffordanceTheme_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceTheme_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAffordanceTheme_1(BaseAffordanceTheme_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11707};

/// [SerializeField]
/// [Tooltip("Curve used to evaluate the target value of the animation state according to the affordance state\'s transition amount value.")]
/// @brief Field m_StateAnimationCurve, offset: 0x10, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  ___m_StateAnimationCurve;

/// [SerializeField]
/// [Tooltip("List of affordance states supported by this theme. The entry index is how states are mapped to their theme data.\nDo not re-order entries.")]
/// @brief Field m_List, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*  ___m_List;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme
