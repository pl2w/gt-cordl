#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabUtil)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::Internal {
class PlayFabUtil;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::PlayFabUtil*);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabUtil*, "PlayFab.Internal", "PlayFabUtil");
// Dependencies System.Globalization.DateTimeStyles, System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabUtil
class CORDL_TYPE PlayFabUtil : public ::System::Object {
public:
// Declarations
/// @brief Field DateTimeStyles, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DateTimeStyles, put=setStaticF_DateTimeStyles)) ::System::Globalization::DateTimeStyles  DateTimeStyles;

/// @brief Field _defaultDateTimeFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultDateTimeFormats, put=setStaticF__defaultDateTimeFormats)) ::ArrayW<::StringW>  _defaultDateTimeFormats;

/// @brief Field _localSettingsFileName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localSettingsFileName, put=setStaticF__localSettingsFileName)) ::StringW  _localSettingsFileName;

/// @brief Field _sb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sb, put=setStaticF__sb)) ::System::Text::StringBuilder*  _sb;

/// @brief Method Format, addr 0xa843f1c, size 0x20, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  text, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetLocalSettingsFileProperty, addr 0xa84d698, size 0x340, virtual false, abstract: false, final false
static inline ::StringW GetLocalSettingsFileProperty(::StringW  propertyKey) ;

/// @brief Method ReadAllFileText, addr 0xa84d238, size 0x460, virtual false, abstract: false, final false
static inline ::StringW ReadAllFileText(::StringW  filename) ;

/// @brief Method TryEnumParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T TryEnumParse(::StringW  value, T  defaultValue) ;

static inline ::System::Globalization::DateTimeStyles getStaticF_DateTimeStyles() ;

static inline ::ArrayW<::StringW> getStaticF__defaultDateTimeFormats() ;

static inline ::StringW getStaticF__localSettingsFileName() ;

static inline ::System::Text::StringBuilder* getStaticF__sb() ;

/// @brief Method get_timeStamp, addr 0xa843e64, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW get_timeStamp() ;

/// @brief Method get_utcTimeStamp, addr 0xa84d180, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW get_utcTimeStamp() ;

static inline void setStaticF_DateTimeStyles(::System::Globalization::DateTimeStyles  value) ;

static inline void setStaticF__defaultDateTimeFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF__localSettingsFileName(::StringW  value) ;

static inline void setStaticF__sb(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabUtil(PlayFabUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabUtil(PlayFabUtil const& ) = delete;

/// @brief Field DEFAULT_LOCAL_OUTPUT_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_LOCAL_OUTPUT_INDEX{static_cast<int32_t>(0x9)};

/// @brief Field DEFAULT_UTC_OUTPUT_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_UTC_OUTPUT_INDEX{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19936};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Internal::PlayFabUtil) == 0x10, "Size mismatch!");

} // namespace end def PlayFab::Internal
