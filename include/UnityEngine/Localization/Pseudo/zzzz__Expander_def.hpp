#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Expander.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Expander_InsertLocation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Expander)
namespace GlobalNamespace {
struct Expander_ExpansionRule;
}
namespace GlobalNamespace {
struct Expander_InsertLocation;
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
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class Expander;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::Expander*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::Expander*, "UnityEngine.Localization.Pseudo", "Expander");
// Dependencies System.Object, UnityEngine.Localization.Pseudo.Expander::InsertLocation
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.Expander
class CORDL_TYPE Expander : public ::System::Object {
public:
// Declarations
using ExpansionRule = ::GlobalNamespace::Expander_ExpansionRule;

using InsertLocation = ::GlobalNamespace::Expander_InsertLocation;

 __declspec(property(get=get_ExpansionRules)) ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*  ExpansionRules;

 __declspec(property(get=get_Location, put=set_Location)) ::GlobalNamespace::Expander_InsertLocation  Location;

 __declspec(property(get=get_MinimumStringLength, put=set_MinimumStringLength)) int32_t  MinimumStringLength;

 __declspec(property(get=get_PaddingCharacters)) ::System::Collections::Generic::List_1<char16_t>*  PaddingCharacters;

/// @brief Field m_ExpansionRules, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExpansionRules, put=__cordl_internal_set_m_ExpansionRules)) ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*  m_ExpansionRules;

/// @brief Field m_Location, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Location, put=__cordl_internal_set_m_Location)) ::GlobalNamespace::Expander_InsertLocation  m_Location;

/// @brief Field m_MinimumStringLength, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumStringLength, put=__cordl_internal_set_m_MinimumStringLength)) int32_t  m_MinimumStringLength;

/// @brief Field m_PaddingCharacters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PaddingCharacters, put=__cordl_internal_set_m_PaddingCharacters)) ::System::Collections::Generic::List_1<char16_t>*  m_PaddingCharacters;

/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr operator  ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept;

/// @brief Method AddCharacterRange, addr 0xb024be0, size 0xc8, virtual false, abstract: false, final false
inline void AddCharacterRange(char16_t  start, char16_t  end) ;

/// @brief Method AddExpansionRule, addr 0xb025518, size 0x13c, virtual false, abstract: false, final false
inline void AddExpansionRule(int32_t  minCharacters, int32_t  maxCharacters, float_t  expansion) ;

/// @brief Method AddPaddingToMessage, addr 0xb0259bc, size 0x20c, virtual false, abstract: false, final false
inline void AddPaddingToMessage(::UnityEngine::Localization::Pseudo::Message*  message, ::ArrayW<char16_t>  padding) ;

/// @brief Method GetExpansionForLength, addr 0xb025654, size 0x150, virtual false, abstract: false, final false
inline float_t GetExpansionForLength(int32_t  length) ;

/// @brief Method GetRandomSeed, addr 0xb02599c, size 0x20, virtual false, abstract: false, final false
inline int32_t GetRandomSeed(::StringW  input) ;

static inline ::UnityEngine::Localization::Pseudo::Expander* New_ctor() ;

static inline ::UnityEngine::Localization::Pseudo::Expander* New_ctor(char16_t  paddingCharacter) ;

static inline ::UnityEngine::Localization::Pseudo::Expander* New_ctor(char16_t  start, char16_t  end) ;

/// @brief Method SetConstantExpansion, addr 0xb0254b0, size 0x68, virtual false, abstract: false, final false
inline void SetConstantExpansion(float_t  expansion) ;

/// @brief Method Transform, addr 0xb0257c8, size 0x1d4, virtual true, abstract: false, final true
inline void Transform(::UnityEngine::Localization::Pseudo::Message*  message) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>* const& __cordl_internal_get_m_ExpansionRules() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*& __cordl_internal_get_m_ExpansionRules() ;

constexpr ::GlobalNamespace::Expander_InsertLocation const& __cordl_internal_get_m_Location() const;

constexpr ::GlobalNamespace::Expander_InsertLocation& __cordl_internal_get_m_Location() ;

constexpr int32_t const& __cordl_internal_get_m_MinimumStringLength() const;

constexpr int32_t& __cordl_internal_get_m_MinimumStringLength() ;

constexpr ::System::Collections::Generic::List_1<char16_t>* const& __cordl_internal_get_m_PaddingCharacters() const;

constexpr ::System::Collections::Generic::List_1<char16_t>*& __cordl_internal_get_m_PaddingCharacters() ;

constexpr void __cordl_internal_set_m_ExpansionRules(::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*  value) ;

constexpr void __cordl_internal_set_m_Location(::GlobalNamespace::Expander_InsertLocation  value) ;

constexpr void __cordl_internal_set_m_MinimumStringLength(int32_t  value) ;

constexpr void __cordl_internal_set_m_PaddingCharacters(::System::Collections::Generic::List_1<char16_t>*  value) ;

/// @brief Method .ctor, addr 0xb0247fc, size 0x3c4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb024ca8, size 0x434, virtual false, abstract: false, final false
inline void _ctor(char16_t  paddingCharacter) ;

/// @brief Method .ctor, addr 0xb0250dc, size 0x3d4, virtual false, abstract: false, final false
inline void _ctor(char16_t  start, char16_t  end) ;

/// @brief Method get_ExpansionRules, addr 0xb0247c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>* get_ExpansionRules() ;

/// @brief Method get_Location, addr 0xb0247d0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Expander_InsertLocation get_Location() ;

/// @brief Method get_MinimumStringLength, addr 0xb0247e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinimumStringLength() ;

/// @brief Method get_PaddingCharacters, addr 0xb0247e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<char16_t>* get_PaddingCharacters() ;

/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept;

/// @brief Method set_Location, addr 0xb0247d8, size 0x8, virtual false, abstract: false, final false
inline void set_Location(::GlobalNamespace::Expander_InsertLocation  value) ;

/// @brief Method set_MinimumStringLength, addr 0xb0247f0, size 0xc, virtual false, abstract: false, final false
inline void set_MinimumStringLength(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Expander() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Expander", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Expander(Expander && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Expander", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Expander(Expander const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25129};

/// [SerializeField]
/// @brief Field m_ExpansionRules, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*  ___m_ExpansionRules;

/// [SerializeField]
/// @brief Field m_Location, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::Expander_InsertLocation  ___m_Location;

/// [SerializeField]
/// @brief Field m_MinimumStringLength, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_MinimumStringLength;

/// [SerializeField]
/// @brief Field m_PaddingCharacters, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<char16_t>*  ___m_PaddingCharacters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Pseudo::Expander, ___m_ExpansionRules) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::Expander, ___m_Location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::Expander, ___m_MinimumStringLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::Expander, ___m_PaddingCharacters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Pseudo::Expander) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
