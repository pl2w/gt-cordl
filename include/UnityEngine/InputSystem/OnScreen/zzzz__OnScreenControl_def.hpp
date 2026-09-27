#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_OnScreenDeviceInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenControl)
namespace GlobalNamespace {
struct OnScreenControl_OnScreenDeviceInfo;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenControl;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::OnScreen::OnScreenControl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::OnScreen::OnScreenControl*, "UnityEngine.InputSystem.OnScreen", "OnScreenControl");
// Dependencies UnityEngine.InputSystem.LowLevel.InputEventPtr, UnityEngine.InputSystem.OnScreen.OnScreenControl::OnScreenDeviceInfo, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>, UnityEngine.MonoBehaviour
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenControl
class CORDL_TYPE OnScreenControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnScreenDeviceInfo = ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo;

 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_controlPath, put=set_controlPath)) ::StringW  controlPath;

 __declspec(property(get=get_controlPathInternal, put=set_controlPathInternal)) ::StringW  controlPathInternal;

/// @brief Field m_Control, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Control, put=__cordl_internal_set_m_Control)) ::UnityEngine::InputSystem::InputControl*  m_Control;

/// @brief Field m_InputEventPtr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputEventPtr, put=__cordl_internal_set_m_InputEventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_InputEventPtr;

/// @brief Field m_NextControlOnDevice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NextControlOnDevice, put=__cordl_internal_set_m_NextControlOnDevice)) ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>  m_NextControlOnDevice;

/// @brief Field s_OnScreenDevices, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_OnScreenDevices, put=setStaticF_s_OnScreenDevices)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>  s_OnScreenDevices;

/// @brief Field s_nbActiveInstances, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_nbActiveInstances, put=setStaticF_s_nbActiveInstances)) int32_t  s_nbActiveInstances;

/// @brief Method GetWarningMessage, addr 0xafdcfa8, size 0x5c, virtual false, abstract: false, final false
inline ::StringW GetWarningMessage() ;

static inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl* New_ctor() ;

/// @brief Method OnDisable, addr 0xafdcc2c, size 0x248, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xafdc9bc, size 0x270, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SendValueToControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void SendValueToControl(TValue  value) ;

/// @brief Method SentDefaultValueToControl, addr 0xafdc848, size 0x124, virtual false, abstract: false, final false
inline void SentDefaultValueToControl() ;

/// @brief Method SetupInputControl, addr 0xafdbec8, size 0x864, virtual false, abstract: false, final false
inline void SetupInputControl() ;

constexpr ::UnityEngine::InputSystem::InputControl* const& __cordl_internal_get_m_Control() const;

constexpr ::UnityEngine::InputSystem::InputControl*& __cordl_internal_get_m_Control() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_m_InputEventPtr() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_m_InputEventPtr() ;

constexpr ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> const& __cordl_internal_get_m_NextControlOnDevice() const;

constexpr ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>& __cordl_internal_get_m_NextControlOnDevice() ;

constexpr void __cordl_internal_set_m_Control(::UnityEngine::InputSystem::InputControl*  value) ;

constexpr void __cordl_internal_set_m_InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr void __cordl_internal_set_m_NextControlOnDevice(::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>  value) ;

/// @brief Method .ctor, addr 0xafdbe7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo> getStaticF_s_OnScreenDevices() ;

static inline int32_t getStaticF_s_nbActiveInstances() ;

/// @brief Method get_HasAnyActive, addr 0xafdc96c, size 0x50, virtual false, abstract: false, final false
static inline bool get_HasAnyActive() ;

/// @brief Method get_control, addr 0xafdc72c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method get_controlPath, addr 0xafdbe84, size 0xc, virtual false, abstract: false, final false
inline ::StringW get_controlPath() ;

/// @brief Method get_controlPathInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_controlPathInternal() ;

static inline void setStaticF_s_OnScreenDevices(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>  value) ;

static inline void setStaticF_s_nbActiveInstances(int32_t  value) ;

/// @brief Method set_controlPath, addr 0xafdbe90, size 0x38, virtual false, abstract: false, final false
inline void set_controlPath(::StringW  value) ;

/// @brief Method set_controlPathInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_controlPathInternal(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnScreenControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnScreenControl(OnScreenControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnScreenControl(OnScreenControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13608};

/// @brief Field m_Control, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  ___m_Control;

/// @brief Field m_NextControlOnDevice, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>  ___m_NextControlOnDevice;

/// @brief Field m_InputEventPtr, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  ___m_InputEventPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_Control) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_NextControlOnDevice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_InputEventPtr) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::OnScreen::OnScreenControl) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::OnScreen
