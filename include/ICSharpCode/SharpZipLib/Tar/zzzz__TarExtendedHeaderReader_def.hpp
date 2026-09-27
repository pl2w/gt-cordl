#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarExtendedHeaderReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TarExtendedHeaderReader)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Tar {
class TarExtendedHeaderReader;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*, "ICSharpCode.SharpZipLib.Tar", "TarExtendedHeaderReader");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarExtendedHeaderReader
class CORDL_TYPE TarExtendedHeaderReader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Headers;

/// @brief Field StateNext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StateNext, put=setStaticF_StateNext)) ::ArrayW<uint8_t>  StateNext;

/// @brief Field bbIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_bbIndex, put=__cordl_internal_set_bbIndex)) int32_t  bbIndex;

/// @brief Field byteBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_byteBuffer, put=__cordl_internal_set_byteBuffer)) ::ArrayW<uint8_t>  byteBuffer;

/// @brief Field charBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_charBuffer, put=__cordl_internal_set_charBuffer)) ::ArrayW<char16_t>  charBuffer;

/// @brief Field decoder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_decoder, put=__cordl_internal_set_decoder)) ::System::Text::Decoder*  decoder;

/// @brief Field headerParts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_headerParts, put=__cordl_internal_set_headerParts)) ::ArrayW<::StringW>  headerParts;

/// @brief Field headers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers;

/// @brief Field sb, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::System::Text::StringBuilder*  sb;

/// @brief Field state, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

/// @brief Method Flush, addr 0x9ff14e8, size 0x88, virtual false, abstract: false, final false
inline void Flush() ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader* New_ctor() ;

/// @brief Method Read, addr 0x9ff12e4, size 0x204, virtual false, abstract: false, final false
inline void Read(::ArrayW<uint8_t>  buffer, int32_t  length) ;

/// @brief Method ResetBuffers, addr 0x9ff124c, size 0x98, virtual false, abstract: false, final false
inline void ResetBuffers() ;

constexpr int32_t const& __cordl_internal_get_bbIndex() const;

constexpr int32_t& __cordl_internal_get_bbIndex() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_byteBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_byteBuffer() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_charBuffer() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_charBuffer() ;

constexpr ::System::Text::Decoder* const& __cordl_internal_get_decoder() const;

constexpr ::System::Text::Decoder*& __cordl_internal_get_decoder() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_headerParts() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_headerParts() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_headers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_headers() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_sb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_sb() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_bbIndex(int32_t  value) ;

constexpr void __cordl_internal_set_byteBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_charBuffer(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_decoder(::System::Text::Decoder*  value) ;

constexpr void __cordl_internal_set_headerParts(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ff111c, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_StateNext() ;

/// @brief Method get_Headers, addr 0x9ff1570, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_Headers() ;

static inline void setStaticF_StateNext(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarExtendedHeaderReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarExtendedHeaderReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarExtendedHeaderReader(TarExtendedHeaderReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarExtendedHeaderReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarExtendedHeaderReader(TarExtendedHeaderReader const& ) = delete;

/// @brief Field END offset 0xffffffff size 0x1
static constexpr uint8_t  END{static_cast<uint8_t>(0x3u)};

/// @brief Field KEY offset 0xffffffff size 0x1
static constexpr uint8_t  KEY{static_cast<uint8_t>(0x1u)};

/// @brief Field LENGTH offset 0xffffffff size 0x1
static constexpr uint8_t  LENGTH{static_cast<uint8_t>(0x0u)};

/// @brief Field VALUE offset 0xffffffff size 0x1
static constexpr uint8_t  VALUE{static_cast<uint8_t>(0x2u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17394};

/// @brief Field headers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___headers;

/// @brief Field headerParts, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___headerParts;

/// @brief Field bbIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___bbIndex;

/// @brief Field byteBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___byteBuffer;

/// @brief Field charBuffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___charBuffer;

/// @brief Field sb, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___sb;

/// @brief Field decoder, offset: 0x40, size: 0x8, def value: None
 ::System::Text::Decoder*  ___decoder;

/// @brief Field state, offset: 0x48, size: 0x4, def value: None
 int32_t  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___headers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___headerParts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___bbIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___byteBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___charBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___sb) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___decoder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader, ___state) == 0x48, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader) == 0x50, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
