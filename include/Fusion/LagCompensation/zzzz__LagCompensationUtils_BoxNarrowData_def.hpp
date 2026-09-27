#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_BoxNarrowData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomEdgesBox_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomPlanesBox_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LagCompensationUtils_BoxNarrowData)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct LagCompensationUtils_BoxNarrowData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LagCompensationUtils_BoxNarrowData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, "Fusion.LagCompensation", "LagCompensationUtils/BoxNarrowData");
// Dependencies Fusion.LagCompensation.LagCompensationUtils::CustomEdgesBox, Fusion.LagCompensation.LagCompensationUtils::CustomPlanesBox, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.LagCompensationUtils/BoxNarrowData
struct CORDL_TYPE LagCompensationUtils_BoxNarrowData {
public:
// Declarations
/// @brief Method LocalToWorldPoint, addr 0x60175b8, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 LocalToWorldPoint(::UnityEngine::Vector3  point) ;

/// @brief Method LocalToWorldVector, addr 0x60175e0, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 LocalToWorldVector(::UnityEngine::Vector3  vec) ;

/// @brief Method WorldToLocalPoint, addr 0x6017628, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToLocalPoint(::UnityEngine::Vector3  point) ;

/// @brief Method WorldToLocalVector, addr 0x6017640, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToLocalVector(::UnityEngine::Vector3  vec) ;

/// @brief Method .ctor, addr 0x60171f8, size 0x3c0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Vector3  extents) ;

// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils_BoxNarrowData() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotatedRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotatedUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotatedForward", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoxPlanesRotated", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlanesBox", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoxEdgesRotated", ty: "::GlobalNamespace::LagCompensationUtils_CustomEdgesBox", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensationUtils_BoxNarrowData(::UnityEngine::Vector3  Position, ::UnityEngine::Vector3  Extents, ::UnityEngine::Vector3  RotatedRight, ::UnityEngine::Vector3  RotatedUp, ::UnityEngine::Vector3  RotatedForward, ::GlobalNamespace::LagCompensationUtils_CustomPlanesBox  BoxPlanesRotated, ::GlobalNamespace::LagCompensationUtils_CustomEdgesBox  BoxEdgesRotated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x12c};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// @brief Field Extents, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Extents;

/// @brief Field RotatedRight, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  RotatedRight;

/// @brief Field RotatedUp, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  RotatedUp;

/// @brief Field RotatedForward, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  RotatedForward;

/// @brief Field BoxPlanesRotated, offset: 0x3c, size: 0x90, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomPlanesBox  BoxPlanesRotated;

/// @brief Field BoxEdgesRotated, offset: 0xcc, size: 0x60, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomEdgesBox  BoxEdgesRotated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, Extents) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, RotatedRight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, RotatedUp) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, RotatedForward) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, BoxPlanesRotated) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData, BoxEdgesRotated) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LagCompensationUtils_BoxNarrowData) == 0x12c, "Size mismatch!");

} // namespace end def GlobalNamespace
