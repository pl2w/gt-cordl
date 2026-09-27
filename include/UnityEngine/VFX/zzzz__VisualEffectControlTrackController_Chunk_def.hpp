#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController_Chunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Clip_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrackController_Chunk)
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Clip;
}
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Event;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Chunk;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectControlTrackController_Chunk);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectControlTrackController_Chunk, "UnityEngine.VFX", "VisualEffectControlTrackController/Chunk");
// Dependencies UnityEngine.VFX.VisualEffectControlTrackController::Clip, UnityEngine.VFX.VisualEffectControlTrackController::Event
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Chunk
struct CORDL_TYPE VisualEffectControlTrackController_Chunk {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrackController_Chunk() ;

// Ctor Parameters [CppParam { name: "scrubbing", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "reinitEnter", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "reinitExit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "startSeed", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "begin", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prewarmCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prewarmDeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prewarmOffset", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prewarmEvent", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "events", ty: "::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Event>", modifiers: "", def_value: None, comment: None }, CppParam { name: "clips", ty: "::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Clip>", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectControlTrackController_Chunk(bool  scrubbing, bool  reinitEnter, bool  reinitExit, uint32_t  startSeed, double_t  begin, double_t  end, uint32_t  prewarmCount, float_t  prewarmDeltaTime, double_t  prewarmOffset, int32_t  prewarmEvent, ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Event>  events, ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Clip>  clips) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field scrubbing, offset: 0x0, size: 0x1, def value: None
 bool  scrubbing;

/// @brief Field reinitEnter, offset: 0x1, size: 0x1, def value: None
 bool  reinitEnter;

/// @brief Field reinitExit, offset: 0x2, size: 0x1, def value: None
 bool  reinitExit;

/// @brief Field startSeed, offset: 0x4, size: 0x4, def value: None
 uint32_t  startSeed;

/// @brief Field begin, offset: 0x8, size: 0x8, def value: None
 double_t  begin;

/// @brief Field end, offset: 0x10, size: 0x8, def value: None
 double_t  end;

/// @brief Field prewarmCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  prewarmCount;

/// @brief Field prewarmDeltaTime, offset: 0x1c, size: 0x4, def value: None
 float_t  prewarmDeltaTime;

/// @brief Field prewarmOffset, offset: 0x20, size: 0x8, def value: None
 double_t  prewarmOffset;

/// @brief Field prewarmEvent, offset: 0x28, size: 0x4, def value: None
 int32_t  prewarmEvent;

/// @brief Field events, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Event>  events;

/// @brief Field clips, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Clip>  clips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, scrubbing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, reinitEnter) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, reinitExit) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, startSeed) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, begin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, end) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, prewarmCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, prewarmDeltaTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, prewarmOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, prewarmEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, events) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Chunk, clips) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectControlTrackController_Chunk) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
