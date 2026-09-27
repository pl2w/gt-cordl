#pragma once
// IWYU pragma private; include "VYaml/Annotations/PreserveAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace VYaml::Annotations {
class PreserveAttribute;
}
// Write type traits
MARK_REF_T(::VYaml::Annotations::PreserveAttribute*);
DEFINE_IL2CPP_CLASS(::VYaml::Annotations::PreserveAttribute*, "VYaml.Annotations", "PreserveAttribute");
// Dependencies System.Attribute
namespace VYaml::Annotations {
// Is value type: false
// CS Name: VYaml.Annotations.PreserveAttribute
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::VYaml::Annotations::PreserveAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb973174, size 0xa04, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreserveAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreserveAttribute(PreserveAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreserveAttribute(PreserveAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Annotations::PreserveAttribute) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Annotations
