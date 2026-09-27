#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUISearchField)
namespace TMPro {
class TMP_InputField;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUISearchField;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUISearchField*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUISearchField*, "Modio.Unity.UI.Components", "ModioUISearchField");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUISearchField
class CORDL_TYPE ModioUISearchField : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hasRunStart, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRunStart, put=__cordl_internal_set__hasRunStart)) bool  _hasRunStart;

/// @brief Field lastSearchPhrase, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSearchPhrase, put=__cordl_internal_set_lastSearchPhrase)) ::StringW  lastSearchPhrase;

/// @brief Field searchField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchField, put=__cordl_internal_set_searchField)) ::UnityW<::TMPro::TMP_InputField>  searchField;

/// @brief Method FilterView, addr 0x9fbbe98, size 0xa4, virtual false, abstract: false, final false
inline void FilterView() ;

static inline ::Modio::Unity::UI::Components::ModioUISearchField* New_ctor() ;

/// @brief Method OnAppliedSearchPreset, addr 0x9fbbe2c, size 0x6c, virtual false, abstract: false, final false
inline void OnAppliedSearchPreset() ;

/// @brief Method OnDisable, addr 0x9fbbd6c, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fbbc54, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x9fbbc48, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__hasRunStart() const;

constexpr bool& __cordl_internal_get__hasRunStart() ;

constexpr ::StringW const& __cordl_internal_get_lastSearchPhrase() const;

constexpr ::StringW& __cordl_internal_get_lastSearchPhrase() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_searchField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_searchField() ;

constexpr void __cordl_internal_set__hasRunStart(bool  value) ;

constexpr void __cordl_internal_set_lastSearchPhrase(::StringW  value) ;

constexpr void __cordl_internal_set_searchField(::UnityW<::TMPro::TMP_InputField>  value) ;

/// @brief Method .ctor, addr 0x9fbbf3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearchField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchField", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearchField(ModioUISearchField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchField", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearchField(ModioUISearchField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27153};

/// [SerializeField]
/// @brief Field searchField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___searchField;

/// @brief Field lastSearchPhrase, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___lastSearchPhrase;

/// @brief Field _hasRunStart, offset: 0x30, size: 0x1, def value: None
 bool  ____hasRunStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchField, ___searchField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchField, ___lastSearchPhrase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchField, ____hasRunStart) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUISearchField) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
