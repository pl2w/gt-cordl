#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ContextContainer_Item.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ContextContainer_Item)
namespace UnityEngine::Rendering {
class ContextItem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ContextContainer_Item;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContextContainer_Item);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContextContainer_Item, "UnityEngine.Rendering", "ContextContainer/Item");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ContextContainer/Item
struct CORDL_TYPE ContextContainer_Item {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ContextContainer_Item() ;

// Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: None, comment: None }, CppParam { name: "isSet", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ContextContainer_Item(::UnityEngine::Rendering::ContextItem*  storage, bool  isSet) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16603};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field storage, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ContextItem*  storage;

/// @brief Field isSet, offset: 0x8, size: 0x1, def value: None
 bool  isSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContextContainer_Item, storage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContextContainer_Item, isSet) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContextContainer_Item) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
