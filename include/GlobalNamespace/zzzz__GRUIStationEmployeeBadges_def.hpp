#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIStationEmployeeBadges.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIStationEmployeeBadges)
namespace GlobalNamespace {
class GRBadge;
}
namespace GlobalNamespace {
class GRUIEmployeeBadgeDispenser;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUIStationEmployeeBadges;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIStationEmployeeBadges*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIStationEmployeeBadges*, "", "GRUIStationEmployeeBadges");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIStationEmployeeBadges
class CORDL_TYPE GRUIStationEmployeeBadges : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field badgeDispensers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeDispensers, put=__cordl_internal_set_badgeDispensers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIEmployeeBadgeDispenser>>*  badgeDispensers;

/// @brief Field dispenserForActorNr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenserForActorNr, put=__cordl_internal_set_dispenserForActorNr)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  dispenserForActorNr;

/// @brief Field reactor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field registeredBadges, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_registeredBadges, put=__cordl_internal_set_registeredBadges)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBadge>>*  registeredBadges;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method GetDispenserForPlayer, addr 0x58ee60c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRUIEmployeeBadgeDispenser> GetDispenserForPlayer(int32_t  actorNumber) ;

/// @brief Method Init, addr 0x58ed248, size 0xb0, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method LinkBadgeToDispenser, addr 0x58ee414, size 0x1f8, virtual false, abstract: false, final false
inline void LinkBadgeToDispenser(::GlobalNamespace::GRBadge*  badge, int64_t  createData) ;

static inline ::GlobalNamespace::GRUIStationEmployeeBadges* New_ctor() ;

/// @brief Method OnDisable, addr 0x58eda30, size 0x194, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58ed2f8, size 0x2c0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshBadgesAuthority, addr 0x58eddb0, size 0x3c8, virtual false, abstract: false, final false
inline void RefreshBadgesAuthority() ;

/// @brief Method RemoveBadge, addr 0x58ee2c0, size 0x154, virtual false, abstract: false, final false
inline void RemoveBadge(::GlobalNamespace::GRBadge*  badge) ;

/// @brief Method SliceUpdate, addr 0x58ee178, size 0x148, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateRigs, addr 0x58ed7a0, size 0x290, virtual false, abstract: false, final false
inline void UpdateRigs() ;

/// @brief Method UpdateRigs, addr 0x58eddac, size 0x4, virtual false, abstract: false, final false
inline void UpdateRigs(::GlobalNamespace::RigContainer*  container) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIEmployeeBadgeDispenser>>* const& __cordl_internal_get_badgeDispensers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIEmployeeBadgeDispenser>>*& __cordl_internal_get_badgeDispensers() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_dispenserForActorNr() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_dispenserForActorNr() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBadge>>* const& __cordl_internal_get_registeredBadges() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBadge>>*& __cordl_internal_get_registeredBadges() ;

constexpr void __cordl_internal_set_badgeDispensers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIEmployeeBadgeDispenser>>*  value) ;

constexpr void __cordl_internal_set_dispenserForActorNr(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_registeredBadges(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBadge>>*  value) ;

/// @brief Method .ctor, addr 0x58ee6ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIStationEmployeeBadges() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIStationEmployeeBadges", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIStationEmployeeBadges(GRUIStationEmployeeBadges && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIStationEmployeeBadges", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIStationEmployeeBadges(GRUIStationEmployeeBadges const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2106};

/// [SerializeField]
/// @brief Field badgeDispensers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIEmployeeBadgeDispenser>>*  ___badgeDispensers;

/// @brief Field dispenserForActorNr, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___dispenserForActorNr;

/// @brief Field registeredBadges, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBadge>>*  ___registeredBadges;

/// @brief Field reactor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIStationEmployeeBadges, ___badgeDispensers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStationEmployeeBadges, ___dispenserForActorNr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStationEmployeeBadges, ___registeredBadges) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStationEmployeeBadges, ___reactor) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIStationEmployeeBadges) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
