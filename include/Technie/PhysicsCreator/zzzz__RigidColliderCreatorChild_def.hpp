#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RigidColliderCreatorChild.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RigidColliderCreatorChild)
namespace Technie::PhysicsCreator {
class RigidColliderCreator;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class RigidColliderCreatorChild;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::RigidColliderCreatorChild*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::RigidColliderCreatorChild*, "Technie.PhysicsCreator", "RigidColliderCreatorChild");
// Dependencies UnityEngine.MonoBehaviour
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.RigidColliderCreatorChild
class CORDL_TYPE RigidColliderCreatorChild : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isAutoHull, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAutoHull, put=__cordl_internal_set_isAutoHull)) bool  isAutoHull;

/// @brief Field parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::Technie::PhysicsCreator::RigidColliderCreator>  parent;

static inline ::Technie::PhysicsCreator::RigidColliderCreatorChild* New_ctor() ;

constexpr bool const& __cordl_internal_get_isAutoHull() const;

constexpr bool& __cordl_internal_get_isAutoHull() ;

constexpr ::UnityW<::Technie::PhysicsCreator::RigidColliderCreator> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::Technie::PhysicsCreator::RigidColliderCreator>& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_isAutoHull(bool  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::Technie::PhysicsCreator::RigidColliderCreator>  value) ;

/// @brief Method .ctor, addr 0xadd35a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidColliderCreatorChild() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidColliderCreatorChild", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidColliderCreatorChild(RigidColliderCreatorChild && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidColliderCreatorChild", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidColliderCreatorChild(RigidColliderCreatorChild const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30518};

/// @brief Field parent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Technie::PhysicsCreator::RigidColliderCreator>  ___parent;

/// @brief Field isAutoHull, offset: 0x28, size: 0x1, def value: None
 bool  ___isAutoHull;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::RigidColliderCreatorChild, ___parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RigidColliderCreatorChild, ___isAutoHull) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::RigidColliderCreatorChild) == 0x30, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
