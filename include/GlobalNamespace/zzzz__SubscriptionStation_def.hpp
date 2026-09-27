#pragma once
// IWYU pragma private; include "GlobalNamespace/SubscriptionStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SubscriptionStation)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class SubscriptionStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SubscriptionStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionStation*, "", "SubscriptionStation");
// [Obsolete("DEPRECATED! Use SubscriptionKiosk instead")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SubscriptionStation
class CORDL_TYPE SubscriptionStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field formatString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_formatString, put=__cordl_internal_set_formatString)) ::StringW  formatString;

/// @brief Field screenText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenText, put=__cordl_internal_set_screenText)) ::UnityW<::TMPro::TMP_Text>  screenText;

/// @brief Method Awake, addr 0x5b21dd8, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SubscriptionStation* New_ctor() ;

/// @brief Method ToggleSubsDecoration, addr 0x5b22484, size 0x4, virtual false, abstract: false, final false
inline void ToggleSubsDecoration() ;

/// @brief Method ToggleSubsOnly, addr 0x5b22418, size 0x6c, virtual false, abstract: false, final false
inline void ToggleSubsOnly() ;

/// @brief Method ToggleSubscriptionStatus, addr 0x5b223bc, size 0x5c, virtual false, abstract: false, final false
inline void ToggleSubscriptionStatus() ;

/// @brief Method UpdateScreen, addr 0x5b21f7c, size 0x440, virtual false, abstract: false, final false
inline void UpdateScreen() ;

constexpr ::StringW const& __cordl_internal_get_formatString() const;

constexpr ::StringW& __cordl_internal_get_formatString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_screenText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_screenText() ;

constexpr void __cordl_internal_set_formatString(::StringW  value) ;

constexpr void __cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5b22488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionStation(SubscriptionStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionStation(SubscriptionStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3612};

/// [SerializeField]
/// @brief Field screenText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___screenText;

/// @brief Field formatString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___formatString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionStation, ___screenText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionStation, ___formatString) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionStation) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
