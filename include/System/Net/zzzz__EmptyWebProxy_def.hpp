#pragma once
// IWYU pragma private; include "System/Net/EmptyWebProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyWebProxy)
namespace System::Net {
class IAutoWebProxy;
}
namespace System::Net {
class ICredentials;
}
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
class EmptyWebProxy;
}
// Write type traits
MARK_REF_T(::System::Net::EmptyWebProxy*);
DEFINE_IL2CPP_CLASS(::System::Net::EmptyWebProxy*, "System.Net", "EmptyWebProxy");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.EmptyWebProxy
class CORDL_TYPE EmptyWebProxy : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

/// @brief Field m_credentials, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_credentials, put=__cordl_internal_set_m_credentials)) ::System::Net::ICredentials*  m_credentials;

/// @brief Convert operator to "::System::Net::IAutoWebProxy"
constexpr operator  ::System::Net::IAutoWebProxy*() noexcept;

/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr operator  ::System::Net::IWebProxy*() noexcept;

/// @brief Method GetProxy, addr 0xac77d0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Uri* GetProxy(::System::Uri*  uri) ;

/// @brief Method IsBypassed, addr 0xac77d14, size 0x8, virtual true, abstract: false, final true
inline bool IsBypassed(::System::Uri*  uri) ;

static inline ::System::Net::EmptyWebProxy* New_ctor() ;

/// @brief Method System.Net.IAutoWebProxy.GetProxies, addr 0xac77d2c, size 0x58, virtual true, abstract: false, final true
inline ::System::Net::ProxyChain* System_Net_IAutoWebProxy_GetProxies(::System::Uri*  destination) ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get_m_credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get_m_credentials() ;

constexpr void __cordl_internal_set_m_credentials(::System::Net::ICredentials*  value) ;

/// @brief Method .ctor, addr 0xac77d04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Credentials, addr 0xac77d1c, size 0x8, virtual true, abstract: false, final true
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Convert to "::System::Net::IAutoWebProxy"
constexpr ::System::Net::IAutoWebProxy* i___System__Net__IAutoWebProxy() noexcept;

/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

/// @brief Method set_Credentials, addr 0xac77d24, size 0x8, virtual true, abstract: false, final true
inline void set_Credentials(::System::Net::ICredentials*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmptyWebProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmptyWebProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyWebProxy(EmptyWebProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyWebProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyWebProxy(EmptyWebProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10616};

/// @brief Field m_credentials, offset: 0x10, size: 0x8, def value: None
 ::System::Net::ICredentials*  ___m_credentials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::EmptyWebProxy, ___m_credentials) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Net::EmptyWebProxy) == 0x18, "Size mismatch!");

} // namespace end def System::Net
