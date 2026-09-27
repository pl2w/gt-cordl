#pragma once
// IWYU pragma private; include "GlobalNamespace/Clock3x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableBehavior_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Clock3x3)
namespace GlobalNamespace {
struct Clock3x3__Initialize_d__9;
}
namespace PlayFab {
class PlayFabError;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class Clock3x3;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Clock3x3*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Clock3x3*, "", "Clock3x3");
// Dependencies ObservableBehavior
namespace GlobalNamespace {
// Is value type: false
// CS Name: Clock3x3
class CORDL_TYPE Clock3x3 : public ::GlobalNamespace::ObservableBehavior {
public:
// Declarations
using _Initialize_d__9 = ::GlobalNamespace::Clock3x3__Initialize_d__9;

/// @brief Field color, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Gradient*  color;

/// @brief Field display, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_display, put=__cordl_internal_set_display)) ::UnityW<::TMPro::TMP_Text>  display;

/// @brief Field formatString, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_formatString, put=__cordl_internal_set_formatString)) ::StringW  formatString;

/// @brief Field headings, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_headings, put=__cordl_internal_set_headings)) ::ArrayW<::StringW>  headings;

/// @brief Field initialized, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field titleDataKey, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

/// @brief Method HexColor, addr 0x55ed834, size 0x228, virtual false, abstract: false, final false
inline ::StringW HexColor(::UnityEngine::Color  color) ;

/// [AsyncStateMachine(typeof(Clock3x3::<Initialize>d__9))]
/// @brief Method Initialize, addr 0x55eda94, size 0xa8, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::Clock3x3* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x55ed480, size 0x3b4, virtual true, abstract: false, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x55eda5c, size 0x38, virtual true, abstract: false, final false
inline void OnBecameObservable() ;

/// @brief Method OnLostObservable, addr 0x55edc3c, size 0x2c, virtual true, abstract: false, final false
inline void OnLostObservable() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_color() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_display() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_display() ;

constexpr ::StringW const& __cordl_internal_get_formatString() const;

constexpr ::StringW& __cordl_internal_get_formatString() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_headings() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_headings() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_display(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_formatString(::StringW  value) ;

constexpr void __cordl_internal_set_headings(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x55edc68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method onTD, addr 0x55edb3c, size 0x6c, virtual false, abstract: false, final false
inline void onTD(::StringW  s) ;

/// @brief Method onTDError, addr 0x55edba8, size 0x94, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Clock3x3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Clock3x3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Clock3x3(Clock3x3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Clock3x3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Clock3x3(Clock3x3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{58};

/// [SerializeField]
/// @brief Field titleDataKey, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// [SerializeField]
/// @brief Field display, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___display;

/// [SerializeField]
/// @brief Field color, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___color;

/// @brief Field formatString, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___formatString;

/// @brief Field initialized, offset: 0x60, size: 0x1, def value: None
 bool  ___initialized;

/// [SerializeField]
/// @brief Field headings, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___headings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Clock3x3, ___titleDataKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Clock3x3, ___display) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Clock3x3, ___color) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Clock3x3, ___formatString) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Clock3x3, ___initialized) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Clock3x3, ___headings) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Clock3x3) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
