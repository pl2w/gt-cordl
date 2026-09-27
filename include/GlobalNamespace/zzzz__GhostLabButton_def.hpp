#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLabButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GhostLabButton)
namespace GlobalNamespace {
class GhostLab;
}
namespace GlobalNamespace {
class IBuildValidation;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostLabButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostLabButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostLabButton*, "", "GhostLabButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostLabButton
class CORDL_TYPE GhostLabButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field buttonIndex, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonIndex, put=__cordl_internal_set_buttonIndex)) int32_t  buttonIndex;

/// @brief Field forSingleDoor, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_forSingleDoor, put=__cordl_internal_set_forSingleDoor)) bool  forSingleDoor;

/// @brief Field ghostLab, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostLab, put=__cordl_internal_set_ghostLab)) ::UnityW<::GlobalNamespace::GhostLab>  ghostLab;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x5d0b0a4, size 0xbc, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method ButtonActivation, addr 0x5d0b160, size 0x2c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::GhostLabButton* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_buttonIndex() const;

constexpr int32_t& __cordl_internal_get_buttonIndex() ;

constexpr bool const& __cordl_internal_get_forSingleDoor() const;

constexpr bool& __cordl_internal_get_forSingleDoor() ;

constexpr ::UnityW<::GlobalNamespace::GhostLab> const& __cordl_internal_get_ghostLab() const;

constexpr ::UnityW<::GlobalNamespace::GhostLab>& __cordl_internal_get_ghostLab() ;

constexpr void __cordl_internal_set_buttonIndex(int32_t  value) ;

constexpr void __cordl_internal_set_forSingleDoor(bool  value) ;

constexpr void __cordl_internal_set_ghostLab(::UnityW<::GlobalNamespace::GhostLab>  value) ;

/// @brief Method .ctor, addr 0x5d0b18c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostLabButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostLabButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostLabButton(GhostLabButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostLabButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostLabButton(GhostLabButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{458};

/// @brief Field ghostLab, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostLab>  ___ghostLab;

/// @brief Field buttonIndex, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___buttonIndex;

/// @brief Field forSingleDoor, offset: 0xc4, size: 0x1, def value: None
 bool  ___forSingleDoor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostLabButton, ___ghostLab) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLabButton, ___buttonIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLabButton, ___forSingleDoor) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostLabButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
