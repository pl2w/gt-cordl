#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/EventSystemSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventSystemSpawner)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class EventSystemSpawner;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::EventSystemSpawner*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::EventSystemSpawner*, "Photon.Pun.UtilityScripts", "EventSystemSpawner");
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.EventSystemSpawner
class CORDL_TYPE EventSystemSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Photon::Pun::UtilityScripts::EventSystemSpawner* New_ctor() ;

/// @brief Method OnEnable, addr 0xa73d9ec, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0xa73da5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventSystemSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventSystemSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSystemSpawner(EventSystemSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSystemSpawner(EventSystemSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31241};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::EventSystemSpawner) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
