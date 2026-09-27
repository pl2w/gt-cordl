#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorNetworking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
CORDL_MODULE_EXPORT(GhostReactorNetworking)
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorNetworking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorNetworking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorNetworking*, "", "GhostReactorNetworking");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorNetworking
class CORDL_TYPE GhostReactorNetworking : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
static inline ::GlobalNamespace::GhostReactorNetworking* New_ctor() ;

/// @brief Method .ctor, addr 0x5860630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorNetworking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorNetworking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorNetworking(GhostReactorNetworking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorNetworking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorNetworking(GhostReactorNetworking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GhostReactorNetworking) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
