#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyNumberBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/zzzz__StringFormatKilo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModPropertyNumberBase)
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
class ModPropertyNumberBase;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyNumberBase");
// Dependencies Modio.Unity.UI.StringFormatKilo, System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyNumberBase
class CORDL_TYPE ModPropertyNumberBase : public ::System::Object {
public:
// Declarations
/// @brief Field _customFormat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__customFormat, put=__cordl_internal_set__customFormat)) ::StringW  _customFormat;

/// @brief Field _format, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::Modio::Unity::UI::StringFormatKilo  _format;

/// @brief Field _text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t GetValue(::Modio::Mods::Mod*  mod) ;

/// @brief Method IsCustomFormat, addr 0x9fc5b9c, size 0x10, virtual false, abstract: false, final false
inline bool IsCustomFormat() ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc5a9c, size 0x100, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::StringW const& __cordl_internal_get__customFormat() const;

constexpr ::StringW& __cordl_internal_get__customFormat() ;

constexpr ::Modio::Unity::UI::StringFormatKilo const& __cordl_internal_get__format() const;

constexpr ::Modio::Unity::UI::StringFormatKilo& __cordl_internal_get__format() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__customFormat(::StringW  value) ;

constexpr void __cordl_internal_set__format(::Modio::Unity::UI::StringFormatKilo  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc5bac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyNumberBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyNumberBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyNumberBase(ModPropertyNumberBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyNumberBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyNumberBase(ModPropertyNumberBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27215};

/// [SerializeField]
/// @brief Field _text, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

/// [SerializeField]
/// [Tooltip("None: \"10500\".\r\nComma: \"10,500\".\r\nKilo: \"10.5k\".")]
/// @brief Field _format, offset: 0x18, size: 0x4, def value: None
 ::Modio::Unity::UI::StringFormatKilo  ____format;

/// [SerializeField]
/// [ShowIf("IsCustomFormat")]
/// @brief Field _customFormat, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____customFormat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase, ____text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase, ____format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase, ____customFormat) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
