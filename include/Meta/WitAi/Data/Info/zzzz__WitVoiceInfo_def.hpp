#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitVoiceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WitVoiceInfo)
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitVoiceInfo;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitVoiceInfo);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitVoiceInfo, "Meta.WitAi.Data.Info", "WitVoiceInfo");
// Dependencies 
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitVoiceInfo
struct CORDL_TYPE WitVoiceInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WitVoiceInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "locale", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "gender", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "styles", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "supported_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr WitVoiceInfo(::StringW  name, ::StringW  locale, ::StringW  gender, ::ArrayW<::StringW>  styles, ::ArrayW<::StringW>  supported_features) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field locale, offset: 0x8, size: 0x8, def value: None
 ::StringW  locale;

/// @brief Field gender, offset: 0x10, size: 0x8, def value: None
 ::StringW  gender;

/// @brief Field styles, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  styles;

/// @brief Field supported_features, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  supported_features;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitVoiceInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitVoiceInfo, locale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitVoiceInfo, gender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitVoiceInfo, styles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitVoiceInfo, supported_features) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitVoiceInfo) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info
