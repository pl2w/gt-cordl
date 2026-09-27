#pragma once
// IWYU pragma private; include "Fusion/IPlayerJoined.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayerJoined)
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct PlayerRef;
}
// Forward declare root types
namespace Fusion {
class IPlayerJoined;
}
// Write type traits
MARK_REF_T(::Fusion::IPlayerJoined*);
DEFINE_IL2CPP_CLASS(::Fusion::IPlayerJoined*, "Fusion", "IPlayerJoined");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IPlayerJoined
class CORDL_TYPE IPlayerJoined {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method PlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PlayerJoined(::Fusion::PlayerRef  player) ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPlayerJoined", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayerJoined(IPlayerJoined const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
