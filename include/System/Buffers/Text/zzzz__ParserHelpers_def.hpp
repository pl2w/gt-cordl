#pragma once
// IWYU pragma private; include "System/Buffers/Text/ParserHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParserHelpers)
// Forward declare root types
namespace System::Buffers::Text {
class ParserHelpers;
}
// Write type traits
MARK_REF_T(::System::Buffers::Text::ParserHelpers*);
DEFINE_IL2CPP_CLASS(::System::Buffers::Text::ParserHelpers*, "System.Buffers.Text", "ParserHelpers");
// Dependencies System.Object
namespace System::Buffers::Text {
// Is value type: false
// CS Name: System.Buffers.Text.ParserHelpers
class CORDL_TYPE ParserHelpers : public ::System::Object {
public:
// Declarations
/// @brief Field s_hexLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_hexLookup, put=setStaticF_s_hexLookup)) ::ArrayW<uint8_t>  s_hexLookup;

/// @brief Method IsDigit, addr 0xa278bd4, size 0x10, virtual false, abstract: false, final false
static inline bool IsDigit(int32_t  i) ;

static inline ::ArrayW<uint8_t> getStaticF_s_hexLookup() ;

static inline void setStaticF_s_hexLookup(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParserHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParserHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParserHelpers(ParserHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParserHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParserHelpers(ParserHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::Text::ParserHelpers) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers::Text
