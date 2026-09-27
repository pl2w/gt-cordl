#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/ReleaseVelocityInformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ReleaseVelocityInformation)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
struct ReleaseVelocityInformation;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Throw::ReleaseVelocityInformation);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::ReleaseVelocityInformation, "Oculus.Interaction.Throw", "ReleaseVelocityInformation");
// Dependencies UnityEngine.Vector3
namespace Oculus::Interaction::Throw {
// Is value type: true
// CS Name: Oculus.Interaction.Throw.ReleaseVelocityInformation
struct CORDL_TYPE ReleaseVelocityInformation {
public:
// Declarations
/// @brief Method .ctor, addr 0xa494038, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity, ::UnityEngine::Vector3  origin, bool  isSelectedVelocity) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReleaseVelocityInformation() ;

// Ctor Parameters [CppParam { name: "LinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsSelectedVelocity", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ReleaseVelocityInformation(::UnityEngine::Vector3  LinearVelocity, ::UnityEngine::Vector3  AngularVelocity, ::UnityEngine::Vector3  Origin, bool  IsSelectedVelocity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16073};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field LinearVelocity, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  LinearVelocity;

/// @brief Field AngularVelocity, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  AngularVelocity;

/// @brief Field Origin, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  Origin;

/// @brief Field IsSelectedVelocity, offset: 0x24, size: 0x1, def value: None
 bool  IsSelectedVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::ReleaseVelocityInformation, LinearVelocity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::ReleaseVelocityInformation, AngularVelocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::ReleaseVelocityInformation, Origin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::ReleaseVelocityInformation, IsSelectedVelocity) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::ReleaseVelocityInformation) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
