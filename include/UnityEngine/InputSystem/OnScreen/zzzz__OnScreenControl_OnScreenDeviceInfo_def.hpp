#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenControl_OnScreenDeviceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenControl_OnScreenDeviceInfo)
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct OnScreenControl_OnScreenDeviceInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo, "UnityEngine.InputSystem.OnScreen", "OnScreenControl/OnScreenDeviceInfo");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo
struct CORDL_TYPE OnScreenControl_OnScreenDeviceInfo {
public:
// Declarations
/// @brief Method AddControl, addr 0xafdc7e4, size 0x64, virtual false, abstract: false, final false
inline ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  control) ;

/// @brief Method Destroy, addr 0xafdc734, size 0xb0, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method RemoveControl, addr 0xafdce74, size 0x134, virtual false, abstract: false, final false
inline ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  control) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnScreenControl_OnScreenDeviceInfo() ;

// Ctor Parameters [CppParam { name: "eventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstControl", ty: "::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>", modifiers: "", def_value: None, comment: None }]
constexpr OnScreenControl_OnScreenDeviceInfo(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::Unity::Collections::NativeArray_1<uint8_t>  buffer, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>  firstControl) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field eventPtr, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr;

/// @brief Field buffer, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  buffer;

/// @brief Field device, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  device;

/// @brief Field firstControl, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>  firstControl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo, eventPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo, buffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo, device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo, firstControl) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
