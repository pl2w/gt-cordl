#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInstantiate_Vector3Offset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__SplineInstantiate_OffsetSpace_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Vector3Offset_Setup_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SplineInstantiate_Vector3Offset)
namespace GlobalNamespace {
struct SplineInstantiate_Space;
}
namespace GlobalNamespace {
struct Vector3Offset_SplineInstantiate_Setup;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplineInstantiate_Vector3Offset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineInstantiate_Vector3Offset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineInstantiate_Vector3Offset, "UnityEngine.Splines", "SplineInstantiate/Vector3Offset");
// Dependencies UnityEngine.Splines.SplineInstantiate::OffsetSpace, UnityEngine.Splines.SplineInstantiate::Vector3Offset::Setup, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/Vector3Offset
struct CORDL_TYPE SplineInstantiate_Vector3Offset {
public:
// Declarations
using Setup = ::GlobalNamespace::Vector3Offset_SplineInstantiate_Setup;

 __declspec(property(get=get_hasCustomSpace)) bool  hasCustomSpace;

 __declspec(property(get=get_hasOffset)) bool  hasOffset;

/// @brief Method CheckCustomSpace, addr 0xb325aa8, size 0x1c, virtual false, abstract: false, final false
inline void CheckCustomSpace(::GlobalNamespace::SplineInstantiate_Space  instanceSpace) ;

/// @brief Method CheckMinMax, addr 0xb3259f0, size 0xb8, virtual false, abstract: false, final false
inline void CheckMinMax() ;

/// @brief Method CheckMinMaxValidity, addr 0xb3259c4, size 0x2c, virtual false, abstract: false, final false
inline void CheckMinMaxValidity() ;

/// @brief Method GetNextOffset, addr 0xb325900, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNextOffset() ;

/// @brief Method get_hasCustomSpace, addr 0xb3258f4, size 0xc, virtual false, abstract: false, final false
inline bool get_hasCustomSpace() ;

/// @brief Method get_hasOffset, addr 0xb3258e8, size 0xc, virtual false, abstract: false, final false
inline bool get_hasOffset() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_Vector3Offset() ;

// Ctor Parameters [CppParam { name: "setup", ty: "::GlobalNamespace::Vector3Offset_SplineInstantiate_Setup", modifiers: "", def_value: None, comment: None }, CppParam { name: "min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "randomX", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "randomY", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "randomZ", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "space", ty: "::GlobalNamespace::SplineInstantiate_OffsetSpace", modifiers: "", def_value: None, comment: None }]
constexpr SplineInstantiate_Vector3Offset(::GlobalNamespace::Vector3Offset_SplineInstantiate_Setup  setup, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max, bool  randomX, bool  randomY, bool  randomZ, ::GlobalNamespace::SplineInstantiate_OffsetSpace  space) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field setup, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Vector3Offset_SplineInstantiate_Setup  setup;

/// @brief Field min, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  min;

/// @brief Field max, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  max;

/// @brief Field randomX, offset: 0x1c, size: 0x1, def value: None
 bool  randomX;

/// @brief Field randomY, offset: 0x1d, size: 0x1, def value: None
 bool  randomY;

/// @brief Field randomZ, offset: 0x1e, size: 0x1, def value: None
 bool  randomZ;

/// @brief Field space, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SplineInstantiate_OffsetSpace  space;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Vector3Offset, setup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Vector3Offset, min) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Vector3Offset, max) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Vector3Offset, randomX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Vector3Offset, randomY) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Vector3Offset, randomZ) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Vector3Offset, space) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineInstantiate_Vector3Offset) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
