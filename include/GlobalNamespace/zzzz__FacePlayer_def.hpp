#pragma once
// IWYU pragma private; include "GlobalNamespace/FacePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FacePlayer)
// Forward declare root types
namespace GlobalNamespace {
class FacePlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FacePlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FacePlayer*, "", "FacePlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FacePlayer
class CORDL_TYPE FacePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method LateUpdate, addr 0x579aa14, size 0x1dc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FacePlayer* New_ctor() ;

/// @brief Method .ctor, addr 0x579abf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FacePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FacePlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FacePlayer(FacePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FacePlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FacePlayer(FacePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FacePlayer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
