#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsBrowseScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsListScreen_def.hpp"
CORDL_MODULE_EXPORT(CustomMapsBrowseScreen)
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsBrowseScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsBrowseScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsBrowseScreen*, "", "CustomMapsBrowseScreen");
// Dependencies CustomMapsListScreen
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsBrowseScreen
class CORDL_TYPE CustomMapsBrowseScreen : public ::GlobalNamespace::CustomMapsListScreen {
public:
// Declarations
static inline ::GlobalNamespace::CustomMapsBrowseScreen* New_ctor() ;

/// @brief Method .ctor, addr 0x59f55fc, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsBrowseScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsBrowseScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsBrowseScreen(CustomMapsBrowseScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsBrowseScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsBrowseScreen(CustomMapsBrowseScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2736};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomMapsBrowseScreen) == 0x1e8, "Size mismatch!");

} // namespace end def GlobalNamespace
