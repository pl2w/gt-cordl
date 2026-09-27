#pragma once
// IWYU pragma private; include "Pathfinding/MonoModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoModifier)
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
class MonoModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::MonoModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::MonoModifier*, "Pathfinding", "MonoModifier");
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.MonoModifier
class CORDL_TYPE MonoModifier : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field seeker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeker, put=__cordl_internal_set_seeker)) ::UnityW<::Pathfinding::Seeker>  seeker;

/// @brief Convert operator to "::Pathfinding::IPathModifier"
constexpr operator  ::Pathfinding::IPathModifier*() noexcept;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Apply(::Pathfinding::Path*  path) ;

static inline ::Pathfinding::MonoModifier* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ea1288, size 0x88, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ea11c0, size 0xc8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PreProcess, addr 0x5ea1310, size 0x4, virtual true, abstract: false, final false
inline void PreProcess(::Pathfinding::Path*  path) ;

constexpr ::UnityW<::Pathfinding::Seeker> const& __cordl_internal_get_seeker() const;

constexpr ::UnityW<::Pathfinding::Seeker>& __cordl_internal_get_seeker() ;

constexpr void __cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value) ;

/// @brief Method .ctor, addr 0x5e9db04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Order() ;

/// @brief Convert to "::Pathfinding::IPathModifier"
constexpr ::Pathfinding::IPathModifier* i___Pathfinding__IPathModifier() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoModifier(MonoModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoModifier(MonoModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21366};

/// @brief Field seeker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Seeker>  ___seeker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::MonoModifier, ___seeker) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::MonoModifier) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
