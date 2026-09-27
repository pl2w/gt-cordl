#pragma once
// IWYU pragma private; include "GorillaExtensions/GameObjectExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameObjectExtensions)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaExtensions {
class GameObjectExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::GameObjectExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::GameObjectExtensions*, "GorillaExtensions", "GameObjectExtensions");
// [Extension]
// Dependencies System.Object, UnityEngine.MonoBehaviour
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.GameObjectExtensions
class CORDL_TYPE GameObjectExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsPrefab, addr 0x5cf4bac, size 0x8, virtual false, abstract: false, final false
static inline bool IsPrefab(::UnityEngine::GameObject*  go) ;

/// [Extension]
/// @brief Method TryGetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
static inline bool TryGetComponentInParent(::UnityEngine::GameObject*  obj, ::by_ref<T>  component) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4557};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::GameObjectExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
