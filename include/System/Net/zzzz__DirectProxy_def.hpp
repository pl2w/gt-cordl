#pragma once
// IWYU pragma private; include "System/Net/DirectProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ProxyChain_def.hpp"
CORDL_MODULE_EXPORT(DirectProxy)
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class DirectProxy;
}
// Write type traits
MARK_REF_T(::System::Net::DirectProxy*);
DEFINE_IL2CPP_CLASS(::System::Net::DirectProxy*, "System.Net", "DirectProxy");
// Dependencies System.Net.ProxyChain
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DirectProxy
class CORDL_TYPE DirectProxy : public ::System::Net::ProxyChain {
public:
// Declarations
/// @brief Field m_ProxyRetrieved, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ProxyRetrieved, put=__cordl_internal_set_m_ProxyRetrieved)) bool  m_ProxyRetrieved;

/// @brief Method GetNextProxy, addr 0xac73a68, size 0x38, virtual true, abstract: false, final false
inline bool GetNextProxy(::by_ref<::System::Uri*>  proxy) ;

static inline ::System::Net::DirectProxy* New_ctor(::System::Uri*  destination) ;

constexpr bool const& __cordl_internal_get_m_ProxyRetrieved() const;

constexpr bool& __cordl_internal_get_m_ProxyRetrieved() ;

constexpr void __cordl_internal_set_m_ProxyRetrieved(bool  value) ;

/// @brief Method .ctor, addr 0xac73a64, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  destination) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectProxy(DirectProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectProxy(DirectProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10599};

/// @brief Field m_ProxyRetrieved, offset: 0x38, size: 0x1, def value: None
 bool  ___m_ProxyRetrieved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DirectProxy, ___m_ProxyRetrieved) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::DirectProxy) == 0x40, "Size mismatch!");

} // namespace end def System::Net
