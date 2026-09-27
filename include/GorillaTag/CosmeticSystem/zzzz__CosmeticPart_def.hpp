#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticPart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ECosmeticPartType_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticPart)
namespace GorillaTag::CosmeticSystem {
struct CosmeticAttachInfo;
}
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticPart;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticPart);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticPart, "GorillaTag.CosmeticSystem", "CosmeticPart");
// Dependencies ECosmeticPartType, GorillaTag.CosmeticSystem.CosmeticAttachInfo
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticPart
struct CORDL_TYPE CosmeticPart {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticPart() ;

// Ctor Parameters [CppParam { name: "prefabAssetRef", ty: "::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachAnchors", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "partType", ty: "::GlobalNamespace::ECosmeticPartType", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticPart(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>  attachAnchors, ::GlobalNamespace::ECosmeticPartType  partType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4750};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field prefabAssetRef, offset: 0x0, size: 0x8, def value: None
 ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef;

/// [Tooltip("Determines how the cosmetic part will be attached to the player.")]
/// @brief Field attachAnchors, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>  attachAnchors;

/// @brief Field partType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ECosmeticPartType  partType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticPart, prefabAssetRef) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticPart, attachAnchors) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticPart, partType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticPart) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
