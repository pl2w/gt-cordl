#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaTriggerBox)
// Forward declare root types
namespace GlobalNamespace {
class GorillaTriggerBox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTriggerBox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTriggerBox*, "", "GorillaTriggerBox");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTriggerBox
class CORDL_TYPE GorillaTriggerBox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaTriggerBox* New_ctor() ;

/// @brief Method OnBoxExited, addr 0x579deb0, size 0x4, virtual true, abstract: false, final false
inline void OnBoxExited() ;

/// @brief Method OnBoxTriggered, addr 0x579deac, size 0x4, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method .ctor, addr 0x579d380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTriggerBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTriggerBox(GorillaTriggerBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTriggerBox(GorillaTriggerBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1510};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaTriggerBox) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
