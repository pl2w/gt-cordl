#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointableUnityEventWrapper)
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableUnityEventWrapper*, "Oculus.Interaction", "PointableUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableUnityEventWrapper
class CORDL_TYPE PointableUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Pointable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pointable, put=__cordl_internal_set_Pointable)) ::Oculus::Interaction::IPointable*  Pointable;

 __declspec(property(get=get_WhenCancel)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  WhenCancel;

 __declspec(property(get=get_WhenHover)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  WhenHover;

 __declspec(property(get=get_WhenMove)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  WhenMove;

 __declspec(property(get=get_WhenRelease)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  WhenRelease;

 __declspec(property(get=get_WhenSelect)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  WhenSelect;

 __declspec(property(get=get_WhenUnhover)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  WhenUnhover;

 __declspec(property(get=get_WhenUnselect)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  WhenUnselect;

/// @brief Field _pointable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointable, put=__cordl_internal_set__pointable)) ::UnityW<::UnityEngine::Object>  _pointable;

/// @brief Field _pointers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointers, put=__cordl_internal_set__pointers)) ::System::Collections::Generic::HashSet_1<int32_t>*  _pointers;

/// @brief Field _started, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenCancel, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenCancel, put=__cordl_internal_set__whenCancel)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  _whenCancel;

/// @brief Field _whenHover, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenHover, put=__cordl_internal_set__whenHover)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  _whenHover;

/// @brief Field _whenMove, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenMove, put=__cordl_internal_set__whenMove)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  _whenMove;

/// @brief Field _whenRelease, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenRelease, put=__cordl_internal_set__whenRelease)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  _whenRelease;

/// @brief Field _whenSelect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelect, put=__cordl_internal_set__whenSelect)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  _whenSelect;

/// @brief Field _whenUnhover, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnhover, put=__cordl_internal_set__whenUnhover)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  _whenUnhover;

/// @brief Field _whenUnselect, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnselect, put=__cordl_internal_set__whenUnselect)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  _whenUnselect;

/// @brief Method Awake, addr 0xa489500, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandlePointerEventRaised, addr 0xa489804, size 0x1f8, virtual false, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllPointableUnityEventWrapper, addr 0xa4899fc, size 0x4, virtual false, abstract: false, final false
inline void InjectAllPointableUnityEventWrapper(::Oculus::Interaction::IPointable*  pointable) ;

/// @brief Method InjectPointable, addr 0xa489a00, size 0xd0, virtual false, abstract: false, final false
inline void InjectPointable(::Oculus::Interaction::IPointable*  pointable) ;

static inline ::Oculus::Interaction::PointableUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa489704, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa489608, size 0xfc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa489568, size 0xa0, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IPointable* const& __cordl_internal_get_Pointable() const;

constexpr ::Oculus::Interaction::IPointable*& __cordl_internal_get_Pointable() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pointable() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pointable() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__pointers() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__pointers() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get__whenCancel() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get__whenCancel() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get__whenHover() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get__whenHover() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get__whenMove() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get__whenMove() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get__whenRelease() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get__whenRelease() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get__whenSelect() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get__whenSelect() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get__whenUnhover() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get__whenUnhover() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get__whenUnselect() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get__whenUnselect() ;

constexpr void __cordl_internal_set_Pointable(::Oculus::Interaction::IPointable*  value) ;

constexpr void __cordl_internal_set__pointable(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__pointers(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenCancel(::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__whenHover(::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__whenMove(::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__whenRelease(::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__whenSelect(::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__whenUnhover(::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__whenUnselect(::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  value) ;

/// @brief Method .ctor, addr 0xa489ad0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenCancel, addr 0xa4894f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* get_WhenCancel() ;

/// @brief Method get_WhenHover, addr 0xa4894d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* get_WhenHover() ;

/// @brief Method get_WhenMove, addr 0xa4894f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* get_WhenMove() ;

/// @brief Method get_WhenRelease, addr 0xa4894c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* get_WhenRelease() ;

/// @brief Method get_WhenSelect, addr 0xa4894e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* get_WhenSelect() ;

/// @brief Method get_WhenUnhover, addr 0xa4894d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* get_WhenUnhover() ;

/// @brief Method get_WhenUnselect, addr 0xa4894e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>* get_WhenUnselect() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableUnityEventWrapper(PointableUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableUnityEventWrapper(PointableUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16002};

/// [Tooltip("The Pointable component to wrap.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointable), new[] {  })]
/// @brief Field _pointable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pointable;

/// @brief Field Pointable, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IPointable*  ___Pointable;

/// @brief Field _pointers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____pointers;

/// [Tooltip("Raised when the IPointable is released.")]
/// [SerializeField]
/// @brief Field _whenRelease, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  ____whenRelease;

/// [Tooltip("Raised when the IPointable is hovered.")]
/// [SerializeField]
/// @brief Field _whenHover, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  ____whenHover;

/// [Tooltip("Raised when the IPointable is unhovered (it was hovered but now it isn\'t).")]
/// [SerializeField]
/// @brief Field _whenUnhover, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  ____whenUnhover;

/// [Tooltip("Raised when the IPointable is selected.")]
/// [SerializeField]
/// @brief Field _whenSelect, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  ____whenSelect;

/// [Tooltip("Raised when the IPointable is unselected (it was selected but now it isn\'t).")]
/// [SerializeField]
/// @brief Field _whenUnselect, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  ____whenUnselect;

/// [Tooltip("Raised when the IPointable moves.")]
/// [SerializeField]
/// @brief Field _whenMove, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  ____whenMove;

/// [Tooltip("Raised when the IPointable is canceled.")]
/// [SerializeField]
/// @brief Field _whenCancel, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Oculus::Interaction::PointerEvent>*  ____whenCancel;

/// @brief Field _started, offset: 0x70, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____pointable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ___Pointable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____pointers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____whenRelease) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____whenHover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____whenUnhover) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____whenSelect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____whenUnselect) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____whenMove) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____whenCancel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableUnityEventWrapper, ____started) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableUnityEventWrapper) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction
