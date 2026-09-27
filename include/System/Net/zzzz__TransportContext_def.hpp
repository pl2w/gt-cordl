#pragma once
// IWYU pragma private; include "System/Net/TransportContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransportContext)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Security::Authentication::ExtendedProtection {
struct ChannelBindingKind;
}
namespace System::Security::Authentication::ExtendedProtection {
class ChannelBinding;
}
namespace System::Security::Authentication::ExtendedProtection {
class TokenBinding;
}
// Forward declare root types
namespace System::Net {
class TransportContext;
}
// Write type traits
MARK_REF_T(::System::Net::TransportContext*);
DEFINE_IL2CPP_CLASS(::System::Net::TransportContext*, "System.Net", "TransportContext");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TransportContext
class CORDL_TYPE TransportContext : public ::System::Object {
public:
// Declarations
/// @brief Method GetChannelBinding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Security::Authentication::ExtendedProtection::ChannelBinding* GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  kind) ;

/// @brief Method GetTlsTokenBindings, addr 0xac5cec8, size 0x38, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Authentication::ExtendedProtection::TokenBinding*>* GetTlsTokenBindings() ;

static inline ::System::Net::TransportContext* New_ctor() ;

/// @brief Method .ctor, addr 0xac5cf00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransportContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransportContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransportContext(TransportContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransportContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransportContext(TransportContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10547};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::TransportContext) == 0x10, "Size mismatch!");

} // namespace end def System::Net
