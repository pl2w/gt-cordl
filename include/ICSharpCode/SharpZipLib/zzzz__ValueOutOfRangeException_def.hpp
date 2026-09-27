#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/ValueOutOfRangeException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/zzzz__StreamDecodingException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueOutOfRangeException)
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
class ValueOutOfRangeException;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::ValueOutOfRangeException*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::ValueOutOfRangeException*, "ICSharpCode.SharpZipLib", "ValueOutOfRangeException");
// Dependencies ICSharpCode.SharpZipLib.StreamDecodingException
namespace ICSharpCode::SharpZipLib {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.ValueOutOfRangeException
class CORDL_TYPE ValueOutOfRangeException : public ::ICSharpCode::SharpZipLib::StreamDecodingException {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::ValueOutOfRangeException* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::ValueOutOfRangeException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::ICSharpCode::SharpZipLib::ValueOutOfRangeException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::ICSharpCode::SharpZipLib::ValueOutOfRangeException* New_ctor(::StringW  nameOfValue) ;

static inline ::ICSharpCode::SharpZipLib::ValueOutOfRangeException* New_ctor(::StringW  nameOfValue, ::StringW  value, ::StringW  maxValue, ::StringW  minValue) ;

static inline ::ICSharpCode::SharpZipLib::ValueOutOfRangeException* New_ctor(::StringW  nameOfValue, int64_t  value, int64_t  maxValue, int64_t  minValue) ;

/// @brief Method .ctor, addr 0x9f7b5dc, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7b5e4, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x9f7b5e0, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x9f7b360, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::StringW  nameOfValue) ;

/// @brief Method .ctor, addr 0x9f7b438, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(::StringW  nameOfValue, ::StringW  value, ::StringW  maxValue, ::StringW  minValue) ;

/// @brief Method .ctor, addr 0x9f7b3c4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  nameOfValue, int64_t  value, int64_t  maxValue, int64_t  minValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueOutOfRangeException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueOutOfRangeException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueOutOfRangeException(ValueOutOfRangeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueOutOfRangeException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueOutOfRangeException(ValueOutOfRangeException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::ValueOutOfRangeException) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib
