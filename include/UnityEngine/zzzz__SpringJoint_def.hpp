#pragma once
// IWYU pragma private; include "UnityEngine/SpringJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
CORDL_MODULE_EXPORT(SpringJoint)
// Forward declare root types
namespace UnityEngine {
class SpringJoint;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpringJoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpringJoint*, "UnityEngine", "SpringJoint");
// [NativeClass("Unity::SpringJoint")]
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [NativeHeader("Modules/Physics/SpringJoint.h")]
// Dependencies UnityEngine.Joint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpringJoint
class CORDL_TYPE SpringJoint : public ::UnityEngine::Joint {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpringJoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpringJoint(SpringJoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpringJoint(SpringJoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30601};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SpringJoint) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
