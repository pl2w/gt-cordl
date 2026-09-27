#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaUI)
// Forward declare root types
namespace GlobalNamespace {
class GorillaUI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaUI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaUI*, "", "GorillaUI");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaUI
class CORDL_TYPE GorillaUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaUI* New_ctor() ;

/// @brief Method Start, addr 0x59470e4, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x59470e8, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x59470ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaUI(GorillaUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaUI(GorillaUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaUI) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
