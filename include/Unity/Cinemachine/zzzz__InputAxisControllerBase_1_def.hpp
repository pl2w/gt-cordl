#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxisControllerBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__DefaultInputAxisDriver_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputAxisControllerBase_1)
namespace GlobalNamespace {
struct IInputAxisOwner_AxisDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class IInputAxisController;
}
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerBase_1_Controller;
}
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerManager_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerBase_1;
}
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerBase_1_Controller;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Cinemachine::InputAxisControllerBase_1);
MARK_GEN_REF_T_PTR(::Unity::Cinemachine::InputAxisControllerBase_1_Controller);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Cinemachine::InputAxisControllerBase_1, "Unity.Cinemachine", "InputAxisControllerBase`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Cinemachine::InputAxisControllerBase_1_Controller, "Unity.Cinemachine", "InputAxisControllerBase`1/Controller");
// [ExecuteAlways]
// [SaveDuringPlay]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Cinemachine.InputAxisControllerBase`1<T>
class CORDL_TYPE InputAxisControllerBase_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Controller = ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>;

 __declspec(property(get=get_Controllers)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*  Controllers;

/// @brief Field IgnoreTimeScale, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreTimeScale, put=__cordl_internal_set_IgnoreTimeScale)) bool  IgnoreTimeScale;

/// @brief Field ScanRecursively, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ScanRecursively, put=__cordl_internal_set_ScanRecursively)) bool  ScanRecursively;

/// @brief Field SuppressInputWhileBlending, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_SuppressInputWhileBlending, put=__cordl_internal_set_SuppressInputWhileBlending)) bool  SuppressInputWhileBlending;

/// @brief Field m_ControllerManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerManager, put=__cordl_internal_set_m_ControllerManager)) ::Unity::Cinemachine::InputAxisControllerManager_1<T>*  m_ControllerManager;

/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisController"
constexpr operator  ::Unity::Cinemachine::IInputAxisController*() noexcept;

/// @brief Method InitializeControllerDefaultsForAxis, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeControllerDefaultsForAxis(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*  controller) ;

static inline ::Unity::Cinemachine::InputAxisControllerBase_1<T>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SynchronizeControllers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SynchronizeControllers() ;

/// @brief Method UpdateControllers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateControllers() ;

/// @brief Method UpdateControllers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateControllers(float_t  deltaTime) ;

constexpr bool const& __cordl_internal_get_IgnoreTimeScale() const;

constexpr bool& __cordl_internal_get_IgnoreTimeScale() ;

constexpr bool const& __cordl_internal_get_ScanRecursively() const;

constexpr bool& __cordl_internal_get_ScanRecursively() ;

constexpr bool const& __cordl_internal_get_SuppressInputWhileBlending() const;

constexpr bool& __cordl_internal_get_SuppressInputWhileBlending() ;

constexpr ::Unity::Cinemachine::InputAxisControllerManager_1<T>* const& __cordl_internal_get_m_ControllerManager() const;

constexpr ::Unity::Cinemachine::InputAxisControllerManager_1<T>*& __cordl_internal_get_m_ControllerManager() ;

constexpr void __cordl_internal_set_IgnoreTimeScale(bool  value) ;

constexpr void __cordl_internal_set_ScanRecursively(bool  value) ;

constexpr void __cordl_internal_set_SuppressInputWhileBlending(bool  value) ;

constexpr void __cordl_internal_set_m_ControllerManager(::Unity::Cinemachine::InputAxisControllerManager_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Controllers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>* get_Controllers() ;

/// @brief Convert to "::Unity::Cinemachine::IInputAxisController"
constexpr ::Unity::Cinemachine::IInputAxisController* i___Unity__Cinemachine__IInputAxisController() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputAxisControllerBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerBase_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputAxisControllerBase_1(InputAxisControllerBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerBase_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAxisControllerBase_1(InputAxisControllerBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22340};

/// [Tooltip("If set, a recursive search for IInputAxisOwners behaviours will be performed.  Otherwise, only behaviours attached directly to this GameObject will be considered, and child objects will be ignored")]
/// @brief Field ScanRecursively, offset: 0x20, size: 0x1, def value: None
 bool  ___ScanRecursively;

/// [HideIfNoComponent(typeof(Unity.Cinemachine.CinemachineVirtualCameraBase))]
/// [Tooltip("If set, input will not be processed while the Cinemachine Camera is participating in a blend.")]
/// @brief Field SuppressInputWhileBlending, offset: 0x21, size: 0x1, def value: None
 bool  ___SuppressInputWhileBlending;

/// @brief Field IgnoreTimeScale, offset: 0x22, size: 0x1, def value: None
 bool  ___IgnoreTimeScale;

/// [Header("Driven Axes")]
/// [InputAxisControllerManager]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// @brief Field m_ControllerManager, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::InputAxisControllerManager_1<T>*  ___m_ControllerManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies System.Object, Unity.Cinemachine.DefaultInputAxisDriver
namespace Unity::Cinemachine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Cinemachine.InputAxisControllerBase`1/Controller<T>
class CORDL_TYPE InputAxisControllerBase_1_Controller : public ::System::Object {
public:
// Declarations
/// @brief Field Driver, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_Driver, put=__cordl_internal_set_Driver)) ::Unity::Cinemachine::DefaultInputAxisDriver  Driver;

/// @brief Field Enabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field Input, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Input, put=__cordl_internal_set_Input)) T  Input;

/// @brief Field InputValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_InputValue, put=__cordl_internal_set_InputValue)) float_t  InputValue;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Owner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Owner, put=__cordl_internal_set_Owner)) ::UnityW<::UnityEngine::Object>  Owner;

static inline ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>* New_ctor() ;

constexpr ::Unity::Cinemachine::DefaultInputAxisDriver const& __cordl_internal_get_Driver() const;

constexpr ::Unity::Cinemachine::DefaultInputAxisDriver& __cordl_internal_get_Driver() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr T const& __cordl_internal_get_Input() const;

constexpr T& __cordl_internal_get_Input() ;

constexpr float_t const& __cordl_internal_get_InputValue() const;

constexpr float_t& __cordl_internal_get_InputValue() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_Owner() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_Owner() ;

constexpr void __cordl_internal_set_Driver(::Unity::Cinemachine::DefaultInputAxisDriver  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_Input(T  value) ;

constexpr void __cordl_internal_set_InputValue(float_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputAxisControllerBase_1_Controller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerBase_1_Controller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputAxisControllerBase_1_Controller(InputAxisControllerBase_1_Controller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerBase_1_Controller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAxisControllerBase_1_Controller(InputAxisControllerBase_1_Controller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22339};

/// [HideInInspector]
/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// [HideInInspector]
/// @brief Field Owner, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___Owner;

/// [Tooltip("When enabled, this controller will drive the input axis")]
/// @brief Field Enabled, offset: 0x20, size: 0x1, def value: None
 bool  ___Enabled;

/// [HideFoldout]
/// @brief Field Input, offset: 0x28, size: 0x8, def value: None
 T  ___Input;

/// @brief Field InputValue, offset: 0x30, size: 0x4, def value: None
 float_t  ___InputValue;

/// [HideFoldout]
/// @brief Field Driver, offset: 0x34, size: 0xc, def value: None
 ::Unity::Cinemachine::DefaultInputAxisDriver  ___Driver;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
