#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMesh___c__DisplayClass19_0_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__ExtrudeSettings_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SplineMesh___c__DisplayClass19_0_2)
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename K>
struct SplineMesh___c__DisplayClass19_0_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::SplineMesh___c__DisplayClass19_0_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::SplineMesh___c__DisplayClass19_0_2, "UnityEngine.Splines", "SplineMesh/<>c__DisplayClass19_0`2");
// [CompilerGenerated]
// Dependencies UnityEngine.Splines.ExtrudeSettings`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T,typename K>
// Is value type: true
// CS Name: UnityEngine.Splines.SplineMesh/<>c__DisplayClass19_0`2<T,K>
struct CORDL_TYPE SplineMesh___c__DisplayClass19_0_2 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SplineMesh___c__DisplayClass19_0_2() ;

// Ctor Parameters [CppParam { name: "settings", ty: "::UnityEngine::Splines::ExtrudeSettings_1<K>", modifiers: "", def_value: None, comment: None }, CppParam { name: "segmentsPerUnit", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineMesh___c__DisplayClass19_0_2(::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, float_t  segmentsPerUnit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field settings, offset: 0x0, size: 0x20, def value: None
 ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings;

/// @brief Field segmentsPerUnit, offset: 0x20, size: 0x4, def value: None
 float_t  segmentsPerUnit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
