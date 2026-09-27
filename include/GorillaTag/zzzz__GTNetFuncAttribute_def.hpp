#pragma once
// IWYU pragma private; include "GorillaTag/GTNetFuncAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(GTNetFuncAttribute)
// Forward declare root types
namespace GorillaTag {
class GTNetFuncAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::GTNetFuncAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GTNetFuncAttribute*, "GorillaTag", "GTNetFuncAttribute");
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTNetFuncAttribute
class CORDL_TYPE GTNetFuncAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GorillaTag::GTNetFuncAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5d36410, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTNetFuncAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTNetFuncAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTNetFuncAttribute(GTNetFuncAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTNetFuncAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTNetFuncAttribute(GTNetFuncAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4655};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GTNetFuncAttribute) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
