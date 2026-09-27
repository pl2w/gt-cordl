#pragma once
// IWYU pragma private; include "GlobalNamespace/HangingClaw_RopeSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HangingClaw_RopeSegment)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct HangingClaw_RopeSegment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HangingClaw_RopeSegment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HangingClaw_RopeSegment, "", "HangingClaw/RopeSegment");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: HangingClaw/RopeSegment
struct CORDL_TYPE HangingClaw_RopeSegment {
public:
// Declarations
/// @brief Method .ctor, addr 0x589ce68, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  p) ;

// Ctor Parameters []
// @brief default ctor
constexpr HangingClaw_RopeSegment() ;

// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "posOld", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr HangingClaw_RopeSegment(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  posOld) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field pos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// @brief Field posOld, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  posOld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HangingClaw_RopeSegment, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HangingClaw_RopeSegment, posOld) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HangingClaw_RopeSegment) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
