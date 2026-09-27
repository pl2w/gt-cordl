#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsDemoRig_EdSpawnedCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticsDemoRig_EdSpawnedCosmetic)
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsDemoRig_EdSpawnedCosmetic;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic, "", "CosmeticsDemoRig/EdSpawnedCosmetic");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CosmeticsDemoRig/EdSpawnedCosmetic
struct CORDL_TYPE CosmeticsDemoRig_EdSpawnedCosmetic {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsDemoRig_EdSpawnedCosmetic() ;

// Ctor Parameters [CppParam { name: "itemName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "so", ty: "::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>", modifiers: "", def_value: None, comment: None }, CppParam { name: "objects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "holdableObjects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "isEmpty", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsDemoRig_EdSpawnedCosmetic(::StringW  itemName, ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  so, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objects, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  holdableObjects, bool  isEmpty) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field itemName, offset: 0x0, size: 0x8, def value: None
 ::StringW  itemName;

/// @brief Field so, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  so;

/// @brief Field objects, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objects;

/// @brief Field holdableObjects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  holdableObjects;

/// @brief Field isEmpty, offset: 0x20, size: 0x1, def value: None
 bool  isEmpty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic, itemName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic, so) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic, objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic, holdableObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic, isEmpty) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
