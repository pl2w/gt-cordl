#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectDestroyFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectDestroyFlagsExtensions)
namespace Fusion {
struct NetworkObjectDestroyFlags;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectDestroyFlagsExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectDestroyFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectDestroyFlagsExtensions*, "Fusion", "NetworkObjectDestroyFlagsExtensions");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectDestroyFlagsExtensions
class CORDL_TYPE NetworkObjectDestroyFlagsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Get, addr 0x5faa678, size 0xc, virtual false, abstract: false, final false
static inline bool Get(::Fusion::NetworkObjectDestroyFlags  flags, ::Fusion::NetworkObjectDestroyFlags  flag) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectDestroyFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectDestroyFlagsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectDestroyFlagsExtensions(NetworkObjectDestroyFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectDestroyFlagsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectDestroyFlagsExtensions(NetworkObjectDestroyFlagsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectDestroyFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
