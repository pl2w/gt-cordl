#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDashYoyo_StateMaterialsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SIGadgetDashYoyo_StateMaterialsInfo)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetDashYoyo_StateMaterialsInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo, "", "SIGadgetDashYoyo/StateMaterialsInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetDashYoyo/StateMaterialsInfo
struct CORDL_TYPE SIGadgetDashYoyo_StateMaterialsInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetDashYoyo_StateMaterialsInfo() ;

// Ctor Parameters [CppParam { name: "idle", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ready", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cooldown", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetDashYoyo_StateMaterialsInfo(::UnityW<::UnityEngine::Material>  idle, ::UnityW<::UnityEngine::Material>  ready, ::UnityW<::UnityEngine::Material>  cooldown) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{233};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field idle, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  idle;

/// @brief Field ready, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ready;

/// @brief Field cooldown, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  cooldown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo, idle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo, ready) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo, cooldown) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
