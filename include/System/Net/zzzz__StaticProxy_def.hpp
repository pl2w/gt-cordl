#pragma once
// IWYU pragma private; include "System/Net/StaticProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ProxyChain_def.hpp"
CORDL_MODULE_EXPORT(StaticProxy)
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class StaticProxy;
}
// Write type traits
MARK_REF_T(::System::Net::StaticProxy*);
DEFINE_IL2CPP_CLASS(::System::Net::StaticProxy*, "System.Net", "StaticProxy");
// Dependencies System.Net.ProxyChain
namespace System::Net {
// Is value type: false
// CS Name: System.Net.StaticProxy
class CORDL_TYPE StaticProxy : public ::System::Net::ProxyChain {
public:
// Declarations
/// @brief Field m_Proxy, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Proxy, put=__cordl_internal_set_m_Proxy)) ::System::Uri*  m_Proxy;

/// @brief Method GetNextProxy, addr 0xac73b74, size 0xa0, virtual true, abstract: false, final false
inline bool GetNextProxy(::by_ref<::System::Uri*>  proxy) ;

static inline ::System::Net::StaticProxy* New_ctor(::System::Uri*  destination, ::System::Uri*  proxy) ;

constexpr ::System::Uri* const& __cordl_internal_get_m_Proxy() const;

constexpr ::System::Uri*& __cordl_internal_get_m_Proxy() ;

constexpr void __cordl_internal_set_m_Proxy(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0xac73aa0, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  destination, ::System::Uri*  proxy) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticProxy(StaticProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticProxy(StaticProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10600};

/// @brief Field m_Proxy, offset: 0x38, size: 0x8, def value: None
 ::System::Uri*  ___m_Proxy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::StaticProxy, ___m_Proxy) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::StaticProxy) == 0x40, "Size mismatch!");

} // namespace end def System::Net
