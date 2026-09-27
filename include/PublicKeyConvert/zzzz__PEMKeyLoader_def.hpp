#pragma once
// IWYU pragma private; include "PublicKeyConvert/PEMKeyLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PEMKeyLoader)
namespace System::Security::Cryptography {
class RSACryptoServiceProvider;
}
// Forward declare root types
namespace PublicKeyConvert {
class PEMKeyLoader;
}
// Write type traits
MARK_REF_T(::PublicKeyConvert::PEMKeyLoader*);
DEFINE_IL2CPP_CLASS(::PublicKeyConvert::PEMKeyLoader*, "PublicKeyConvert", "PEMKeyLoader");
// Dependencies System.Object
namespace PublicKeyConvert {
// Is value type: false
// CS Name: PublicKeyConvert.PEMKeyLoader
class CORDL_TYPE PEMKeyLoader : public ::System::Object {
public:
// Declarations
/// @brief Field SeqOID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SeqOID, put=setStaticF_SeqOID)) ::ArrayW<uint8_t>  SeqOID;

/// @brief Method CompareBytearrays, addr 0x5b4abf4, size 0x70, virtual false, abstract: false, final false
static inline bool CompareBytearrays(::ArrayW<uint8_t>  a, ::ArrayW<uint8_t>  b) ;

/// @brief Method CryptoServiceProviderFromPublicKeyInfo, addr 0x5b4b278, size 0x108, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSACryptoServiceProvider* CryptoServiceProviderFromPublicKeyInfo(::StringW  base64EncodedKey) ;

/// @brief Method CryptoServiceProviderFromPublicKeyInfo, addr 0x5b4ac64, size 0x614, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSACryptoServiceProvider* CryptoServiceProviderFromPublicKeyInfo(::ArrayW<uint8_t>  x509key) ;

static inline ::PublicKeyConvert::PEMKeyLoader* New_ctor() ;

/// @brief Method .ctor, addr 0x5b4b380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_SeqOID() ;

static inline void setStaticF_SeqOID(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PEMKeyLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PEMKeyLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PEMKeyLoader(PEMKeyLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PEMKeyLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PEMKeyLoader(PEMKeyLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3745};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PublicKeyConvert::PEMKeyLoader) == 0x10, "Size mismatch!");

} // namespace end def PublicKeyConvert
