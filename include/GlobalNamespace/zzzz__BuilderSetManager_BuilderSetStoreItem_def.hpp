#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSetManager_BuilderSetStoreItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderSetManager_BuilderSetStoreItem)
namespace GlobalNamespace {
class BuilderPieceSet;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderSetManager_BuilderSetStoreItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, "", "BuilderSetManager/BuilderSetStoreItem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderSetManager/BuilderSetStoreItem
struct CORDL_TYPE BuilderSetManager_BuilderSetStoreItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager_BuilderSetStoreItem() ;

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "playfabID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "setID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cost", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasPrice", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "setRef", ty: "::UnityW<::GlobalNamespace::BuilderPieceSet>", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayModel", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "isNullItem", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BuilderSetManager_BuilderSetStoreItem(::StringW  displayName, ::StringW  playfabID, int32_t  setID, uint32_t  cost, bool  hasPrice, ::UnityW<::GlobalNamespace::BuilderPieceSet>  setRef, ::UnityW<::UnityEngine::GameObject>  displayModel, bool  isNullItem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1634};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field displayName, offset: 0x0, size: 0x8, def value: None
 ::StringW  displayName;

/// @brief Field playfabID, offset: 0x8, size: 0x8, def value: None
 ::StringW  playfabID;

/// @brief Field setID, offset: 0x10, size: 0x4, def value: None
 int32_t  setID;

/// @brief Field cost, offset: 0x14, size: 0x4, def value: None
 uint32_t  cost;

/// @brief Field hasPrice, offset: 0x18, size: 0x1, def value: None
 bool  hasPrice;

/// @brief Field setRef, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPieceSet>  setRef;

/// @brief Field displayModel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  displayModel;

/// @brief Field isNullItem, offset: 0x30, size: 0x1, def value: None
 bool  isNullItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, displayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, playfabID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, setID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, cost) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, hasPrice) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, setRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, displayModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem, isNullItem) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
