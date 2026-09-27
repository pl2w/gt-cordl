#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Pose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Pose)
// Forward declare root types
namespace Technie::PhysicsCreator {
class Pose;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Pose*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Pose*, "Technie.PhysicsCreator", "Pose");
// Dependencies System.Object, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Pose
class CORDL_TYPE Pose : public ::System::Object {
public:
// Declarations
/// @brief Field forward, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_forward, put=__cordl_internal_set_forward)) ::UnityEngine::Vector3  forward;

/// @brief Field right, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_right, put=__cordl_internal_set_right)) ::UnityEngine::Vector3  right;

/// @brief Field up, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_up, put=__cordl_internal_set_up)) ::UnityEngine::Vector3  up;

static inline ::Technie::PhysicsCreator::Pose* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_forward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_forward() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_right() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_right() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_up() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_up() ;

constexpr void __cordl_internal_set_forward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_right(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_up(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xadc4680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pose", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pose(Pose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pose(Pose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30482};

/// @brief Field forward, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___forward;

/// @brief Field up, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___up;

/// @brief Field right, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Pose, ___forward) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Pose, ___up) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Pose, ___right) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Pose) == 0x38, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
