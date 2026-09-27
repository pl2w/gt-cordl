#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptographicException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptographicException)
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
namespace System::Security::Cryptography {
class CryptographicException;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::CryptographicException*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::CryptographicException*, "System.Security.Cryptography", "CryptographicException");
// [ComVisible(true)]
// Dependencies System.SystemException
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.CryptographicException
class CORDL_TYPE CryptographicException : public ::System::SystemException {
public:
// Declarations
static inline ::System::Security::Cryptography::CryptographicException* New_ctor() ;

static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW  format, ::StringW  insert) ;

static inline ::System::Security::Cryptography::CryptographicException* New_ctor(int32_t  hr) ;

static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW  message) ;

static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method ThrowCryptographicException, addr 0xa163c88, size 0x40, virtual false, abstract: false, final false
static inline void ThrowCryptographicException(int32_t  hr) ;

/// @brief Method .ctor, addr 0xa163af0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa163b5c, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::StringW  format, ::StringW  insert) ;

/// @brief Method .ctor, addr 0xa163c1c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(int32_t  hr) ;

/// @brief Method .ctor, addr 0xa163c80, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xa162374, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xa163bf4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CryptographicException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CryptographicException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptographicException(CryptographicException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptographicException(CryptographicException const& ) = delete;

/// @brief Field FORMAT_MESSAGE_ARGUMENT_ARRAY offset 0xffffffff size 0x4
static constexpr int32_t  FORMAT_MESSAGE_ARGUMENT_ARRAY{static_cast<int32_t>(0x2000)};

/// @brief Field FORMAT_MESSAGE_FROM_SYSTEM offset 0xffffffff size 0x4
static constexpr int32_t  FORMAT_MESSAGE_FROM_SYSTEM{static_cast<int32_t>(0x1000)};

/// @brief Field FORMAT_MESSAGE_IGNORE_INSERTS offset 0xffffffff size 0x4
static constexpr int32_t  FORMAT_MESSAGE_IGNORE_INSERTS{static_cast<int32_t>(0x200)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6080};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::CryptographicException) == 0x90, "Size mismatch!");

} // namespace end def System::Security::Cryptography
