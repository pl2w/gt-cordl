#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GameObjectExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectExtensions)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct HideFlags;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GameObjectExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::GameObjectExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GameObjectExtensions*, "Unity.XR.CoreUtils", "GameObjectExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GameObjectExtensions
class CORDL_TYPE GameObjectExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddToHideFlagsRecursively, addr 0xb3ef1e8, size 0x2cc, virtual false, abstract: false, final false
static inline void AddToHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, ::UnityEngine::HideFlags  hideFlags) ;

/// [Extension]
/// @brief Method SetHideFlagsRecursively, addr 0xb3eef28, size 0x2c0, virtual false, abstract: false, final false
static inline void SetHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, ::UnityEngine::HideFlags  hideFlags) ;

/// [Extension]
/// @brief Method SetLayerAndAddToHideFlagsRecursively, addr 0xb3ef774, size 0x2f0, virtual false, abstract: false, final false
static inline void SetLayerAndAddToHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer, ::UnityEngine::HideFlags  hideFlags) ;

/// [Extension]
/// @brief Method SetLayerAndHideFlagsRecursively, addr 0xb3efa64, size 0x2e4, virtual false, abstract: false, final false
static inline void SetLayerAndHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer, ::UnityEngine::HideFlags  hideFlags) ;

/// [Extension]
/// @brief Method SetLayerRecursively, addr 0xb3ef4b4, size 0x2c0, virtual false, abstract: false, final false
static inline void SetLayerRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer) ;

/// [Extension]
/// @brief Method SetRunInEditModeRecursively, addr 0xb3efd48, size 0x4, virtual false, abstract: false, final false
static inline void SetRunInEditModeRecursively(::UnityEngine::GameObject*  gameObject, bool  enabled) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectExtensions(GameObjectExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectExtensions(GameObjectExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::GameObjectExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
