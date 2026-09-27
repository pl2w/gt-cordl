#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputButtonReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_InputSourceMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputButtonReader)
namespace GlobalNamespace {
struct XRInputButtonReader_BypassScope;
}
namespace GlobalNamespace {
struct XRInputButtonReader_InputSourceMode;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class IXRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class UnityObjectReferenceCache_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputButtonReader");
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader::InputSourceMode
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader
class CORDL_TYPE XRInputButtonReader : public ::System::Object {
public:
// Declarations
using BypassScope = ::GlobalNamespace::XRInputButtonReader_BypassScope;

using InputSourceMode = ::GlobalNamespace::XRInputButtonReader_InputSourceMode;

/// @brief Field <bypass>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__bypass_k__BackingField, put=__cordl_internal_set__bypass_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  _bypass_k__BackingField;

 __declspec(property(get=get_bypass, put=set_bypass)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  bypass;

 __declspec(property(get=get_inputActionPerformed, put=set_inputActionPerformed)) ::UnityEngine::InputSystem::InputAction*  inputActionPerformed;

 __declspec(property(get=get_inputActionReferencePerformed, put=set_inputActionReferencePerformed)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  inputActionReferencePerformed;

 __declspec(property(get=get_inputActionReferenceValue, put=set_inputActionReferenceValue)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  inputActionReferenceValue;

 __declspec(property(get=get_inputActionValue, put=set_inputActionValue)) ::UnityEngine::InputSystem::InputAction*  inputActionValue;

 __declspec(property(get=get_inputSourceMode, put=set_inputSourceMode)) ::GlobalNamespace::XRInputButtonReader_InputSourceMode  inputSourceMode;

/// @brief Field m_CallingBypass, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CallingBypass, put=__cordl_internal_set_m_CallingBypass)) bool  m_CallingBypass;

/// @brief Field m_InputActionPerformed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionPerformed, put=__cordl_internal_set_m_InputActionPerformed)) ::UnityEngine::InputSystem::InputAction*  m_InputActionPerformed;

/// @brief Field m_InputActionReferencePerformed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionReferencePerformed, put=__cordl_internal_set_m_InputActionReferencePerformed)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_InputActionReferencePerformed;

/// @brief Field m_InputActionReferencePerformedCache, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionReferencePerformedCache, put=__cordl_internal_set_m_InputActionReferencePerformedCache)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  m_InputActionReferencePerformedCache;

/// @brief Field m_InputActionReferenceValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionReferenceValue, put=__cordl_internal_set_m_InputActionReferenceValue)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_InputActionReferenceValue;

/// @brief Field m_InputActionReferenceValueCache, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionReferenceValueCache, put=__cordl_internal_set_m_InputActionReferenceValueCache)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  m_InputActionReferenceValueCache;

/// @brief Field m_InputActionValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionValue, put=__cordl_internal_set_m_InputActionValue)) ::UnityEngine::InputSystem::InputAction*  m_InputActionValue;

/// @brief Field m_InputSourceMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputSourceMode, put=__cordl_internal_set_m_InputSourceMode)) ::GlobalNamespace::XRInputButtonReader_InputSourceMode  m_InputSourceMode;

/// @brief Field m_ManualFrameCompleted, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManualFrameCompleted, put=__cordl_internal_set_m_ManualFrameCompleted)) int32_t  m_ManualFrameCompleted;

/// @brief Field m_ManualFramePerformed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManualFramePerformed, put=__cordl_internal_set_m_ManualFramePerformed)) int32_t  m_ManualFramePerformed;

/// @brief Field m_ManualPerformed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ManualPerformed, put=__cordl_internal_set_m_ManualPerformed)) bool  m_ManualPerformed;

/// @brief Field m_ManualQueuePerformed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ManualQueuePerformed, put=__cordl_internal_set_m_ManualQueuePerformed)) bool  m_ManualQueuePerformed;

/// @brief Field m_ManualQueueTargetFrame, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManualQueueTargetFrame, put=__cordl_internal_set_m_ManualQueueTargetFrame)) int32_t  m_ManualQueueTargetFrame;

/// @brief Field m_ManualQueueValue, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManualQueueValue, put=__cordl_internal_set_m_ManualQueueValue)) float_t  m_ManualQueueValue;

/// @brief Field m_ManualQueueWasCompletedThisFrame, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ManualQueueWasCompletedThisFrame, put=__cordl_internal_set_m_ManualQueueWasCompletedThisFrame)) bool  m_ManualQueueWasCompletedThisFrame;

/// @brief Field m_ManualQueueWasPerformedThisFrame, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ManualQueueWasPerformedThisFrame, put=__cordl_internal_set_m_ManualQueueWasPerformedThisFrame)) bool  m_ManualQueueWasPerformedThisFrame;

/// @brief Field m_ManualValue, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManualValue, put=__cordl_internal_set_m_ManualValue)) float_t  m_ManualValue;

/// @brief Field m_ObjectReference, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectReference, put=__cordl_internal_set_m_ObjectReference)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*,::UnityW<::UnityEngine::Object>>*  m_ObjectReference;

/// @brief Field m_ObjectReferenceObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectReferenceObject, put=__cordl_internal_set_m_ObjectReferenceObject)) ::UnityW<::UnityEngine::Object>  m_ObjectReferenceObject;

 __declspec(property(get=get_manualFrameCompleted, put=set_manualFrameCompleted)) int32_t  manualFrameCompleted;

 __declspec(property(get=get_manualFramePerformed, put=set_manualFramePerformed)) int32_t  manualFramePerformed;

 __declspec(property(get=get_manualPerformed, put=set_manualPerformed)) bool  manualPerformed;

 __declspec(property(get=get_manualValue, put=set_manualValue)) float_t  manualValue;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept;

/// @brief Method DisableDirectActionIfModeUsed, addr 0xb4c8ff0, size 0x44, virtual false, abstract: false, final false
inline void DisableDirectActionIfModeUsed() ;

/// @brief Method EnableDirectActionIfModeUsed, addr 0xb4c8fac, size 0x44, virtual false, abstract: false, final false
inline void EnableDirectActionIfModeUsed() ;

/// @brief Method GetObjectReference, addr 0xb4c9034, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* GetObjectReference() ;

/// @brief Method IsPerformed, addr 0xb4c92cc, size 0x3c, virtual false, abstract: false, final false
static inline bool IsPerformed(::UnityEngine::InputSystem::InputAction*  action) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* New_ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* New_ctor(::StringW  name, ::StringW  valueName, bool  wantsInitialStateCheck, ::GlobalNamespace::XRInputButtonReader_InputSourceMode  inputSourceMode) ;

/// @brief Method QueueManualState, addr 0xb4c90e4, size 0x20, virtual false, abstract: false, final false
inline void QueueManualState(bool  performed, float_t  value) ;

/// @brief Method QueueManualState, addr 0xb4c9104, size 0x130, virtual false, abstract: false, final false
inline void QueueManualState(bool  performed, float_t  value, bool  performedThisFrame, bool  completedThisFrame) ;

/// @brief Method ReadIsPerformed, addr 0xb4c6790, size 0x234, virtual true, abstract: false, final true
inline bool ReadIsPerformed() ;

/// @brief Method ReadValue, addr 0xb4c9384, size 0x23c, virtual true, abstract: false, final true
inline float_t ReadValue() ;

/// @brief Method ReadValueToFloat, addr 0xb4c95c0, size 0x1bc, virtual false, abstract: false, final false
inline float_t ReadValueToFloat(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method ReadWasCompletedThisFrame, addr 0xb4c6cd0, size 0x258, virtual true, abstract: false, final true
inline bool ReadWasCompletedThisFrame() ;

/// @brief Method ReadWasPerformedThisFrame, addr 0xb4c4d8c, size 0x258, virtual true, abstract: false, final true
inline bool ReadWasPerformedThisFrame() ;

/// @brief Method RefreshManualIfNeeded, addr 0xb4c9234, size 0x6c, virtual false, abstract: false, final false
inline void RefreshManualIfNeeded() ;

/// @brief Method SetObjectReference, addr 0xb4c9088, size 0x5c, virtual false, abstract: false, final false
inline void SetObjectReference(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value) ;

/// @brief Method TryGetInputActionReferencePerformed, addr 0xb4c9308, size 0x5c, virtual false, abstract: false, final false
inline bool TryGetInputActionReferencePerformed(::by_ref<::UnityEngine::InputSystem::InputActionReference*>  reference) ;

/// @brief Method TryGetInputActionReferenceValue, addr 0xb4c977c, size 0x5c, virtual false, abstract: false, final false
inline bool TryGetInputActionReferenceValue(::by_ref<::UnityEngine::InputSystem::InputActionReference*>  reference) ;

/// @brief Method TryReadValue, addr 0xb4c9a34, size 0x44, virtual false, abstract: false, final false
inline bool TryReadValue(::UnityEngine::InputSystem::InputAction*  action, ::by_ref<float_t>  value) ;

/// @brief Method TryReadValue, addr 0xb4c97d8, size 0x25c, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<float_t>  value) ;

/// @brief Method WasCompletedThisFrame, addr 0xb4c9374, size 0x10, virtual false, abstract: false, final false
static inline bool WasCompletedThisFrame(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method WasPerformedThisFrame, addr 0xb4c9364, size 0x10, virtual false, abstract: false, final false
static inline bool WasPerformedThisFrame(::UnityEngine::InputSystem::InputAction*  action) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* const& __cordl_internal_get__bypass_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*& __cordl_internal_get__bypass_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_CallingBypass() const;

constexpr bool& __cordl_internal_get_m_CallingBypass() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_InputActionPerformed() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_InputActionPerformed() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_InputActionReferencePerformed() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_InputActionReferencePerformed() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>* const& __cordl_internal_get_m_InputActionReferencePerformedCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*& __cordl_internal_get_m_InputActionReferencePerformedCache() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_InputActionReferenceValue() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_InputActionReferenceValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>* const& __cordl_internal_get_m_InputActionReferenceValueCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*& __cordl_internal_get_m_InputActionReferenceValueCache() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_InputActionValue() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_InputActionValue() ;

constexpr ::GlobalNamespace::XRInputButtonReader_InputSourceMode const& __cordl_internal_get_m_InputSourceMode() const;

constexpr ::GlobalNamespace::XRInputButtonReader_InputSourceMode& __cordl_internal_get_m_InputSourceMode() ;

constexpr int32_t const& __cordl_internal_get_m_ManualFrameCompleted() const;

constexpr int32_t& __cordl_internal_get_m_ManualFrameCompleted() ;

constexpr int32_t const& __cordl_internal_get_m_ManualFramePerformed() const;

constexpr int32_t& __cordl_internal_get_m_ManualFramePerformed() ;

constexpr bool const& __cordl_internal_get_m_ManualPerformed() const;

constexpr bool& __cordl_internal_get_m_ManualPerformed() ;

constexpr bool const& __cordl_internal_get_m_ManualQueuePerformed() const;

constexpr bool& __cordl_internal_get_m_ManualQueuePerformed() ;

constexpr int32_t const& __cordl_internal_get_m_ManualQueueTargetFrame() const;

constexpr int32_t& __cordl_internal_get_m_ManualQueueTargetFrame() ;

constexpr float_t const& __cordl_internal_get_m_ManualQueueValue() const;

constexpr float_t& __cordl_internal_get_m_ManualQueueValue() ;

constexpr bool const& __cordl_internal_get_m_ManualQueueWasCompletedThisFrame() const;

constexpr bool& __cordl_internal_get_m_ManualQueueWasCompletedThisFrame() ;

constexpr bool const& __cordl_internal_get_m_ManualQueueWasPerformedThisFrame() const;

constexpr bool& __cordl_internal_get_m_ManualQueueWasPerformedThisFrame() ;

constexpr float_t const& __cordl_internal_get_m_ManualValue() const;

constexpr float_t& __cordl_internal_get_m_ManualValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_ObjectReference() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_ObjectReference() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_ObjectReferenceObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_ObjectReferenceObject() ;

constexpr void __cordl_internal_set__bypass_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_CallingBypass(bool  value) ;

constexpr void __cordl_internal_set_m_InputActionPerformed(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_InputActionReferencePerformed(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_InputActionReferencePerformedCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  value) ;

constexpr void __cordl_internal_set_m_InputActionReferenceValue(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_InputActionReferenceValueCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  value) ;

constexpr void __cordl_internal_set_m_InputActionValue(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_InputSourceMode(::GlobalNamespace::XRInputButtonReader_InputSourceMode  value) ;

constexpr void __cordl_internal_set_m_ManualFrameCompleted(int32_t  value) ;

constexpr void __cordl_internal_set_m_ManualFramePerformed(int32_t  value) ;

constexpr void __cordl_internal_set_m_ManualPerformed(bool  value) ;

constexpr void __cordl_internal_set_m_ManualQueuePerformed(bool  value) ;

constexpr void __cordl_internal_set_m_ManualQueueTargetFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_ManualQueueValue(float_t  value) ;

constexpr void __cordl_internal_set_m_ManualQueueWasCompletedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_ManualQueueWasPerformedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_ManualValue(float_t  value) ;

constexpr void __cordl_internal_set_m_ObjectReference(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_ObjectReferenceObject(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xb4c8cd0, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb4c8dd8, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  valueName, bool  wantsInitialStateCheck, ::GlobalNamespace::XRInputButtonReader_InputSourceMode  inputSourceMode) ;

/// [CompilerGenerated]
/// @brief Method get_bypass, addr 0xb4c8cc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* get_bypass() ;

/// @brief Method get_inputActionPerformed, addr 0xb4c8c40, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_inputActionPerformed() ;

/// @brief Method get_inputActionReferencePerformed, addr 0xb4c8c60, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_inputActionReferencePerformed() ;

/// @brief Method get_inputActionReferenceValue, addr 0xb4c8c70, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_inputActionReferenceValue() ;

/// @brief Method get_inputActionValue, addr 0xb4c8c50, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_inputActionValue() ;

/// @brief Method get_inputSourceMode, addr 0xb4c8c30, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInputButtonReader_InputSourceMode get_inputSourceMode() ;

/// @brief Method get_manualFrameCompleted, addr 0xb4c8cb0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_manualFrameCompleted() ;

/// @brief Method get_manualFramePerformed, addr 0xb4c8ca0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_manualFramePerformed() ;

/// @brief Method get_manualPerformed, addr 0xb4c8c80, size 0x8, virtual false, abstract: false, final false
inline bool get_manualPerformed() ;

/// @brief Method get_manualValue, addr 0xb4c8c90, size 0x8, virtual false, abstract: false, final false
inline float_t get_manualValue() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputButtonReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_bypass, addr 0xb4c8cc8, size 0x8, virtual false, abstract: false, final false
inline void set_bypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value) ;

/// @brief Method set_inputActionPerformed, addr 0xb4c8c48, size 0x8, virtual false, abstract: false, final false
inline void set_inputActionPerformed(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method set_inputActionReferencePerformed, addr 0xb4c8c68, size 0x8, virtual false, abstract: false, final false
inline void set_inputActionReferencePerformed(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_inputActionReferenceValue, addr 0xb4c8c78, size 0x8, virtual false, abstract: false, final false
inline void set_inputActionReferenceValue(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_inputActionValue, addr 0xb4c8c58, size 0x8, virtual false, abstract: false, final false
inline void set_inputActionValue(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method set_inputSourceMode, addr 0xb4c8c38, size 0x8, virtual false, abstract: false, final false
inline void set_inputSourceMode(::GlobalNamespace::XRInputButtonReader_InputSourceMode  value) ;

/// @brief Method set_manualFrameCompleted, addr 0xb4c8cb8, size 0x8, virtual false, abstract: false, final false
inline void set_manualFrameCompleted(int32_t  value) ;

/// @brief Method set_manualFramePerformed, addr 0xb4c8ca8, size 0x8, virtual false, abstract: false, final false
inline void set_manualFramePerformed(int32_t  value) ;

/// @brief Method set_manualPerformed, addr 0xb4c8c88, size 0x8, virtual false, abstract: false, final false
inline void set_manualPerformed(bool  value) ;

/// @brief Method set_manualValue, addr 0xb4c8c98, size 0x8, virtual false, abstract: false, final false
inline void set_manualValue(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputButtonReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputButtonReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputButtonReader(XRInputButtonReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputButtonReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputButtonReader(XRInputButtonReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11647};

/// [SerializeField]
/// @brief Field m_InputSourceMode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::XRInputButtonReader_InputSourceMode  ___m_InputSourceMode;

/// [SerializeField]
/// @brief Field m_InputActionPerformed, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_InputActionPerformed;

/// [SerializeField]
/// @brief Field m_InputActionValue, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_InputActionValue;

/// [SerializeField]
/// @brief Field m_InputActionReferencePerformed, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_InputActionReferencePerformed;

/// [SerializeField]
/// @brief Field m_InputActionReferenceValue, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_InputActionReferenceValue;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputButtonReader))]
/// @brief Field m_ObjectReferenceObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_ObjectReferenceObject;

/// [SerializeField]
/// @brief Field m_ManualPerformed, offset: 0x40, size: 0x1, def value: None
 bool  ___m_ManualPerformed;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_ManualValue, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_ManualValue;

/// [SerializeField]
/// @brief Field m_ManualQueuePerformed, offset: 0x48, size: 0x1, def value: None
 bool  ___m_ManualQueuePerformed;

/// [SerializeField]
/// @brief Field m_ManualQueueWasPerformedThisFrame, offset: 0x49, size: 0x1, def value: None
 bool  ___m_ManualQueueWasPerformedThisFrame;

/// [SerializeField]
/// @brief Field m_ManualQueueWasCompletedThisFrame, offset: 0x4a, size: 0x1, def value: None
 bool  ___m_ManualQueueWasCompletedThisFrame;

/// [SerializeField]
/// @brief Field m_ManualQueueValue, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_ManualQueueValue;

/// [SerializeField]
/// @brief Field m_ManualQueueTargetFrame, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_ManualQueueTargetFrame;

/// @brief Field m_ManualFramePerformed, offset: 0x54, size: 0x4, def value: None
 int32_t  ___m_ManualFramePerformed;

/// @brief Field m_ManualFrameCompleted, offset: 0x58, size: 0x4, def value: None
 int32_t  ___m_ManualFrameCompleted;

/// [CompilerGenerated]
/// @brief Field <bypass>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  ____bypass_k__BackingField;

/// @brief Field m_CallingBypass, offset: 0x68, size: 0x1, def value: None
 bool  ___m_CallingBypass;

/// @brief Field m_ObjectReference, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*,::UnityW<::UnityEngine::Object>>*  ___m_ObjectReference;

/// @brief Field m_InputActionReferencePerformedCache, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  ___m_InputActionReferencePerformedCache;

/// @brief Field m_InputActionReferenceValueCache, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  ___m_InputActionReferenceValueCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_InputSourceMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_InputActionPerformed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_InputActionValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_InputActionReferencePerformed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_InputActionReferenceValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ObjectReferenceObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualPerformed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualValue) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualQueuePerformed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualQueueWasPerformedThisFrame) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualQueueWasCompletedThisFrame) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualQueueValue) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualQueueTargetFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualFramePerformed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ManualFrameCompleted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ____bypass_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_CallingBypass) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_ObjectReference) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_InputActionReferencePerformedCache) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader, ___m_InputActionReferenceValueCache) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader) == 0x88, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
