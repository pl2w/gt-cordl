#pragma once
// IWYU pragma private; include "GlobalNamespace/TryOnBundleButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TryOnBundleButton)
// Forward declare root types
namespace GlobalNamespace {
class TryOnBundleButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TryOnBundleButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TryOnBundleButton*, "", "TryOnBundleButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: TryOnBundleButton
class CORDL_TYPE TryOnBundleButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field buttonIndex, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonIndex, put=__cordl_internal_set_buttonIndex)) int32_t  buttonIndex;

/// @brief Field playfabBundleID, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabBundleID, put=__cordl_internal_set_playfabBundleID)) ::StringW  playfabBundleID;

/// @brief Method ButtonActivationWithHand, addr 0x57802a0, size 0x84, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

static inline ::GlobalNamespace::TryOnBundleButton* New_ctor() ;

/// @brief Method UpdateColor, addr 0x5780324, size 0xf4, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr int32_t const& __cordl_internal_get_buttonIndex() const;

constexpr int32_t& __cordl_internal_get_buttonIndex() ;

constexpr ::StringW const& __cordl_internal_get_playfabBundleID() const;

constexpr ::StringW& __cordl_internal_get_playfabBundleID() ;

constexpr void __cordl_internal_set_buttonIndex(int32_t  value) ;

constexpr void __cordl_internal_set_playfabBundleID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5780418, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TryOnBundleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TryOnBundleButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TryOnBundleButton(TryOnBundleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryOnBundleButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryOnBundleButton(TryOnBundleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1401};

/// @brief Field buttonIndex, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___buttonIndex;

/// @brief Field playfabBundleID, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___playfabBundleID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TryOnBundleButton, ___buttonIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundleButton, ___playfabBundleID) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TryOnBundleButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
