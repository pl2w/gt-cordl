#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalCameraHistory_Item.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalCameraHistory_Item)
namespace UnityEngine::Rendering {
class ContextItem;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniversalCameraHistory_Item;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalCameraHistory_Item);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalCameraHistory_Item, "UnityEngine.Rendering.Universal", "UniversalCameraHistory/Item");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraHistory/Item
struct CORDL_TYPE UniversalCameraHistory_Item {
public:
// Declarations
/// @brief Method Reset, addr 0xb2aaf58, size 0x2c, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniversalCameraHistory_Item() ;

// Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "writeVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UniversalCameraHistory_Item(::UnityEngine::Rendering::ContextItem*  storage, int32_t  requestVersion, int32_t  writeVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18654};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field storage, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ContextItem*  storage;

/// @brief Field requestVersion, offset: 0x8, size: 0x4, def value: None
 int32_t  requestVersion;

/// @brief Field writeVersion, offset: 0xc, size: 0x4, def value: None
 int32_t  writeVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalCameraHistory_Item, storage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalCameraHistory_Item, requestVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalCameraHistory_Item, writeVersion) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalCameraHistory_Item) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
