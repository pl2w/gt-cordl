#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HoldableObject)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class IHoldableObject;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HoldableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoldableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoldableObject*, "", "HoldableObject");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoldableObject
class CORDL_TYPE HoldableObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TwoHanded)) bool  TwoHanded;

/// @brief Convert operator to "::GlobalNamespace::IHoldableObject"
constexpr operator  ::GlobalNamespace::IHoldableObject*() noexcept;

/// @brief Method DropItemCleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DropItemCleanup() ;

/// @brief Method IHoldableObject.get_gameObject, addr 0x5759dd0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> IHoldableObject_get_gameObject() ;

/// @brief Method IHoldableObject.get_name, addr 0x5759dd8, size 0x8, virtual true, abstract: false, final true
inline ::StringW IHoldableObject_get_name() ;

/// @brief Method IHoldableObject.set_name, addr 0x5759de0, size 0x8, virtual true, abstract: false, final true
inline void IHoldableObject_set_name(::StringW  value) ;

static inline ::GlobalNamespace::HoldableObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5759d58, size 0x78, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGrab, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x574f830, size 0x130, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method .ctor, addr 0x574fa1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TwoHanded, addr 0x5759d50, size 0x8, virtual true, abstract: false, final false
inline bool get_TwoHanded() ;

/// @brief Convert to "::GlobalNamespace::IHoldableObject"
constexpr ::GlobalNamespace::IHoldableObject* i___GlobalNamespace__IHoldableObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoldableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoldableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoldableObject(HoldableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoldableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoldableObject(HoldableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HoldableObject) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
