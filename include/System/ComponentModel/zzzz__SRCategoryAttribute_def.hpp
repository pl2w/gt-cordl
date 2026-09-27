#pragma once
// IWYU pragma private; include "System/ComponentModel/SRCategoryAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CategoryAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SRCategoryAttribute)
// Forward declare root types
namespace System::ComponentModel {
class SRCategoryAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::SRCategoryAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::SRCategoryAttribute*, "System.ComponentModel", "SRCategoryAttribute");
// Dependencies System.ComponentModel.CategoryAttribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.SRCategoryAttribute
class CORDL_TYPE SRCategoryAttribute : public ::System::ComponentModel::CategoryAttribute {
public:
// Declarations
static inline ::System::ComponentModel::SRCategoryAttribute* New_ctor(::StringW  category) ;

/// @brief Method .ctor, addr 0xad98bd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  category) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SRCategoryAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SRCategoryAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SRCategoryAttribute(SRCategoryAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SRCategoryAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SRCategoryAttribute(SRCategoryAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10307};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::SRCategoryAttribute) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
