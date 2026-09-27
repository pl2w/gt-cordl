#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger_StiltTagData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaTagger_StiltTagData)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaTagger_StiltTagData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaTagger_StiltTagData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger_StiltTagData, "", "GorillaTagger/StiltTagData");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagger/StiltTagData
struct CORDL_TYPE GorillaTagger_StiltTagData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagger_StiltTagData() ;

// Ctor Parameters [CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasCurrentPosition", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasLastPosition", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentPositionForTag", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastPositionForTag", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "wasTouching", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastTap", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastUpTap", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "canTag", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "canStun", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GorillaTagger_StiltTagData(bool  isLeftHand, bool  hasCurrentPosition, bool  hasLastPosition, ::UnityEngine::Vector3  currentPositionForTag, ::UnityEngine::Vector3  lastPositionForTag, bool  wasTouching, float_t  lastTap, float_t  lastUpTap, bool  canTag, bool  canStun) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2252};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field isLeftHand, offset: 0x0, size: 0x1, def value: None
 bool  isLeftHand;

/// @brief Field hasCurrentPosition, offset: 0x1, size: 0x1, def value: None
 bool  hasCurrentPosition;

/// @brief Field hasLastPosition, offset: 0x2, size: 0x1, def value: None
 bool  hasLastPosition;

/// @brief Field currentPositionForTag, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  currentPositionForTag;

/// @brief Field lastPositionForTag, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastPositionForTag;

/// @brief Field wasTouching, offset: 0x1c, size: 0x1, def value: None
 bool  wasTouching;

/// @brief Field lastTap, offset: 0x20, size: 0x4, def value: None
 float_t  lastTap;

/// @brief Field lastUpTap, offset: 0x24, size: 0x4, def value: None
 float_t  lastUpTap;

/// @brief Field canTag, offset: 0x28, size: 0x1, def value: None
 bool  canTag;

/// @brief Field canStun, offset: 0x29, size: 0x1, def value: None
 bool  canStun;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, isLeftHand) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, hasCurrentPosition) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, hasLastPosition) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, currentPositionForTag) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, lastPositionForTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, wasTouching) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, lastTap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, lastUpTap) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, canTag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_StiltTagData, canStun) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger_StiltTagData) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
