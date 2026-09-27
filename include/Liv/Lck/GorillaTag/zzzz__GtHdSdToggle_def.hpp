#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtHdSdToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GtHdSdToggle)
namespace Liv::Lck::GorillaTag {
class GtButton;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtHdSdToggle;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtHdSdToggle*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtHdSdToggle*, "Liv.Lck.GorillaTag", "GtHdSdToggle");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtHdSdToggle
class CORDL_TYPE GtHdSdToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Button)) ::UnityW<::Liv::Lck::GorillaTag::GtButton>  Button;

/// @brief Field OnHdModeChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHdModeChanged, put=__cordl_internal_set_OnHdModeChanged)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnHdModeChanged;

/// @brief Field _hdLabelText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hdLabelText, put=__cordl_internal_set__hdLabelText)) ::StringW  _hdLabelText;

/// @brief Field _hdSdButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__hdSdButton, put=__cordl_internal_set__hdSdButton)) ::UnityW<::Liv::Lck::GorillaTag::GtButton>  _hdSdButton;

/// @brief Field _isHd, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHd, put=__cordl_internal_set__isHd)) bool  _isHd;

/// @brief Field _sdLabelText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sdLabelText, put=__cordl_internal_set__sdLabelText)) ::StringW  _sdLabelText;

static inline ::Liv::Lck::GorillaTag::GtHdSdToggle* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d238a8, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d23818, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessHdSdToggle, addr 0x9d2393c, size 0x68, virtual false, abstract: false, final false
inline void ProcessHdSdToggle() ;

/// @brief Method SetIsHdNoNotify, addr 0x9d237c8, size 0x8, virtual false, abstract: false, final false
inline void SetIsHdNoNotify(bool  value) ;

/// @brief Method Start, addr 0x9d23938, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateUi, addr 0x9d237d0, size 0x48, virtual false, abstract: false, final false
inline void UpdateUi() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnHdModeChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnHdModeChanged() ;

constexpr ::StringW const& __cordl_internal_get__hdLabelText() const;

constexpr ::StringW& __cordl_internal_get__hdLabelText() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtButton> const& __cordl_internal_get__hdSdButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtButton>& __cordl_internal_get__hdSdButton() ;

constexpr bool const& __cordl_internal_get__isHd() const;

constexpr bool& __cordl_internal_get__isHd() ;

constexpr ::StringW const& __cordl_internal_get__sdLabelText() const;

constexpr ::StringW& __cordl_internal_get__sdLabelText() ;

constexpr void __cordl_internal_set_OnHdModeChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set__hdLabelText(::StringW  value) ;

constexpr void __cordl_internal_set__hdSdButton(::UnityW<::Liv::Lck::GorillaTag::GtButton>  value) ;

constexpr void __cordl_internal_set__isHd(bool  value) ;

constexpr void __cordl_internal_set__sdLabelText(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d239a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Button, addr 0x9d237c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Liv::Lck::GorillaTag::GtButton> get_Button() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtHdSdToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtHdSdToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtHdSdToggle(GtHdSdToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtHdSdToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtHdSdToggle(GtHdSdToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29632};

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _hdLabelText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____hdLabelText;

/// [SerializeField]
/// @brief Field _sdLabelText, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____sdLabelText;

/// [SerializeField]
/// @brief Field _isHd, offset: 0x30, size: 0x1, def value: None
 bool  ____isHd;

/// [Space(10)]
/// [Header("Elements")]
/// [SerializeField]
/// @brief Field _hdSdButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtButton>  ____hdSdButton;

/// [Space(10)]
/// [Header("Events")]
/// @brief Field OnHdModeChanged, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnHdModeChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtHdSdToggle, ____hdLabelText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtHdSdToggle, ____sdLabelText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtHdSdToggle, ____isHd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtHdSdToggle, ____hdSdButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtHdSdToggle, ___OnHdModeChanged) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtHdSdToggle) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
