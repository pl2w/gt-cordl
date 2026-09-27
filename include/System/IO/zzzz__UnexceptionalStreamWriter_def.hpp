#pragma once
// IWYU pragma private; include "System/IO/UnexceptionalStreamWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnexceptionalStreamWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class UnexceptionalStreamWriter;
}
// Write type traits
MARK_REF_T(::System::IO::UnexceptionalStreamWriter*);
DEFINE_IL2CPP_CLASS(::System::IO::UnexceptionalStreamWriter*, "System.IO", "UnexceptionalStreamWriter");
// Dependencies System.IO.StreamWriter
namespace System::IO {
// Is value type: false
// CS Name: System.IO.UnexceptionalStreamWriter
class CORDL_TYPE UnexceptionalStreamWriter : public ::System::IO::StreamWriter {
public:
// Declarations
/// @brief Method Flush, addr 0xa2b55b4, size 0x84, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::System::IO::UnexceptionalStreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

/// @brief Method Write, addr 0xa2b5638, size 0x84, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0xa2b5740, size 0x84, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t>  value) ;

/// @brief Method Write, addr 0xa2b57c4, size 0x84, virtual true, abstract: false, final false
inline void Write(::StringW  value) ;

/// @brief Method Write, addr 0xa2b56bc, size 0x84, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method .ctor, addr 0xa2b553c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnexceptionalStreamWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnexceptionalStreamWriter(UnexceptionalStreamWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnexceptionalStreamWriter(UnexceptionalStreamWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7072};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::UnexceptionalStreamWriter) == 0x70, "Size mismatch!");

} // namespace end def System::IO
