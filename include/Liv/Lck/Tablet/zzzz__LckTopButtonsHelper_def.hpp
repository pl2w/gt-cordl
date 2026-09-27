#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckTopButtonsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckTopButtonsHelper)
namespace Liv::Lck::Tablet {
class ILckTopButtons;
}
namespace Liv::Lck::UI {
class LckToggle;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckTopButtonsHelper;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckTopButtonsHelper*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckTopButtonsHelper*, "Liv.Lck.Tablet", "LckTopButtonsHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckTopButtonsHelper
class CORDL_TYPE LckTopButtonsHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cameraToggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraToggle, put=__cordl_internal_set__cameraToggle)) ::UnityW<::Liv::Lck::UI::LckToggle>  _cameraToggle;

/// @brief Field _echoToggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoToggle, put=__cordl_internal_set__echoToggle)) ::UnityW<::Liv::Lck::UI::LckToggle>  _echoToggle;

/// @brief Field _streamToggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamToggle, put=__cordl_internal_set__streamToggle)) ::UnityW<::Liv::Lck::UI::LckToggle>  _streamToggle;

/// @brief Convert operator to "::Liv::Lck::Tablet::ILckTopButtons"
constexpr operator  ::Liv::Lck::Tablet::ILckTopButtons*() noexcept;

/// @brief Method HideButtons, addr 0x9d5ed90, size 0x40, virtual true, abstract: false, final true
inline void HideButtons() ;

static inline ::Liv::Lck::Tablet::LckTopButtonsHelper* New_ctor() ;

/// @brief Method SetCameraPageVisualsManually, addr 0x9d5ee04, size 0x34, virtual true, abstract: false, final true
inline void SetCameraPageVisualsManually() ;

/// @brief Method ShowButtons, addr 0x9d5edd0, size 0x34, virtual true, abstract: false, final true
inline void ShowButtons() ;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& __cordl_internal_get__cameraToggle() const;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& __cordl_internal_get__cameraToggle() ;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& __cordl_internal_get__echoToggle() const;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& __cordl_internal_get__echoToggle() ;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& __cordl_internal_get__streamToggle() const;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& __cordl_internal_get__streamToggle() ;

constexpr void __cordl_internal_set__cameraToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value) ;

constexpr void __cordl_internal_set__echoToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value) ;

constexpr void __cordl_internal_set__streamToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value) ;

/// @brief Method .ctor, addr 0x9d5ee38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::Tablet::ILckTopButtons"
constexpr ::Liv::Lck::Tablet::ILckTopButtons* i___Liv__Lck__Tablet__ILckTopButtons() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTopButtonsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTopButtonsHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTopButtonsHelper(LckTopButtonsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTopButtonsHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTopButtonsHelper(LckTopButtonsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24956};

/// [SerializeField]
/// @brief Field _cameraToggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckToggle>  ____cameraToggle;

/// [SerializeField]
/// @brief Field _streamToggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckToggle>  ____streamToggle;

/// [SerializeField]
/// @brief Field _echoToggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckToggle>  ____echoToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsHelper, ____cameraToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsHelper, ____streamToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsHelper, ____echoToggle) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckTopButtonsHelper) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
