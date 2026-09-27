#pragma once
// IWYU pragma private; include "Fusion/IDespawned.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDespawned)
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class NetworkRunner;
}
// Forward declare root types
namespace Fusion {
class IDespawned;
}
// Write type traits
MARK_REF_T(::Fusion::IDespawned*);
DEFINE_IL2CPP_CLASS(::Fusion::IDespawned*, "Fusion", "IDespawned");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IDespawned
class CORDL_TYPE IDespawned {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Despawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Despawned(::Fusion::NetworkRunner*  runner, bool  hasState) ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDespawned", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDespawned(IDespawned const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18862};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
