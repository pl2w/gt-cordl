#pragma once
// IWYU pragma private; include "GlobalNamespace/IHoldableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IHoldableObject)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class IHoldableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IHoldableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IHoldableObject*, "", "IHoldableObject");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IHoldableObject
class CORDL_TYPE IHoldableObject {
public:
// Declarations
 __declspec(property(get=get_TwoHanded)) bool  TwoHanded;

 __declspec(property(get=get_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Method DropItemCleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DropItemCleanup() ;

/// @brief Method OnGrab, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method get_TwoHanded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_TwoHanded() ;

/// @brief Method get_gameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> get_gameObject() ;

/// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_name() ;

/// @brief Method set_name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_name(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IHoldableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHoldableObject(IHoldableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
