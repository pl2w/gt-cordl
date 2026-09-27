#pragma once
// IWYU pragma private; include "Fusion/Encryption/IDataEncryption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDataEncryption)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Fusion::Encryption {
class IDataEncryption;
}
// Write type traits
MARK_REF_T(::Fusion::Encryption::IDataEncryption*);
DEFINE_IL2CPP_CLASS(::Fusion::Encryption::IDataEncryption*, "Fusion.Encryption", "IDataEncryption");
// Dependencies 
namespace Fusion::Encryption {
// Is value type: false
// CS Name: Fusion.Encryption.IDataEncryption
class CORDL_TYPE IDataEncryption {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ComputeHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ComputeHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

/// @brief Method DecryptData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DecryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

/// @brief Method EncryptData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EncryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

/// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Setup(::ArrayW<uint8_t>  key) ;

/// @brief Method VerifyHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool VerifyHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDataEncryption", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDataEncryption(IDataEncryption const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Encryption
