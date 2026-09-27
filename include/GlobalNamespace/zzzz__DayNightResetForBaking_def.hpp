#pragma once
// IWYU pragma private; include "GlobalNamespace/DayNightResetForBaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DayNightResetForBaking)
namespace GlobalNamespace {
class BetterDayNightManager;
}
// Forward declare root types
namespace GlobalNamespace {
class DayNightResetForBaking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DayNightResetForBaking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DayNightResetForBaking*, "", "DayNightResetForBaking");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DayNightResetForBaking
class CORDL_TYPE DayNightResetForBaking : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dayNightManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightManager, put=__cordl_internal_set_dayNightManager)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  dayNightManager;

static inline ::GlobalNamespace::DayNightResetForBaking* New_ctor() ;

/// @brief Method SetMaterialsForBaking, addr 0x599652c, size 0x214, virtual false, abstract: false, final false
inline void SetMaterialsForBaking() ;

/// @brief Method SetMaterialsForGame, addr 0x5996740, size 0x214, virtual false, abstract: false, final false
inline void SetMaterialsForGame() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get_dayNightManager() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get_dayNightManager() ;

constexpr void __cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

/// @brief Method .ctor, addr 0x5996954, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DayNightResetForBaking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DayNightResetForBaking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DayNightResetForBaking(DayNightResetForBaking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DayNightResetForBaking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DayNightResetForBaking(DayNightResetForBaking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2592};

/// @brief Field dayNightManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  ___dayNightManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DayNightResetForBaking, ___dayNightManager) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DayNightResetForBaking) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
