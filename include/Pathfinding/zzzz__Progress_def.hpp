#pragma once
// IWYU pragma private; include "Pathfinding/Progress.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Progress)
// Forward declare root types
namespace Pathfinding {
struct Progress;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Progress);
DEFINE_IL2CPP_CLASS(::Pathfinding::Progress, "Pathfinding", "Progress");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.Progress
struct CORDL_TYPE Progress {
public:
// Declarations
/// @brief Method MapTo, addr 0x5e484dc, size 0x74, virtual false, abstract: false, final false
inline ::Pathfinding::Progress MapTo(float_t  min, float_t  max, ::StringW  prefix) ;

/// @brief Method ToString, addr 0x5e48550, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5e484d0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  progress, ::StringW  description) ;

// Ctor Parameters []
// @brief default ctor
constexpr Progress() ;

// Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr Progress(float_t  progress, ::StringW  description) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field progress, offset: 0x0, size: 0x4, def value: None
 float_t  progress;

/// @brief Field description, offset: 0x8, size: 0x8, def value: None
 ::StringW  description;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Progress, progress) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Progress, description) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Progress) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
