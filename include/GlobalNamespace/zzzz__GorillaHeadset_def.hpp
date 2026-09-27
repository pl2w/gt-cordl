#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHeadset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaHeadset)
// Forward declare root types
namespace GlobalNamespace {
class GorillaHeadset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHeadset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHeadset*, "", "GorillaHeadset");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHeadset
class CORDL_TYPE GorillaHeadset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaHeadset* New_ctor() ;

/// @brief Method Start, addr 0x579d99c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x579d9a0, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x579d9a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHeadset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHeadset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHeadset(GorillaHeadset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHeadset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHeadset(GorillaHeadset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1502};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaHeadset) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
