#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DeriveBytes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeriveBytes)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DeriveBytes;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::DeriveBytes*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::DeriveBytes*, "System.Security.Cryptography", "DeriveBytes");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DeriveBytes
class CORDL_TYPE DeriveBytes : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa1640d0, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa16413c, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> GetBytes(int32_t  cb) ;

static inline ::System::Security::Cryptography::DeriveBytes* New_ctor() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0xa164140, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeriveBytes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeriveBytes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeriveBytes(DeriveBytes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeriveBytes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeriveBytes(DeriveBytes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::DeriveBytes) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
