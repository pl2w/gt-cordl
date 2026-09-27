#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyRating.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModPropertyRating)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyRating;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyRating*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyRating*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyRating");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyRating
class CORDL_TYPE ModPropertyRating : public ::System::Object {
public:
// Declarations
/// @brief Field _format, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::StringW  _format;

/// @brief Field _text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyRating* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc77bc, size 0xd0, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::StringW const& __cordl_internal_get__format() const;

constexpr ::StringW& __cordl_internal_get__format() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__format(::StringW  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc788c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyRating() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyRating", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyRating(ModPropertyRating && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyRating", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyRating(ModPropertyRating const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27237};

/// [SerializeField]
/// @brief Field _text, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

/// [SerializeField]
/// [Tooltip("Uses string.Format().\n{0} outputs the rating percentage value.")]
/// @brief Field _format, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____format;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRating, ____text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRating, ____format) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRating) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
