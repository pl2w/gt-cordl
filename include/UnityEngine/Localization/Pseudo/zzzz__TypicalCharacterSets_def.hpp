#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/TypicalCharacterSets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TypicalCharacterSets)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class TypicalCharacterSets;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::TypicalCharacterSets*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::TypicalCharacterSets*, "UnityEngine.Localization.Pseudo", "TypicalCharacterSets");
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.TypicalCharacterSets
class CORDL_TYPE TypicalCharacterSets : public ::System::Object {
public:
// Declarations
/// @brief Field s_TypicalCharacterSets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TypicalCharacterSets, put=setStaticF_s_TypicalCharacterSets)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>*  s_TypicalCharacterSets;

/// @brief Method GetTypicalCharactersForLanguage, addr 0xb026c14, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> GetTypicalCharactersForLanguage(::UnityEngine::SystemLanguage  language) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>* getStaticF_s_TypicalCharacterSets() ;

static inline void setStaticF_s_TypicalCharacterSets(::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypicalCharacterSets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypicalCharacterSets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypicalCharacterSets(TypicalCharacterSets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypicalCharacterSets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypicalCharacterSets(TypicalCharacterSets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25133};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::TypicalCharacterSets) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
