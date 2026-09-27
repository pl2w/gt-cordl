#pragma once
// IWYU pragma private; include "System/Net/BasicClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicClient)
namespace System::Net {
class Authorization;
}
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace System::Net {
class BasicClient;
}
// Write type traits
MARK_REF_T(::System::Net::BasicClient*);
DEFINE_IL2CPP_CLASS(::System::Net::BasicClient*, "System.Net", "BasicClient");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.BasicClient
class CORDL_TYPE BasicClient : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AuthenticationType)) ::StringW  AuthenticationType;

 __declspec(property(get=get_CanPreAuthenticate)) bool  CanPreAuthenticate;

/// @brief Convert operator to "::System::Net::IAuthenticationModule"
constexpr operator  ::System::Net::IAuthenticationModule*() noexcept;

/// @brief Method Authenticate, addr 0xac8b404, size 0xac, virtual true, abstract: false, final true
inline ::System::Net::Authorization* Authenticate(::StringW  challenge, ::System::Net::WebRequest*  webRequest, ::System::Net::ICredentials*  credentials) ;

/// @brief Method GetBytes, addr 0xac8b7c0, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetBytes(::StringW  str) ;

/// @brief Method InternalAuthenticate, addr 0xac8b4b0, size 0x310, virtual false, abstract: false, final false
static inline ::System::Net::Authorization* InternalAuthenticate(::System::Net::WebRequest*  webRequest, ::System::Net::ICredentials*  credentials) ;

static inline ::System::Net::BasicClient* New_ctor() ;

/// @brief Method PreAuthenticate, addr 0xac8b86c, size 0xc, virtual true, abstract: false, final true
inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest*  webRequest, ::System::Net::ICredentials*  credentials) ;

/// @brief Method .ctor, addr 0xac89db8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AuthenticationType, addr 0xac8b878, size 0x40, virtual true, abstract: false, final true
inline ::StringW get_AuthenticationType() ;

/// @brief Method get_CanPreAuthenticate, addr 0xac8b8b8, size 0x8, virtual true, abstract: false, final true
inline bool get_CanPreAuthenticate() ;

/// @brief Convert to "::System::Net::IAuthenticationModule"
constexpr ::System::Net::IAuthenticationModule* i___System__Net__IAuthenticationModule() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicClient(BasicClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicClient(BasicClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::BasicClient) == 0x10, "Size mismatch!");

} // namespace end def System::Net
