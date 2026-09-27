#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_CompareDevicesByUserAccount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser_CompareDevicesByUserAccount)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputUser_CompareDevicesByUserAccount;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputUser_CompareDevicesByUserAccount);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputUser_CompareDevicesByUserAccount, "UnityEngine.InputSystem.Users", "InputUser/CompareDevicesByUserAccount");
// Dependencies UnityEngine.InputSystem.Users.InputUserAccountHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/CompareDevicesByUserAccount
struct CORDL_TYPE InputUser_CompareDevicesByUserAccount {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*() ;

/// @brief Method Compare, addr 0xafd112c, size 0x3c, virtual true, abstract: false, final true
inline int32_t Compare(::UnityEngine::InputSystem::InputDevice*  x, ::UnityEngine::InputSystem::InputDevice*  y) ;

/// @brief Method GetUserAccountHandleForDevice, addr 0xafd1168, size 0xc, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>* i___System__Collections__Generic__IComparer_1___UnityEngine__InputSystem__InputDevice__() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputUser_CompareDevicesByUserAccount() ;

// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: None, comment: None }]
constexpr InputUser_CompareDevicesByUserAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13577};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field platformUserAccountHandle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputUser_CompareDevicesByUserAccount, platformUserAccountHandle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputUser_CompareDevicesByUserAccount) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
