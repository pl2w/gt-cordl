#pragma once
// IWYU pragma private; include "GorillaTag/SoundBankInfoAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SoundBankInfoAttribute)
// Forward declare root types
namespace GorillaTag {
class SoundBankInfoAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::SoundBankInfoAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::SoundBankInfoAttribute*, "GorillaTag", "SoundBankInfoAttribute");
// [IncludeMyAttributes]
// Dependencies System.Attribute
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.SoundBankInfoAttribute
class CORDL_TYPE SoundBankInfoAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GorillaTag::SoundBankInfoAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5d22b44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundBankInfoAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundBankInfoAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundBankInfoAttribute(SoundBankInfoAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundBankInfoAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundBankInfoAttribute(SoundBankInfoAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4602};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::SoundBankInfoAttribute) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
