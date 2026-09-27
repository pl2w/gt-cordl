#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionHandDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SuperInfectionHandDisplay)
// Forward declare root types
namespace GlobalNamespace {
class SuperInfectionHandDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperInfectionHandDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionHandDisplay*, "", "SuperInfectionHandDisplay");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfectionHandDisplay
class CORDL_TYPE SuperInfectionHandDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gameObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjects;

/// @brief Method EnableHands, addr 0x5afcc00, size 0x68, virtual false, abstract: false, final false
inline void EnableHands(bool  on) ;

static inline ::GlobalNamespace::SuperInfectionHandDisplay* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjects() ;

constexpr void __cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5afcc68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionHandDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionHandDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfectionHandDisplay(SuperInfectionHandDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionHandDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfectionHandDisplay(SuperInfectionHandDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{386};

/// [SerializeField]
/// @brief Field gameObjects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionHandDisplay, ___gameObjects) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionHandDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
