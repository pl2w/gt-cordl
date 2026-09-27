#pragma once
// IWYU pragma private; include "GlobalNamespace/crittersAttractorStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(crittersAttractorStruct)
// Forward declare root types
namespace GlobalNamespace {
struct crittersAttractorStruct;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::crittersAttractorStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::crittersAttractorStruct, "", "crittersAttractorStruct");
// Dependencies CrittersActor::CrittersActorType
namespace GlobalNamespace {
// Is value type: true
// CS Name: crittersAttractorStruct
struct CORDL_TYPE crittersAttractorStruct {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr crittersAttractorStruct() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::CrittersActor_CrittersActorType", modifiers: "", def_value: None, comment: None }, CppParam { name: "multiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr crittersAttractorStruct(::GlobalNamespace::CrittersActor_CrittersActorType  type, float_t  multiplier) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  type;

/// @brief Field multiplier, offset: 0x4, size: 0x4, def value: None
 float_t  multiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::crittersAttractorStruct, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::crittersAttractorStruct, multiplier) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::crittersAttractorStruct) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
