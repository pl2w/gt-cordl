#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameHitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameHitter)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameHitter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameHitter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameHitter*, "", "IGameHitter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameHitter
class CORDL_TYPE IGameHitter {
public:
// Declarations
/// @brief Method OnSuccessfulHit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSuccessfulHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnSuccessfulHitPlayer, addr 0x5833d88, size 0x4, virtual true, abstract: false, final false
inline void OnSuccessfulHitPlayer(::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameHitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameHitter(IGameHitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
