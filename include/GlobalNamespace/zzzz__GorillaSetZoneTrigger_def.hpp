#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSetZoneTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GorillaSetZoneTrigger)
// Forward declare root types
namespace GlobalNamespace {
class GorillaSetZoneTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSetZoneTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSetZoneTrigger*, "", "GorillaSetZoneTrigger");
// Dependencies GTZone, GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSetZoneTrigger
class CORDL_TYPE GorillaSetZoneTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field zones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::ArrayW<::GlobalNamespace::GTZone>  zones;

static inline ::GlobalNamespace::GorillaSetZoneTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x56b6be4, size 0xac, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::ArrayW<::GlobalNamespace::GTZone> const& __cordl_internal_get_zones() const;

constexpr ::ArrayW<::GlobalNamespace::GTZone>& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value) ;

/// @brief Method .ctor, addr 0x56b6da8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSetZoneTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSetZoneTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSetZoneTrigger(GorillaSetZoneTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSetZoneTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSetZoneTrigger(GorillaSetZoneTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{953};

/// [SerializeField]
/// @brief Field zones, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  ___zones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSetZoneTrigger, ___zones) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSetZoneTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
