#pragma once
// IWYU pragma private; include "System/Buffers/StandardFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardFormat)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
struct StandardFormat;
}
// Write type traits
MARK_VAL_T(::System::Buffers::StandardFormat);
DEFINE_IL2CPP_CLASS(::System::Buffers::StandardFormat, "System.Buffers", "StandardFormat");
// [IsReadOnly]
// Dependencies 
namespace System::Buffers {
// Is value type: true
// CS Name: System.Buffers.StandardFormat
struct CORDL_TYPE StandardFormat {
public:
// Declarations
 __declspec(property(get=get_HasPrecision)) bool  HasPrecision;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_Precision)) uint8_t  Precision;

 __declspec(property(get=get_Symbol)) char16_t  Symbol;

/// @brief Convert operator to "::System::IEquatable_1<::System::Buffers::StandardFormat>"
constexpr operator  ::System::IEquatable_1<::System::Buffers::StandardFormat>*() ;

/// @brief Method Equals, addr 0xa2721cc, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa272250, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::System::Buffers::StandardFormat  other) ;

/// @brief Method Format, addr 0xa272398, size 0xfc, virtual false, abstract: false, final false
inline int32_t Format(::System::Span_1<char16_t>  destination) ;

/// @brief Method GetHashCode, addr 0xa272278, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Parse, addr 0xa272030, size 0x20, virtual false, abstract: false, final false
static inline ::System::Buffers::StandardFormat Parse(::System::ReadOnlySpan_1<char16_t>  format) ;

/// @brief Method ParseHelper, addr 0xa272050, size 0x17c, virtual false, abstract: false, final false
static inline bool ParseHelper(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<::System::Buffers::StandardFormat>  standardFormat, bool  throws) ;

/// @brief Method ToString, addr 0xa2722ac, size 0xec, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa271fb4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(char16_t  symbol, uint8_t  precision) ;

/// @brief Method get_HasPrecision, addr 0xa271f84, size 0x10, virtual false, abstract: false, final false
inline bool get_HasPrecision() ;

/// @brief Method get_IsDefault, addr 0xa271f94, size 0x20, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_Precision, addr 0xa271f7c, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Precision() ;

/// @brief Method get_Symbol, addr 0xa271f74, size 0x8, virtual false, abstract: false, final false
inline char16_t get_Symbol() ;

/// @brief Convert to "::System::IEquatable_1<::System::Buffers::StandardFormat>"
constexpr ::System::IEquatable_1<::System::Buffers::StandardFormat>* i___System__IEquatable_1___System__Buffers__StandardFormat_() ;

/// @brief Method op_Implicit, addr 0xa272008, size 0x28, virtual false, abstract: false, final false
static inline ::System::Buffers::StandardFormat op_Implicit___System__Buffers__StandardFormat(char16_t  symbol) ;

/// @brief Method op_Inequality, addr 0xa272494, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Buffers::StandardFormat  left, ::System::Buffers::StandardFormat  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr StandardFormat() ;

// Ctor Parameters [CppParam { name: "_format", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_precision", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr StandardFormat(uint8_t  _format, uint8_t  _precision) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field _format, offset: 0x0, size: 0x1, def value: None
 uint8_t  _format;

/// @brief Field _precision, offset: 0x1, size: 0x1, def value: None
 uint8_t  _precision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Buffers::StandardFormat, _format) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::StandardFormat, _precision) == 0x1, "Offset mismatch!");

static_assert(sizeof(::System::Buffers::StandardFormat) == 0x2, "Size mismatch!");

} // namespace end def System::Buffers
