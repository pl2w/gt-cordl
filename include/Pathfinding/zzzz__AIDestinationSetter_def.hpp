#pragma once
// IWYU pragma private; include "Pathfinding/AIDestinationSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AIDestinationSetter)
namespace Pathfinding {
class IAstarAI;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding {
class AIDestinationSetter;
}
// Write type traits
MARK_REF_T(::Pathfinding::AIDestinationSetter*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AIDestinationSetter*, "Pathfinding", "AIDestinationSetter");
// [UniqueComponent(tag = "ai.destination")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_a_i_destination_setter.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AIDestinationSetter
class CORDL_TYPE AIDestinationSetter : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field ai, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ai, put=__cordl_internal_set_ai)) ::Pathfinding::IAstarAI*  ai;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

static inline ::Pathfinding::AIDestinationSetter* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e37e6c, size 0x1a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e37c94, size 0x1d8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5e38010, size 0x12c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Pathfinding::IAstarAI* const& __cordl_internal_get_ai() const;

constexpr ::Pathfinding::IAstarAI*& __cordl_internal_get_ai() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_ai(::Pathfinding::IAstarAI*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e3813c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AIDestinationSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AIDestinationSetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AIDestinationSetter(AIDestinationSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AIDestinationSetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AIDestinationSetter(AIDestinationSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21173};

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field ai, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::IAstarAI*  ___ai;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AIDestinationSetter, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIDestinationSetter, ___ai) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AIDestinationSetter) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
