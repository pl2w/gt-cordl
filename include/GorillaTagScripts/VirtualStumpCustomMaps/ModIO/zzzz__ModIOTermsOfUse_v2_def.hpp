#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/ModIO/ModIOTermsOfUse_v2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LegalAgreements_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOTermsOfUse_v2)
namespace GlobalNamespace {
struct ModIOTermsOfUse_v2__ShowTerms_d__8;
}
namespace GlobalNamespace {
struct ModIOTermsOfUse_v2__StartLegalAgreements_d__9;
}
namespace Modio::Customizations {
class Agreement;
}
namespace Modio {
class Error;
}
namespace Modio {
class TermsOfUse;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps::ModIO {
class ModIOTermsOfUse_v2;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2*, "GorillaTagScripts.VirtualStumpCustomMaps.ModIO", "ModIOTermsOfUse_v2");
// Dependencies LegalAgreements
namespace GorillaTagScripts::VirtualStumpCustomMaps::ModIO {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.ModIO.ModIOTermsOfUse_v2
class CORDL_TYPE ModIOTermsOfUse_v2 : public ::GlobalNamespace::LegalAgreements {
public:
// Declarations
using _ShowTerms_d__8 = ::GlobalNamespace::ModIOTermsOfUse_v2__ShowTerms_d__8;

using _StartLegalAgreements_d__9 = ::GlobalNamespace::ModIOTermsOfUse_v2__StartLegalAgreements_d__9;

/// @brief Field cachedTermsText, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedTermsText, put=__cordl_internal_set_cachedTermsText)) ::StringW  cachedTermsText;

/// @brief Field confirmString, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_confirmString, put=__cordl_internal_set_confirmString)) ::StringW  confirmString;

/// @brief Field fullPrivacyPolicy, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullPrivacyPolicy, put=__cordl_internal_set_fullPrivacyPolicy)) ::Modio::Customizations::Agreement*  fullPrivacyPolicy;

/// @brief Field fullTermsOfUse, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullTermsOfUse, put=__cordl_internal_set_fullTermsOfUse)) ::Modio::Customizations::Agreement*  fullTermsOfUse;

/// @brief Field modioTermsInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_modioTermsInstance, put=setStaticF_modioTermsInstance)) ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2>  modioTermsInstance;

/// @brief Field termsOfUse, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_termsOfUse, put=__cordl_internal_set_termsOfUse)) ::Modio::TermsOfUse*  termsOfUse;

/// @brief Method Awake, addr 0x5bf2870, size 0x134, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FormatAgreementText, addr 0x5bf2da0, size 0xb78, virtual false, abstract: false, final false
inline ::StringW FormatAgreementText(::Modio::Customizations::Agreement*  agreement) ;

/// @brief Method GetStringForListItemIdx_LowerAlpha, addr 0x5bf3918, size 0x194, virtual false, abstract: false, final false
inline ::StringW GetStringForListItemIdx_LowerAlpha(int32_t  idx) ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bf29a4, size 0xb4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.ModIO.ModIOTermsOfUse_v2::<ShowTerms>d__8))]
/// @brief Method ShowTerms, addr 0x5bf2a58, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* ShowTerms() ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.ModIO.ModIOTermsOfUse_v2::<StartLegalAgreements>d__9))]
/// @brief Method StartLegalAgreements, addr 0x5bf2b60, size 0xd8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartLegalAgreements() ;

/// @brief Method UpdateTextFromTerms, addr 0x5bf2c38, size 0x168, virtual false, abstract: false, final false
inline void UpdateTextFromTerms() ;

constexpr ::StringW const& __cordl_internal_get_cachedTermsText() const;

constexpr ::StringW& __cordl_internal_get_cachedTermsText() ;

constexpr ::StringW const& __cordl_internal_get_confirmString() const;

constexpr ::StringW& __cordl_internal_get_confirmString() ;

constexpr ::Modio::Customizations::Agreement* const& __cordl_internal_get_fullPrivacyPolicy() const;

constexpr ::Modio::Customizations::Agreement*& __cordl_internal_get_fullPrivacyPolicy() ;

constexpr ::Modio::Customizations::Agreement* const& __cordl_internal_get_fullTermsOfUse() const;

constexpr ::Modio::Customizations::Agreement*& __cordl_internal_get_fullTermsOfUse() ;

constexpr ::Modio::TermsOfUse* const& __cordl_internal_get_termsOfUse() const;

constexpr ::Modio::TermsOfUse*& __cordl_internal_get_termsOfUse() ;

constexpr void __cordl_internal_set_cachedTermsText(::StringW  value) ;

constexpr void __cordl_internal_set_confirmString(::StringW  value) ;

constexpr void __cordl_internal_set_fullPrivacyPolicy(::Modio::Customizations::Agreement*  value) ;

constexpr void __cordl_internal_set_fullTermsOfUse(::Modio::Customizations::Agreement*  value) ;

constexpr void __cordl_internal_set_termsOfUse(::Modio::TermsOfUse*  value) ;

/// @brief Method .ctor, addr 0x5bf3aac, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2> getStaticF_modioTermsInstance() ;

static inline void setStaticF_modioTermsInstance(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIOTermsOfUse_v2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIOTermsOfUse_v2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIOTermsOfUse_v2(ModIOTermsOfUse_v2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIOTermsOfUse_v2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIOTermsOfUse_v2(ModIOTermsOfUse_v2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4077};

/// [SerializeField]
/// @brief Field confirmString, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___confirmString;

/// @brief Field termsOfUse, offset: 0xa0, size: 0x8, def value: None
 ::Modio::TermsOfUse*  ___termsOfUse;

/// @brief Field fullTermsOfUse, offset: 0xa8, size: 0x8, def value: None
 ::Modio::Customizations::Agreement*  ___fullTermsOfUse;

/// @brief Field fullPrivacyPolicy, offset: 0xb0, size: 0x8, def value: None
 ::Modio::Customizations::Agreement*  ___fullPrivacyPolicy;

/// @brief Field cachedTermsText, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___cachedTermsText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2, ___confirmString) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2, ___termsOfUse) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2, ___fullTermsOfUse) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2, ___fullPrivacyPolicy) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2, ___cachedTermsText) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::ModIO::ModIOTermsOfUse_v2) == 0xc0, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::ModIO
