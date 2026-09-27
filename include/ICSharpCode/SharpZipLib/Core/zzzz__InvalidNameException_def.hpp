#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/InvalidNameException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__SharpZipBaseException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InvalidNameException)
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
namespace ICSharpCode::SharpZipLib::Core {
class InvalidNameException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::InvalidNameException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::InvalidNameException*, "ICSharpCode.SharpZipLib.Core", "InvalidNameException");
// Dependencies ICSharpCode.SharpZipLib.SharpZipBaseException
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.InvalidNameException
class CORDL_TYPE InvalidNameException : public ::ICSharpCode::SharpZipLib::SharpZipBaseException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::Core::InvalidNameException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Core::InvalidNameException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::Core::InvalidNameException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::Core::InvalidNameException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9ffaed8, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9ffaf34, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9ffaf24, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9ffaf2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidNameException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidNameException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidNameException(InvalidNameException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidNameException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidNameException(InvalidNameException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17429};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::InvalidNameException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
