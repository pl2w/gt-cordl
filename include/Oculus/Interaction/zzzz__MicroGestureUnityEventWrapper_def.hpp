#pragma once
// IWYU pragma private; include "Oculus/Interaction/MicroGestureUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MicroGestureUnityEventWrapper)
namespace GlobalNamespace {
struct OVRHand_MicrogestureType;
}
namespace GlobalNamespace {
class OVRMicrogestureEventSource;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Oculus::Interaction {
class MicroGestureUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MicroGestureUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MicroGestureUnityEventWrapper*, "Oculus.Interaction", "MicroGestureUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MicroGestureUnityEventWrapper
class CORDL_TYPE MicroGestureUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_WhenSwipeDown)) ::UnityEngine::Events::UnityEvent*  WhenSwipeDown;

 __declspec(property(get=get_WhenSwipeLeft)) ::UnityEngine::Events::UnityEvent*  WhenSwipeLeft;

 __declspec(property(get=get_WhenSwipeRight)) ::UnityEngine::Events::UnityEvent*  WhenSwipeRight;

 __declspec(property(get=get_WhenSwipeUp)) ::UnityEngine::Events::UnityEvent*  WhenSwipeUp;

 __declspec(property(get=get_WhenTapCenter)) ::UnityEngine::Events::UnityEvent*  WhenTapCenter;

/// @brief Field _ovrMicrogestureEventSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ovrMicrogestureEventSource, put=__cordl_internal_set__ovrMicrogestureEventSource)) ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource>  _ovrMicrogestureEventSource;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenSwipeDown, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSwipeDown, put=__cordl_internal_set__whenSwipeDown)) ::UnityEngine::Events::UnityEvent*  _whenSwipeDown;

/// @brief Field _whenSwipeLeft, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSwipeLeft, put=__cordl_internal_set__whenSwipeLeft)) ::UnityEngine::Events::UnityEvent*  _whenSwipeLeft;

/// @brief Field _whenSwipeRight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSwipeRight, put=__cordl_internal_set__whenSwipeRight)) ::UnityEngine::Events::UnityEvent*  _whenSwipeRight;

/// @brief Field _whenSwipeUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSwipeUp, put=__cordl_internal_set__whenSwipeUp)) ::UnityEngine::Events::UnityEvent*  _whenSwipeUp;

/// @brief Field _whenTapCenter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenTapCenter, put=__cordl_internal_set__whenTapCenter)) ::UnityEngine::Events::UnityEvent*  _whenTapCenter;

/// @brief Method HandleGesture, addr 0xa41a394, size 0x80, virtual false, abstract: false, final false
inline void HandleGesture(::GlobalNamespace::OVRHand_MicrogestureType  gesture) ;

/// @brief Method InjectAllMicroGestureUnityEventWrapper, addr 0xa41a414, size 0x8, virtual false, abstract: false, final false
inline void InjectAllMicroGestureUnityEventWrapper(::GlobalNamespace::OVRMicrogestureEventSource*  ovrMicrogestureEventSource) ;

/// @brief Method InjectOvrMicrogestureEventSource, addr 0xa41a41c, size 0x8, virtual false, abstract: false, final false
inline void InjectOvrMicrogestureEventSource(::GlobalNamespace::OVRMicrogestureEventSource*  ovrMicrogestureEventSource) ;

static inline ::Oculus::Interaction::MicroGestureUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa41a298, size 0xfc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa41a19c, size 0xfc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa41a170, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> const& __cordl_internal_get__ovrMicrogestureEventSource() const;

constexpr ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource>& __cordl_internal_get__ovrMicrogestureEventSource() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSwipeDown() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSwipeDown() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSwipeLeft() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSwipeLeft() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSwipeRight() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSwipeRight() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSwipeUp() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSwipeUp() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenTapCenter() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenTapCenter() ;

constexpr void __cordl_internal_set__ovrMicrogestureEventSource(::UnityW<::GlobalNamespace::OVRMicrogestureEventSource>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenSwipeDown(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSwipeLeft(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSwipeRight(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSwipeUp(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenTapCenter(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa41a424, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenSwipeDown, addr 0xa41a158, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSwipeDown() ;

/// @brief Method get_WhenSwipeLeft, addr 0xa41a160, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSwipeLeft() ;

/// @brief Method get_WhenSwipeRight, addr 0xa41a168, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSwipeRight() ;

/// @brief Method get_WhenSwipeUp, addr 0xa41a150, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSwipeUp() ;

/// @brief Method get_WhenTapCenter, addr 0xa41a148, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenTapCenter() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroGestureUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroGestureUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroGestureUnityEventWrapper(MicroGestureUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroGestureUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroGestureUnityEventWrapper(MicroGestureUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31123};

/// [SerializeField]
/// @brief Field _ovrMicrogestureEventSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource>  ____ovrMicrogestureEventSource;

/// [SerializeField]
/// @brief Field _whenTapCenter, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenTapCenter;

/// [SerializeField]
/// @brief Field _whenSwipeUp, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSwipeUp;

/// [SerializeField]
/// @brief Field _whenSwipeDown, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSwipeDown;

/// [SerializeField]
/// @brief Field _whenSwipeLeft, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSwipeLeft;

/// [SerializeField]
/// @brief Field _whenSwipeRight, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSwipeRight;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MicroGestureUnityEventWrapper, ____ovrMicrogestureEventSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MicroGestureUnityEventWrapper, ____whenTapCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MicroGestureUnityEventWrapper, ____whenSwipeUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MicroGestureUnityEventWrapper, ____whenSwipeDown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MicroGestureUnityEventWrapper, ____whenSwipeLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MicroGestureUnityEventWrapper, ____whenSwipeRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MicroGestureUnityEventWrapper, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MicroGestureUnityEventWrapper) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
