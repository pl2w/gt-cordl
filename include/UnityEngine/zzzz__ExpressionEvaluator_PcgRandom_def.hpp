#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator_PcgRandom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionEvaluator_PcgRandom)
// Forward declare root types
namespace GlobalNamespace {
struct ExpressionEvaluator_PcgRandom;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExpressionEvaluator_PcgRandom);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExpressionEvaluator_PcgRandom, "UnityEngine", "ExpressionEvaluator/PcgRandom");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ExpressionEvaluator/PcgRandom
struct CORDL_TYPE ExpressionEvaluator_PcgRandom {
public:
// Declarations
/// @brief Method GetUInt, addr 0xb573514, size 0x38, virtual false, abstract: false, final false
inline uint32_t GetUInt() ;

/// @brief Method RotateRight, addr 0xb573cf8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t RotateRight(uint32_t  v, int32_t  rot) ;

/// @brief Method Step, addr 0xb573cc0, size 0x20, virtual false, abstract: false, final false
inline void Step() ;

/// @brief Method XshRr, addr 0xb573ce0, size 0x18, virtual false, abstract: false, final false
static inline uint32_t XshRr(uint64_t  s) ;

/// @brief Method .ctor, addr 0xb573ac0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(uint64_t  state, uint64_t  sequence) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExpressionEvaluator_PcgRandom() ;

// Ctor Parameters [CppParam { name: "increment", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr ExpressionEvaluator_PcgRandom(uint64_t  increment, uint64_t  state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14829};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field increment, offset: 0x0, size: 0x8, def value: None
 uint64_t  increment;

/// @brief Field state, offset: 0x8, size: 0x8, def value: None
 uint64_t  state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExpressionEvaluator_PcgRandom, increment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionEvaluator_PcgRandom, state) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExpressionEvaluator_PcgRandom) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
