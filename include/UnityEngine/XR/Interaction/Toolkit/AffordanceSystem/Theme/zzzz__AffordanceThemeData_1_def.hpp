#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/AffordanceThemeData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AffordanceThemeData_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class AffordanceThemeData_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme", "AffordanceThemeData`1");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>
class CORDL_TYPE AffordanceThemeData_1 : public ::System::Object {
public:
// Declarations
/// @brief Field animationStateEndValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationStateEndValue, put=__cordl_internal_set_animationStateEndValue)) T  animationStateEndValue;

/// @brief Field animationStateStartValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationStateStartValue, put=__cordl_internal_set_animationStateStartValue)) T  animationStateStartValue;

/// @brief Field stateName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateName, put=__cordl_internal_set_stateName)) ::StringW  stateName;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>* New_ctor() ;

constexpr T const& __cordl_internal_get_animationStateEndValue() const;

constexpr T& __cordl_internal_get_animationStateEndValue() ;

constexpr T const& __cordl_internal_get_animationStateStartValue() const;

constexpr T& __cordl_internal_get_animationStateStartValue() ;

constexpr ::StringW const& __cordl_internal_get_stateName() const;

constexpr ::StringW& __cordl_internal_get_stateName() ;

constexpr void __cordl_internal_set_animationStateEndValue(T  value) ;

constexpr void __cordl_internal_set_animationStateStartValue(T  value) ;

constexpr void __cordl_internal_set_stateName(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AffordanceThemeData_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AffordanceThemeData_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AffordanceThemeData_1(AffordanceThemeData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AffordanceThemeData_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AffordanceThemeData_1(AffordanceThemeData_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11706};

/// [Tooltip("Name of the affordance state the theme data is for.\nThis value is optional and does not serve a functional purpose.")]
/// @brief Field stateName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___stateName;

/// [Tooltip("Target value for the curve at 0")]
/// @brief Field animationStateStartValue, offset: 0x18, size: 0x8, def value: None
 T  ___animationStateStartValue;

/// [Tooltip("Target value for the curve at 1.")]
/// @brief Field animationStateEndValue, offset: 0x20, size: 0x8, def value: None
 T  ___animationStateEndValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme
