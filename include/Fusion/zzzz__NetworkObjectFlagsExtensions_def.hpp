#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectFlagsExtensions)
namespace Fusion {
struct NetworkObjectFlags;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectFlagsExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectFlagsExtensions*, "Fusion", "NetworkObjectFlagsExtensions");
// [Extension]
// Dependencies Fusion.NetworkObjectFlags, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectFlagsExtensions
class CORDL_TYPE NetworkObjectFlagsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetVersion, addr 0x5faa684, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetVersion(::Fusion::NetworkObjectFlags  flags) ;

/// [Extension]
/// @brief Method IsIgnored, addr 0x5faa6a8, size 0x8, virtual false, abstract: false, final false
static inline bool IsIgnored(::Fusion::NetworkObjectFlags  flags) ;

/// [Extension]
/// @brief Method IsVersionCurrent, addr 0x5faa68c, size 0x10, virtual false, abstract: false, final false
static inline bool IsVersionCurrent(::Fusion::NetworkObjectFlags  flags) ;

/// [Extension]
/// @brief Method SetCurrentVersion, addr 0x5faa69c, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectFlags SetCurrentVersion(::Fusion::NetworkObjectFlags  flags) ;

/// [Extension]
/// @brief Method SetIgnored, addr 0x5faa6b0, size 0x18, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectFlags SetIgnored(::Fusion::NetworkObjectFlags  flags, bool  value) ;

/// @brief Method SetWithMask, addr 0x5faa6c8, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectFlags SetWithMask(::Fusion::NetworkObjectFlags  flags, ::Fusion::NetworkObjectFlags  value, ::Fusion::NetworkObjectFlags  mask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectFlagsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectFlagsExtensions(NetworkObjectFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectFlagsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectFlagsExtensions(NetworkObjectFlagsExtensions const& ) = delete;

/// @brief Field CurrentVersion value: I32(1)
static ::Fusion::NetworkObjectFlags const CurrentVersion;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
