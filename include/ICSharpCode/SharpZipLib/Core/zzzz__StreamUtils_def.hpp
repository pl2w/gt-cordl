#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/StreamUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamUtils)
namespace ICSharpCode::SharpZipLib::Core {
class ProgressHandler;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class StreamUtils;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::StreamUtils*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::StreamUtils*, "ICSharpCode.SharpZipLib.Core", "StreamUtils");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.StreamUtils
class CORDL_TYPE StreamUtils : public ::System::Object {
public:
// Declarations
/// @brief Method Copy, addr 0x9ff5e7c, size 0x184, virtual false, abstract: false, final false
static inline void Copy(::System::IO::Stream*  source, ::System::IO::Stream*  destination, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method Copy, addr 0x9ffc92c, size 0x1c, virtual false, abstract: false, final false
static inline void Copy(::System::IO::Stream*  source, ::System::IO::Stream*  destination, ::ArrayW<uint8_t>  buffer, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*  progressHandler, ::System::TimeSpan  updateInterval, ::System::Object*  sender, ::StringW  name) ;

/// @brief Method Copy, addr 0x9ffc948, size 0x404, virtual false, abstract: false, final false
static inline void Copy(::System::IO::Stream*  source, ::System::IO::Stream*  destination, ::ArrayW<uint8_t>  buffer, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*  progressHandler, ::System::TimeSpan  updateInterval, ::System::Object*  sender, ::StringW  name, int64_t  fixedTarget) ;

static inline ::ICSharpCode::SharpZipLib::Core::StreamUtils* New_ctor() ;

/// @brief Method ReadFully, addr 0x9ffc7ac, size 0x18, virtual false, abstract: false, final false
static inline void ReadFully(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method ReadFully, addr 0x9ffc7c4, size 0x168, virtual false, abstract: false, final false
static inline void ReadFully(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadRequestedBytes, addr 0x9ff916c, size 0x15c, virtual false, abstract: false, final false
static inline int32_t ReadRequestedBytes(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method .ctor, addr 0x9ffcd4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamUtils(StreamUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamUtils(StreamUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17437};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::StreamUtils) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
