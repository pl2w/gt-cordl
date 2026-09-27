#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectHeaderFlagsExtensions)
namespace Fusion {
struct NetworkObjectHeaderFlags;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectHeaderFlagsExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectHeaderFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeaderFlagsExtensions*, "Fusion", "NetworkObjectHeaderFlagsExtensions");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectHeaderFlagsExtensions
class CORDL_TYPE NetworkObjectHeaderFlagsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CheckFlag, addr 0x5fab29c, size 0xc, virtual false, abstract: false, final false
static inline bool CheckFlag(::Fusion::NetworkObjectHeaderFlags  flag, ::Fusion::NetworkObjectHeaderFlags  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeaderFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectHeaderFlagsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectHeaderFlagsExtensions(NetworkObjectHeaderFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectHeaderFlagsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectHeaderFlagsExtensions(NetworkObjectHeaderFlagsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectHeaderFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
