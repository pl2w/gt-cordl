#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_UserData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserFlags_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser_UserData)
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputUser_UserData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputUser_UserData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputUser_UserData, "UnityEngine.InputSystem.Users", "InputUser/UserData");
// Dependencies System.Nullable`1<T>, UnityEngine.InputSystem.InputControlScheme, UnityEngine.InputSystem.InputControlScheme::MatchResult, UnityEngine.InputSystem.Users.InputUser::UserFlags, UnityEngine.InputSystem.Users.InputUserAccountHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/UserData
struct CORDL_TYPE InputUser_UserData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputUser_UserData() ;

// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "actions", ty: "::UnityEngine::InputSystem::IInputActionCollection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlScheme", ty: "::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlSchemeMatch", ty: "::GlobalNamespace::InputControlScheme_MatchResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::InputUser_UserFlags", modifiers: "", def_value: None, comment: None }]
constexpr InputUser_UserData(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  platformUserAccountHandle, ::StringW  platformUserAccountName, ::StringW  platformUserAccountId, int32_t  deviceCount, int32_t  deviceStartIndex, ::UnityEngine::InputSystem::IInputActionCollection*  actions, ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  controlScheme, ::GlobalNamespace::InputControlScheme_MatchResult  controlSchemeMatch, int32_t  lostDeviceCount, int32_t  lostDeviceStartIndex, ::GlobalNamespace::InputUser_UserFlags  flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field platformUserAccountHandle, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  platformUserAccountHandle;

/// @brief Field platformUserAccountName, offset: 0x10, size: 0x8, def value: None
 ::StringW  platformUserAccountName;

/// @brief Field platformUserAccountId, offset: 0x18, size: 0x8, def value: None
 ::StringW  platformUserAccountId;

/// @brief Field deviceCount, offset: 0x20, size: 0x4, def value: None
 int32_t  deviceCount;

/// @brief Field deviceStartIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  deviceStartIndex;

/// @brief Field actions, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::InputSystem::IInputActionCollection*  actions;

/// @brief Field controlScheme, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  controlScheme;

/// @brief Field controlSchemeMatch, offset: 0x40, size: 0x50, def value: None
 ::GlobalNamespace::InputControlScheme_MatchResult  controlSchemeMatch;

/// @brief Field lostDeviceCount, offset: 0x90, size: 0x4, def value: None
 int32_t  lostDeviceCount;

/// @brief Field lostDeviceStartIndex, offset: 0x94, size: 0x4, def value: None
 int32_t  lostDeviceStartIndex;

/// @brief Field flags, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::InputUser_UserFlags  flags;

/// @brief Size padding 0xb8 - 0xa0 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputUser_UserData, platformUserAccountHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, platformUserAccountName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, platformUserAccountId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, deviceCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, deviceStartIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, actions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, controlScheme) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, controlSchemeMatch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, lostDeviceCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, lostDeviceStartIndex) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_UserData, flags) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputUser_UserData) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
