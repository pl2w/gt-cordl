#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/TypicalCharacterSets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__TypicalCharacterSets_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::TypicalCharacterSets.GetTypicalCharactersForLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::UnityEngine::SystemLanguage)>(&::UnityEngine::Localization::Pseudo::TypicalCharacterSets::GetTypicalCharactersForLanguage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb026c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::TypicalCharacterSets*>(),
                        {"GetTypicalCharactersForLanguage", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Pseudo::TypicalCharacterSets::setStaticF_s_TypicalCharacterSets(::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>*, "s_TypicalCharacterSets", ::UnityEngine::Localization::Pseudo::TypicalCharacterSets*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>* UnityEngine::Localization::Pseudo::TypicalCharacterSets::getStaticF_s_TypicalCharacterSets()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage,::ArrayW<char16_t>>*, "s_TypicalCharacterSets", ::UnityEngine::Localization::Pseudo::TypicalCharacterSets*>();
}
inline ::ArrayW<char16_t> UnityEngine::Localization::Pseudo::TypicalCharacterSets::GetTypicalCharactersForLanguage(::UnityEngine::SystemLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::TypicalCharacterSets*>(),
                        {"GetTypicalCharactersForLanguage", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, language);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::TypicalCharacterSets::TypicalCharacterSets()   {
}
