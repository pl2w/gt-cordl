#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesCcm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesCcm)
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
class AesCcm;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::AesCcm*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::AesCcm*, "System.Security.Cryptography", "AesCcm");
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AesCcm
class CORDL_TYPE AesCcm : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Decrypt, addr 0xa188a40, size 0x38, virtual false, abstract: false, final false
inline void Decrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  associatedData) ;

/// @brief Method Decrypt, addr 0xa188a78, size 0x38, virtual false, abstract: false, final false
inline void Decrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  ciphertext, ::System::ReadOnlySpan_1<uint8_t>  tag, ::System::Span_1<uint8_t>  plaintext, ::System::ReadOnlySpan_1<uint8_t>  associatedData) ;

/// @brief Method Dispose, addr 0xa188ab0, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Encrypt, addr 0xa188ab4, size 0x38, virtual false, abstract: false, final false
inline void Encrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  associatedData) ;

/// @brief Method Encrypt, addr 0xa188aec, size 0x38, virtual false, abstract: false, final false
inline void Encrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  plaintext, ::System::Span_1<uint8_t>  ciphertext, ::System::Span_1<uint8_t>  tag, ::System::ReadOnlySpan_1<uint8_t>  associatedData) ;

static inline ::System::Security::Cryptography::AesCcm* New_ctor(::ArrayW<uint8_t>  key) ;

static inline ::System::Security::Cryptography::AesCcm* New_ctor(::System::ReadOnlySpan_1<uint8_t>  key) ;

/// @brief Method .ctor, addr 0xa188950, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  key) ;

/// @brief Method .ctor, addr 0xa188990, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<uint8_t>  key) ;

/// @brief Method get_NonceByteSizes, addr 0xa1889d0, size 0x38, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::KeySizes* get_NonceByteSizes() ;

/// @brief Method get_TagByteSizes, addr 0xa188a08, size 0x38, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::KeySizes* get_TagByteSizes() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AesCcm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AesCcm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AesCcm(AesCcm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AesCcm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AesCcm(AesCcm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::AesCcm) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
