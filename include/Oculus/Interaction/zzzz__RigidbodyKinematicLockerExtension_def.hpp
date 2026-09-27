#pragma once
// IWYU pragma private; include "Oculus/Interaction/RigidbodyKinematicLockerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RigidbodyKinematicLockerExtension)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction {
class RigidbodyKinematicLockerExtension;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RigidbodyKinematicLockerExtension*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RigidbodyKinematicLockerExtension*, "Oculus.Interaction", "RigidbodyKinematicLockerExtension");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RigidbodyKinematicLockerExtension
class CORDL_TYPE RigidbodyKinematicLockerExtension : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsLocked, addr 0xa489d3c, size 0x7c, virtual false, abstract: false, final false
static inline bool IsLocked(::UnityEngine::Rigidbody*  rigidbody) ;

/// [Extension]
/// @brief Method LockKinematic, addr 0xa484a08, size 0xa0, virtual false, abstract: false, final false
static inline void LockKinematic(::UnityEngine::Rigidbody*  rigidbody) ;

/// [Extension]
/// @brief Method UnlockKinematic, addr 0xa484aa8, size 0xb8, virtual false, abstract: false, final false
static inline void UnlockKinematic(::UnityEngine::Rigidbody*  rigidbody) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyKinematicLockerExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyKinematicLockerExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidbodyKinematicLockerExtension(RigidbodyKinematicLockerExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyKinematicLockerExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidbodyKinematicLockerExtension(RigidbodyKinematicLockerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::RigidbodyKinematicLockerExtension) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
