#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_ControlSchemeChangeSyntax.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser_ControlSchemeChangeSyntax)
// Forward declare root types
namespace GlobalNamespace {
struct InputUser_ControlSchemeChangeSyntax;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputUser_ControlSchemeChangeSyntax);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputUser_ControlSchemeChangeSyntax, "UnityEngine.InputSystem.Users", "InputUser/ControlSchemeChangeSyntax");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/ControlSchemeChangeSyntax
struct CORDL_TYPE InputUser_ControlSchemeChangeSyntax {
public:
// Declarations
/// @brief Method AndPairRemainingDevices, addr 0xafd10c4, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax AndPairRemainingDevices() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputUser_ControlSchemeChangeSyntax() ;

// Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputUser_ControlSchemeChangeSyntax(int32_t  m_UserIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13574};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_UserIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  m_UserIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputUser_ControlSchemeChangeSyntax, m_UserIndex) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputUser_ControlSchemeChangeSyntax) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
