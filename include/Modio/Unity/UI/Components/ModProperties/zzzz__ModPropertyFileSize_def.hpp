#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyFileSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/zzzz__StringFormatBytes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModPropertyFileSize)
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
class ModPropertyFileSize;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileSize*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileSize*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyFileSize");
// Dependencies Modio.Unity.UI.StringFormatBytes, System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyFileSize
class CORDL_TYPE ModPropertyFileSize : public ::System::Object {
public:
// Declarations
/// @brief Field _customFormat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__customFormat, put=__cordl_internal_set__customFormat)) ::StringW  _customFormat;

/// @brief Field _format, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::Modio::Unity::UI::StringFormatBytes  _format;

/// @brief Field _text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

/// @brief Method IsCustomFormat, addr 0x9fc6dcc, size 0x10, virtual false, abstract: false, final false
inline bool IsCustomFormat() ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyFileSize* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc6d04, size 0xc8, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::StringW const& __cordl_internal_get__customFormat() const;

constexpr ::StringW& __cordl_internal_get__customFormat() ;

constexpr ::Modio::Unity::UI::StringFormatBytes const& __cordl_internal_get__format() const;

constexpr ::Modio::Unity::UI::StringFormatBytes& __cordl_internal_get__format() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__customFormat(::StringW  value) ;

constexpr void __cordl_internal_set__format(::Modio::Unity::UI::StringFormatBytes  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc6ddc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyFileSize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyFileSize", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyFileSize(ModPropertyFileSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyFileSize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyFileSize(ModPropertyFileSize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27230};

/// [SerializeField]
/// @brief Field _text, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

/// [SerializeField]
/// [Tooltip("Bytes: \"1048576\".\r\nBytesComma: \"1,048,576\".\r\nSuffix: \"1 MB\".")]
/// @brief Field _format, offset: 0x18, size: 0x4, def value: None
 ::Modio::Unity::UI::StringFormatBytes  ____format;

/// [SerializeField]
/// [ShowIf("IsCustomFormat")]
/// @brief Field _customFormat, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____customFormat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileSize, ____text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileSize, ____format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileSize, ____customFormat) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileSize) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
