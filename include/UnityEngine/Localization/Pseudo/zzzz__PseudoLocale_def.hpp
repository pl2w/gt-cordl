#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/PseudoLocale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PseudoLocale)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Pseudo {
class IPseudoLocalizationMethod;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class PseudoLocale;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::PseudoLocale*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::PseudoLocale*, "UnityEngine.Localization.Pseudo", "PseudoLocale");
// [CreateAssetMenu(menuName = "Localization/Pseudo-Locale", fileName = "Pseudo-Locale(pseudo)")]
// Dependencies UnityEngine.Localization.Locale
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.PseudoLocale
class CORDL_TYPE PseudoLocale : public ::UnityEngine::Localization::Locale {
public:
// Declarations
 __declspec(property(get=get_Methods)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*  Methods;

/// @brief Field m_Methods, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Methods, put=__cordl_internal_set_m_Methods)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*  m_Methods;

/// @brief Method CreatePseudoLocale, addr 0xb0264b4, size 0x74, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Pseudo::PseudoLocale> CreatePseudoLocale() ;

/// @brief Method GetPseudoString, addr 0xb0269a8, size 0x1f4, virtual true, abstract: false, final false
inline ::StringW GetPseudoString(::StringW  input) ;

static inline ::UnityEngine::Localization::Pseudo::PseudoLocale* New_ctor() ;

/// @brief Method Reset, addr 0xb026840, size 0x168, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToString, addr 0xb026b9c, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>* const& __cordl_internal_get_m_Methods() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*& __cordl_internal_get_m_Methods() ;

constexpr void __cordl_internal_set_m_Methods(::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*  value) ;

/// @brief Method .ctor, addr 0xb026528, size 0x318, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Methods, addr 0xb0264ac, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>* get_Methods() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PseudoLocale() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PseudoLocale", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PseudoLocale(PseudoLocale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PseudoLocale", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PseudoLocale(PseudoLocale const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25132};

/// [SerializeReference]
/// @brief Field m_Methods, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>*  ___m_Methods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Pseudo::PseudoLocale, ___m_Methods) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Pseudo::PseudoLocale) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
