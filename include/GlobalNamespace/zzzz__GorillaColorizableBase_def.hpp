#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColorizableBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaColorizableBase)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaColorizableBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaColorizableBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaColorizableBase*, "", "GorillaColorizableBase");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaColorizableBase
class CORDL_TYPE GorillaColorizableBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaColorizableBase* New_ctor() ;

/// @brief Method SetColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method .ctor, addr 0x590420c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaColorizableBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaColorizableBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaColorizableBase(GorillaColorizableBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaColorizableBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaColorizableBase(GorillaColorizableBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2154};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaColorizableBase) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
