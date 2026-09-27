#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAgeGateConfirmation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KidAgeConfirmationResult_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDAgeGateConfirmation)
namespace GlobalNamespace {
struct KidAgeConfirmationResult;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IntVariable;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDAgeGateConfirmation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDAgeGateConfirmation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDAgeGateConfirmation*, "", "KIDAgeGateConfirmation");
// Dependencies KidAgeConfirmationResult, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDAgeGateConfirmation
class CORDL_TYPE KIDAgeGateConfirmation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Result, put=set_Result)) ::GlobalNamespace::KidAgeConfirmationResult  Result;

 __declspec(property(get=get_UserAgeVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  UserAgeVar;

/// @brief Field <Result>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) ::GlobalNamespace::KidAgeConfirmationResult  _Result_k__BackingField;

/// @brief Field _localizedTextBody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizedTextBody, put=__cordl_internal_set__localizedTextBody)) ::UnityW<::GlobalNamespace::LocalizedText>  _localizedTextBody;

/// @brief Field _userAgeVar, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__userAgeVar, put=__cordl_internal_set__userAgeVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _userAgeVar;

static inline ::GlobalNamespace::KIDAgeGateConfirmation* New_ctor() ;

/// @brief Method OnBack, addr 0x5a2b654, size 0xc, virtual false, abstract: false, final false
inline void OnBack() ;

/// @brief Method OnConfirm, addr 0x5a2b648, size 0xc, virtual false, abstract: false, final false
inline void OnConfirm() ;

/// @brief Method Reset, addr 0x5a2a7a8, size 0xb8, virtual false, abstract: false, final false
inline void Reset(int32_t  userAge) ;

/// @brief Method Start, addr 0x5a2b640, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::KidAgeConfirmationResult const& __cordl_internal_get__Result_k__BackingField() const;

constexpr ::GlobalNamespace::KidAgeConfirmationResult& __cordl_internal_get__Result_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__localizedTextBody() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__localizedTextBody() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__userAgeVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__userAgeVar() ;

constexpr void __cordl_internal_set__Result_k__BackingField(::GlobalNamespace::KidAgeConfirmationResult  value) ;

constexpr void __cordl_internal_set__localizedTextBody(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set__userAgeVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

/// @brief Method .ctor, addr 0x5a2b660, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x5a2b630, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::KidAgeConfirmationResult get_Result() ;

/// @brief Method get_UserAgeVar, addr 0x5a2b4e4, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* get_UserAgeVar() ;

/// [CompilerGenerated]
/// @brief Method set_Result, addr 0x5a2b638, size 0x8, virtual false, abstract: false, final false
inline void set_Result(::GlobalNamespace::KidAgeConfirmationResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDAgeGateConfirmation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDAgeGateConfirmation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDAgeGateConfirmation(KIDAgeGateConfirmation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDAgeGateConfirmation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDAgeGateConfirmation(KIDAgeGateConfirmation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2911};

/// [Header("Localization")]
/// [SerializeField]
/// @brief Field _localizedTextBody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____localizedTextBody;

/// @brief Field _userAgeVar, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____userAgeVar;

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::KidAgeConfirmationResult  ____Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDAgeGateConfirmation, ____localizedTextBody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGateConfirmation, ____userAgeVar) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeGateConfirmation, ____Result_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDAgeGateConfirmation) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
