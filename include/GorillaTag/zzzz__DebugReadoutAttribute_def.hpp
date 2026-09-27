#pragma once
// IWYU pragma private; include "GorillaTag/DebugReadoutAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebugReadoutAttribute)
// Forward declare root types
namespace GorillaTag {
class DebugReadoutAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::DebugReadoutAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DebugReadoutAttribute*, "GorillaTag", "DebugReadoutAttribute");
// [IncludeMyAttributes]
// Dependencies System.Attribute
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.DebugReadoutAttribute
class CORDL_TYPE DebugReadoutAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GorillaTag::DebugReadoutAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5d22b2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugReadoutAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugReadoutAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugReadoutAttribute(DebugReadoutAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugReadoutAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugReadoutAttribute(DebugReadoutAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4599};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::DebugReadoutAttribute) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
