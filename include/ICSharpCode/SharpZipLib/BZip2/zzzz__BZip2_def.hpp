#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BZip2)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::BZip2 {
class BZip2;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::BZip2::BZip2*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::BZip2::BZip2*, "ICSharpCode.SharpZipLib.BZip2", "BZip2");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::BZip2 {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.BZip2.BZip2
class CORDL_TYPE BZip2 : public ::System::Object {
public:
// Declarations
/// @brief Method Compress, addr 0x9ffe318, size 0x288, virtual false, abstract: false, final false
static inline void Compress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner, int32_t  level) ;

/// @brief Method Decompress, addr 0x9ffdd34, size 0x27c, virtual false, abstract: false, final false
static inline void Decompress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BZip2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BZip2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BZip2(BZip2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BZip2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BZip2(BZip2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17443};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::BZip2::BZip2) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::BZip2
