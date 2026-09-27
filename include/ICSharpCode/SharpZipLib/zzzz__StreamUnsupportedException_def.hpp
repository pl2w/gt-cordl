#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/StreamUnsupportedException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__StreamDecodingException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StreamUnsupportedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib {
class StreamUnsupportedException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::StreamUnsupportedException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::StreamUnsupportedException*, "ICSharpCode.SharpZipLib", "StreamUnsupportedException");
// Dependencies ICSharpCode.SharpZipLib.StreamDecodingException
namespace ICSharpCode::SharpZipLib {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.StreamUnsupportedException
class CORDL_TYPE StreamUnsupportedException : public ::ICSharpCode::SharpZipLib::StreamDecodingException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::StreamUnsupportedException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::StreamUnsupportedException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::StreamUnsupportedException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::StreamUnsupportedException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9f7b2b8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7b308, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9f7b300, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9f7b304, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamUnsupportedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamUnsupportedException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamUnsupportedException(StreamUnsupportedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamUnsupportedException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamUnsupportedException(StreamUnsupportedException const& ) = delete;

/// @brief Field GenericMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  GenericMessage{u"Input stream is in a unsupported format"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::StreamUnsupportedException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib
