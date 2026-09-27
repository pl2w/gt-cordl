#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeUIPage___c__DisplayClass5_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SITechTreeUIPage___c__DisplayClass5_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SITechTreeUIPage___c__DisplayClass5_1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1, "", "SITechTreeUIPage/<>c__DisplayClass5_1");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITechTreeUIPage/<>c__DisplayClass5_1
struct CORDL_TYPE SITechTreeUIPage___c__DisplayClass5_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeUIPage___c__DisplayClass5_1() ;

// Ctor Parameters [CppParam { name: "subtreeWidths", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: None, comment: None }]
constexpr SITechTreeUIPage___c__DisplayClass5_1(::System::Collections::Generic::List_1<float_t>*  subtreeWidths) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field subtreeWidths, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  subtreeWidths;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1, subtreeWidths) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
