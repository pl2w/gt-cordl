#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Lzw/LzwException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__SharpZipBaseException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LzwException)
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
namespace ICSharpCode::SharpZipLib::Lzw {
class LzwException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Lzw::LzwException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Lzw::LzwException*, "ICSharpCode.SharpZipLib.Lzw", "LzwException");
// Dependencies ICSharpCode.SharpZipLib.SharpZipBaseException
namespace ICSharpCode::SharpZipLib::Lzw {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Lzw.LzwException
class CORDL_TYPE LzwException : public ::ICSharpCode::SharpZipLib::SharpZipBaseException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::Lzw::LzwException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Lzw::LzwException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::Lzw::LzwException* New_ctor(::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::Lzw::LzwException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9ff4bd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9ff4be8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9ff4bd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9ff4be0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LzwException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LzwException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LzwException(LzwException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LzwException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LzwException(LzwException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Lzw::LzwException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Lzw
