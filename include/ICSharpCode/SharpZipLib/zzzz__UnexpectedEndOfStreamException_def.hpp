#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/UnexpectedEndOfStreamException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__StreamDecodingException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnexpectedEndOfStreamException)
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
class UnexpectedEndOfStreamException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::UnexpectedEndOfStreamException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::UnexpectedEndOfStreamException*, "ICSharpCode.SharpZipLib", "UnexpectedEndOfStreamException");
// Dependencies ICSharpCode.SharpZipLib.StreamDecodingException
namespace ICSharpCode::SharpZipLib {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.UnexpectedEndOfStreamException
class CORDL_TYPE UnexpectedEndOfStreamException : public ::ICSharpCode::SharpZipLib::StreamDecodingException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::UnexpectedEndOfStreamException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::UnexpectedEndOfStreamException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::UnexpectedEndOfStreamException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::UnexpectedEndOfStreamException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9f7b30c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7b35c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9f7b354, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9f7b358, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnexpectedEndOfStreamException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnexpectedEndOfStreamException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnexpectedEndOfStreamException(UnexpectedEndOfStreamException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnexpectedEndOfStreamException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnexpectedEndOfStreamException(UnexpectedEndOfStreamException const& ) = delete;

/// @brief Field GenericMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  GenericMessage{u"Input stream ended unexpectedly"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17309};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::UnexpectedEndOfStreamException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib
