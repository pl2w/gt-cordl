#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectRuntimeFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectRuntimeFlagsExtensions)
namespace Fusion {
struct NetworkObjectRuntimeFlags;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectRuntimeFlagsExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectRuntimeFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectRuntimeFlagsExtensions*, "Fusion", "NetworkObjectRuntimeFlagsExtensions");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectRuntimeFlagsExtensions
class CORDL_TYPE NetworkObjectRuntimeFlagsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CheckFlag, addr 0x5fc9614, size 0xc, virtual false, abstract: false, final false
static inline bool CheckFlag(::Fusion::NetworkObjectRuntimeFlags  flags, ::Fusion::NetworkObjectRuntimeFlags  flag) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectRuntimeFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectRuntimeFlagsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectRuntimeFlagsExtensions(NetworkObjectRuntimeFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectRuntimeFlagsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectRuntimeFlagsExtensions(NetworkObjectRuntimeFlagsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectRuntimeFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
