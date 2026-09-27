#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventTrace_DeviceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventTrace_DeviceInfo)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputEventTrace_DeviceInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputEventTrace_DeviceInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputEventTrace_DeviceInfo, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/DeviceInfo");
// Dependencies UnityEngine.InputSystem.Utilities.FourCC
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo
struct CORDL_TYPE InputEventTrace_DeviceInfo {
public:
// Declarations
 __declspec(property(get=get_deviceId, put=set_deviceId)) int32_t  deviceId;

 __declspec(property(get=get_layout, put=set_layout)) ::StringW  layout;

 __declspec(property(get=get_stateFormat, put=set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat;

 __declspec(property(get=get_stateSizeInBytes, put=set_stateSizeInBytes)) int32_t  stateSizeInBytes;

/// @brief Method get_deviceId, addr 0xaff573c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_deviceId() ;

/// @brief Method get_layout, addr 0xaff574c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_layout() ;

/// @brief Method get_stateFormat, addr 0xaff575c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method get_stateSizeInBytes, addr 0xaff576c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_stateSizeInBytes() ;

/// @brief Method set_deviceId, addr 0xaff5744, size 0x8, virtual false, abstract: false, final false
inline void set_deviceId(int32_t  value) ;

/// @brief Method set_layout, addr 0xaff5754, size 0x8, virtual false, abstract: false, final false
inline void set_layout(::StringW  value) ;

/// @brief Method set_stateFormat, addr 0xaff5764, size 0x8, virtual false, abstract: false, final false
inline void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

/// @brief Method set_stateSizeInBytes, addr 0xaff5774, size 0x8, virtual false, abstract: false, final false
inline void set_stateSizeInBytes(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputEventTrace_DeviceInfo() ;

// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Layout", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StateSizeInBytes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FullLayoutJson", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr InputEventTrace_DeviceInfo(int32_t  m_DeviceId, ::StringW  m_Layout, ::UnityEngine::InputSystem::Utilities::FourCC  m_StateFormat, int32_t  m_StateSizeInBytes, ::StringW  m_FullLayoutJson) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13767};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// @brief Field m_DeviceId, offset: 0x0, size: 0x4, def value: None
 int32_t  m_DeviceId;

/// [SerializeField]
/// @brief Field m_Layout, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_Layout;

/// [SerializeField]
/// @brief Field m_StateFormat, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::InputSystem::Utilities::FourCC  m_StateFormat;

/// [SerializeField]
/// @brief Field m_StateSizeInBytes, offset: 0x14, size: 0x4, def value: None
 int32_t  m_StateSizeInBytes;

/// [SerializeField]
/// @brief Field m_FullLayoutJson, offset: 0x18, size: 0x8, def value: None
 ::StringW  m_FullLayoutJson;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputEventTrace_DeviceInfo, m_DeviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEventTrace_DeviceInfo, m_Layout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEventTrace_DeviceInfo, m_StateFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEventTrace_DeviceInfo, m_StateSizeInBytes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEventTrace_DeviceInfo, m_FullLayoutJson) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputEventTrace_DeviceInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
