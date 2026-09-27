#pragma once
// IWYU pragma private; include "System/SRDescriptionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__DescriptionAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SRDescriptionAttribute)
// Forward declare root types
namespace System {
class SRDescriptionAttribute;
}
// Write type traits
MARK_REF_T(::System::SRDescriptionAttribute*);
DEFINE_IL2CPP_CLASS(::System::SRDescriptionAttribute*, "System", "SRDescriptionAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.ComponentModel.DescriptionAttribute
namespace System {
// Is value type: false
// CS Name: System.SRDescriptionAttribute
class CORDL_TYPE SRDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

/// @brief Field isReplaced, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isReplaced, put=__cordl_internal_set_isReplaced)) bool  isReplaced;

static inline ::System::SRDescriptionAttribute* New_ctor(::StringW  description) ;

constexpr bool const& __cordl_internal_get_isReplaced() const;

constexpr bool& __cordl_internal_get_isReplaced() ;

constexpr void __cordl_internal_set_isReplaced(bool  value) ;

/// @brief Method .ctor, addr 0xad07744, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  description) ;

/// @brief Method get_Description, addr 0xad077ac, size 0x4c, virtual true, abstract: false, final false
inline ::StringW get_Description() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SRDescriptionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SRDescriptionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SRDescriptionAttribute(SRDescriptionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SRDescriptionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SRDescriptionAttribute(SRDescriptionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9954};

/// @brief Field isReplaced, offset: 0x18, size: 0x1, def value: None
 bool  ___isReplaced;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::SRDescriptionAttribute, ___isReplaced) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::SRDescriptionAttribute) == 0x20, "Size mismatch!");

} // namespace end def System
