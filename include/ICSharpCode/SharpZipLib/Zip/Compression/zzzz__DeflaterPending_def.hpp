#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterPending.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__PendingBuffer_def.hpp"
CORDL_MODULE_EXPORT(DeflaterPending)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterPending;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*, "ICSharpCode.SharpZipLib.Zip.Compression", "DeflaterPending");
// Dependencies ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
class CORDL_TYPE DeflaterPending : public ::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* New_ctor() ;

/// @brief Method .ctor, addr 0x9fd1c90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflaterPending() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflaterPending", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflaterPending(DeflaterPending && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflaterPending", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflaterPending(DeflaterPending const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
