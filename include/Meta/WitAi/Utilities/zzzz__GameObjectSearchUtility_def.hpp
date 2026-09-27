#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/GameObjectSearchUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GameObjectSearchUtility)
// Forward declare root types
namespace Meta::WitAi::Utilities {
class GameObjectSearchUtility;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::GameObjectSearchUtility*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::GameObjectSearchUtility*, "Meta.WitAi.Utilities", "GameObjectSearchUtility");
// Dependencies System.Object, UnityEngine.Object
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.GameObjectSearchUtility
class CORDL_TYPE GameObjectSearchUtility : public ::System::Object {
public:
// Declarations
/// @brief Method FindSceneObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline T FindSceneObject(bool  includeInactive) ;

/// @brief Method FindSceneObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline ::ArrayW<T> FindSceneObjects(bool  includeInactive, bool  returnImmediately) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectSearchUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSearchUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectSearchUtility(GameObjectSearchUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSearchUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectSearchUtility(GameObjectSearchUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Utilities::GameObjectSearchUtility) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
