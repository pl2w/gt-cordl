#pragma once
// IWYU pragma private; include "GorillaTag/Scripts/Utilities/StringWriterWithEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StringWriter_def.hpp"
CORDL_MODULE_EXPORT(StringWriterWithEncoding)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace GorillaTag::Scripts::Utilities {
class StringWriterWithEncoding;
}
// Write type traits
MARK_REF_T(::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*, "GorillaTag.Scripts.Utilities", "StringWriterWithEncoding");
// Dependencies System.IO.StringWriter
namespace GorillaTag::Scripts::Utilities {
// Is value type: false
// CS Name: GorillaTag.Scripts.Utilities.StringWriterWithEncoding
class CORDL_TYPE StringWriterWithEncoding : public ::System::IO::StringWriter {
public:
// Declarations
 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

/// @brief Field <Encoding>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Encoding_k__BackingField, put=__cordl_internal_set__Encoding_k__BackingField)) ::System::Text::Encoding*  _Encoding_k__BackingField;

static inline ::GorillaTag::Scripts::Utilities::StringWriterWithEncoding* New_ctor(::System::Text::Encoding*  encoding) ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__Encoding_k__BackingField() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__Encoding_k__BackingField() ;

constexpr void __cordl_internal_set__Encoding_k__BackingField(::System::Text::Encoding*  value) ;

/// @brief Method .ctor, addr 0x5d3d710, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Text::Encoding*  encoding) ;

/// [CompilerGenerated]
/// @brief Method get_Encoding, addr 0x5d3d708, size 0x8, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringWriterWithEncoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringWriterWithEncoding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringWriterWithEncoding(StringWriterWithEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringWriterWithEncoding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringWriterWithEncoding(StringWriterWithEncoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4698};

/// [CompilerGenerated]
/// @brief Field <Encoding>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Text::Encoding*  ____Encoding_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Scripts::Utilities::StringWriterWithEncoding, ____Encoding_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Scripts::Utilities::StringWriterWithEncoding) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Scripts::Utilities
