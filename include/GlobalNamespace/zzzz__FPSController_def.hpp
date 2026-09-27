#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FPSController)
namespace GlobalNamespace {
class FPSController_OnStateChangeEventHandler;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSController;
}
namespace GlobalNamespace {
class FPSController_OnStateChangeEventHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FPSController*);
MARK_REF_T(::GlobalNamespace::FPSController_OnStateChangeEventHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FPSController*, "", "FPSController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FPSController_OnStateChangeEventHandler*, "", "FPSController/OnStateChangeEventHandler");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FPSController
class CORDL_TYPE FPSController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnStateChangeEventHandler = ::GlobalNamespace::FPSController_OnStateChangeEventHandler;

/// @brief Field HandMask, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_HandMask, put=__cordl_internal_set_HandMask)) ::UnityEngine::LayerMask  HandMask;

/// @brief Field OnStartEvent, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartEvent, put=__cordl_internal_set_OnStartEvent)) ::GlobalNamespace::FPSController_OnStateChangeEventHandler*  OnStartEvent;

/// @brief Field OnStopEvent, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopEvent, put=__cordl_internal_set_OnStopEvent)) ::GlobalNamespace::FPSController_OnStateChangeEventHandler*  OnStopEvent;

/// @brief Field baseMoveSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseMoveSpeed, put=__cordl_internal_set_baseMoveSpeed)) float_t  baseMoveSpeed;

/// @brief Field clampGrab, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get_clampGrab, put=__cordl_internal_set_clampGrab)) bool  clampGrab;

/// @brief Field controlRightHand, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_controlRightHand, put=__cordl_internal_set_controlRightHand)) bool  controlRightHand;

/// @brief Field ctrlMoveSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ctrlMoveSpeed, put=__cordl_internal_set_ctrlMoveSpeed)) float_t  ctrlMoveSpeed;

/// @brief Field leftControllerPosOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftControllerPosOffset, put=__cordl_internal_set_leftControllerPosOffset)) ::UnityEngine::Vector3  leftControllerPosOffset;

/// @brief Field leftControllerRotationOffset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftControllerRotationOffset, put=__cordl_internal_set_leftControllerRotationOffset)) ::UnityEngine::Vector3  leftControllerRotationOffset;

/// @brief Field lookHorizontal, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookHorizontal, put=__cordl_internal_set_lookHorizontal)) float_t  lookHorizontal;

/// @brief Field lookVertical, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookVertical, put=__cordl_internal_set_lookVertical)) float_t  lookVertical;

/// @brief Field noclipLeftControllerPosOffset, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_noclipLeftControllerPosOffset, put=__cordl_internal_set_noclipLeftControllerPosOffset)) ::UnityEngine::Vector3  noclipLeftControllerPosOffset;

/// @brief Field noclipLeftControllerRotationOffset, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_noclipLeftControllerRotationOffset, put=__cordl_internal_set_noclipLeftControllerRotationOffset)) ::UnityEngine::Vector3  noclipLeftControllerRotationOffset;

/// @brief Field noclipRightControllerPosOffset, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_noclipRightControllerPosOffset, put=__cordl_internal_set_noclipRightControllerPosOffset)) ::UnityEngine::Vector3  noclipRightControllerPosOffset;

/// @brief Field noclipRightControllerRotationOffset, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_noclipRightControllerRotationOffset, put=__cordl_internal_set_noclipRightControllerRotationOffset)) ::UnityEngine::Vector3  noclipRightControllerRotationOffset;

/// @brief Field rightControllerPosOffset, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightControllerPosOffset, put=__cordl_internal_set_rightControllerPosOffset)) ::UnityEngine::Vector3  rightControllerPosOffset;

/// @brief Field rightControllerRotationOffset, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightControllerRotationOffset, put=__cordl_internal_set_rightControllerRotationOffset)) ::UnityEngine::Vector3  rightControllerRotationOffset;

/// @brief Field shiftMoveSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftMoveSpeed, put=__cordl_internal_set_shiftMoveSpeed)) float_t  shiftMoveSpeed;

/// @brief Field toggleGrab, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_toggleGrab, put=__cordl_internal_set_toggleGrab)) bool  toggleGrab;

static inline ::GlobalNamespace::FPSController* New_ctor() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_HandMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_HandMask() ;

constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler* const& __cordl_internal_get_OnStartEvent() const;

constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler*& __cordl_internal_get_OnStartEvent() ;

constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler* const& __cordl_internal_get_OnStopEvent() const;

constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler*& __cordl_internal_get_OnStopEvent() ;

constexpr float_t const& __cordl_internal_get_baseMoveSpeed() const;

constexpr float_t& __cordl_internal_get_baseMoveSpeed() ;

constexpr bool const& __cordl_internal_get_clampGrab() const;

constexpr bool& __cordl_internal_get_clampGrab() ;

constexpr bool const& __cordl_internal_get_controlRightHand() const;

constexpr bool& __cordl_internal_get_controlRightHand() ;

constexpr float_t const& __cordl_internal_get_ctrlMoveSpeed() const;

constexpr float_t& __cordl_internal_get_ctrlMoveSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftControllerPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftControllerPosOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftControllerRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftControllerRotationOffset() ;

constexpr float_t const& __cordl_internal_get_lookHorizontal() const;

constexpr float_t& __cordl_internal_get_lookHorizontal() ;

constexpr float_t const& __cordl_internal_get_lookVertical() const;

constexpr float_t& __cordl_internal_get_lookVertical() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_noclipLeftControllerPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_noclipLeftControllerPosOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_noclipLeftControllerRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_noclipLeftControllerRotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_noclipRightControllerPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_noclipRightControllerPosOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_noclipRightControllerRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_noclipRightControllerRotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightControllerPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightControllerPosOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightControllerRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightControllerRotationOffset() ;

constexpr float_t const& __cordl_internal_get_shiftMoveSpeed() const;

constexpr float_t& __cordl_internal_get_shiftMoveSpeed() ;

constexpr bool const& __cordl_internal_get_toggleGrab() const;

constexpr bool& __cordl_internal_get_toggleGrab() ;

constexpr void __cordl_internal_set_HandMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value) ;

constexpr void __cordl_internal_set_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value) ;

constexpr void __cordl_internal_set_baseMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_clampGrab(bool  value) ;

constexpr void __cordl_internal_set_controlRightHand(bool  value) ;

constexpr void __cordl_internal_set_ctrlMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_leftControllerPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftControllerRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lookHorizontal(float_t  value) ;

constexpr void __cordl_internal_set_lookVertical(float_t  value) ;

constexpr void __cordl_internal_set_noclipLeftControllerPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_noclipLeftControllerRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_noclipRightControllerPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_noclipRightControllerRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightControllerPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightControllerRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_shiftMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_toggleGrab(bool  value) ;

/// @brief Method .ctor, addr 0x5adf884, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnStartEvent, addr 0x5adf614, size 0x9c, virtual false, abstract: false, final false
inline void add_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStopEvent, addr 0x5adf74c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartEvent, addr 0x5adf6b0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStopEvent, addr 0x5adf7e8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FPSController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FPSController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FPSController(FPSController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPSController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPSController(FPSController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3439};

/// @brief Field baseMoveSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___baseMoveSpeed;

/// @brief Field shiftMoveSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___shiftMoveSpeed;

/// @brief Field ctrlMoveSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___ctrlMoveSpeed;

/// @brief Field lookHorizontal, offset: 0x2c, size: 0x4, def value: None
 float_t  ___lookHorizontal;

/// @brief Field lookVertical, offset: 0x30, size: 0x4, def value: None
 float_t  ___lookVertical;

/// [SerializeField]
/// @brief Field leftControllerPosOffset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftControllerPosOffset;

/// [SerializeField]
/// @brief Field leftControllerRotationOffset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftControllerRotationOffset;

/// [SerializeField]
/// @brief Field rightControllerPosOffset, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightControllerPosOffset;

/// [SerializeField]
/// @brief Field rightControllerRotationOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightControllerRotationOffset;

/// [SerializeField]
/// @brief Field noclipLeftControllerPosOffset, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___noclipLeftControllerPosOffset;

/// [SerializeField]
/// @brief Field noclipLeftControllerRotationOffset, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___noclipLeftControllerRotationOffset;

/// [SerializeField]
/// @brief Field noclipRightControllerPosOffset, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___noclipRightControllerPosOffset;

/// [SerializeField]
/// @brief Field noclipRightControllerRotationOffset, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___noclipRightControllerRotationOffset;

/// [SerializeField]
/// @brief Field toggleGrab, offset: 0x94, size: 0x1, def value: None
 bool  ___toggleGrab;

/// [SerializeField]
/// @brief Field clampGrab, offset: 0x95, size: 0x1, def value: None
 bool  ___clampGrab;

/// [CompilerGenerated]
/// @brief Field OnStartEvent, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::FPSController_OnStateChangeEventHandler*  ___OnStartEvent;

/// [CompilerGenerated]
/// @brief Field OnStopEvent, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::FPSController_OnStateChangeEventHandler*  ___OnStopEvent;

/// @brief Field controlRightHand, offset: 0xa8, size: 0x1, def value: None
 bool  ___controlRightHand;

/// @brief Field HandMask, offset: 0xac, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___HandMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FPSController, ___baseMoveSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___shiftMoveSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___ctrlMoveSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___lookHorizontal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___lookVertical) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___leftControllerPosOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___leftControllerRotationOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___rightControllerPosOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___rightControllerRotationOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___noclipLeftControllerPosOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___noclipLeftControllerRotationOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___noclipRightControllerPosOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___noclipRightControllerRotationOffset) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___toggleGrab) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___clampGrab) == 0x95, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___OnStartEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___OnStopEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___controlRightHand) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSController, ___HandMask) == 0xac, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FPSController) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: FPSController/OnStateChangeEventHandler
class CORDL_TYPE FPSController_OnStateChangeEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5adf98c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5adf9a8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5adf978, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::FPSController_OnStateChangeEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5adf8dc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FPSController_OnStateChangeEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FPSController_OnStateChangeEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FPSController_OnStateChangeEventHandler(FPSController_OnStateChangeEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPSController_OnStateChangeEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPSController_OnStateChangeEventHandler(FPSController_OnStateChangeEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FPSController_OnStateChangeEventHandler) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
