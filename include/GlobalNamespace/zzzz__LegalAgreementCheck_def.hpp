#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(LegalAgreementCheck)
namespace GlobalNamespace {
class LegalAgreements;
}
// Forward declare root types
namespace GlobalNamespace {
class LegalAgreementCheck;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegalAgreementCheck*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreementCheck*, "", "LegalAgreementCheck");
// Dependencies LegalAgreementTextAsset, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreementCheck
class CORDL_TYPE LegalAgreementCheck : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field agreements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_agreements, put=__cordl_internal_set_agreements)) ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  agreements;

/// @brief Field legalAgreements, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_legalAgreements, put=__cordl_internal_set_legalAgreements)) ::UnityW<::GlobalNamespace::LegalAgreements>  legalAgreements;

/// @brief Field testAgreement, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_testAgreement, put=__cordl_internal_set_testAgreement)) bool  testAgreement;

static inline ::GlobalNamespace::LegalAgreementCheck* New_ctor() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>> const& __cordl_internal_get_agreements() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>& __cordl_internal_get_agreements() ;

constexpr ::UnityW<::GlobalNamespace::LegalAgreements> const& __cordl_internal_get_legalAgreements() const;

constexpr ::UnityW<::GlobalNamespace::LegalAgreements>& __cordl_internal_get_legalAgreements() ;

constexpr bool const& __cordl_internal_get_testAgreement() const;

constexpr bool& __cordl_internal_get_testAgreement() ;

constexpr void __cordl_internal_set_agreements(::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  value) ;

constexpr void __cordl_internal_set_legalAgreements(::UnityW<::GlobalNamespace::LegalAgreements>  value) ;

constexpr void __cordl_internal_set_testAgreement(bool  value) ;

/// @brief Method .ctor, addr 0x5a5fa30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreementCheck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreementCheck", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreementCheck(LegalAgreementCheck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreementCheck", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreementCheck(LegalAgreementCheck const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3058};

/// [SerializeField]
/// @brief Field agreements, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  ___agreements;

/// [SerializeField]
/// @brief Field testAgreement, offset: 0x28, size: 0x1, def value: None
 bool  ___testAgreement;

/// [SerializeField]
/// @brief Field legalAgreements, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LegalAgreements>  ___legalAgreements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreementCheck, ___agreements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementCheck, ___testAgreement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementCheck, ___legalAgreements) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreementCheck) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
