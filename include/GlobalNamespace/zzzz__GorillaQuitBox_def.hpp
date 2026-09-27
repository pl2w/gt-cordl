#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaQuitBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
CORDL_MODULE_EXPORT(GorillaQuitBox)
// Forward declare root types
namespace GlobalNamespace {
class GorillaQuitBox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaQuitBox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaQuitBox*, "", "GorillaQuitBox");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaQuitBox
class CORDL_TYPE GorillaQuitBox : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
static inline ::GlobalNamespace::GorillaQuitBox* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x579dde8, size 0x94, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method Start, addr 0x579dde4, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x579de7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaQuitBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaQuitBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaQuitBox(GorillaQuitBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaQuitBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaQuitBox(GorillaQuitBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1506};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaQuitBox) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
