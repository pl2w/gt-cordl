#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme)
namespace GlobalNamespace {
struct InputControlScheme_DeviceRequirement;
}
namespace GlobalNamespace {
struct InputControlScheme_MatchResult;
}
namespace GlobalNamespace {
struct InputControlScheme_SchemeJson;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputControlScheme);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputControlScheme, "UnityEngine.InputSystem", "InputControlScheme");
// Dependencies System.Collections.Generic.IReadOnlyList`1<T>, UnityEngine.InputSystem.InputControlScheme::DeviceRequirement
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme
struct CORDL_TYPE InputControlScheme {
public:
// Declarations
using DeviceRequirement = ::GlobalNamespace::InputControlScheme_DeviceRequirement;

using MatchResult = ::GlobalNamespace::InputControlScheme_MatchResult;

using SchemeJson = ::GlobalNamespace::InputControlScheme_SchemeJson;

 __declspec(property(get=get_bindingGroup, put=set_bindingGroup)) ::StringW  bindingGroup;

 __declspec(property(get=get_deviceRequirements)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>  deviceRequirements;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*() ;

/// @brief Method Equals, addr 0xaf4aeec, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xaf4ad80, size 0x140, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::InputSystem::InputControlScheme  other) ;

/// @brief Method FindControlSchemeForDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSchemes>
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlSchemeForDevice(::UnityEngine::InputSystem::InputDevice*  device, TSchemes  schemes) ;

/// @brief Method FindControlSchemeForDevices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevices,typename TSchemes>
requires(::cordl_internals::type_constraint<TDevices, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputDevice*>*>)
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlSchemeForDevices(TDevices  devices, TSchemes  schemes, ::UnityEngine::InputSystem::InputDevice*  mustIncludeDevice, bool  allowUnsuccesfulMatch) ;

/// @brief Method FindControlSchemeForDevices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevices,typename TSchemes>
requires(::cordl_internals::type_constraint<TDevices, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputDevice*>*>)
static inline bool FindControlSchemeForDevices(TDevices  devices, TSchemes  schemes, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>  controlScheme, ::by_ref<::GlobalNamespace::InputControlScheme_MatchResult>  matchResult, ::UnityEngine::InputSystem::InputDevice*  mustIncludeDevice, bool  allowUnsuccessfulMatch) ;

/// @brief Method GetHashCode, addr 0xaf4af7c, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method PickDevicesFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevices>
requires(::cordl_internals::type_constraint<TDevices, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputDevice*>*>)
inline ::GlobalNamespace::InputControlScheme_MatchResult PickDevicesFrom(TDevices  devices, ::UnityEngine::InputSystem::InputDevice*  favorDevice) ;

/// @brief Method SetNameAndBindingGroup, addr 0xaf4ab80, size 0xd4, virtual false, abstract: false, final false
inline void SetNameAndBindingGroup(::StringW  name, ::StringW  bindingGroup) ;

/// @brief Method SupportsDevice, addr 0xaf4ac54, size 0xcc, virtual false, abstract: false, final false
inline bool SupportsDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ToString, addr 0xaf4affc, size 0x184, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaf4aa5c, size 0x124, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>*  devices, ::StringW  bindingGroup) ;

/// @brief Method get_bindingGroup, addr 0xaf4a9ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_bindingGroup() ;

/// @brief Method get_deviceRequirements, addr 0xaf4a9fc, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlScheme_DeviceRequirement> get_deviceRequirements() ;

/// @brief Method get_name, addr 0xaf4a9e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>* i___System__IEquatable_1___UnityEngine__InputSystem__InputControlScheme_() ;

/// @brief Method op_Equality, addr 0xaf4b180, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::InputSystem::InputControlScheme  left, ::UnityEngine::InputSystem::InputControlScheme  right) ;

/// @brief Method op_Inequality, addr 0xaf4b1b0, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::InputSystem::InputControlScheme  left, ::UnityEngine::InputSystem::InputControlScheme  right) ;

/// @brief Method set_bindingGroup, addr 0xaf4a9f4, size 0x8, virtual false, abstract: false, final false
inline void set_bindingGroup(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlScheme() ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DeviceRequirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: None, comment: None }]
constexpr InputControlScheme(::StringW  m_Name, ::StringW  m_BindingGroup, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_DeviceRequirements) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13414};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_Name;

/// [SerializeField]
/// @brief Field m_BindingGroup, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_BindingGroup;

/// [SerializeField]
/// @brief Field m_DeviceRequirements, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_DeviceRequirements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_BindingGroup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlScheme, m_DeviceRequirements) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputControlScheme) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
