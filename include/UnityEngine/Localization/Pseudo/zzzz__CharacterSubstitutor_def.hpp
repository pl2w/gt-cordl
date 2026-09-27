#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/CharacterSubstitutor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_ListSelectionMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_SubstitutionMethod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterSubstitutor)
namespace GlobalNamespace {
struct CharacterSubstitutor_CharReplacement;
}
namespace GlobalNamespace {
struct CharacterSubstitutor_ListSelectionMethod;
}
namespace GlobalNamespace {
struct CharacterSubstitutor_SubstitutionMethod;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Pseudo {
class IPseudoLocalizationMethod;
}
namespace UnityEngine::Localization::Pseudo {
class Message;
}
namespace UnityEngine::Localization::Pseudo {
class WritableMessageFragment;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class CharacterSubstitutor;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::CharacterSubstitutor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::CharacterSubstitutor*, "UnityEngine.Localization.Pseudo", "CharacterSubstitutor");
// Dependencies System.Object, UnityEngine.Localization.Pseudo.CharacterSubstitutor::ListSelectionMethod, UnityEngine.Localization.Pseudo.CharacterSubstitutor::SubstitutionMethod
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.CharacterSubstitutor
class CORDL_TYPE CharacterSubstitutor : public ::System::Object {
public:
// Declarations
using CharReplacement = ::GlobalNamespace::CharacterSubstitutor_CharReplacement;

using ListSelectionMethod = ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod;

using SubstitutionMethod = ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod;

 __declspec(property(get=get_ListMode, put=set_ListMode)) ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod  ListMode;

 __declspec(property(get=get_Method, put=set_Method)) ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod  Method;

 __declspec(property(get=get_ReplacementList)) ::System::Collections::Generic::List_1<char16_t>*  ReplacementList;

 __declspec(property(get=get_ReplacementMap, put=set_ReplacementMap)) ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*  ReplacementMap;

/// @brief Field <ReplacementMap>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReplacementMap_k__BackingField, put=__cordl_internal_set__ReplacementMap_k__BackingField)) ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*  _ReplacementMap_k__BackingField;

/// @brief Field m_ListMode, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ListMode, put=__cordl_internal_set_m_ListMode)) ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod  m_ListMode;

/// @brief Field m_ReplacementList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReplacementList, put=__cordl_internal_set_m_ReplacementList)) ::System::Collections::Generic::List_1<char16_t>*  m_ReplacementList;

/// @brief Field m_ReplacementsMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReplacementsMap, put=__cordl_internal_set_m_ReplacementsMap)) ::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>*  m_ReplacementsMap;

/// @brief Field m_ReplacementsPosition, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ReplacementsPosition, put=__cordl_internal_set_m_ReplacementsPosition)) int32_t  m_ReplacementsPosition;

/// @brief Field m_SubstitutionMethod, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SubstitutionMethod, put=__cordl_internal_set_m_SubstitutionMethod)) ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod  m_SubstitutionMethod;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr operator  ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept;

/// @brief Method GetRandomSeed, addr 0xb023cdc, size 0x20, virtual false, abstract: false, final false
inline int32_t GetRandomSeed(::StringW  input) ;

static inline ::UnityEngine::Localization::Pseudo::CharacterSubstitutor* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb023f98, size 0x1d0, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb023d74, size 0x224, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method ReplaceCharFromMap, addr 0xb023cfc, size 0x78, virtual false, abstract: false, final false
inline char16_t ReplaceCharFromMap(char16_t  value) ;

/// @brief Method Transform, addr 0xb0244ac, size 0x178, virtual true, abstract: false, final true
inline void Transform(::UnityEngine::Localization::Pseudo::Message*  message) ;

/// @brief Method TransformFragment, addr 0xb024168, size 0x344, virtual false, abstract: false, final false
inline void TransformFragment(::UnityEngine::Localization::Pseudo::WritableMessageFragment*  writableFragment) ;

constexpr ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>* const& __cordl_internal_get__ReplacementMap_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*& __cordl_internal_get__ReplacementMap_k__BackingField() ;

constexpr ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod const& __cordl_internal_get_m_ListMode() const;

constexpr ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod& __cordl_internal_get_m_ListMode() ;

constexpr ::System::Collections::Generic::List_1<char16_t>* const& __cordl_internal_get_m_ReplacementList() const;

constexpr ::System::Collections::Generic::List_1<char16_t>*& __cordl_internal_get_m_ReplacementList() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>* const& __cordl_internal_get_m_ReplacementsMap() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>*& __cordl_internal_get_m_ReplacementsMap() ;

constexpr int32_t const& __cordl_internal_get_m_ReplacementsPosition() const;

constexpr int32_t& __cordl_internal_get_m_ReplacementsPosition() ;

constexpr ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod const& __cordl_internal_get_m_SubstitutionMethod() const;

constexpr ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod& __cordl_internal_get_m_SubstitutionMethod() ;

constexpr void __cordl_internal_set__ReplacementMap_k__BackingField(::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*  value) ;

constexpr void __cordl_internal_set_m_ListMode(::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod  value) ;

constexpr void __cordl_internal_set_m_ReplacementList(::System::Collections::Generic::List_1<char16_t>*  value) ;

constexpr void __cordl_internal_set_m_ReplacementsMap(::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>*  value) ;

constexpr void __cordl_internal_set_m_ReplacementsPosition(int32_t  value) ;

constexpr void __cordl_internal_set_m_SubstitutionMethod(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod  value) ;

/// @brief Method .ctor, addr 0xb023294, size 0x148, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ListMode, addr 0xb023cc4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod get_ListMode() ;

/// @brief Method get_Method, addr 0xb023ca4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod get_Method() ;

/// @brief Method get_ReplacementList, addr 0xb023cd4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<char16_t>* get_ReplacementList() ;

/// [CompilerGenerated]
/// @brief Method get_ReplacementMap, addr 0xb023cb4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>* get_ReplacementMap() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept;

/// @brief Method set_ListMode, addr 0xb023ccc, size 0x8, virtual false, abstract: false, final false
inline void set_ListMode(::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod  value) ;

/// @brief Method set_Method, addr 0xb023cac, size 0x8, virtual false, abstract: false, final false
inline void set_Method(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReplacementMap, addr 0xb023cbc, size 0x8, virtual false, abstract: false, final false
inline void set_ReplacementMap(::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterSubstitutor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterSubstitutor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterSubstitutor(CharacterSubstitutor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterSubstitutor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterSubstitutor(CharacterSubstitutor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25125};

/// [SerializeField]
/// @brief Field m_SubstitutionMethod, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod  ___m_SubstitutionMethod;

/// [SerializeField]
/// @brief Field m_ListMode, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod  ___m_ListMode;

/// [SerializeField]
/// @brief Field m_ReplacementsMap, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>*  ___m_ReplacementsMap;

/// [SerializeField]
/// @brief Field m_ReplacementList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<char16_t>*  ___m_ReplacementList;

/// @brief Field m_ReplacementsPosition, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_ReplacementsPosition;

/// [CompilerGenerated]
/// @brief Field <ReplacementMap>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*  ____ReplacementMap_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Pseudo::CharacterSubstitutor, ___m_SubstitutionMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::CharacterSubstitutor, ___m_ListMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::CharacterSubstitutor, ___m_ReplacementsMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::CharacterSubstitutor, ___m_ReplacementList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::CharacterSubstitutor, ___m_ReplacementsPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::CharacterSubstitutor, ____ReplacementMap_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Pseudo::CharacterSubstitutor) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
