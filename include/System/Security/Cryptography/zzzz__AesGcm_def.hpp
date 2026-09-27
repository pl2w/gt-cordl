#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesGcm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesGcm)
namespace System::Security::Cryptography {
class KeySizes;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesGcm;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::AesGcm*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::AesGcm*, "System.Security.Cryptography", "AesGcm");
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AesGcm
class CORDL_TYPE AesGcm : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Decrypt, addr 0xa188c14, size 0x38, virtual false, abstract: false, final false
inline void Decrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  associatedData) ;

/// @brief Method Decrypt, addr 0xa188c4c, size 0x38, virtual false, abstract: false, final false
inline void Decrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  ciphertext, ::System::ReadOnlySpan_1<uint8_t>  tag, ::System::Span_1<uint8_t>  plaintext, ::System::ReadOnlySpan_1<uint8_t>  associatedData) ;

/// @brief Method Dispose, addr 0xa188c84, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Encrypt, addr 0xa188c88, size 0x38, virtual false, abstract: false, final false
inline void Encrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  associatedData) ;

/// @brief Method Encrypt, addr 0xa188cc0, size 0x38, virtual false, abstract: false, final false
inline void Encrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  plaintext, ::System::Span_1<uint8_t>  ciphertext, ::System::Span_1<uint8_t>  tag, ::System::ReadOnlySpan_1<uint8_t>  associatedData) ;

static inline ::System::Security::Cryptography::AesGcm* New_ctor(::ArrayW<uint8_t>  key) ;

static inline ::System::Security::Cryptography::AesGcm* New_ctor(::System::ReadOnlySpan_1<uint8_t>  key) ;

/// @brief Method .ctor, addr 0xa188b24, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  key) ;

/// @brief Method .ctor, addr 0xa188b64, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<uint8_t>  key) ;

/// @brief Method get_NonceByteSizes, addr 0xa188ba4, size 0x38, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::KeySizes* get_NonceByteSizes() ;

/// @brief Method get_TagByteSizes, addr 0xa188bdc, size 0x38, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::KeySizes* get_TagByteSizes() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AesGcm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AesGcm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AesGcm(AesGcm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AesGcm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AesGcm(AesGcm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6157};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::AesGcm) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
