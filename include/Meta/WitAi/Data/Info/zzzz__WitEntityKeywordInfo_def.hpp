#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitEntityKeywordInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitEntityKeywordInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitEntityKeywordInfo;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitEntityKeywordInfo);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitEntityKeywordInfo, "Meta.WitAi.Data.Info", "WitEntityKeywordInfo");
// Dependencies 
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct CORDL_TYPE WitEntityKeywordInfo {
public:
// Declarations
/// @brief Method Equals, addr 0x9e47c34, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e47cb0, size 0x84, virtual false, abstract: false, final false
inline bool Equals(::Meta::WitAi::Data::Info::WitEntityKeywordInfo  other) ;

/// @brief Method GetHashCode, addr 0x9e47d34, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitEntityKeywordInfo() ;

// Ctor Parameters [CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "synonyms", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr WitEntityKeywordInfo(::StringW  keyword, ::System::Collections::Generic::List_1<::StringW>*  synonyms) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field keyword, offset: 0x0, size: 0x8, def value: None
 ::StringW  keyword;

/// [NonReorderable]
/// @brief Field synonyms, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  synonyms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitEntityKeywordInfo, keyword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitEntityKeywordInfo, synonyms) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitEntityKeywordInfo) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info
