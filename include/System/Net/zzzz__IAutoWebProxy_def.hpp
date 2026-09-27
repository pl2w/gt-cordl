#pragma once
// IWYU pragma private; include "System/Net/IAutoWebProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAutoWebProxy)
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class ProxyChain;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class IAutoWebProxy;
}
// Write type traits
MARK_REF_T(::System::Net::IAutoWebProxy*);
DEFINE_IL2CPP_CLASS(::System::Net::IAutoWebProxy*, "System.Net", "IAutoWebProxy");
// Dependencies 
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IAutoWebProxy
class CORDL_TYPE IAutoWebProxy {
public:
// Declarations
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr operator  ::System::Net::IWebProxy*() noexcept;

/// @brief Method GetProxies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Net::ProxyChain* GetProxies(::System::Uri*  destination) ;

/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAutoWebProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAutoWebProxy(IAutoWebProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10595};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
