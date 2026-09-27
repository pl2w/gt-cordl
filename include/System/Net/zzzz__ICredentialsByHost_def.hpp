#pragma once
// IWYU pragma private; include "System/Net/ICredentialsByHost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICredentialsByHost)
namespace System::Net {
class NetworkCredential;
}
// Forward declare root types
namespace System::Net {
class ICredentialsByHost;
}
// Write type traits
MARK_REF_T(::System::Net::ICredentialsByHost*);
DEFINE_IL2CPP_CLASS(::System::Net::ICredentialsByHost*, "System.Net", "ICredentialsByHost");
// Dependencies 
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ICredentialsByHost
class CORDL_TYPE ICredentialsByHost {
public:
// Declarations
/// @brief Method GetCredential, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Net::NetworkCredential* GetCredential(::StringW  host, int32_t  port, ::StringW  authenticationType) ;

// Ctor Parameters [CppParam { name: "", ty: "ICredentialsByHost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICredentialsByHost(ICredentialsByHost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10504};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
