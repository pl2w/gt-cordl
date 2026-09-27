#pragma once
// IWYU pragma private; include "Oculus/Interaction/ConditionalHideAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__ConditionalHideAttribute_DisplayMode_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConditionalHideAttribute)
namespace GlobalNamespace {
struct ConditionalHideAttribute_DisplayMode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ConditionalHideAttribute;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ConditionalHideAttribute*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ConditionalHideAttribute*, "Oculus.Interaction", "ConditionalHideAttribute");
// Dependencies Oculus.Interaction.ConditionalHideAttribute::DisplayMode, UnityEngine.PropertyAttribute
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ConditionalHideAttribute
class CORDL_TYPE ConditionalHideAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
using DisplayMode = ::GlobalNamespace::ConditionalHideAttribute_DisplayMode;

 __declspec(property(get=get_ConditionalFieldPath, put=set_ConditionalFieldPath)) ::StringW  ConditionalFieldPath;

 __declspec(property(get=get_Display, put=set_Display)) ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  Display;

 __declspec(property(get=get_Value, put=set_Value)) ::System::Object*  Value;

/// @brief Field <ConditionalFieldPath>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConditionalFieldPath_k__BackingField, put=__cordl_internal_set__ConditionalFieldPath_k__BackingField)) ::StringW  _ConditionalFieldPath_k__BackingField;

/// @brief Field <Display>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Display_k__BackingField, put=__cordl_internal_set__Display_k__BackingField)) ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  _Display_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::System::Object*  _Value_k__BackingField;

static inline ::Oculus::Interaction::ConditionalHideAttribute* New_ctor(::StringW  fieldName, ::System::Object*  value) ;

static inline ::Oculus::Interaction::ConditionalHideAttribute* New_ctor(::StringW  fieldName, ::System::Object*  value, ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  displayMode) ;

constexpr ::StringW const& __cordl_internal_get__ConditionalFieldPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ConditionalFieldPath_k__BackingField() ;

constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode const& __cordl_internal_get__Display_k__BackingField() const;

constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode& __cordl_internal_get__Display_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__Value_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__ConditionalFieldPath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Display_k__BackingField(::GlobalNamespace::ConditionalHideAttribute_DisplayMode  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa3ff99c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::StringW  fieldName, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa3ff9f8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  fieldName, ::System::Object*  value, ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  displayMode) ;

/// [CompilerGenerated]
/// @brief Method get_ConditionalFieldPath, addr 0xa3ff96c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ConditionalFieldPath() ;

/// [CompilerGenerated]
/// @brief Method get_Display, addr 0xa3ff98c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConditionalHideAttribute_DisplayMode get_Display() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0xa3ff97c, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Value() ;

/// [CompilerGenerated]
/// @brief Method set_ConditionalFieldPath, addr 0xa3ff974, size 0x8, virtual false, abstract: false, final false
inline void set_ConditionalFieldPath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Display, addr 0xa3ff994, size 0x8, virtual false, abstract: false, final false
inline void set_Display(::GlobalNamespace::ConditionalHideAttribute_DisplayMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0xa3ff984, size 0x8, virtual false, abstract: false, final false
inline void set_Value(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConditionalHideAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConditionalHideAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalHideAttribute(ConditionalHideAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalHideAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalHideAttribute(ConditionalHideAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15684};

/// [CompilerGenerated]
/// @brief Field <ConditionalFieldPath>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ConditionalFieldPath_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____Value_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Display>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  ____Display_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ConditionalHideAttribute, ____ConditionalFieldPath_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ConditionalHideAttribute, ____Value_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ConditionalHideAttribute, ____Display_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ConditionalHideAttribute) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
