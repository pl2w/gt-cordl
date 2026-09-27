#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementTextAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_PostAcceptAction_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LegalAgreementTextAsset)
namespace GlobalNamespace {
struct LegalAgreementTextAsset_PostAcceptAction;
}
// Forward declare root types
namespace GlobalNamespace {
class LegalAgreementTextAsset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegalAgreementTextAsset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreementTextAsset*, "", "LegalAgreementTextAsset");
// [CreateAssetMenu(fileName = "NewLegalAgreementAsset", menuName = "Gorilla Tag/Legal Agreement Asset")]
// Dependencies LegalAgreementTextAsset::PostAcceptAction, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreementTextAsset
class CORDL_TYPE LegalAgreementTextAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using PostAcceptAction = ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction;

/// @brief Field confirmString, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_confirmString, put=__cordl_internal_set_confirmString)) ::StringW  confirmString;

/// @brief Field errorMessage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorMessage, put=__cordl_internal_set_errorMessage)) ::StringW  errorMessage;

/// @brief Field latestVersionKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestVersionKey, put=__cordl_internal_set_latestVersionKey)) ::StringW  latestVersionKey;

/// @brief Field optInAction, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_optInAction, put=__cordl_internal_set_optInAction)) ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction  optInAction;

/// @brief Field optional, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_optional, put=__cordl_internal_set_optional)) bool  optional;

/// @brief Field playFabKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabKey, put=__cordl_internal_set_playFabKey)) ::StringW  playFabKey;

/// @brief Field title, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_title, put=__cordl_internal_set_title)) ::StringW  title;

static inline ::GlobalNamespace::LegalAgreementTextAsset* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_confirmString() const;

constexpr ::StringW& __cordl_internal_get_confirmString() ;

constexpr ::StringW const& __cordl_internal_get_errorMessage() const;

constexpr ::StringW& __cordl_internal_get_errorMessage() ;

constexpr ::StringW const& __cordl_internal_get_latestVersionKey() const;

constexpr ::StringW& __cordl_internal_get_latestVersionKey() ;

constexpr ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction const& __cordl_internal_get_optInAction() const;

constexpr ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction& __cordl_internal_get_optInAction() ;

constexpr bool const& __cordl_internal_get_optional() const;

constexpr bool& __cordl_internal_get_optional() ;

constexpr ::StringW const& __cordl_internal_get_playFabKey() const;

constexpr ::StringW& __cordl_internal_get_playFabKey() ;

constexpr ::StringW const& __cordl_internal_get_title() const;

constexpr ::StringW& __cordl_internal_get_title() ;

constexpr void __cordl_internal_set_confirmString(::StringW  value) ;

constexpr void __cordl_internal_set_errorMessage(::StringW  value) ;

constexpr void __cordl_internal_set_latestVersionKey(::StringW  value) ;

constexpr void __cordl_internal_set_optInAction(::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction  value) ;

constexpr void __cordl_internal_set_optional(bool  value) ;

constexpr void __cordl_internal_set_playFabKey(::StringW  value) ;

constexpr void __cordl_internal_set_title(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a63634, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreementTextAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreementTextAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreementTextAsset(LegalAgreementTextAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreementTextAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreementTextAsset(LegalAgreementTextAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3072};

/// @brief Field title, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___title;

/// @brief Field playFabKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___playFabKey;

/// @brief Field latestVersionKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___latestVersionKey;

/// [TextArea(3, 5)]
/// @brief Field errorMessage, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___errorMessage;

/// @brief Field optional, offset: 0x38, size: 0x1, def value: None
 bool  ___optional;

/// @brief Field optInAction, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction  ___optInAction;

/// @brief Field confirmString, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___confirmString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset, ___title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset, ___playFabKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset, ___latestVersionKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset, ___errorMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset, ___optional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset, ___optInAction) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset, ___confirmString) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreementTextAsset) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
