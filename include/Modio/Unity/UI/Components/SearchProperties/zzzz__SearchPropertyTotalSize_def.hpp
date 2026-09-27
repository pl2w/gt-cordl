#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyTotalSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/zzzz__StringFormatBytes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SearchPropertyTotalSize)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyTotalSize;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyTotalSize");
// Dependencies Modio.Unity.UI.StringFormatBytes, System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyTotalSize
class CORDL_TYPE SearchPropertyTotalSize : public ::System::Object {
public:
// Declarations
/// @brief Field _alsoIncludeSizeOf, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__alsoIncludeSizeOf, put=__cordl_internal_set__alsoIncludeSizeOf)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _alsoIncludeSizeOf;

/// @brief Field _customSizeFormat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__customSizeFormat, put=__cordl_internal_set__customSizeFormat)) ::StringW  _customSizeFormat;

/// @brief Field _ignoreInstalledMods, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreInstalledMods, put=__cordl_internal_set__ignoreInstalledMods)) bool  _ignoreInstalledMods;

/// @brief Field _sizeFormat, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__sizeFormat, put=__cordl_internal_set__sizeFormat)) ::Modio::Unity::UI::StringFormatBytes  _sizeFormat;

/// @brief Field _totalFileSize, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalFileSize, put=__cordl_internal_set__totalFileSize)) ::UnityW<::TMPro::TMP_Text>  _totalFileSize;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

/// @brief Method IsCustomFormat, addr 0x9fc53b0, size 0x10, virtual false, abstract: false, final false
inline bool IsCustomFormat() ;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc53c0, size 0x3f8, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__alsoIncludeSizeOf() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__alsoIncludeSizeOf() ;

constexpr ::StringW const& __cordl_internal_get__customSizeFormat() const;

constexpr ::StringW& __cordl_internal_get__customSizeFormat() ;

constexpr bool const& __cordl_internal_get__ignoreInstalledMods() const;

constexpr bool& __cordl_internal_get__ignoreInstalledMods() ;

constexpr ::Modio::Unity::UI::StringFormatBytes const& __cordl_internal_get__sizeFormat() const;

constexpr ::Modio::Unity::UI::StringFormatBytes& __cordl_internal_get__sizeFormat() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__totalFileSize() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__totalFileSize() ;

constexpr void __cordl_internal_set__alsoIncludeSizeOf(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

constexpr void __cordl_internal_set__customSizeFormat(::StringW  value) ;

constexpr void __cordl_internal_set__ignoreInstalledMods(bool  value) ;

constexpr void __cordl_internal_set__sizeFormat(::Modio::Unity::UI::StringFormatBytes  value) ;

constexpr void __cordl_internal_set__totalFileSize(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc57b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyTotalSize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyTotalSize", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyTotalSize(SearchPropertyTotalSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyTotalSize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyTotalSize(SearchPropertyTotalSize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27211};

/// [SerializeField]
/// @brief Field _totalFileSize, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____totalFileSize;

/// [SerializeField]
/// [Tooltip("Bytes: \"1048576\".\r\nBytesComma: \"1,048,576\".\r\nSuffix: \"1 MB\".")]
/// @brief Field _sizeFormat, offset: 0x18, size: 0x4, def value: None
 ::Modio::Unity::UI::StringFormatBytes  ____sizeFormat;

/// [SerializeField]
/// [ShowIf("IsCustomFormat")]
/// @brief Field _customSizeFormat, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____customSizeFormat;

/// [SerializeField]
/// @brief Field _alsoIncludeSizeOf, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____alsoIncludeSizeOf;

/// [SerializeField]
/// @brief Field _ignoreInstalledMods, offset: 0x30, size: 0x1, def value: None
 bool  ____ignoreInstalledMods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize, ____totalFileSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize, ____sizeFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize, ____customSizeFormat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize, ____alsoIncludeSizeOf) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize, ____ignoreInstalledMods) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
