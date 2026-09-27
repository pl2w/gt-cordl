#pragma once
// IWYU pragma private; include "UnityEngine/Random_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Random_State)
// Forward declare root types
namespace GlobalNamespace {
struct Random_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Random_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Random_State, "UnityEngine", "Random/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Random/State
struct CORDL_TYPE Random_State {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Random_State() ;

// Ctor Parameters [CppParam { name: "s0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "s1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "s2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "s3", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Random_State(int32_t  s0, int32_t  s1, int32_t  s2, int32_t  s3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field s0, offset: 0x0, size: 0x4, def value: None
 int32_t  s0;

/// [SerializeField]
/// @brief Field s1, offset: 0x4, size: 0x4, def value: None
 int32_t  s1;

/// [SerializeField]
/// @brief Field s2, offset: 0x8, size: 0x4, def value: None
 int32_t  s2;

/// [SerializeField]
/// @brief Field s3, offset: 0xc, size: 0x4, def value: None
 int32_t  s3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Random_State, s0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Random_State, s1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Random_State, s2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Random_State, s3) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Random_State) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
