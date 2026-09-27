#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeChangerButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(NativeSizeChangerButton)
namespace GlobalNamespace {
class NativeSizeChangerSettings;
}
namespace GlobalNamespace {
class NativeSizeChanger;
}
// Forward declare root types
namespace GlobalNamespace {
class NativeSizeChangerButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NativeSizeChangerButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeSizeChangerButton*, "", "NativeSizeChangerButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: NativeSizeChangerButton
class CORDL_TYPE NativeSizeChangerButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field nativeSizeChanger, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nativeSizeChanger, put=__cordl_internal_set_nativeSizeChanger)) ::UnityW<::GlobalNamespace::NativeSizeChanger>  nativeSizeChanger;

/// @brief Field settings, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::GlobalNamespace::NativeSizeChangerSettings*  settings;

/// @brief Method ButtonActivation, addr 0x56d3a38, size 0x1c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::NativeSizeChangerButton* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::NativeSizeChanger> const& __cordl_internal_get_nativeSizeChanger() const;

constexpr ::UnityW<::GlobalNamespace::NativeSizeChanger>& __cordl_internal_get_nativeSizeChanger() ;

constexpr ::GlobalNamespace::NativeSizeChangerSettings* const& __cordl_internal_get_settings() const;

constexpr ::GlobalNamespace::NativeSizeChangerSettings*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_nativeSizeChanger(::UnityW<::GlobalNamespace::NativeSizeChanger>  value) ;

constexpr void __cordl_internal_set_settings(::GlobalNamespace::NativeSizeChangerSettings*  value) ;

/// @brief Method .ctor, addr 0x56d3a54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeSizeChangerButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeChangerButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeSizeChangerButton(NativeSizeChangerButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeChangerButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeSizeChangerButton(NativeSizeChangerButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1069};

/// [SerializeField]
/// @brief Field nativeSizeChanger, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NativeSizeChanger>  ___nativeSizeChanger;

/// [SerializeField]
/// @brief Field settings, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::NativeSizeChangerSettings*  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeSizeChangerButton, ___nativeSizeChanger) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeChangerButton, ___settings) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeSizeChangerButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
