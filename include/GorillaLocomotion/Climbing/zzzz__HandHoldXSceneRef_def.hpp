#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/HandHoldXSceneRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HandHoldXSceneRef)
namespace GlobalNamespace {
class HandHold;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaLocomotion::Climbing {
class HandHoldXSceneRef;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Climbing::HandHoldXSceneRef*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Climbing::HandHoldXSceneRef*, "GorillaLocomotion.Climbing", "HandHoldXSceneRef");
// Dependencies UnityEngine.MonoBehaviour, XSceneRef
namespace GorillaLocomotion::Climbing {
// Is value type: false
// CS Name: GorillaLocomotion.Climbing.HandHoldXSceneRef
class CORDL_TYPE HandHoldXSceneRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field reference, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_reference, put=__cordl_internal_set_reference)) ::GlobalNamespace::XSceneRef  reference;

 __declspec(property(get=get_target)) ::UnityW<::GlobalNamespace::HandHold>  target;

 __declspec(property(get=get_targetObject)) ::UnityW<::UnityEngine::GameObject>  targetObject;

static inline ::GorillaLocomotion::Climbing::HandHoldXSceneRef* New_ctor() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_reference() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_reference() ;

constexpr void __cordl_internal_set_reference(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x5cf357c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_target, addr 0x5cf34ec, size 0x68, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::HandHold> get_target() ;

/// @brief Method get_targetObject, addr 0x5cf3554, size 0x28, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_targetObject() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandHoldXSceneRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandHoldXSceneRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandHoldXSceneRef(HandHoldXSceneRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandHoldXSceneRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandHoldXSceneRef(HandHoldXSceneRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4546};

/// [SerializeField]
/// @brief Field reference, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___reference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Climbing::HandHoldXSceneRef, ___reference) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Climbing::HandHoldXSceneRef) == 0x38, "Size mismatch!");

} // namespace end def GorillaLocomotion::Climbing
