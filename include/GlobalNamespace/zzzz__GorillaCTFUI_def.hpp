#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCTFUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaCTFUI)
// Forward declare root types
namespace GlobalNamespace {
class GorillaCTFUI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaCTFUI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaCTFUI*, "", "GorillaCTFUI");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaCTFUI
class CORDL_TYPE GorillaCTFUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaCTFUI* New_ctor() ;

/// @brief Method Start, addr 0x5904398, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x590439c, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x59043a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCTFUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCTFUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCTFUI(GorillaCTFUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCTFUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCTFUI(GorillaCTFUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2157};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaCTFUI) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
