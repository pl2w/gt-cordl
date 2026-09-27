#pragma once
// IWYU pragma private; include "GlobalNamespace/Positionable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Positionable)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Positionable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Positionable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Positionable*, "", "Positionable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Positionable
class CORDL_TYPE Positionable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method CopyPostion, addr 0x5712b54, size 0x44, virtual false, abstract: false, final false
inline void CopyPostion(::UnityEngine::Transform*  t) ;

static inline ::GlobalNamespace::Positionable* New_ctor() ;

/// @brief Method StickRightUnder, addr 0x5712b98, size 0xa0, virtual false, abstract: false, final false
inline void StickRightUnder(::UnityEngine::Transform*  t) ;

/// @brief Method .ctor, addr 0x5712c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Positionable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Positionable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Positionable(Positionable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Positionable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Positionable(Positionable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Positionable) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
