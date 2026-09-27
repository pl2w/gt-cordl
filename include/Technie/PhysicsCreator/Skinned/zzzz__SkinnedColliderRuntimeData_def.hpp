#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/SkinnedColliderRuntimeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SkinnedColliderRuntimeData)
// Forward declare root types
namespace Technie::PhysicsCreator::Skinned {
class SkinnedColliderRuntimeData;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData*, "Technie.PhysicsCreator.Skinned", "SkinnedColliderRuntimeData");
// Dependencies UnityEngine.ScriptableObject
namespace Technie::PhysicsCreator::Skinned {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Skinned.SkinnedColliderRuntimeData
class CORDL_TYPE SkinnedColliderRuntimeData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData* New_ctor() ;

/// @brief Method .ctor, addr 0xadd9968, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedColliderRuntimeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedColliderRuntimeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedColliderRuntimeData(SkinnedColliderRuntimeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedColliderRuntimeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedColliderRuntimeData(SkinnedColliderRuntimeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData) == 0x18, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Skinned
