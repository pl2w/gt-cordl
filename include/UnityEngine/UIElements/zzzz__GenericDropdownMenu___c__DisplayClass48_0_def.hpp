#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GenericDropdownMenu___c__DisplayClass48_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericDropdownMenu___c__DisplayClass48_0)
namespace UnityEngine::UIElements {
class GenericDropdownMenu;
}
// Forward declare root types
namespace GlobalNamespace {
struct GenericDropdownMenu___c__DisplayClass48_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GenericDropdownMenu___c__DisplayClass48_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GenericDropdownMenu___c__DisplayClass48_0, "UnityEngine.UIElements", "GenericDropdownMenu/<>c__DisplayClass48_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.GenericDropdownMenu/<>c__DisplayClass48_0
struct CORDL_TYPE GenericDropdownMenu___c__DisplayClass48_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GenericDropdownMenu___c__DisplayClass48_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::GenericDropdownMenu*", modifiers: "", def_value: None, comment: None }, CppParam { name: "selectedIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GenericDropdownMenu___c__DisplayClass48_0(::UnityEngine::UIElements::GenericDropdownMenu*  __4__this, int32_t  selectedIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::GenericDropdownMenu*  __4__this;

/// @brief Field selectedIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  selectedIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GenericDropdownMenu___c__DisplayClass48_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericDropdownMenu___c__DisplayClass48_0, selectedIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GenericDropdownMenu___c__DisplayClass48_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
