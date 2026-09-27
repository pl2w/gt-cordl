#pragma once
// IWYU pragma private; include "GorillaTagScripts/SceneBasedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SceneBasedObject)
// Forward declare root types
namespace GorillaTagScripts {
class SceneBasedObject;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::SceneBasedObject*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SceneBasedObject*, "GorillaTagScripts", "SceneBasedObject");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SceneBasedObject
class CORDL_TYPE SceneBasedObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field zone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Method IsLocalPlayerInScene, addr 0x5bd4048, size 0x90, virtual false, abstract: false, final false
inline bool IsLocalPlayerInScene() ;

static inline ::GorillaTagScripts::SceneBasedObject* New_ctor() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5bd40d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneBasedObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneBasedObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneBasedObject(SceneBasedObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneBasedObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneBasedObject(SceneBasedObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4012};

/// @brief Field zone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SceneBasedObject, ___zone) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SceneBasedObject) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
