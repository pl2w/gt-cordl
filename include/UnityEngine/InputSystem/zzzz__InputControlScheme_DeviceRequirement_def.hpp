#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_DeviceRequirement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_Flags_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme_DeviceRequirement)
namespace GlobalNamespace {
struct DeviceRequirement_InputControlScheme_Flags;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlScheme_DeviceRequirement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlScheme_DeviceRequirement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlScheme_DeviceRequirement, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement");
// Dependencies UnityEngine.InputSystem.InputControlScheme::DeviceRequirement::Flags
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/DeviceRequirement
struct CORDL_TYPE InputControlScheme_DeviceRequirement {
public:
// Declarations
using Flags = ::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags;

 __declspec(property(get=get_controlPath, put=set_controlPath)) ::StringW  controlPath;

 __declspec(property(get=get_isAND, put=set_isAND)) bool  isAND;

 __declspec(property(get=get_isOR, put=set_isOR)) bool  isOR;

 __declspec(property(get=get_isOptional, put=set_isOptional)) bool  isOptional;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>*() ;

/// @brief Method Equals, addr 0xaf4b8ec, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xaf4b880, size 0x6c, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::InputControlScheme_DeviceRequirement  other) ;

/// @brief Method GetHashCode, addr 0xaf4b968, size 0xc4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xaf4b7bc, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_controlPath, addr 0xaf4b740, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_controlPath() ;

/// @brief Method get_isAND, addr 0xaf4b760, size 0x10, virtual false, abstract: false, final false
inline bool get_isAND() ;

/// @brief Method get_isOR, addr 0xaf4b770, size 0xc, virtual false, abstract: false, final false
inline bool get_isOR() ;

/// @brief Method get_isOptional, addr 0xaf4b5d8, size 0xc, virtual false, abstract: false, final false
inline bool get_isOptional() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>"
constexpr ::System::IEquatable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>* i___System__IEquatable_1___GlobalNamespace__InputControlScheme_DeviceRequirement_() ;

/// @brief Method op_Equality, addr 0xaf4aec0, size 0x2c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::InputControlScheme_DeviceRequirement  left, ::GlobalNamespace::InputControlScheme_DeviceRequirement  right) ;

/// @brief Method op_Inequality, addr 0xaf4ba2c, size 0x30, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::InputControlScheme_DeviceRequirement  left, ::GlobalNamespace::InputControlScheme_DeviceRequirement  right) ;

/// @brief Method set_controlPath, addr 0xaf4b748, size 0x8, virtual false, abstract: false, final false
inline void set_controlPath(::StringW  value) ;

/// @brief Method set_isAND, addr 0xaf4b77c, size 0x20, virtual false, abstract: false, final false
inline void set_isAND(bool  value) ;

/// @brief Method set_isOR, addr 0xaf4b79c, size 0x20, virtual false, abstract: false, final false
inline void set_isOR(bool  value) ;

/// @brief Method set_isOptional, addr 0xaf4b750, size 0x10, virtual false, abstract: false, final false
inline void set_isOptional(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlScheme_DeviceRequirement() ;

// Ctor Parameters [CppParam { name: "m_ControlPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags", modifiers: "", def_value: None, comment: None }]
constexpr InputControlScheme_DeviceRequirement(::StringW  m_ControlPath, ::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags  m_Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field m_ControlPath, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_ControlPath;

/// [SerializeField]
/// @brief Field m_Flags, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags  m_Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlScheme_DeviceRequirement, m_ControlPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlScheme_DeviceRequirement, m_Flags) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlScheme_DeviceRequirement) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
