#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomizeLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RandomizeLabel)
namespace GlobalNamespace {
class RandomStrings;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomizeLabel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomizeLabel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomizeLabel*, "", "RandomizeLabel");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomizeLabel
class CORDL_TYPE RandomizeLabel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field distinct, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_distinct, put=__cordl_internal_set_distinct)) bool  distinct;

/// @brief Field label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::UnityW<::TMPro::TMP_Text>  label;

/// @brief Field strings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_strings, put=__cordl_internal_set_strings)) ::UnityW<::GlobalNamespace::RandomStrings>  strings;

static inline ::GlobalNamespace::RandomizeLabel* New_ctor() ;

/// @brief Method Randomize, addr 0x578f724, size 0x4c, virtual false, abstract: false, final false
inline void Randomize() ;

constexpr bool const& __cordl_internal_get_distinct() const;

constexpr bool& __cordl_internal_get_distinct() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_label() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_label() ;

constexpr ::UnityW<::GlobalNamespace::RandomStrings> const& __cordl_internal_get_strings() const;

constexpr ::UnityW<::GlobalNamespace::RandomStrings>& __cordl_internal_get_strings() ;

constexpr void __cordl_internal_set_distinct(bool  value) ;

constexpr void __cordl_internal_set_label(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_strings(::UnityW<::GlobalNamespace::RandomStrings>  value) ;

/// @brief Method .ctor, addr 0x578f770, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomizeLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomizeLabel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomizeLabel(RandomizeLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomizeLabel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomizeLabel(RandomizeLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1442};

/// @brief Field label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___label;

/// @brief Field strings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RandomStrings>  ___strings;

/// @brief Field distinct, offset: 0x30, size: 0x1, def value: None
 bool  ___distinct;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomizeLabel, ___label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizeLabel, ___strings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizeLabel, ___distinct) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomizeLabel) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
