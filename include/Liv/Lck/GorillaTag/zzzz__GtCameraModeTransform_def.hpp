#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCameraModeTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GtCameraModeTransform)
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct GtCameraModeTransform;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::GtCameraModeTransform);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtCameraModeTransform, "Liv.Lck.GorillaTag", "GtCameraModeTransform");
// Dependencies UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.GtCameraModeTransform
struct CORDL_TYPE GtCameraModeTransform {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GtCameraModeTransform() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GtCameraModeTransform(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraModeTransform, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraModeTransform, rotation) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtCameraModeTransform) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
