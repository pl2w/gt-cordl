#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
CORDL_MODULE_EXPORT(TransferrableObjectHoldablePart)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableObjectHoldablePart;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableObjectHoldablePart*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObjectHoldablePart*, "", "TransferrableObjectHoldablePart");
// Dependencies HoldableObject, TransferrableObject::ItemStates
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObjectHoldablePart
class CORDL_TYPE TransferrableObjectHoldablePart : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field heldBit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldBit, put=__cordl_internal_set_heldBit)) ::GlobalNamespace::TransferrableObject_ItemStates  heldBit;

/// @brief Field isHeld, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeld, put=__cordl_internal_set_isHeld)) bool  isHeld;

/// @brief Field isHeldLeftHand, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeldLeftHand, put=__cordl_internal_set_isHeldLeftHand)) bool  isHeldLeftHand;

/// @brief Field onDrop, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDrop, put=__cordl_internal_set_onDrop)) ::UnityEngine::Events::UnityEvent*  onDrop;

/// @brief Field onGrab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGrab, put=__cordl_internal_set_onGrab)) ::UnityEngine::Events::UnityEvent*  onGrab;

/// @brief Field onRelease, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRelease, put=__cordl_internal_set_onRelease)) ::UnityEngine::Events::UnityEvent*  onRelease;

/// @brief Field transferrableParentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableParentObject, put=__cordl_internal_set_transferrableParentObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableParentObject;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method DropItemCleanup, addr 0x573d5fc, size 0x28, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

static inline ::GlobalNamespace::TransferrableObjectHoldablePart* New_ctor() ;

/// @brief Method OnDisable, addr 0x573d290, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x573d224, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x573d4ac, size 0x150, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x573d4a8, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x573d624, size 0x184, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method Tick, addr 0x573d2fc, size 0x1a8, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateHeld, addr 0x573d4a4, size 0x4, virtual true, abstract: false, final false
inline void UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get_heldBit() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get_heldBit() ;

constexpr bool const& __cordl_internal_get_isHeld() const;

constexpr bool& __cordl_internal_get_isHeld() ;

constexpr bool const& __cordl_internal_get_isHeldLeftHand() const;

constexpr bool& __cordl_internal_get_isHeldLeftHand() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onDrop() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onDrop() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onGrab() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onGrab() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRelease() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRelease() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableParentObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableParentObject() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_heldBit(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set_isHeld(bool  value) ;

constexpr void __cordl_internal_set_isHeldLeftHand(bool  value) ;

constexpr void __cordl_internal_set_onDrop(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onGrab(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_transferrableParentObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x573d7a8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x573d214, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x573d21c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectHoldablePart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObjectHoldablePart(TransferrableObjectHoldablePart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObjectHoldablePart(TransferrableObjectHoldablePart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1234};

/// [SerializeField]
/// @brief Field transferrableParentObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableParentObject;

/// [SerializeField]
/// @brief Field heldBit, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ___heldBit;

/// @brief Field isHeld, offset: 0x2c, size: 0x1, def value: None
 bool  ___isHeld;

/// @brief Field isHeldLeftHand, offset: 0x2d, size: 0x1, def value: None
 bool  ___isHeldLeftHand;

/// @brief Field onGrab, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onGrab;

/// @brief Field onRelease, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRelease;

/// @brief Field onDrop, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onDrop;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ___transferrableParentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ___heldBit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ___isHeld) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ___isHeldLeftHand) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ___onGrab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ___onRelease) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ___onDrop) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart, ____TickRunning_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObjectHoldablePart) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
