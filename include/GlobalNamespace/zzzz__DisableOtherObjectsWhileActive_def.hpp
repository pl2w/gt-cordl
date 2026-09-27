#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableOtherObjectsWhileActive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DisableOtherObjectsWhileActive)
// Forward declare root types
namespace GlobalNamespace {
class DisableOtherObjectsWhileActive;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisableOtherObjectsWhileActive*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisableOtherObjectsWhileActive*, "", "DisableOtherObjectsWhileActive");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableOtherObjectsWhileActive
class CORDL_TYPE DisableOtherObjectsWhileActive : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field otherObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherObjects, put=__cordl_internal_set_otherObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  otherObjects;

/// @brief Field otherXSceneObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherXSceneObjects, put=__cordl_internal_set_otherXSceneObjects)) ::ArrayW<::GlobalNamespace::XSceneRef>  otherXSceneObjects;

static inline ::GlobalNamespace::DisableOtherObjectsWhileActive* New_ctor() ;

/// @brief Method OnDisable, addr 0x567328c, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x567310c, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetAllActive, addr 0x5673114, size 0x178, virtual false, abstract: false, final false
inline void SetAllActive(bool  active) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_otherObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_otherObjects() ;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef> const& __cordl_internal_get_otherXSceneObjects() const;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef>& __cordl_internal_get_otherXSceneObjects() ;

constexpr void __cordl_internal_set_otherObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_otherXSceneObjects(::ArrayW<::GlobalNamespace::XSceneRef>  value) ;

/// @brief Method .ctor, addr 0x5673294, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableOtherObjectsWhileActive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableOtherObjectsWhileActive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableOtherObjectsWhileActive(DisableOtherObjectsWhileActive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableOtherObjectsWhileActive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableOtherObjectsWhileActive(DisableOtherObjectsWhileActive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{817};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GT/DisableOtherObjectsWhileActive]  ERROR!!!  "};

/// @brief Field otherObjects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___otherObjects;

/// @brief Field otherXSceneObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XSceneRef>  ___otherXSceneObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisableOtherObjectsWhileActive, ___otherObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableOtherObjectsWhileActive, ___otherXSceneObjects) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DisableOtherObjectsWhileActive) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
