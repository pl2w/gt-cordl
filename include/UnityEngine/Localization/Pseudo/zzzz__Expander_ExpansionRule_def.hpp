#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Expander_ExpansionRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Expander_ExpansionRule)
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Expander_ExpansionRule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Expander_ExpansionRule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Expander_ExpansionRule, "UnityEngine.Localization.Pseudo", "Expander/ExpansionRule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.Pseudo.Expander/ExpansionRule
struct CORDL_TYPE Expander_ExpansionRule {
public:
// Declarations
 __declspec(property(get=get_ExpansionAmount, put=set_ExpansionAmount)) float_t  ExpansionAmount;

 __declspec(property(get=get_MaxCharacters, put=set_MaxCharacters)) int32_t  MaxCharacters;

 __declspec(property(get=get_MinCharacters, put=set_MinCharacters)) int32_t  MinCharacters;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>*() ;

/// @brief Method CompareTo, addr 0xb025c0c, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::Expander_ExpansionRule  other) ;

/// @brief Method InRange, addr 0xb0257a4, size 0x24, virtual false, abstract: false, final false
inline bool InRange(int32_t  length) ;

/// @brief Method .ctor, addr 0xb024bc0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  minCharacters, int32_t  maxCharacters, float_t  expansion) ;

/// @brief Method get_ExpansionAmount, addr 0xb025bf0, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExpansionAmount() ;

/// @brief Method get_MaxCharacters, addr 0xb025bdc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxCharacters() ;

/// @brief Method get_MinCharacters, addr 0xb025bc8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinCharacters() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>"
constexpr ::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>* i___System__IComparable_1___GlobalNamespace__Expander_ExpansionRule_() ;

/// @brief Method set_ExpansionAmount, addr 0xb025bf8, size 0x14, virtual false, abstract: false, final false
inline void set_ExpansionAmount(float_t  value) ;

/// @brief Method set_MaxCharacters, addr 0xb025be4, size 0xc, virtual false, abstract: false, final false
inline void set_MaxCharacters(int32_t  value) ;

/// @brief Method set_MinCharacters, addr 0xb025bd0, size 0xc, virtual false, abstract: false, final false
inline void set_MinCharacters(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Expander_ExpansionRule() ;

// Ctor Parameters [CppParam { name: "m_MinCharacters", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxCharacters", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ExpansionAmount", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Expander_ExpansionRule(int32_t  m_MinCharacters, int32_t  m_MaxCharacters, float_t  m_ExpansionAmount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [SerializeField]
/// @brief Field m_MinCharacters, offset: 0x0, size: 0x4, def value: None
 int32_t  m_MinCharacters;

/// [SerializeField]
/// @brief Field m_MaxCharacters, offset: 0x4, size: 0x4, def value: None
 int32_t  m_MaxCharacters;

/// [SerializeField]
/// @brief Field m_ExpansionAmount, offset: 0x8, size: 0x4, def value: None
 float_t  m_ExpansionAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Expander_ExpansionRule, m_MinCharacters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Expander_ExpansionRule, m_MaxCharacters) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Expander_ExpansionRule, m_ExpansionAmount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Expander_ExpansionRule) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
