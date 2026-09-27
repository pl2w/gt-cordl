#pragma once
// IWYU pragma private; include "Cysharp/Text/ZStringWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZStringWriter)
namespace System::Text {
class Encoding;
}
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace Cysharp::Text {
class ZStringWriter;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::ZStringWriter*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::ZStringWriter*, "Cysharp.Text", "ZStringWriter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Cysharp.Text.Utf16ValueStringBuilder, System.IO.TextWriter
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.ZStringWriter
class CORDL_TYPE ZStringWriter : public ::System::IO::TextWriter {
public:
// Declarations
 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

/// @brief Field encoding, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::System::Text::UnicodeEncoding*  encoding;

/// @brief Field isOpen, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOpen, put=__cordl_internal_set_isOpen)) bool  isOpen;

/// @brief Field sb, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::Cysharp::Text::Utf16ValueStringBuilder  sb;

/// @brief Method AssertNotDisposed, addr 0xb9be6c4, size 0x58, virtual false, abstract: false, final false
inline void AssertNotDisposed() ;

/// @brief Method Close, addr 0xb9be4cc, size 0x10, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0xb9be4dc, size 0x78, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FlushAsync, addr 0xb9bef28, size 0x88, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync() ;

static inline ::Cysharp::Text::ZStringWriter* New_ctor() ;

static inline ::Cysharp::Text::ZStringWriter* New_ctor(::System::IFormatProvider*  formatProvider) ;

/// @brief Method ToString, addr 0xb9befb0, size 0x81e8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0xb9be71c, size 0x1d0, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0xb9be8ec, size 0xf0, virtual true, abstract: false, final false
inline void Write(::StringW  value) ;

/// @brief Method Write, addr 0xb9beeb0, size 0x78, virtual true, abstract: false, final false
inline void Write(::System::Decimal  value) ;

/// @brief Method Write, addr 0xb9bee2c, size 0x84, virtual true, abstract: false, final false
inline void Write(bool  value) ;

/// @brief Method Write, addr 0xb9be5cc, size 0xf8, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method WriteAsync, addr 0xb9beb3c, size 0xc8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteAsync, addr 0xb9bea8c, size 0xb0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::StringW  value) ;

/// @brief Method WriteAsync, addr 0xb9be9dc, size 0xb0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(char16_t  value) ;

/// @brief Method WriteLineAsync, addr 0xb9bed64, size 0xc8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteLineAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteLineAsync, addr 0xb9becb4, size 0xb0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteLineAsync(::StringW  value) ;

/// @brief Method WriteLineAsync, addr 0xb9bec04, size 0xb0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteLineAsync(char16_t  value) ;

constexpr ::System::Text::UnicodeEncoding* const& __cordl_internal_get_encoding() const;

constexpr ::System::Text::UnicodeEncoding*& __cordl_internal_get_encoding() ;

constexpr bool const& __cordl_internal_get_isOpen() const;

constexpr bool& __cordl_internal_get_isOpen() ;

constexpr ::Cysharp::Text::Utf16ValueStringBuilder const& __cordl_internal_get_sb() const;

constexpr ::Cysharp::Text::Utf16ValueStringBuilder& __cordl_internal_get_sb() ;

constexpr void __cordl_internal_set_encoding(::System::Text::UnicodeEncoding*  value) ;

constexpr void __cordl_internal_set_isOpen(bool  value) ;

constexpr void __cordl_internal_set_sb(::Cysharp::Text::Utf16ValueStringBuilder  value) ;

/// @brief Method .ctor, addr 0xb9be3a4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb9be404, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::System::IFormatProvider*  formatProvider) ;

/// @brief Method get_Encoding, addr 0xb9be554, size 0x78, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZStringWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZStringWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZStringWriter(ZStringWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZStringWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZStringWriter(ZStringWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26398};

/// @brief Field sb, offset: 0x30, size: 0x10, def value: None
 ::Cysharp::Text::Utf16ValueStringBuilder  ___sb;

/// @brief Field isOpen, offset: 0x40, size: 0x1, def value: None
 bool  ___isOpen;

/// [Nullable(2)]
/// @brief Field encoding, offset: 0x48, size: 0x8, def value: None
 ::System::Text::UnicodeEncoding*  ___encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Text::ZStringWriter, ___sb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::ZStringWriter, ___isOpen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::ZStringWriter, ___encoding) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Text::ZStringWriter) == 0x50, "Size mismatch!");

} // namespace end def Cysharp::Text
