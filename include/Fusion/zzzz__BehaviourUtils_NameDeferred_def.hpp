#pragma once
// IWYU pragma private; include "Fusion/BehaviourUtils_NameDeferred.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BehaviourUtils_NameDeferred)
namespace Fusion {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
struct BehaviourUtils_NameDeferred;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BehaviourUtils_NameDeferred);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BehaviourUtils_NameDeferred, "Fusion", "BehaviourUtils/NameDeferred");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.BehaviourUtils/NameDeferred
struct CORDL_TYPE BehaviourUtils_NameDeferred {
public:
// Declarations
/// @brief Method ToString, addr 0x5f97778, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5f97698, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Behaviour*  behaviour) ;

/// @brief Method op_Explicit, addr 0x5f97748, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BehaviourUtils_NameDeferred op_Explicit___GlobalNamespace__BehaviourUtils_NameDeferred(::Fusion::Behaviour*  behaviour) ;

/// @brief Method op_Implicit, addr 0x5f97764, size 0x14, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::GlobalNamespace::BehaviourUtils_NameDeferred  wrapper) ;

// Ctor Parameters []
// @brief default ctor
constexpr BehaviourUtils_NameDeferred() ;

// Ctor Parameters [CppParam { name: "_behaviour", ty: "::UnityW<::Fusion::Behaviour>", modifiers: "", def_value: None, comment: None }]
constexpr BehaviourUtils_NameDeferred(::UnityW<::Fusion::Behaviour>  _behaviour) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _behaviour, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::Behaviour>  _behaviour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BehaviourUtils_NameDeferred, _behaviour) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BehaviourUtils_NameDeferred) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
