#pragma once
// IWYU pragma private; include "GlobalNamespace/RigDeduplicationZoneEntrance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RigDeduplicationZoneEntrance)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class RigDeduplicationZoneEntrance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigDeduplicationZoneEntrance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigDeduplicationZoneEntrance*, "", "RigDeduplicationZoneEntrance");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigDeduplicationZoneEntrance
class CORDL_TYPE RigDeduplicationZoneEntrance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnEnter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::UnityEngine::Events::UnityEvent*  OnEnter;

/// @brief Field OnLeavingZone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLeavingZone, put=__cordl_internal_set_OnLeavingZone)) ::UnityEngine::Events::UnityEvent*  OnLeavingZone;

/// @brief Field portalShenanigansBit, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_portalShenanigansBit, put=__cordl_internal_set_portalShenanigansBit)) bool  portalShenanigansBit;

static inline ::GlobalNamespace::RigDeduplicationZoneEntrance* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x574093c, size 0x12c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5740a68, size 0x194, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnEnter() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnEnter() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLeavingZone() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLeavingZone() ;

constexpr bool const& __cordl_internal_get_portalShenanigansBit() const;

constexpr bool& __cordl_internal_get_portalShenanigansBit() ;

constexpr void __cordl_internal_set_OnEnter(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnLeavingZone(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_portalShenanigansBit(bool  value) ;

/// @brief Method .ctor, addr 0x5740bfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigDeduplicationZoneEntrance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigDeduplicationZoneEntrance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigDeduplicationZoneEntrance(RigDeduplicationZoneEntrance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigDeduplicationZoneEntrance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigDeduplicationZoneEntrance(RigDeduplicationZoneEntrance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1246};

/// [Tooltip("Value to stamp on the local player\'s PortalShenanigans bit when they enter. Players carrying different values can\'t see each other inside the crossing.")]
/// [SerializeField]
/// @brief Field portalShenanigansBit, offset: 0x20, size: 0x1, def value: None
 bool  ___portalShenanigansBit;

/// [Tooltip("Fired whenever the local player enters this entrance.")]
/// [SerializeField]
/// @brief Field OnEnter, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnEnter;

/// [Tooltip("Fired when the local player leaves this entrance without having entered the crossing, i.e. when their PortalShenanigans bit is actually reset.")]
/// [SerializeField]
/// @brief Field OnLeavingZone, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLeavingZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigDeduplicationZoneEntrance, ___portalShenanigansBit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigDeduplicationZoneEntrance, ___OnEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigDeduplicationZoneEntrance, ___OnLeavingZone) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigDeduplicationZoneEntrance) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
