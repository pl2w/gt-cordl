#pragma once
// IWYU pragma private; include "System/Security/Cryptography/IncrementalHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementalHash)
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class IncrementalHash;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::IncrementalHash*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::IncrementalHash*, "System.Security.Cryptography", "IncrementalHash");
// Dependencies System.Object, System.Security.Cryptography.HashAlgorithmName
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.IncrementalHash
class CORDL_TYPE IncrementalHash : public ::System::Object {
public:
// Declarations
/// @brief Field _algorithmName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__algorithmName, put=__cordl_internal_set__algorithmName)) ::System::Security::Cryptography::HashAlgorithmName  _algorithmName;

/// @brief Field _disposed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _hash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__hash, put=__cordl_internal_set__hash)) ::System::Security::Cryptography::HashAlgorithm*  _hash;

/// @brief Field _resetPending, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetPending, put=__cordl_internal_set__resetPending)) bool  _resetPending;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AppendData, addr 0xa84f1a0, size 0x218, virtual false, abstract: false, final false
inline void AppendData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method CreateHMAC, addr 0xa84f574, size 0x118, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::IncrementalHash* CreateHMAC(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::ArrayW<uint8_t>  key) ;

/// @brief Method Dispose, addr 0xa84f538, size 0x3c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetHMAC, addr 0xa84f68c, size 0x1e8, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::HashAlgorithm* GetHMAC(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::ArrayW<uint8_t>  key) ;

/// @brief Method GetHashAndReset, addr 0xa84f3b8, size 0x180, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetHashAndReset() ;

static inline ::System::Security::Cryptography::IncrementalHash* New_ctor(::System::Security::Cryptography::HashAlgorithmName  name, ::System::Security::Cryptography::HashAlgorithm*  hash) ;

constexpr ::System::Security::Cryptography::HashAlgorithmName const& __cordl_internal_get__algorithmName() const;

constexpr ::System::Security::Cryptography::HashAlgorithmName& __cordl_internal_get__algorithmName() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::Security::Cryptography::HashAlgorithm* const& __cordl_internal_get__hash() const;

constexpr ::System::Security::Cryptography::HashAlgorithm*& __cordl_internal_get__hash() ;

constexpr bool const& __cordl_internal_get__resetPending() const;

constexpr bool& __cordl_internal_get__resetPending() ;

constexpr void __cordl_internal_set__algorithmName(::System::Security::Cryptography::HashAlgorithmName  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__hash(::System::Security::Cryptography::HashAlgorithm*  value) ;

constexpr void __cordl_internal_set__resetPending(bool  value) ;

/// @brief Method .ctor, addr 0xa84f15c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::HashAlgorithmName  name, ::System::Security::Cryptography::HashAlgorithm*  hash) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IncrementalHash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IncrementalHash", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IncrementalHash(IncrementalHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalHash", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncrementalHash(IncrementalHash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23528};

/// @brief Field _algorithmName, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::HashAlgorithmName  ____algorithmName;

/// @brief Field _hash, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::HashAlgorithm*  ____hash;

/// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _resetPending, offset: 0x21, size: 0x1, def value: None
 bool  ____resetPending;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::IncrementalHash, ____algorithmName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::IncrementalHash, ____hash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::IncrementalHash, ____disposed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::IncrementalHash, ____resetPending) == 0x21, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::IncrementalHash) == 0x28, "Size mismatch!");

} // namespace end def System::Security::Cryptography
