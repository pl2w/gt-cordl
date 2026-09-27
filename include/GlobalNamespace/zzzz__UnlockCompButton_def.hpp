#pragma once
// IWYU pragma private; include "GlobalNamespace/UnlockCompButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlockCompButton)
// Forward declare root types
namespace GlobalNamespace {
class UnlockCompButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnlockCompButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnlockCompButton*, "", "UnlockCompButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnlockCompButton
class CORDL_TYPE UnlockCompButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field gameMode, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameMode, put=__cordl_internal_set_gameMode)) ::StringW  gameMode;

/// @brief Field initialized, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Method ButtonActivation, addr 0x59a69a0, size 0xa8, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::UnlockCompButton* New_ctor() ;

/// @brief Method Start, addr 0x59a6890, size 0x8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x59a6898, size 0x108, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get_gameMode() const;

constexpr ::StringW& __cordl_internal_get_gameMode() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr void __cordl_internal_set_gameMode(::StringW  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

/// @brief Method .ctor, addr 0x59a6a48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockCompButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockCompButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockCompButton(UnlockCompButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockCompButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockCompButton(UnlockCompButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2635};

/// @brief Field gameMode, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___gameMode;

/// @brief Field initialized, offset: 0xc0, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnlockCompButton, ___gameMode) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockCompButton, ___initialized) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnlockCompButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
