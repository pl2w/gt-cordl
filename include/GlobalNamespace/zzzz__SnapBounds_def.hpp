#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapBounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SnapBounds)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
struct SnapBounds;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SnapBounds);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapBounds, "", "SnapBounds");
// Dependencies UnityEngine.Vector2Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: SnapBounds
struct CORDL_TYPE SnapBounds {
public:
// Declarations
/// @brief Method Clear, addr 0x57bed68, size 0xc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Read, addr 0x57bedf4, size 0x84, virtual false, abstract: false, final false
inline void Read(::System::IO::BinaryReader*  reader) ;

/// @brief Method Write, addr 0x57bed74, size 0x80, virtual false, abstract: false, final false
inline void Write(::System::IO::BinaryWriter*  writer) ;

/// @brief Method .ctor, addr 0x57bed48, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2Int  min, ::UnityEngine::Vector2Int  max) ;

/// @brief Method .ctor, addr 0x57bed50, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int32_t  minX, int32_t  minY, int32_t  maxX, int32_t  maxY) ;

// Ctor Parameters []
// @brief default ctor
constexpr SnapBounds() ;

// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }]
constexpr SnapBounds(::UnityEngine::Vector2Int  min, ::UnityEngine::Vector2Int  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1602};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field min, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  min;

/// @brief Field max, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnapBounds, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapBounds, max) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnapBounds) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
