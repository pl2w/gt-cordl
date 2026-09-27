#pragma once
// IWYU pragma private; include "System/Net/ProxyScriptChain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ProxyChain_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProxyScriptChain)
namespace System::Net {
class WebProxy;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ProxyScriptChain;
}
// Write type traits
MARK_REF_T(::System::Net::ProxyScriptChain*);
DEFINE_IL2CPP_CLASS(::System::Net::ProxyScriptChain*, "System.Net", "ProxyScriptChain");
// Dependencies System.Net.ProxyChain, System.Uri
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ProxyScriptChain
class CORDL_TYPE ProxyScriptChain : public ::System::Net::ProxyChain {
public:
// Declarations
/// @brief Field m_CurrentIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentIndex, put=__cordl_internal_set_m_CurrentIndex)) int32_t  m_CurrentIndex;

/// @brief Field m_Proxy, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Proxy, put=__cordl_internal_set_m_Proxy)) ::System::Net::WebProxy*  m_Proxy;

/// @brief Field m_ScriptProxies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScriptProxies, put=__cordl_internal_set_m_ScriptProxies)) ::ArrayW<::System::Uri*>  m_ScriptProxies;

/// @brief Field m_SyncStatus, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SyncStatus, put=__cordl_internal_set_m_SyncStatus)) int32_t  m_SyncStatus;

/// @brief Method Abort, addr 0xac73a44, size 0x20, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method GetNextProxy, addr 0xac73968, size 0xdc, virtual true, abstract: false, final false
inline bool GetNextProxy(::by_ref<::System::Uri*>  proxy) ;

static inline ::System::Net::ProxyScriptChain* New_ctor(::System::Net::WebProxy*  proxy, ::System::Uri*  destination) ;

constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

constexpr int32_t& __cordl_internal_get_m_CurrentIndex() ;

constexpr ::System::Net::WebProxy* const& __cordl_internal_get_m_Proxy() const;

constexpr ::System::Net::WebProxy*& __cordl_internal_get_m_Proxy() ;

constexpr ::ArrayW<::System::Uri*> const& __cordl_internal_get_m_ScriptProxies() const;

constexpr ::ArrayW<::System::Uri*>& __cordl_internal_get_m_ScriptProxies() ;

constexpr int32_t const& __cordl_internal_get_m_SyncStatus() const;

constexpr int32_t& __cordl_internal_get_m_SyncStatus() ;

constexpr void __cordl_internal_set_m_CurrentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Proxy(::System::Net::WebProxy*  value) ;

constexpr void __cordl_internal_set_m_ScriptProxies(::ArrayW<::System::Uri*>  value) ;

constexpr void __cordl_internal_set_m_SyncStatus(int32_t  value) ;

/// @brief Method .ctor, addr 0xac73938, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebProxy*  proxy, ::System::Uri*  destination) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProxyScriptChain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProxyScriptChain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProxyScriptChain(ProxyScriptChain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProxyScriptChain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProxyScriptChain(ProxyScriptChain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10598};

/// @brief Field m_Proxy, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebProxy*  ___m_Proxy;

/// @brief Field m_ScriptProxies, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::System::Uri*>  ___m_ScriptProxies;

/// @brief Field m_CurrentIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_CurrentIndex;

/// @brief Field m_SyncStatus, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___m_SyncStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ProxyScriptChain, ___m_Proxy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyScriptChain, ___m_ScriptProxies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyScriptChain, ___m_CurrentIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyScriptChain, ___m_SyncStatus) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::System::Net::ProxyScriptChain) == 0x50, "Size mismatch!");

} // namespace end def System::Net
