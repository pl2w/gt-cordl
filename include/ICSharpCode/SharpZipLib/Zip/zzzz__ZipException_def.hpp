#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__SharpZipBaseException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZipException)
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
namespace ICSharpCode::SharpZipLib::Zip {
class ZipException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipException*, "ICSharpCode.SharpZipLib.Zip", "ZipException");
// Dependencies ICSharpCode.SharpZipLib.SharpZipBaseException
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipException
class CORDL_TYPE ZipException : public ::ICSharpCode::SharpZipLib::SharpZipBaseException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::Zip::ZipException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9f812b4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f812bc, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9f7e65c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9f812b8, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipException(ZipException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipException(ZipException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
