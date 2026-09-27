#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersRigActorSetup_RigActor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersRigActorSetup_RigActor)
namespace GlobalNamespace {
class CrittersActor;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct CrittersRigActorSetup_RigActor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrittersRigActorSetup_RigActor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersRigActorSetup_RigActor, "", "CrittersRigActorSetup/RigActor");
// Dependencies CrittersActor::CrittersActorType
namespace GlobalNamespace {
// Is value type: true
// CS Name: CrittersRigActorSetup/RigActor
struct CORDL_TYPE CrittersRigActorSetup_RigActor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CrittersRigActorSetup_RigActor() ;

// Ctor Parameters [CppParam { name: "location", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::CrittersActor_CrittersActorType", modifiers: "", def_value: None, comment: None }, CppParam { name: "subIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "actorSet", ty: "::UnityW<::GlobalNamespace::CrittersActor>", modifiers: "", def_value: None, comment: None }]
constexpr CrittersRigActorSetup_RigActor(::UnityW<::UnityEngine::Transform>  location, ::GlobalNamespace::CrittersActor_CrittersActorType  type, int32_t  subIndex, ::UnityW<::GlobalNamespace::CrittersActor>  actorSet) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field location, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  location;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  type;

/// @brief Field subIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  subIndex;

/// @brief Field actorSet, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  actorSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersRigActorSetup_RigActor, location) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRigActorSetup_RigActor, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRigActorSetup_RigActor, subIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRigActorSetup_RigActor, actorSet) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersRigActorSetup_RigActor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
