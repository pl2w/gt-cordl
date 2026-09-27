#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneDef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSubZone_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneA_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneB_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZoneDef)
namespace GlobalNamespace {
struct GroupJoinZoneAB;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneDef;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneDef*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneDef*, "", "ZoneDef");
// Dependencies GTSubZone, GTZone, GroupJoinZoneA, GroupJoinZoneB, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneDef
class CORDL_TYPE ZoneDef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field groupZone, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupZone, put=__cordl_internal_set_groupZone)) ::GlobalNamespace::GroupJoinZoneA  groupZone;

 __declspec(property(get=get_groupZoneAB)) ::GlobalNamespace::GroupJoinZoneAB  groupZoneAB;

/// @brief Field groupZoneB, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupZoneB, put=__cordl_internal_set_groupZoneB)) ::GlobalNamespace::GroupJoinZoneB  groupZoneB;

/// @brief Field subZoneId, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_subZoneId, put=__cordl_internal_set_subZoneId)) ::GlobalNamespace::GTSubZone  subZoneId;

/// @brief Field trackEnter, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_trackEnter, put=__cordl_internal_set_trackEnter)) bool  trackEnter;

/// @brief Field trackExit, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_trackExit, put=__cordl_internal_set_trackExit)) bool  trackExit;

/// @brief Field trackStay, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_trackStay, put=__cordl_internal_set_trackStay)) bool  trackStay;

/// @brief Field trackStayIntervalSec, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackStayIntervalSec, put=__cordl_internal_set_trackStayIntervalSec)) int32_t  trackStayIntervalSec;

/// @brief Field zoneId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneId, put=__cordl_internal_set_zoneId)) ::GlobalNamespace::GTZone  zoneId;

/// @brief Method IsSameZone, addr 0x5b420c0, size 0xa0, virtual false, abstract: false, final false
inline bool IsSameZone(::GlobalNamespace::ZoneDef*  other) ;

static inline ::GlobalNamespace::ZoneDef* New_ctor() ;

constexpr ::GlobalNamespace::GroupJoinZoneA const& __cordl_internal_get_groupZone() const;

constexpr ::GlobalNamespace::GroupJoinZoneA& __cordl_internal_get_groupZone() ;

constexpr ::GlobalNamespace::GroupJoinZoneB const& __cordl_internal_get_groupZoneB() const;

constexpr ::GlobalNamespace::GroupJoinZoneB& __cordl_internal_get_groupZoneB() ;

constexpr ::GlobalNamespace::GTSubZone const& __cordl_internal_get_subZoneId() const;

constexpr ::GlobalNamespace::GTSubZone& __cordl_internal_get_subZoneId() ;

constexpr bool const& __cordl_internal_get_trackEnter() const;

constexpr bool& __cordl_internal_get_trackEnter() ;

constexpr bool const& __cordl_internal_get_trackExit() const;

constexpr bool& __cordl_internal_get_trackExit() ;

constexpr bool const& __cordl_internal_get_trackStay() const;

constexpr bool& __cordl_internal_get_trackStay() ;

constexpr int32_t const& __cordl_internal_get_trackStayIntervalSec() const;

constexpr int32_t& __cordl_internal_get_trackStayIntervalSec() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zoneId() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zoneId() ;

constexpr void __cordl_internal_set_groupZone(::GlobalNamespace::GroupJoinZoneA  value) ;

constexpr void __cordl_internal_set_groupZoneB(::GlobalNamespace::GroupJoinZoneB  value) ;

constexpr void __cordl_internal_set_subZoneId(::GlobalNamespace::GTSubZone  value) ;

constexpr void __cordl_internal_set_trackEnter(bool  value) ;

constexpr void __cordl_internal_set_trackExit(bool  value) ;

constexpr void __cordl_internal_set_trackStay(bool  value) ;

constexpr void __cordl_internal_set_trackStayIntervalSec(int32_t  value) ;

constexpr void __cordl_internal_set_zoneId(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5b42160, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_groupZoneAB, addr 0x5b420b8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GroupJoinZoneAB get_groupZoneAB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneDef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneDef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneDef(ZoneDef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneDef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneDef(ZoneDef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3727};

/// @brief Field zoneId, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zoneId;

/// [FormerlySerializedAs("subZoneType")]
/// [FormerlySerializedAs("subZone")]
/// @brief Field subZoneId, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::GTSubZone  ___subZoneId;

/// @brief Field groupZone, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GroupJoinZoneA  ___groupZone;

/// @brief Field groupZoneB, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GroupJoinZoneB  ___groupZoneB;

/// @brief Field trackStayIntervalSec, offset: 0x30, size: 0x4, def value: None
 int32_t  ___trackStayIntervalSec;

/// [Space]
/// @brief Field trackEnter, offset: 0x34, size: 0x1, def value: None
 bool  ___trackEnter;

/// @brief Field trackExit, offset: 0x35, size: 0x1, def value: None
 bool  ___trackExit;

/// @brief Field trackStay, offset: 0x36, size: 0x1, def value: None
 bool  ___trackStay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneDef, ___zoneId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneDef, ___subZoneId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneDef, ___groupZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneDef, ___groupZoneB) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneDef, ___trackStayIntervalSec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneDef, ___trackEnter) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneDef, ___trackExit) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneDef, ___trackStay) == 0x36, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneDef) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
