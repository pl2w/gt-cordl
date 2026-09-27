#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneTeller_FortuneTellerResultFanfare.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FortuneTeller_FortuneTellerResultFanfare)
namespace UnityEngine::Playables {
class PlayableAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct FortuneTeller_FortuneTellerResultFanfare;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare, "", "FortuneTeller/FortuneTellerResultFanfare");
// Dependencies FortuneResults::FortuneCategoryType
namespace GlobalNamespace {
// Is value type: true
// CS Name: FortuneTeller/FortuneTellerResultFanfare
struct CORDL_TYPE FortuneTeller_FortuneTellerResultFanfare {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FortuneTeller_FortuneTellerResultFanfare() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::FortuneResults_FortuneCategoryType", modifiers: "", def_value: None, comment: None }, CppParam { name: "fanfare", ty: "::UnityW<::UnityEngine::Playables::PlayableAsset>", modifiers: "", def_value: None, comment: None }]
constexpr FortuneTeller_FortuneTellerResultFanfare(::GlobalNamespace::FortuneResults_FortuneCategoryType  type, ::UnityW<::UnityEngine::Playables::PlayableAsset>  fanfare) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1706};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::FortuneResults_FortuneCategoryType  type;

/// @brief Field fanfare, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  fanfare;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare, fanfare) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
