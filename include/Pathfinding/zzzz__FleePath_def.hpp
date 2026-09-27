#pragma once
// IWYU pragma private; include "Pathfinding/FleePath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__RandomPath_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FleePath)
namespace Pathfinding {
class OnPathDelegate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class FleePath;
}
// Write type traits
MARK_REF_T(::Pathfinding::FleePath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::FleePath*, "Pathfinding", "FleePath");
// Dependencies Pathfinding.RandomPath
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.FleePath
class CORDL_TYPE FleePath : public ::Pathfinding::RandomPath {
public:
// Declarations
/// @brief Method Construct, addr 0x5eae128, size 0xf0, virtual false, abstract: false, final false
static inline ::Pathfinding::FleePath* Construct(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  avoid, int32_t  searchLength, ::Pathfinding::OnPathDelegate*  callback) ;

static inline ::Pathfinding::FleePath* New_ctor() ;

/// @brief Method Setup, addr 0x5eae218, size 0x6c, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  avoid, int32_t  searchLength, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method .ctor, addr 0x5eae084, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FleePath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FleePath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FleePath(FleePath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FleePath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FleePath(FleePath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::FleePath) == 0x178, "Size mismatch!");

} // namespace end def Pathfinding
