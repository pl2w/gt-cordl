#pragma once
// IWYU pragma private; include "Liv/Lck/LckRigidbodyExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckRigidbodyExtensions)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck {
class LckRigidbodyExtensions;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckRigidbodyExtensions*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckRigidbodyExtensions*, "Liv.Lck", "LckRigidbodyExtensions");
// [Extension]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckRigidbodyExtensions
class CORDL_TYPE LckRigidbodyExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method LookAtFromPivotPoint, addr 0x9d33884, size 0x248, virtual false, abstract: false, final false
static inline void LookAtFromPivotPoint(::UnityEngine::Rigidbody*  rigidbody, ::UnityEngine::Vector3  pivot, ::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  currentRotation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckRigidbodyExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRigidbodyExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRigidbodyExtensions(LckRigidbodyExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRigidbodyExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRigidbodyExtensions(LckRigidbodyExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24804};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckRigidbodyExtensions) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
