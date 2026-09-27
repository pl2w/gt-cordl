#pragma once
// IWYU pragma private; include "System/Net/CachedTransportContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__TransportContext_def.hpp"
CORDL_MODULE_EXPORT(CachedTransportContext)
namespace System::Security::Authentication::ExtendedProtection {
struct ChannelBindingKind;
}
namespace System::Security::Authentication::ExtendedProtection {
class ChannelBinding;
}
// Forward declare root types
namespace System::Net {
class CachedTransportContext;
}
// Write type traits
MARK_REF_T(::System::Net::CachedTransportContext*);
DEFINE_IL2CPP_CLASS(::System::Net::CachedTransportContext*, "System.Net", "CachedTransportContext");
// Dependencies System.Net.TransportContext
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CachedTransportContext
class CORDL_TYPE CachedTransportContext : public ::System::Net::TransportContext {
public:
// Declarations
/// @brief Field binding, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_binding, put=__cordl_internal_set_binding)) ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding;

/// @brief Method GetChannelBinding, addr 0xac5cf38, size 0x18, virtual true, abstract: false, final false
inline ::System::Security::Authentication::ExtendedProtection::ChannelBinding* GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  kind) ;

static inline ::System::Net::CachedTransportContext* New_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding) ;

constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding* const& __cordl_internal_get_binding() const;

constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding*& __cordl_internal_get_binding() ;

constexpr void __cordl_internal_set_binding(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  value) ;

/// @brief Method .ctor, addr 0xac5cf08, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CachedTransportContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CachedTransportContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedTransportContext(CachedTransportContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedTransportContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedTransportContext(CachedTransportContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10548};

/// @brief Field binding, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  ___binding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CachedTransportContext, ___binding) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Net::CachedTransportContext) == 0x18, "Size mismatch!");

} // namespace end def System::Net
