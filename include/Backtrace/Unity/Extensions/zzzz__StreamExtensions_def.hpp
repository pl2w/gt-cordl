#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/StreamExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamExtensions)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Backtrace::Unity::Extensions {
class StreamExtensions;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Extensions::StreamExtensions*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Extensions::StreamExtensions*, "Backtrace.Unity.Extensions", "StreamExtensions");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Extensions {
// Is value type: false
// CS Name: Backtrace.Unity.Extensions.StreamExtensions
class CORDL_TYPE StreamExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CopyTo, addr 0x5f25a5c, size 0x21c, virtual false, abstract: false, final false
static inline void CopyTo(::System::IO::Stream*  original, ::System::IO::Stream*  destination) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamExtensions(StreamExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamExtensions(StreamExtensions const& ) = delete;

/// @brief Field _DefaultCopyBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  _DefaultCopyBufferSize{static_cast<int32_t>(0x14000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Extensions::StreamExtensions) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Extensions
