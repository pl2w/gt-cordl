#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/StreamDecodingException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__SharpZipBaseException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StreamDecodingException)
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
class StreamDecodingException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::StreamDecodingException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::StreamDecodingException*, "ICSharpCode.SharpZipLib", "StreamDecodingException");
// Dependencies ICSharpCode.SharpZipLib.SharpZipBaseException
namespace ICSharpCode::SharpZipLib {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.StreamDecodingException
class CORDL_TYPE StreamDecodingException : public ::ICSharpCode::SharpZipLib::SharpZipBaseException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::StreamDecodingException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::StreamDecodingException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::StreamDecodingException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::StreamDecodingException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9f7b264, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7b2b4, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9f7b2ac, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9f7b2b0, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamDecodingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamDecodingException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamDecodingException(StreamDecodingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamDecodingException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamDecodingException(StreamDecodingException const& ) = delete;

/// @brief Field GenericMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  GenericMessage{u"Input stream could not be decoded"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17307};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::StreamDecodingException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib
