#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/InvalidHeaderException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InvalidHeaderException)
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
namespace ICSharpCode::SharpZipLib::Tar {
class InvalidHeaderException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::InvalidHeaderException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::InvalidHeaderException*, "ICSharpCode.SharpZipLib.Tar", "InvalidHeaderException");
// Dependencies ICSharpCode.SharpZipLib.Tar.TarException
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.InvalidHeaderException
class CORDL_TYPE InvalidHeaderException : public ::ICSharpCode::SharpZipLib::Tar::TarException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::Tar::InvalidHeaderException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Tar::InvalidHeaderException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::Tar::InvalidHeaderException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::Tar::InvalidHeaderException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x9fda758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9fda770, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9fda760, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9fda768, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidHeaderException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidHeaderException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidHeaderException(InvalidHeaderException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidHeaderException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidHeaderException(InvalidHeaderException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::InvalidHeaderException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
