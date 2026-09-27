#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__SharpZipBaseException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GZipException)
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
namespace ICSharpCode::SharpZipLib::GZip {
class GZipException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::GZip::GZipException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::GZip::GZipException*, "ICSharpCode.SharpZipLib.GZip", "GZipException");
// Dependencies ICSharpCode.SharpZipLib.SharpZipBaseException
namespace ICSharpCode::SharpZipLib::GZip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.GZip.GZipException
class CORDL_TYPE GZipException : public ::ICSharpCode::SharpZipLib::SharpZipBaseException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::GZip::GZipException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::GZip::GZipException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::GZip::GZipException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::GZip::GZipException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9ff6540, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9ff6558, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9ff6548, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9ff6550, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GZipException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GZipException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GZipException(GZipException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GZipException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GZipException(GZipException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17406};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::GZip::GZipException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::GZip
