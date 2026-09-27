#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradeStationDepositBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRToolUpgradeStationDepositBox)
namespace GlobalNamespace {
class GRToolUpgradeStation;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolUpgradeStationDepositBox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUpgradeStationDepositBox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradeStationDepositBox*, "", "GRToolUpgradeStationDepositBox");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgradeStationDepositBox
class CORDL_TYPE GRToolUpgradeStationDepositBox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field upgradeStation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeStation, put=__cordl_internal_set_upgradeStation)) ::UnityW<::GlobalNamespace::GRToolUpgradeStation>  upgradeStation;

static inline ::GlobalNamespace::GRToolUpgradeStationDepositBox* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x58d12b0, size 0x180, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation> const& __cordl_internal_get_upgradeStation() const;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation>& __cordl_internal_get_upgradeStation() ;

constexpr void __cordl_internal_set_upgradeStation(::UnityW<::GlobalNamespace::GRToolUpgradeStation>  value) ;

/// @brief Method .ctor, addr 0x58d1430, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradeStationDepositBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradeStationDepositBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgradeStationDepositBox(GRToolUpgradeStationDepositBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradeStationDepositBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgradeStationDepositBox(GRToolUpgradeStationDepositBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2096};

/// @brief Field upgradeStation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolUpgradeStation>  ___upgradeStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStationDepositBox, ___upgradeStation) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradeStationDepositBox) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
