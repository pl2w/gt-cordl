#pragma once
// IWYU pragma private; include "GlobalNamespace/PrefabType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrefabType)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct PrefabType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PrefabType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrefabType, "", "PrefabType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PrefabType
struct CORDL_TYPE PrefabType {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PrefabType() ;

// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefabName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomObject", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "photonViewCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PrefabType(::UnityW<::UnityEngine::GameObject>  prefab, ::StringW  prefabName, bool  roomObject, int32_t  photonViewCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2129};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field prefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field prefabName, offset: 0x8, size: 0x8, def value: None
 ::StringW  prefabName;

/// @brief Field roomObject, offset: 0x10, size: 0x1, def value: None
 bool  roomObject;

/// @brief Field photonViewCount, offset: 0x14, size: 0x4, def value: None
 int32_t  photonViewCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrefabType, prefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrefabType, prefabName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrefabType, roomObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrefabType, photonViewCount) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrefabType) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
