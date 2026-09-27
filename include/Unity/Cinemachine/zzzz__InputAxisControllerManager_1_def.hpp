#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxisControllerManager_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAxisControllerManager_1)
namespace GlobalNamespace {
struct IInputAxisOwner_AxisDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class IInputAxisOwner;
}
namespace Unity::Cinemachine {
class IInputAxisResetSource;
}
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerBase_1_Controller;
}
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerManager_1_DefaultInitializer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerManager_1;
}
namespace Unity::Cinemachine {
template<typename T>
class InputAxisControllerManager_1_DefaultInitializer;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Cinemachine::InputAxisControllerManager_1);
MARK_GEN_REF_T_PTR(::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Cinemachine::InputAxisControllerManager_1, "Unity.Cinemachine", "InputAxisControllerManager`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer, "Unity.Cinemachine", "InputAxisControllerManager`1/DefaultInitializer");
// Dependencies System.Object
namespace Unity::Cinemachine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Cinemachine.InputAxisControllerManager`1<T>
class CORDL_TYPE InputAxisControllerManager_1 : public ::System::Object {
public:
// Declarations
using DefaultInitializer = ::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>;

/// @brief Field Controllers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controllers, put=__cordl_internal_set_Controllers)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*  Controllers;

/// @brief Field m_Axes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Axes, put=__cordl_internal_set_m_Axes)) ::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  m_Axes;

/// @brief Field m_AxisOwners, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AxisOwners, put=__cordl_internal_set_m_AxisOwners)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>*  m_AxisOwners;

/// @brief Field m_AxisResetters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AxisResetters, put=__cordl_internal_set_m_AxisResetters)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>*  m_AxisResetters;

/// @brief Method CreateControllers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CreateControllers(::UnityEngine::GameObject*  root, bool  scanRecursively, bool  enabled, ::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*  defaultInitializer) ;

static inline ::Unity::Cinemachine::InputAxisControllerManager_1<T>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnResetInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnResetInput() ;

/// @brief Method RegisterResetHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RegisterResetHandlers(::UnityEngine::GameObject*  root, bool  scanRecursively) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateControllers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateControllers(::UnityEngine::Object*  context, float_t  deltaTime) ;

/// @brief Method Validate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Validate() ;

/// [CompilerGenerated]
/// @brief Method <CreateControllers>g__GetControllerIndex|9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t _CreateControllers_g__GetControllerIndex_9_0(::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*  list, ::Unity::Cinemachine::IInputAxisOwner*  owner, ::StringW  axisName) ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>* const& __cordl_internal_get_Controllers() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*& __cordl_internal_get_Controllers() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>* const& __cordl_internal_get_m_Axes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*& __cordl_internal_get_m_Axes() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>* const& __cordl_internal_get_m_AxisOwners() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>*& __cordl_internal_get_m_AxisOwners() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>* const& __cordl_internal_get_m_AxisResetters() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>*& __cordl_internal_get_m_AxisResetters() ;

constexpr void __cordl_internal_set_Controllers(::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*  value) ;

constexpr void __cordl_internal_set_m_Axes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  value) ;

constexpr void __cordl_internal_set_m_AxisOwners(::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>*  value) ;

constexpr void __cordl_internal_set_m_AxisResetters(::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputAxisControllerManager_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerManager_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputAxisControllerManager_1(InputAxisControllerManager_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerManager_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAxisControllerManager_1(InputAxisControllerManager_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22338};

/// [NonReorderable]
/// @brief Field Controllers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*  ___Controllers;

/// @brief Field m_Axes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  ___m_Axes;

/// @brief Field m_AxisOwners, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>*  ___m_AxisOwners;

/// @brief Field m_AxisResetters, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>*  ___m_AxisResetters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Cinemachine.InputAxisControllerManager`1/DefaultInitializer<T>
class CORDL_TYPE InputAxisControllerManager_1_DefaultInitializer : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*  controller, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*  controller) ;

static inline ::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputAxisControllerManager_1_DefaultInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerManager_1_DefaultInitializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputAxisControllerManager_1_DefaultInitializer(InputAxisControllerManager_1_DefaultInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputAxisControllerManager_1_DefaultInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAxisControllerManager_1_DefaultInitializer(InputAxisControllerManager_1_DefaultInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
