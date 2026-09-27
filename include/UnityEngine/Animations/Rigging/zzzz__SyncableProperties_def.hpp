#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/SyncableProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/Rigging/zzzz__ConstraintProperties_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigProperties_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SyncableProperties)
namespace UnityEngine::Animations::Rigging {
struct ConstraintProperties;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct SyncableProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::SyncableProperties);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::SyncableProperties, "UnityEngine.Animations.Rigging", "SyncableProperties");
// Dependencies UnityEngine.Animations.Rigging.ConstraintProperties, UnityEngine.Animations.Rigging.RigProperties
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.SyncableProperties
struct CORDL_TYPE SyncableProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SyncableProperties() ;

// Ctor Parameters [CppParam { name: "rig", ty: "::UnityEngine::Animations::Rigging::RigProperties", modifiers: "", def_value: None, comment: None }, CppParam { name: "constraints", ty: "::ArrayW<::UnityEngine::Animations::Rigging::ConstraintProperties>", modifiers: "", def_value: None, comment: None }]
constexpr SyncableProperties(::UnityEngine::Animations::Rigging::RigProperties  rig, ::ArrayW<::UnityEngine::Animations::Rigging::ConstraintProperties>  constraints) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32296};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field rig, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Animations::Rigging::RigProperties  rig;

/// @brief Field constraints, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Animations::Rigging::ConstraintProperties>  constraints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::SyncableProperties, rig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::SyncableProperties, constraints) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::SyncableProperties) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
