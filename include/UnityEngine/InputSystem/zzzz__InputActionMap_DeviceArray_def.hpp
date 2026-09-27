#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_DeviceArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionMap_DeviceArray)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_DeviceArray;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_DeviceArray);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_DeviceArray, "UnityEngine.InputSystem", "InputActionMap/DeviceArray");
// Dependencies UnityEngine.InputSystem.InputDevice
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/DeviceArray
struct CORDL_TYPE InputActionMap_DeviceArray {
public:
// Declarations
/// @brief Method Get, addr 0xaf0e92c, size 0xa8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> Get() ;

/// @brief Method IndexOf, addr 0xaf155e4, size 0x5c, virtual false, abstract: false, final false
inline int32_t IndexOf(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Remove, addr 0xaf15640, size 0x74, virtual false, abstract: false, final false
inline bool Remove(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Set, addr 0xaf0ea18, size 0x17c, virtual false, abstract: false, final false
inline bool Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  devices) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_DeviceArray() ;

// Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_DeviceArray(bool  m_HaveValue, int32_t  m_DeviceCount, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  m_DeviceArray) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13352};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_HaveValue, offset: 0x0, size: 0x1, def value: None
 bool  m_HaveValue;

/// @brief Field m_DeviceCount, offset: 0x4, size: 0x4, def value: None
 int32_t  m_DeviceCount;

/// @brief Field m_DeviceArray, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  m_DeviceArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_DeviceArray, m_HaveValue) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_DeviceArray, m_DeviceCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_DeviceArray, m_DeviceArray) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_DeviceArray) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
