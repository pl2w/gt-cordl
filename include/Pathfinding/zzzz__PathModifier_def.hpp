#pragma once
// IWYU pragma private; include "Pathfinding/PathModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathModifier)
namespace Pathfinding {
class IPathModifier;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class Seeker;
}
// Forward declare root types
namespace Pathfinding {
class PathModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathModifier*, "Pathfinding", "PathModifier");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathModifier
class CORDL_TYPE PathModifier : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field seeker, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeker, put=__cordl_internal_set_seeker)) ::UnityW<::Pathfinding::Seeker>  seeker;

/// @brief Convert operator to "::Pathfinding::IPathModifier"
constexpr operator  ::Pathfinding::IPathModifier*() noexcept;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Apply(::Pathfinding::Path*  path) ;

/// @brief Method Awake, addr 0x5ea107c, size 0xa4, virtual false, abstract: false, final false
inline void Awake(::Pathfinding::Seeker*  seeker) ;

static inline ::Pathfinding::PathModifier* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ea1120, size 0x94, virtual false, abstract: false, final false
inline void OnDestroy(::Pathfinding::Seeker*  seeker) ;

/// @brief Method PreProcess, addr 0x5ea11b4, size 0x4, virtual true, abstract: false, final false
inline void PreProcess(::Pathfinding::Path*  path) ;

constexpr ::UnityW<::Pathfinding::Seeker> const& __cordl_internal_get_seeker() const;

constexpr ::UnityW<::Pathfinding::Seeker>& __cordl_internal_get_seeker() ;

constexpr void __cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value) ;

/// @brief Method .ctor, addr 0x5ea11b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Order() ;

/// @brief Convert to "::Pathfinding::IPathModifier"
constexpr ::Pathfinding::IPathModifier* i___Pathfinding__IPathModifier() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathModifier(PathModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathModifier(PathModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21365};

/// @brief Field seeker, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Seeker>  ___seeker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathModifier, ___seeker) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathModifier) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
