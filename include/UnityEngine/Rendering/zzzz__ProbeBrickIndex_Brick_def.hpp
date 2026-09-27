#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex_Brick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickIndex_Brick)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProbeBrickIndex_Brick;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeBrickIndex_Brick);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeBrickIndex_Brick, "UnityEngine.Rendering", "ProbeBrickIndex/Brick");
// [DebuggerDisplay("Brick [{position}, {subdivisionLevel}]")]
// Dependencies UnityEngine.Vector3Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickIndex/Brick
struct CORDL_TYPE ProbeBrickIndex_Brick {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>*() ;

/// @brief Method Equals, addr 0xb15943c, size 0x48, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::ProbeBrickIndex_Brick  other) ;

/// @brief Method IntersectArea, addr 0xb159484, size 0x184, virtual false, abstract: false, final false
inline bool IntersectArea(::UnityEngine::Bounds  boundInBricksToCheck) ;

/// @brief Method .ctor, addr 0xb159430, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3Int  position, int32_t  subdivisionLevel) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>* i___System__IEquatable_1___GlobalNamespace__ProbeBrickIndex_Brick_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeBrickIndex_Brick() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "subdivisionLevel", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeBrickIndex_Brick(::UnityEngine::Vector3Int  position, int32_t  subdivisionLevel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  position;

/// @brief Field subdivisionLevel, offset: 0xc, size: 0x4, def value: None
 int32_t  subdivisionLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_Brick, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_Brick, subdivisionLevel) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeBrickIndex_Brick) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
