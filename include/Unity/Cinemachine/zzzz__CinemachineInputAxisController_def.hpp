#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputAxisController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerBase_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineInputAxisController)
namespace GlobalNamespace {
struct AxisDescriptor_IInputAxisOwner_Hints;
}
namespace GlobalNamespace {
struct IInputAxisOwner_AxisDescriptor;
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
namespace Unity::Cinemachine {
class CinemachineInputAxisController_Reader;
}
namespace Unity::Cinemachine {
class CinemachineInputAxisController_SetControlDefaultsForAxis;
}
namespace Unity::Cinemachine {
class IInputAxisReader;
}
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerBase_1_Controller;
}
namespace Unity::Cinemachine {
class Reader_CinemachineInputAxisController_ControlValueReader;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineInputAxisController;
}
namespace Unity::Cinemachine {
class CinemachineInputAxisController_Reader;
}
namespace Unity::Cinemachine {
class CinemachineInputAxisController_SetControlDefaultsForAxis;
}
namespace Unity::Cinemachine {
class Reader_CinemachineInputAxisController_ControlValueReader;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineInputAxisController*);
MARK_REF_T(::Unity::Cinemachine::CinemachineInputAxisController_Reader*);
MARK_REF_T(::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*);
MARK_REF_T(::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineInputAxisController*, "Unity.Cinemachine", "CinemachineInputAxisController");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineInputAxisController_Reader*, "Unity.Cinemachine", "CinemachineInputAxisController/Reader");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*, "Unity.Cinemachine", "CinemachineInputAxisController/SetControlDefaultsForAxis");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*, "Unity.Cinemachine", "CinemachineInputAxisController/Reader/ControlValueReader");
// [ExecuteAlways]
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Input Axis Controller")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineInputAxisController.html")]
// Dependencies Unity.Cinemachine.InputAxisControllerBase`1<T>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineInputAxisController
class CORDL_TYPE CinemachineInputAxisController : public ::Unity::Cinemachine::InputAxisControllerBase_1<::Unity::Cinemachine::CinemachineInputAxisController_Reader*> {
public:
// Declarations
using Reader = ::Unity::Cinemachine::CinemachineInputAxisController_Reader;

using SetControlDefaultsForAxis = ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis;

/// @brief Field AutoEnableInputs, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoEnableInputs, put=__cordl_internal_set_AutoEnableInputs)) bool  AutoEnableInputs;

/// @brief Field PlayerIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerIndex, put=__cordl_internal_set_PlayerIndex)) int32_t  PlayerIndex;

/// @brief Field ReadControlValueOverride, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReadControlValueOverride, put=__cordl_internal_set_ReadControlValueOverride)) ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  ReadControlValueOverride;

/// @brief Field SetControlDefaults, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SetControlDefaults, put=setStaticF_SetControlDefaults)) ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*  SetControlDefaults;

/// @brief Method InitializeControllerDefaultsForAxis, addr 0xaedf434, size 0x74, virtual true, abstract: false, final false
inline void InitializeControllerDefaultsForAxis(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*  controller) ;

static inline ::Unity::Cinemachine::CinemachineInputAxisController* New_ctor() ;

/// @brief Method Reset, addr 0xaedf3d8, size 0x5c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0xaedf4a8, size 0x84, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_AutoEnableInputs() const;

constexpr bool& __cordl_internal_get_AutoEnableInputs() ;

constexpr int32_t const& __cordl_internal_get_PlayerIndex() const;

constexpr int32_t& __cordl_internal_get_PlayerIndex() ;

constexpr ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader* const& __cordl_internal_get_ReadControlValueOverride() const;

constexpr ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*& __cordl_internal_get_ReadControlValueOverride() ;

constexpr void __cordl_internal_set_AutoEnableInputs(bool  value) ;

constexpr void __cordl_internal_set_PlayerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ReadControlValueOverride(::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  value) ;

/// @brief Method .ctor, addr 0xaedf52c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis* getStaticF_SetControlDefaults() ;

static inline void setStaticF_SetControlDefaults(::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineInputAxisController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputAxisController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineInputAxisController(CinemachineInputAxisController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputAxisController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineInputAxisController(CinemachineInputAxisController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22458};

/// [Tooltip("Leave this at -1 for single-player games.  For multi-player games, set this to be the player index, and the actions will be read from that player\'s controls")]
/// @brief Field PlayerIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___PlayerIndex;

/// [Tooltip("If set, Input Actions will be auto-enabled at start")]
/// @brief Field AutoEnableInputs, offset: 0x34, size: 0x1, def value: None
 bool  ___AutoEnableInputs;

/// @brief Field ReadControlValueOverride, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  ___ReadControlValueOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisController, ___PlayerIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisController, ___AutoEnableInputs) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisController, ___ReadControlValueOverride) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineInputAxisController) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineInputAxisController/Reader
class CORDL_TYPE CinemachineInputAxisController_Reader : public ::System::Object {
public:
// Declarations
using ControlValueReader = ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader;

/// @brief Field CancelDeltaTime, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_CancelDeltaTime, put=__cordl_internal_set_CancelDeltaTime)) bool  CancelDeltaTime;

/// @brief Field Gain, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Gain, put=__cordl_internal_set_Gain)) float_t  Gain;

/// @brief Field InputAction, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputAction, put=__cordl_internal_set_InputAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  InputAction;

/// @brief Field m_CachedAction, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedAction, put=__cordl_internal_set_m_CachedAction)) ::UnityEngine::InputSystem::InputAction*  m_CachedAction;

/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisReader"
constexpr operator  ::Unity::Cinemachine::IInputAxisReader*() noexcept;

/// @brief Method GetValue, addr 0xaedf6fc, size 0x108, virtual true, abstract: false, final true
inline float_t GetValue(::UnityEngine::Object*  context, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint) ;

static inline ::Unity::Cinemachine::CinemachineInputAxisController_Reader* New_ctor() ;

/// @brief Method ReadInput, addr 0xaedfddc, size 0x2c4, virtual false, abstract: false, final false
inline float_t ReadInput(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint, ::UnityEngine::Object*  context, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  defaultReader) ;

/// @brief Method ResolveAndReadInputAction, addr 0xaedf804, size 0x2a4, virtual false, abstract: false, final false
inline float_t ResolveAndReadInputAction(::Unity::Cinemachine::CinemachineInputAxisController*  context, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint) ;

/// [CompilerGenerated]
/// @brief Method <ResolveAndReadInputAction>g__GetFirstMatch|6_0, addr 0xaedfaa8, size 0x280, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* _ResolveAndReadInputAction_g__GetFirstMatch_6_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputSystem::Users::InputUser>  user, ::UnityEngine::InputSystem::InputActionReference*  aRef) ;

constexpr bool const& __cordl_internal_get_CancelDeltaTime() const;

constexpr bool& __cordl_internal_get_CancelDeltaTime() ;

constexpr float_t const& __cordl_internal_get_Gain() const;

constexpr float_t& __cordl_internal_get_Gain() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_InputAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_InputAction() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_CachedAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_CachedAction() ;

constexpr void __cordl_internal_set_CancelDeltaTime(bool  value) ;

constexpr void __cordl_internal_set_Gain(float_t  value) ;

constexpr void __cordl_internal_set_InputAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_CachedAction(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method .ctor, addr 0xaee00a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Cinemachine::IInputAxisReader"
constexpr ::Unity::Cinemachine::IInputAxisReader* i___Unity__Cinemachine__IInputAxisReader() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineInputAxisController_Reader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputAxisController_Reader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineInputAxisController_Reader(CinemachineInputAxisController_Reader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputAxisController_Reader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineInputAxisController_Reader(CinemachineInputAxisController_Reader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22457};

/// [Tooltip("Action for the Input package (if used).")]
/// @brief Field InputAction, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___InputAction;

/// [Tooltip("The input value is multiplied by this amount prior to processing.  Controls the input power.  Set it to a negative value to invert the input")]
/// @brief Field Gain, offset: 0x18, size: 0x4, def value: None
 float_t  ___Gain;

/// @brief Field m_CachedAction, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_CachedAction;

/// [Tooltip("Enable this if the input value is inherently dependent on frame time.  For example, mouse deltas will naturally be bigger for longer frames, so in this case the default deltaTime scaling should be canceled.")]
/// @brief Field CancelDeltaTime, offset: 0x28, size: 0x1, def value: None
 bool  ___CancelDeltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisController_Reader, ___InputAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisController_Reader, ___Gain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisController_Reader, ___m_CachedAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisController_Reader, ___CancelDeltaTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineInputAxisController_Reader) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineInputAxisController/Reader/ControlValueReader
class CORDL_TYPE Reader_CinemachineInputAxisController_ControlValueReader : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaee00c4, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint, ::UnityEngine::Object*  context, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  defaultReader, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaee0174, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaee00b0, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint, ::UnityEngine::Object*  context, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  defaultReader) ;

static inline ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaedfd28, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Reader_CinemachineInputAxisController_ControlValueReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Reader_CinemachineInputAxisController_ControlValueReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Reader_CinemachineInputAxisController_ControlValueReader(Reader_CinemachineInputAxisController_ControlValueReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Reader_CinemachineInputAxisController_ControlValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Reader_CinemachineInputAxisController_ControlValueReader(Reader_CinemachineInputAxisController_ControlValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineInputAxisController/SetControlDefaultsForAxis
class CORDL_TYPE CinemachineInputAxisController_SetControlDefaultsForAxis : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaedf64c, size 0x98, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>  controller, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaedf6e4, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>  controller, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaedf638, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>  controller) ;

static inline ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaedf584, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineInputAxisController_SetControlDefaultsForAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputAxisController_SetControlDefaultsForAxis", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineInputAxisController_SetControlDefaultsForAxis(CinemachineInputAxisController_SetControlDefaultsForAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputAxisController_SetControlDefaultsForAxis", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineInputAxisController_SetControlDefaultsForAxis(CinemachineInputAxisController_SetControlDefaultsForAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
