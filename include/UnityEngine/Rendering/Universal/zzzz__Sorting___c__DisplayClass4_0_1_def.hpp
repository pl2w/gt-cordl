#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Sorting___c__DisplayClass4_0_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Sorting___c__DisplayClass4_0_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Sorting___c__DisplayClass4_0_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Sorting___c__DisplayClass4_0_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Sorting___c__DisplayClass4_0_1, "UnityEngine.Rendering.Universal", "Sorting/<>c__DisplayClass4_0`1");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Sorting/<>c__DisplayClass4_0`1<T>
struct CORDL_TYPE Sorting___c__DisplayClass4_0_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Sorting___c__DisplayClass4_0_1() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<T>", modifiers: "", def_value: None, comment: None }]
constexpr Sorting___c__DisplayClass4_0_1(::ArrayW<T>  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field data, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<T>  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
