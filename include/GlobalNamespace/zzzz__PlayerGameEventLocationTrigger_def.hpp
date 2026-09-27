#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGameEventLocationTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerGameEventLocationTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerGameEventLocationTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerGameEventLocationTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGameEventLocationTrigger*, "", "PlayerGameEventLocationTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerGameEventLocationTrigger
class CORDL_TYPE PlayerGameEventLocationTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field locationName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_locationName, put=__cordl_internal_set_locationName)) ::StringW  locationName;

static inline ::GlobalNamespace::PlayerGameEventLocationTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5627fe0, size 0x11c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::StringW const& __cordl_internal_get_locationName() const;

constexpr ::StringW& __cordl_internal_get_locationName() ;

constexpr void __cordl_internal_set_locationName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5628168, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGameEventLocationTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerGameEventLocationTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerGameEventLocationTrigger(PlayerGameEventLocationTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerGameEventLocationTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerGameEventLocationTrigger(PlayerGameEventLocationTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{594};

/// [SerializeField]
/// @brief Field locationName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___locationName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGameEventLocationTrigger, ___locationName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGameEventLocationTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
