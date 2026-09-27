#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset___c__DisplayClass82_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(VisualTreeAsset___c__DisplayClass82_0)
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualTreeAsset___c__DisplayClass82_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualTreeAsset___c__DisplayClass82_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualTreeAsset___c__DisplayClass82_0, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass82_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass82_0
struct CORDL_TYPE VisualTreeAsset___c__DisplayClass82_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset___c__DisplayClass82_0() ;

// Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: None, comment: None }]
constexpr VisualTreeAsset___c__DisplayClass82_0(::UnityEngine::UIElements::VisualElementAsset*  asset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field asset, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElementAsset*  asset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualTreeAsset___c__DisplayClass82_0, asset) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualTreeAsset___c__DisplayClass82_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
