#pragma once
// IWYU pragma private; include "GorillaTag/DebugOptionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebugOptionAttribute)
// Forward declare root types
namespace GorillaTag {
class DebugOptionAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::DebugOptionAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DebugOptionAttribute*, "GorillaTag", "DebugOptionAttribute");
// [IncludeMyAttributes]
// Dependencies System.Attribute
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.DebugOptionAttribute
class CORDL_TYPE DebugOptionAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GorillaTag::DebugOptionAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5d22b34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugOptionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugOptionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugOptionAttribute(DebugOptionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugOptionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugOptionAttribute(DebugOptionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4600};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::DebugOptionAttribute) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
