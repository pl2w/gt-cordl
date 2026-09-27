#pragma once
// IWYU pragma private; include "Oculus/Interaction/SectionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SectionAttribute)
// Forward declare root types
namespace Oculus::Interaction {
class SectionAttribute;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SectionAttribute*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SectionAttribute*, "Oculus.Interaction", "SectionAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SectionAttribute
class CORDL_TYPE SectionAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
 __declspec(property(get=get_SectionName, put=set_SectionName)) ::StringW  SectionName;

/// @brief Field <SectionName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__SectionName_k__BackingField, put=__cordl_internal_set__SectionName_k__BackingField)) ::StringW  _SectionName_k__BackingField;

static inline ::Oculus::Interaction::SectionAttribute* New_ctor(::StringW  sectionName) ;

constexpr ::StringW const& __cordl_internal_get__SectionName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__SectionName_k__BackingField() ;

constexpr void __cordl_internal_set__SectionName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa3ffddc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  sectionName) ;

/// [CompilerGenerated]
/// @brief Method get_SectionName, addr 0xa3ffdcc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SectionName() ;

/// [CompilerGenerated]
/// @brief Method set_SectionName, addr 0xa3ffdd4, size 0x8, virtual false, abstract: false, final false
inline void set_SectionName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SectionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SectionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SectionAttribute(SectionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SectionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SectionAttribute(SectionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15691};

/// [CompilerGenerated]
/// @brief Field <SectionName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____SectionName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SectionAttribute, ____SectionName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SectionAttribute) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
