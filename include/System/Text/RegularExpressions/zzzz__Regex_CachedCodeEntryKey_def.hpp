#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/Regex_CachedCodeEntryKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Regex_CachedCodeEntryKey)
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Regex_CachedCodeEntryKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Regex_CachedCodeEntryKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Regex_CachedCodeEntryKey, "System.Text.RegularExpressions", "Regex/CachedCodeEntryKey");
// [IsReadOnly]
// Dependencies System.Text.RegularExpressions.RegexOptions
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Text.RegularExpressions.Regex/CachedCodeEntryKey
struct CORDL_TYPE Regex_CachedCodeEntryKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>*() ;

/// @brief Method Equals, addr 0xad108b0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xad10940, size 0x68, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::Regex_CachedCodeEntryKey  other) ;

/// @brief Method GetHashCode, addr 0xad109a8, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xad10604, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Text::RegularExpressions::RegexOptions  options, ::StringW  cultureKey, ::StringW  pattern) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>* i___System__IEquatable_1___GlobalNamespace__Regex_CachedCodeEntryKey_() ;

/// @brief Method op_Equality, addr 0xad0d7ac, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::Regex_CachedCodeEntryKey  left, ::GlobalNamespace::Regex_CachedCodeEntryKey  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr Regex_CachedCodeEntryKey() ;

// Ctor Parameters [CppParam { name: "_options", ty: "::System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cultureKey", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pattern", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr Regex_CachedCodeEntryKey(::System::Text::RegularExpressions::RegexOptions  _options, ::StringW  _cultureKey, ::StringW  _pattern) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _options, offset: 0x0, size: 0x4, def value: None
 ::System::Text::RegularExpressions::RegexOptions  _options;

/// @brief Field _cultureKey, offset: 0x8, size: 0x8, def value: None
 ::StringW  _cultureKey;

/// @brief Field _pattern, offset: 0x10, size: 0x8, def value: None
 ::StringW  _pattern;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Regex_CachedCodeEntryKey, _options) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Regex_CachedCodeEntryKey, _cultureKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Regex_CachedCodeEntryKey, _pattern) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Regex_CachedCodeEntryKey) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
