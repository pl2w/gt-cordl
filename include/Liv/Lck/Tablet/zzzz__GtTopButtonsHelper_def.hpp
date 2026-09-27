#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/GtTopButtonsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtTopButtonsHelper)
namespace Liv::Lck::GorillaTag {
class GtTopButton;
}
namespace Liv::Lck::Tablet {
class ILckTopButtons;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class GtTopButtonsHelper;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::GtTopButtonsHelper*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::GtTopButtonsHelper*, "Liv.Lck.Tablet", "GtTopButtonsHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.GtTopButtonsHelper
class CORDL_TYPE GtTopButtonsHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cameraButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraButton, put=__cordl_internal_set__cameraButton)) ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  _cameraButton;

/// @brief Field _echoButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoButton, put=__cordl_internal_set__echoButton)) ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  _echoButton;

/// @brief Field _streamButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamButton, put=__cordl_internal_set__streamButton)) ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  _streamButton;

/// @brief Convert operator to "::Liv::Lck::Tablet::ILckTopButtons"
constexpr operator  ::Liv::Lck::Tablet::ILckTopButtons*() noexcept;

/// @brief Method HideButtons, addr 0x9d15868, size 0x40, virtual true, abstract: false, final true
inline void HideButtons() ;

static inline ::Liv::Lck::Tablet::GtTopButtonsHelper* New_ctor() ;

/// @brief Method SelectButton, addr 0x9d15764, size 0x104, virtual false, abstract: false, final false
inline void SelectButton(::Liv::Lck::GorillaTag::GtTopButton*  selected) ;

/// @brief Method SetCameraPageVisualsManually, addr 0x9d158e8, size 0x40, virtual true, abstract: false, final true
inline void SetCameraPageVisualsManually() ;

/// @brief Method ShowButtons, addr 0x9d158a8, size 0x40, virtual true, abstract: false, final true
inline void ShowButtons() ;

/// @brief Method Start, addr 0x9d1562c, size 0x138, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__3_0, addr 0x9d15930, size 0x8, virtual false, abstract: false, final false
inline void _Start_b__3_0() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__3_1, addr 0x9d15938, size 0x8, virtual false, abstract: false, final false
inline void _Start_b__3_1() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__3_2, addr 0x9d15940, size 0x8, virtual false, abstract: false, final false
inline void _Start_b__3_2() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTopButton> const& __cordl_internal_get__cameraButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>& __cordl_internal_get__cameraButton() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTopButton> const& __cordl_internal_get__echoButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>& __cordl_internal_get__echoButton() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTopButton> const& __cordl_internal_get__streamButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>& __cordl_internal_get__streamButton() ;

constexpr void __cordl_internal_set__cameraButton(::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  value) ;

constexpr void __cordl_internal_set__echoButton(::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  value) ;

constexpr void __cordl_internal_set__streamButton(::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  value) ;

/// @brief Method .ctor, addr 0x9d15928, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::Tablet::ILckTopButtons"
constexpr ::Liv::Lck::Tablet::ILckTopButtons* i___Liv__Lck__Tablet__ILckTopButtons() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtTopButtonsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtTopButtonsHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtTopButtonsHelper(GtTopButtonsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtTopButtonsHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtTopButtonsHelper(GtTopButtonsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29588};

/// [SerializeField]
/// @brief Field _cameraButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  ____cameraButton;

/// [SerializeField]
/// @brief Field _streamButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  ____streamButton;

/// [SerializeField]
/// @brief Field _echoButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtTopButton>  ____echoButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::GtTopButtonsHelper, ____cameraButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::GtTopButtonsHelper, ____streamButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::GtTopButtonsHelper, ____echoButton) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::GtTopButtonsHelper) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
