#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPawn_CreatureUpdateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureState_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CrittersPawn_CreatureUpdateData)
namespace GlobalNamespace {
class CrittersPawn;
}
// Forward declare root types
namespace GlobalNamespace {
struct CrittersPawn_CreatureUpdateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrittersPawn_CreatureUpdateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersPawn_CreatureUpdateData, "", "CrittersPawn/CreatureUpdateData");
// Dependencies CrittersPawn::CreatureState
namespace GlobalNamespace {
// Is value type: true
// CS Name: CrittersPawn/CreatureUpdateData
struct CORDL_TYPE CrittersPawn_CreatureUpdateData {
public:
// Declarations
/// @brief Method SameData, addr 0x56f2990, size 0x38, virtual false, abstract: false, final false
inline bool SameData(::GlobalNamespace::CrittersPawn*  creature) ;

/// @brief Method .ctor, addr 0x56f2970, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CrittersPawn*  creature) ;

// Ctor Parameters []
// @brief default ctor
constexpr CrittersPawn_CreatureUpdateData() ;

// Ctor Parameters [CppParam { name: "lastImpulseTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::CrittersPawn_CreatureState", modifiers: "", def_value: None, comment: None }]
constexpr CrittersPawn_CreatureUpdateData(double_t  lastImpulseTime, ::GlobalNamespace::CrittersPawn_CreatureState  state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field lastImpulseTime, offset: 0x0, size: 0x8, def value: None
 double_t  lastImpulseTime;

/// @brief Field state, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::CrittersPawn_CreatureState  state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersPawn_CreatureUpdateData, lastImpulseTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn_CreatureUpdateData, state) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersPawn_CreatureUpdateData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
