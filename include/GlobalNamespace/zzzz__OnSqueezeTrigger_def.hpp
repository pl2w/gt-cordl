#pragma once
// IWYU pragma private; include "GlobalNamespace/OnSqueezeTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnSqueezeTrigger)
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class OnSqueezeTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnSqueezeTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnSqueezeTrigger*, "", "OnSqueezeTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnSqueezeTrigger
class CORDL_TYPE OnSqueezeTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field indexFinger, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_indexFinger, put=__cordl_internal_set_indexFinger)) bool  indexFinger;

/// @brief Field myHoldable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myHoldable, put=__cordl_internal_set_myHoldable)) ::UnityW<::GlobalNamespace::TransferrableObject>  myHoldable;

/// @brief Field myRig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field onPress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPress, put=__cordl_internal_set_onPress)) ::UnityEngine::Events::UnityEvent*  onPress;

/// @brief Field onRelease, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRelease, put=__cordl_internal_set_onRelease)) ::UnityEngine::Events::UnityEvent*  onRelease;

/// @brief Field triggerWasDown, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerWasDown, put=__cordl_internal_set_triggerWasDown)) bool  triggerWasDown;

/// @brief Field updateWhilePressed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateWhilePressed, put=__cordl_internal_set_updateWhilePressed)) ::UnityEngine::Events::UnityEvent*  updateWhilePressed;

static inline ::GlobalNamespace::OnSqueezeTrigger* New_ctor() ;

/// @brief Method Start, addr 0x5656560, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x56565b8, size 0x118, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_indexFinger() const;

constexpr bool& __cordl_internal_get_indexFinger() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_myHoldable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_myHoldable() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPress() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPress() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRelease() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRelease() ;

constexpr bool const& __cordl_internal_get_triggerWasDown() const;

constexpr bool& __cordl_internal_get_triggerWasDown() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_updateWhilePressed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_updateWhilePressed() ;

constexpr void __cordl_internal_set_indexFinger(bool  value) ;

constexpr void __cordl_internal_set_myHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_onPress(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_triggerWasDown(bool  value) ;

constexpr void __cordl_internal_set_updateWhilePressed(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x56566d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSqueezeTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSqueezeTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSqueezeTrigger(OnSqueezeTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSqueezeTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSqueezeTrigger(OnSqueezeTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{748};

/// [SerializeField]
/// @brief Field myHoldable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___myHoldable;

/// [SerializeField]
/// @brief Field onPress, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPress;

/// [SerializeField]
/// @brief Field onRelease, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRelease;

/// [SerializeField]
/// @brief Field updateWhilePressed, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___updateWhilePressed;

/// @brief Field myRig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field indexFinger, offset: 0x48, size: 0x1, def value: None
 bool  ___indexFinger;

/// @brief Field triggerWasDown, offset: 0x49, size: 0x1, def value: None
 bool  ___triggerWasDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnSqueezeTrigger, ___myHoldable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnSqueezeTrigger, ___onPress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnSqueezeTrigger, ___onRelease) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnSqueezeTrigger, ___updateWhilePressed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnSqueezeTrigger, ___myRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnSqueezeTrigger, ___indexFinger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnSqueezeTrigger, ___triggerWasDown) == 0x49, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnSqueezeTrigger) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
