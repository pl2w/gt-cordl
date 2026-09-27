#pragma once
// IWYU pragma private; include "Modio/Customizations/ISteamCredentialProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ISteamCredentialProvider)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Modio::Customizations {
class ISteamCredentialProvider;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::ISteamCredentialProvider*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::ISteamCredentialProvider*, "Modio.Customizations", "ISteamCredentialProvider");
// Dependencies 
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.ISteamCredentialProvider
class CORDL_TYPE ISteamCredentialProvider {
public:
// Declarations
/// @brief Method RequestEncryptedAppTicket, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RequestEncryptedAppTicket(::System::Action_2<bool,::StringW>*  callback) ;

// Ctor Parameters [CppParam { name: "", ty: "ISteamCredentialProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamCredentialProvider(ISteamCredentialProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Customizations
