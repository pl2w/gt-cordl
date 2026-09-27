#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicEncryptCryptoTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassicCryptoBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkzipClassicEncryptCryptoTransform)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Encryption {
class PkzipClassicEncryptCryptoTransform;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*, "ICSharpCode.SharpZipLib.Encryption", "PkzipClassicEncryptCryptoTransform");
// Dependencies ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase
namespace ICSharpCode::SharpZipLib::Encryption {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
class CORDL_TYPE PkzipClassicEncryptCryptoTransform : public ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase {
public:
// Declarations
 __declspec(property(get=get_CanReuseTransform)) bool  CanReuseTransform;

 __declspec(property(get=get_CanTransformMultipleBlocks)) bool  CanTransformMultipleBlocks;

 __declspec(property(get=get_InputBlockSize)) int32_t  InputBlockSize;

 __declspec(property(get=get_OutputBlockSize)) int32_t  OutputBlockSize;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr operator  ::System::Security::Cryptography::ICryptoTransform*() noexcept;

/// @brief Method Dispose, addr 0x9ff843c, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform* New_ctor(::ArrayW<uint8_t>  keyBlock) ;

/// @brief Method TransformBlock, addr 0x9ff8358, size 0xc4, virtual true, abstract: false, final true
inline int32_t TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset) ;

/// @brief Method TransformFinalBlock, addr 0x9ff82cc, size 0x8c, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount) ;

/// @brief Method .ctor, addr 0x9ff82a0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  keyBlock) ;

/// @brief Method get_CanReuseTransform, addr 0x9ff841c, size 0x8, virtual true, abstract: false, final true
inline bool get_CanReuseTransform() ;

/// @brief Method get_CanTransformMultipleBlocks, addr 0x9ff8434, size 0x8, virtual true, abstract: false, final true
inline bool get_CanTransformMultipleBlocks() ;

/// @brief Method get_InputBlockSize, addr 0x9ff8424, size 0x8, virtual true, abstract: false, final true
inline int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize, addr 0x9ff842c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_OutputBlockSize() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PkzipClassicEncryptCryptoTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassicEncryptCryptoTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PkzipClassicEncryptCryptoTransform(PkzipClassicEncryptCryptoTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassicEncryptCryptoTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkzipClassicEncryptCryptoTransform(PkzipClassicEncryptCryptoTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Encryption
