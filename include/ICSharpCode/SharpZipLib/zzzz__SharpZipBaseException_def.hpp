#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/SharpZipBaseException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SharpZipBaseException)
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
class SharpZipBaseException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::SharpZipBaseException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::SharpZipBaseException*, "ICSharpCode.SharpZipLib", "SharpZipBaseException");
// Dependencies System.Exception
namespace ICSharpCode::SharpZipLib {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.SharpZipBaseException
class CORDL_TYPE SharpZipBaseException : public ::System::Exception {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::SharpZipBaseException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::SharpZipBaseException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::SharpZipBaseException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::SharpZipBaseException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9f7b0b4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7b1e4, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9f7b10c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9f7b174, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharpZipBaseException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharpZipBaseException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharpZipBaseException(SharpZipBaseException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharpZipBaseException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharpZipBaseException(SharpZipBaseException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17306};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::SharpZipBaseException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib
