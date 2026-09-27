#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIScrollbar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
CORDL_MODULE_EXPORT(KIDUIScrollbar)
// Forward declare root types
namespace GlobalNamespace {
class KIDUIScrollbar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUIScrollbar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIScrollbar*, "", "KIDUIScrollbar");
// [AddComponentMenu("UI/KIDUI Scrollbar", 37)]
// Dependencies UnityEngine.UI.Scrollbar
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIScrollbar
class CORDL_TYPE KIDUIScrollbar : public ::UnityEngine::UI::Scrollbar {
public:
// Declarations
static inline ::GlobalNamespace::KIDUIScrollbar* New_ctor() ;

/// @brief Method .ctor, addr 0x56c1e6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIScrollbar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIScrollbar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIScrollbar(KIDUIScrollbar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIScrollbar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIScrollbar(KIDUIScrollbar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUIScrollbar) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
