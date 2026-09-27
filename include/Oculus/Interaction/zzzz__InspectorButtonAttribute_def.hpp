#pragma once
// IWYU pragma private; include "Oculus/Interaction/InspectorButtonAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InspectorButtonAttribute)
// Forward declare root types
namespace Oculus::Interaction {
class InspectorButtonAttribute;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InspectorButtonAttribute*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InspectorButtonAttribute*, "Oculus.Interaction", "InspectorButtonAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies UnityEngine.PropertyAttribute
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InspectorButtonAttribute
class CORDL_TYPE InspectorButtonAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
 __declspec(property(get=get_ButtonWidth, put=set_ButtonWidth)) float_t  ButtonWidth;

/// @brief Field <ButtonWidth>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__ButtonWidth_k__BackingField, put=__cordl_internal_set__ButtonWidth_k__BackingField)) float_t  _ButtonWidth_k__BackingField;

/// @brief Field buttonHeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonHeight, put=__cordl_internal_set_buttonHeight)) float_t  buttonHeight;

/// @brief Field methodName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_methodName, put=__cordl_internal_set_methodName)) ::StringW  methodName;

static inline ::Oculus::Interaction::InspectorButtonAttribute* New_ctor(::StringW  methodName) ;

static inline ::Oculus::Interaction::InspectorButtonAttribute* New_ctor(::StringW  methodName, float_t  buttonHeight) ;

constexpr float_t const& __cordl_internal_get__ButtonWidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ButtonWidth_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_buttonHeight() const;

constexpr float_t& __cordl_internal_get_buttonHeight() ;

constexpr ::StringW const& __cordl_internal_get_methodName() const;

constexpr ::StringW& __cordl_internal_get_methodName() ;

constexpr void __cordl_internal_set__ButtonWidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_buttonHeight(float_t  value) ;

constexpr void __cordl_internal_set_methodName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa3ffcfc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  methodName) ;

/// @brief Method .ctor, addr 0xa3ffd40, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::StringW  methodName, float_t  buttonHeight) ;

/// [CompilerGenerated]
/// @brief Method get_ButtonWidth, addr 0xa3ffcec, size 0x8, virtual false, abstract: false, final false
inline float_t get_ButtonWidth() ;

/// [CompilerGenerated]
/// @brief Method set_ButtonWidth, addr 0xa3ffcf4, size 0x8, virtual false, abstract: false, final false
inline void set_ButtonWidth(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InspectorButtonAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InspectorButtonAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InspectorButtonAttribute(InspectorButtonAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InspectorButtonAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InspectorButtonAttribute(InspectorButtonAttribute const& ) = delete;

/// @brief Field BUTTON_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  BUTTON_HEIGHT{static_cast<float_t>(20.0f)};

/// @brief Field BUTTON_WIDTH offset 0xffffffff size 0x4
static constexpr float_t  BUTTON_WIDTH{static_cast<float_t>(80.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15688};

/// [CompilerGenerated]
/// @brief Field <ButtonWidth>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____ButtonWidth_k__BackingField;

/// @brief Field methodName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___methodName;

/// @brief Field buttonHeight, offset: 0x28, size: 0x4, def value: None
 float_t  ___buttonHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InspectorButtonAttribute, ____ButtonWidth_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InspectorButtonAttribute, ___methodName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InspectorButtonAttribute, ___buttonHeight) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InspectorButtonAttribute) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
