#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunNatTypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StunNatTypeExtensions)
namespace Fusion::Sockets::Stun {
struct NATType;
}
// Forward declare root types
namespace Fusion::Sockets::Stun {
class StunNatTypeExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::Stun::StunNatTypeExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunNatTypeExtensions*, "Fusion.Sockets.Stun", "StunNatTypeExtensions");
// [Extension]
// Dependencies System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunNatTypeExtensions
class CORDL_TYPE StunNatTypeExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsValid, addr 0x6035fe4, size 0x1c, virtual false, abstract: false, final false
static inline bool IsValid(::Fusion::Sockets::Stun::NATType  natType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunNatTypeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunNatTypeExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunNatTypeExtensions(StunNatTypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunNatTypeExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunNatTypeExtensions(StunNatTypeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::Stun::StunNatTypeExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
