#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZip)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::GZip {
class GZip;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::GZip::GZip*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::GZip::GZip*, "ICSharpCode.SharpZipLib.GZip", "GZip");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::GZip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.GZip.GZip
class CORDL_TYPE GZip : public ::System::Object {
public:
// Declarations
/// @brief Method Compress, addr 0x9ff6000, size 0x358, virtual false, abstract: false, final false
static inline void Compress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner, int32_t  bufferSize, int32_t  level) ;

/// @brief Method Decompress, addr 0x9ff5bd0, size 0x2a4, virtual false, abstract: false, final false
static inline void Decompress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GZip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GZip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GZip(GZip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GZip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GZip(GZip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17403};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::GZip::GZip) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::GZip
