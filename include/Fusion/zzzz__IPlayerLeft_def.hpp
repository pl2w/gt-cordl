#pragma once
// IWYU pragma private; include "Fusion/IPlayerLeft.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayerLeft)
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct PlayerRef;
}
// Forward declare root types
namespace Fusion {
class IPlayerLeft;
}
// Write type traits
MARK_REF_T(::Fusion::IPlayerLeft*);
DEFINE_IL2CPP_CLASS(::Fusion::IPlayerLeft*, "Fusion", "IPlayerLeft");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IPlayerLeft
class CORDL_TYPE IPlayerLeft {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method PlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PlayerLeft(::Fusion::PlayerRef  player) ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPlayerLeft", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayerLeft(IPlayerLeft const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18884};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
