#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Encryption/EncryptorNet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptorNet)
namespace ExitGames::Client::Photon::Encryption {
class IPhotonEncryptor;
}
// Forward declare root types
namespace ExitGames::Client::Photon::Encryption {
class EncryptorNet;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::Encryption::EncryptorNet*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::Encryption::EncryptorNet*, "ExitGames.Client.Photon.Encryption", "EncryptorNet");
// Dependencies System.Object
namespace ExitGames::Client::Photon::Encryption {
// Is value type: false
// CS Name: ExitGames.Client.Photon.Encryption.EncryptorNet
class CORDL_TYPE EncryptorNet : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
constexpr operator  ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*() noexcept;

/// @brief Method CalculateEncryptedSize, addr 0xa6f4af8, size 0x38, virtual true, abstract: false, final true
inline int32_t CalculateEncryptedSize(int32_t  unencryptedSize) ;

/// @brief Method CalculateFragmentLength, addr 0xa6f4b30, size 0x38, virtual true, abstract: false, final true
inline int32_t CalculateFragmentLength() ;

/// @brief Method Decrypt2, addr 0xa6f4ac0, size 0x38, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> Decrypt2(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  len, ::ArrayW<uint8_t>  header, ::by_ref<int32_t>  outLen) ;

/// @brief Method Encrypt2, addr 0xa6f4a88, size 0x38, virtual true, abstract: false, final true
inline void Encrypt2(::ArrayW<uint8_t>  data, int32_t  len, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  output, int32_t  outOffset, ::by_ref<int32_t>  outSize) ;

/// @brief Method Init, addr 0xa6f4a50, size 0x38, virtual true, abstract: false, final true
inline void Init(::ArrayW<uint8_t>  encryptionSecret, ::ArrayW<uint8_t>  hmacSecret, ::ArrayW<uint8_t>  ivBytes, bool  chainingModeGCM, int32_t  mtu) ;

static inline ::ExitGames::Client::Photon::Encryption::EncryptorNet* New_ctor() ;

/// @brief Method .ctor, addr 0xa6f4b68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor* i___ExitGames__Client__Photon__Encryption__IPhotonEncryptor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncryptorNet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncryptorNet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptorNet(EncryptorNet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptorNet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptorNet(EncryptorNet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26498};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::Encryption::EncryptorNet) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon::Encryption
