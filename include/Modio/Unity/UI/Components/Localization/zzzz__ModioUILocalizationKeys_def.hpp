#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Localization/ModioUILocalizationKeys.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUILocalizationKeys)
// Forward declare root types
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizationKeys;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Localization::ModioUILocalizationKeys*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Localization::ModioUILocalizationKeys*, "Modio.Unity.UI.Components.Localization", "ModioUILocalizationKeys");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::Localization {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Localization.ModioUILocalizationKeys
class CORDL_TYPE ModioUILocalizationKeys : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUILocalizationKeys() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizationKeys", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUILocalizationKeys(ModioUILocalizationKeys && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizationKeys", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUILocalizationKeys(ModioUILocalizationKeys const& ) = delete;

/// @brief Field Btn_Subscribe offset 0xffffffff size 0x8
static constexpr ::ConstString  Btn_Subscribe{u"modio_btn_subscribe"};

/// @brief Field Btn_Unsubscribe offset 0xffffffff size 0x8
static constexpr ::ConstString  Btn_Unsubscribe{u"modio_btn_unsubscribe"};

/// @brief Field LanguageCode offset 0xffffffff size 0x8
static constexpr ::ConstString  LanguageCode{u"modio_languagecode"};

/// @brief Field Modstate_Downloading offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Downloading{u"modio_modstate_downloading"};

/// @brief Field Modstate_Error offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Error{u"modio_modstate_error"};

/// @brief Field Modstate_Error_Storage offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Error_Storage{u"modio_error_storage_header"};

/// @brief Field Modstate_Installed offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Installed{u"modio_modstate_installed"};

/// @brief Field Modstate_Installing offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Installing{u"modio_modstate_installing"};

/// @brief Field Modstate_Queued offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Queued{u"modio_modstate_queued"};

/// @brief Field Modstate_Uninstalling offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Uninstalling{u"modio_modstate_uninstalling"};

/// @brief Field Modstate_Updating offset 0xffffffff size 0x8
static constexpr ::ConstString  Modstate_Updating{u"modio_modstate_updating"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27250};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::Localization::ModioUILocalizationKeys) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Localization
