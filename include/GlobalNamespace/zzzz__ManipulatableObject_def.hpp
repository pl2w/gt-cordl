#pragma once
// IWYU pragma private; include "GlobalNamespace/ManipulatableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
CORDL_MODULE_EXPORT(ManipulatableObject)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ManipulatableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ManipulatableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManipulatableObject*, "", "ManipulatableObject");
// Dependencies HoldableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ManipulatableObject
class CORDL_TYPE ManipulatableObject : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field holdingHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdingHand, put=__cordl_internal_set_holdingHand)) ::UnityW<::UnityEngine::GameObject>  holdingHand;

/// @brief Field isHeld, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeld, put=__cordl_internal_set_isHeld)) bool  isHeld;

/// @brief Method DropItemCleanup, addr 0x575ced8, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method LateUpdate, addr 0x575cb00, size 0x104, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ManipulatableObject* New_ctor() ;

/// @brief Method OnGrab, addr 0x575cc08, size 0xf8, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHeldUpdate, addr 0x575caf8, size 0x4, virtual true, abstract: false, final false
inline void OnHeldUpdate(::UnityEngine::GameObject*  hand) ;

/// @brief Method OnHover, addr 0x575cc04, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x575cd00, size 0x1d8, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnReleasedUpdate, addr 0x575cafc, size 0x4, virtual true, abstract: false, final false
inline void OnReleasedUpdate() ;

/// @brief Method OnStartManipulation, addr 0x575cae8, size 0x4, virtual true, abstract: false, final false
inline void OnStartManipulation(::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnStopManipulation, addr 0x575caec, size 0x4, virtual true, abstract: false, final false
inline void OnStopManipulation(::UnityEngine::GameObject*  releasingHand, ::UnityEngine::Vector3  releaseVelocity) ;

/// @brief Method ShouldHandDetach, addr 0x575caf0, size 0x8, virtual true, abstract: false, final false
inline bool ShouldHandDetach(::UnityEngine::GameObject*  hand) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_holdingHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_holdingHand() ;

constexpr bool const& __cordl_internal_get_isHeld() const;

constexpr bool& __cordl_internal_get_isHeld() ;

constexpr void __cordl_internal_set_holdingHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isHeld(bool  value) ;

/// @brief Method .ctor, addr 0x575cad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManipulatableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManipulatableObject(ManipulatableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManipulatableObject(ManipulatableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1334};

/// @brief Field isHeld, offset: 0x20, size: 0x1, def value: None
 bool  ___isHeld;

/// @brief Field holdingHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___holdingHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManipulatableObject, ___isHeld) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableObject, ___holdingHand) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManipulatableObject) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
