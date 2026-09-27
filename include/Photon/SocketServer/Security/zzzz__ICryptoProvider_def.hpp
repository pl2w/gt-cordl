#pragma once
// IWYU pragma private; include "Photon/SocketServer/Security/ICryptoProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICryptoProvider)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::SocketServer::Security {
class ICryptoProvider;
}
// Write type traits
MARK_REF_T(::Photon::SocketServer::Security::ICryptoProvider*);
DEFINE_IL2CPP_CLASS(::Photon::SocketServer::Security::ICryptoProvider*, "Photon.SocketServer.Security", "ICryptoProvider");
// Dependencies 
namespace Photon::SocketServer::Security {
// Is value type: false
// CS Name: Photon.SocketServer.Security.ICryptoProvider
class CORDL_TYPE ICryptoProvider {
public:
// Declarations
 __declspec(property(get=get_PublicKey)) ::ArrayW<uint8_t>  PublicKey;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Decrypt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method DeriveSharedKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeriveSharedKey(::ArrayW<uint8_t>  otherPartyPublicKey) ;

/// @brief Method Encrypt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method get_PublicKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> get_PublicKey() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ICryptoProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICryptoProvider(ICryptoProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::SocketServer::Security
