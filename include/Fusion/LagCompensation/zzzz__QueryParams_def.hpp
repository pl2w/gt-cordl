#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/QueryParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryParams)
namespace Fusion::LagCompensation {
class PreProcessingDelegate;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct QueryParams;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::QueryParams);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::QueryParams, "Fusion.LagCompensation", "QueryParams");
// Dependencies Fusion.HitOptions, Fusion.PlayerRef, System.Nullable`1<T>, UnityEngine.LayerMask, UnityEngine.QueryTriggerInteraction
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.QueryParams
struct CORDL_TYPE QueryParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr QueryParams() ;

// Ctor Parameters [CppParam { name: "Options", ty: "::Fusion::HitOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "TriggerInteraction", ty: "::UnityEngine::QueryTriggerInteraction", modifiers: "", def_value: None, comment: None }, CppParam { name: "LayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "Player", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tick", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TickTo", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alpha", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "PreProcessingDelegate", ty: "::Fusion::LagCompensation::PreProcessingDelegate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserArgs", ty: "void*", modifiers: "", def_value: None, comment: None }]
constexpr QueryParams(::Fusion::HitOptions  Options, ::UnityEngine::QueryTriggerInteraction  TriggerInteraction, ::UnityEngine::LayerMask  LayerMask, ::Fusion::PlayerRef  Player, int32_t  Tick, ::System::Nullable_1<int32_t>  TickTo, ::System::Nullable_1<float_t>  Alpha, ::Fusion::LagCompensation::PreProcessingDelegate*  PreProcessingDelegate, void*  UserArgs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19423};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Options, offset: 0x0, size: 0x4, def value: None
 ::Fusion::HitOptions  Options;

/// @brief Field TriggerInteraction, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  TriggerInteraction;

/// @brief Field LayerMask, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  LayerMask;

/// @brief Field Player, offset: 0xc, size: 0x4, def value: None
 ::Fusion::PlayerRef  Player;

/// @brief Field Tick, offset: 0x10, size: 0x4, def value: None
 int32_t  Tick;

/// @brief Field TickTo, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  TickTo;

/// @brief Field Alpha, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  Alpha;

/// @brief Field PreProcessingDelegate, offset: 0x38, size: 0x8, def value: None
 ::Fusion::LagCompensation::PreProcessingDelegate*  PreProcessingDelegate;

/// @brief Size padding 0x38 - 0x48 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field UserArgs, offset: 0x40, size: 0x8, def value: None
 void*  UserArgs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::QueryParams, Options) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, TriggerInteraction) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, LayerMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, Player) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, Tick) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, TickTo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, Alpha) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, PreProcessingDelegate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::QueryParams, UserArgs) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::QueryParams) == 0x38, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
