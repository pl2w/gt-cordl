#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIEmployeeTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIEmployeeTerminal)
namespace GlobalNamespace {
class GRUIStationEmployeeBadges;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace PlayFab::ClientModels {
class GetUserDataResult;
}
namespace PlayFab::ClientModels {
class UpdateUserDataResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUIEmployeeTerminal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIEmployeeTerminal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIEmployeeTerminal*, "", "GRUIEmployeeTerminal");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIEmployeeTerminal
class CORDL_TYPE GRUIEmployeeTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field badgeStation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeStation, put=__cordl_internal_set_badgeStation)) ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  badgeStation;

/// @brief Field entityTypeId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_entityTypeId, put=__cordl_internal_set_entityTypeId)) int32_t  entityTypeId;

/// @brief Field isEmployee, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEmployee, put=__cordl_internal_set_isEmployee)) bool  isEmployee;

/// @brief Field isSigningUp, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSigningUp, put=__cordl_internal_set_isSigningUp)) bool  isSigningUp;

/// @brief Field signupButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_signupButton, put=__cordl_internal_set_signupButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  signupButton;

/// @brief Field signupButtonText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_signupButtonText, put=__cordl_internal_set_signupButtonText)) ::UnityW<::TMPro::TMP_Text>  signupButtonText;

/// @brief Field spawnMarker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnMarker, put=__cordl_internal_set_spawnMarker)) ::UnityW<::UnityEngine::Transform>  spawnMarker;

/// @brief Method GetSpawnMarker, addr 0x58d20e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnMarker() ;

static inline ::GlobalNamespace::GRUIEmployeeTerminal* New_ctor() ;

/// @brief Method OnGetUserDataInitialState, addr 0x58d20f0, size 0xac, virtual false, abstract: false, final false
inline void OnGetUserDataInitialState(::PlayFab::ClientModels::GetUserDataResult*  result) ;

/// @brief Method OnGetUserDataInitialStateFail, addr 0x58d219c, size 0x8, virtual false, abstract: false, final false
inline void OnGetUserDataInitialStateFail(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnSaveTableFailure, addr 0x58d21b0, size 0x8, virtual false, abstract: false, final false
inline void OnSaveTableFailure(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnSaveTableSuccess, addr 0x58d21a4, size 0xc, virtual false, abstract: false, final false
inline void OnSaveTableSuccess(::PlayFab::ClientModels::UpdateUserDataResult*  result) ;

/// @brief Method OnSignup, addr 0x58d1e54, size 0x294, virtual false, abstract: false, final false
inline void OnSignup() ;

/// @brief Method Refresh, addr 0x58d1dac, size 0xa8, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method Setup, addr 0x58d1af8, size 0x2b4, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges> const& __cordl_internal_get_badgeStation() const;

constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>& __cordl_internal_get_badgeStation() ;

constexpr int32_t const& __cordl_internal_get_entityTypeId() const;

constexpr int32_t& __cordl_internal_get_entityTypeId() ;

constexpr bool const& __cordl_internal_get_isEmployee() const;

constexpr bool& __cordl_internal_get_isEmployee() ;

constexpr bool const& __cordl_internal_get_isSigningUp() const;

constexpr bool& __cordl_internal_get_isSigningUp() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_signupButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_signupButton() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_signupButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_signupButtonText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnMarker() ;

constexpr void __cordl_internal_set_badgeStation(::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  value) ;

constexpr void __cordl_internal_set_entityTypeId(int32_t  value) ;

constexpr void __cordl_internal_set_isEmployee(bool  value) ;

constexpr void __cordl_internal_set_isSigningUp(bool  value) ;

constexpr void __cordl_internal_set_signupButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_signupButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_spawnMarker(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x58d21b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIEmployeeTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIEmployeeTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIEmployeeTerminal(GRUIEmployeeTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIEmployeeTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIEmployeeTerminal(GRUIEmployeeTerminal const& ) = delete;

/// @brief Field GR_DATA_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GR_DATA_KEY{u"GRData"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2100};

/// [SerializeField]
/// @brief Field signupButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___signupButton;

/// [SerializeField]
/// @brief Field signupButtonText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___signupButtonText;

/// [SerializeField]
/// @brief Field spawnMarker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnMarker;

/// [SerializeField]
/// @brief Field badgeStation, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  ___badgeStation;

/// @brief Field entityTypeId, offset: 0x40, size: 0x4, def value: None
 int32_t  ___entityTypeId;

/// @brief Field isEmployee, offset: 0x44, size: 0x1, def value: None
 bool  ___isEmployee;

/// @brief Field isSigningUp, offset: 0x45, size: 0x1, def value: None
 bool  ___isSigningUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIEmployeeTerminal, ___signupButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeTerminal, ___signupButtonText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeTerminal, ___spawnMarker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeTerminal, ___badgeStation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeTerminal, ___entityTypeId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeTerminal, ___isEmployee) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeTerminal, ___isSigningUp) == 0x45, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIEmployeeTerminal) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
