#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_RemoteSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_RemoteInputDevice_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting_RemoteSender)
namespace GlobalNamespace {
struct InputRemoting_RemoteInputDevice;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputRemoting_RemoteSender;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputRemoting_RemoteSender);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputRemoting_RemoteSender, "UnityEngine.InputSystem", "InputRemoting/RemoteSender");
// Dependencies UnityEngine.InputSystem.InputRemoting::RemoteInputDevice, UnityEngine.InputSystem.Utilities.InternedString
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/RemoteSender
struct CORDL_TYPE InputRemoting_RemoteSender {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_RemoteSender() ;

// Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "layouts", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None, comment: None }, CppParam { name: "devices", ty: "::ArrayW<::GlobalNamespace::InputRemoting_RemoteInputDevice>", modifiers: "", def_value: None, comment: None }]
constexpr InputRemoting_RemoteSender(int32_t  senderId, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  layouts, ::ArrayW<::GlobalNamespace::InputRemoting_RemoteInputDevice>  devices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field senderId, offset: 0x0, size: 0x4, def value: None
 int32_t  senderId;

/// @brief Field layouts, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  layouts;

/// @brief Field devices, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputRemoting_RemoteInputDevice>  devices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputRemoting_RemoteSender, senderId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputRemoting_RemoteSender, layouts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputRemoting_RemoteSender, devices) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputRemoting_RemoteSender) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
