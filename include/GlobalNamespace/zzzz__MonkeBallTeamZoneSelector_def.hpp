#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallTeamZoneSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallTeamZoneSelector)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallTeamZoneSelector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallTeamZoneSelector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallTeamZoneSelector*, "", "MonkeBallTeamZoneSelector");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallTeamZoneSelector
class CORDL_TYPE MonkeBallTeamZoneSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field teamId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_teamId, put=__cordl_internal_set_teamId)) int32_t  teamId;

static inline ::GlobalNamespace::MonkeBallTeamZoneSelector* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57b0ef0, size 0xdc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr int32_t const& __cordl_internal_get_teamId() const;

constexpr int32_t& __cordl_internal_get_teamId() ;

constexpr void __cordl_internal_set_teamId(int32_t  value) ;

/// @brief Method .ctor, addr 0x57b0fcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallTeamZoneSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallTeamZoneSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallTeamZoneSelector(MonkeBallTeamZoneSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallTeamZoneSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallTeamZoneSelector(MonkeBallTeamZoneSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1560};

/// @brief Field teamId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___teamId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallTeamZoneSelector, ___teamId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallTeamZoneSelector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
