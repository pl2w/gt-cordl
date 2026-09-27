#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Helper2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Helper2)
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Helper2;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::X509Certificates::X509Helper2*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::X509Certificates::X509Helper2*, "System.Security.Cryptography.X509Certificates", "X509Helper2");
// Dependencies System.Object
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509Helper2
class CORDL_TYPE X509Helper2 : public ::System::Object {
public:
// Declarations
/// @brief Method CreateChainImpl, addr 0xad3c3c4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(bool  useMachineContext) ;

/// [Obsolete("This is only used by Mono.Security\'s X509Store and will be replaced shortly.")]
/// @brief Method ExportAsPEM, addr 0xad42784, size 0x38, virtual false, abstract: false, final false
static inline void ExportAsPEM(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::IO::Stream*  stream, bool  includeHumanReadableForm) ;

/// @brief Method GetInvalidChainContextException, addr 0xad3d3e4, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* GetInvalidChainContextException() ;

/// [MonoTODO("Investigate replacement; see comments in source.")]
/// @brief Method GetMonoCertificate, addr 0xad3fa50, size 0xd0, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509Certificate* GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate) ;

/// [Obsolete("This is only used by Mono.Security\'s X509Store and will be replaced shortly.")]
/// @brief Method GetSubjectNameHash, addr 0xad4274c, size 0x38, virtual false, abstract: false, final false
static inline int64_t GetSubjectNameHash(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate) ;

/// @brief Method IsValid, addr 0xad42738, size 0x14, virtual false, abstract: false, final false
static inline bool IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl*  impl) ;

/// @brief Method ThrowIfContextInvalid, addr 0xad3c344, size 0x40, virtual false, abstract: false, final false
static inline void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl*  impl) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Helper2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Helper2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Helper2(X509Helper2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Helper2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Helper2(X509Helper2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Helper2) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
