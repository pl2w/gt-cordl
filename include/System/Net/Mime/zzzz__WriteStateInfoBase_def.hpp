#pragma once
// IWYU pragma private; include "System/Net/Mime/WriteStateInfoBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WriteStateInfoBase)
// Forward declare root types
namespace System::Net::Mime {
class WriteStateInfoBase;
}
// Write type traits
MARK_REF_T(::System::Net::Mime::WriteStateInfoBase*);
DEFINE_IL2CPP_CLASS(::System::Net::Mime::WriteStateInfoBase*, "System.Net.Mime", "WriteStateInfoBase");
// Dependencies System.Object
namespace System::Net::Mime {
// Is value type: false
// CS Name: System.Net.Mime.WriteStateInfoBase
class CORDL_TYPE WriteStateInfoBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::ArrayW<uint8_t>  Buffer;

 __declspec(property(get=get_CurrentLineLength)) int32_t  CurrentLineLength;

 __declspec(property(get=get_Footer)) ::ArrayW<uint8_t>  Footer;

 __declspec(property(get=get_FooterLength)) int32_t  FooterLength;

 __declspec(property(get=get_Header)) ::ArrayW<uint8_t>  Header;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_MaxLineLength)) int32_t  MaxLineLength;

/// @brief Field _buffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _currentBufferUsed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentBufferUsed, put=__cordl_internal_set__currentBufferUsed)) int32_t  _currentBufferUsed;

/// @brief Field _currentLineLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentLineLength, put=__cordl_internal_set__currentLineLength)) int32_t  _currentLineLength;

/// @brief Field _footer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__footer, put=__cordl_internal_set__footer)) ::ArrayW<uint8_t>  _footer;

/// @brief Field _header, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::ArrayW<uint8_t>  _header;

/// @brief Field _maxLineLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxLineLength, put=__cordl_internal_set__maxLineLength)) int32_t  _maxLineLength;

/// @brief Method Append, addr 0xace2314, size 0x60, virtual false, abstract: false, final false
inline void Append(uint8_t  aByte) ;

/// @brief Method Append, addr 0xace2374, size 0x54, virtual false, abstract: false, final false
inline void Append(/* [ParamArray] */ ::ArrayW<uint8_t>  bytes) ;

/// @brief Method AppendCRLF, addr 0xace23c8, size 0xd4, virtual false, abstract: false, final false
inline void AppendCRLF(bool  includeSpace) ;

/// @brief Method AppendFooter, addr 0xace249c, size 0x18, virtual false, abstract: false, final false
inline void AppendFooter() ;

/// @brief Method AppendHeader, addr 0xace24b4, size 0x18, virtual false, abstract: false, final false
inline void AppendHeader() ;

/// @brief Method EnsureSpaceInBuffer, addr 0xace2258, size 0xbc, virtual false, abstract: false, final false
inline void EnsureSpaceInBuffer(int32_t  moreBytes) ;

static inline ::System::Net::Mime::WriteStateInfoBase* New_ctor() ;

/// @brief Method Reset, addr 0xace24d4, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__currentBufferUsed() const;

constexpr int32_t& __cordl_internal_get__currentBufferUsed() ;

constexpr int32_t const& __cordl_internal_get__currentLineLength() const;

constexpr int32_t& __cordl_internal_get__currentLineLength() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__footer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__footer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__header() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__header() ;

constexpr int32_t const& __cordl_internal_get__maxLineLength() const;

constexpr int32_t& __cordl_internal_get__maxLineLength() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__currentBufferUsed(int32_t  value) ;

constexpr void __cordl_internal_set__currentLineLength(int32_t  value) ;

constexpr void __cordl_internal_set__footer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__header(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__maxLineLength(int32_t  value) ;

/// @brief Method .ctor, addr 0xace20a0, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Buffer, addr 0xace2240, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Buffer() ;

/// @brief Method get_CurrentLineLength, addr 0xace2250, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentLineLength() ;

/// @brief Method get_Footer, addr 0xace2230, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Footer() ;

/// @brief Method get_FooterLength, addr 0xace2218, size 0x18, virtual false, abstract: false, final false
inline int32_t get_FooterLength() ;

/// @brief Method get_Header, addr 0xace2238, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Header() ;

/// @brief Method get_Length, addr 0xace2248, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_MaxLineLength, addr 0xace24cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxLineLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriteStateInfoBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriteStateInfoBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteStateInfoBase(WriteStateInfoBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteStateInfoBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteStateInfoBase(WriteStateInfoBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10873};

/// @brief Field _header, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____header;

/// @brief Field _footer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____footer;

/// @brief Field _maxLineLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ____maxLineLength;

/// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

/// @brief Field _currentLineLength, offset: 0x30, size: 0x4, def value: None
 int32_t  ____currentLineLength;

/// @brief Field _currentBufferUsed, offset: 0x34, size: 0x4, def value: None
 int32_t  ____currentBufferUsed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Mime::WriteStateInfoBase, ____header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mime::WriteStateInfoBase, ____footer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mime::WriteStateInfoBase, ____maxLineLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mime::WriteStateInfoBase, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mime::WriteStateInfoBase, ____currentLineLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mime::WriteStateInfoBase, ____currentBufferUsed) == 0x34, "Offset mismatch!");

static_assert(sizeof(::System::Net::Mime::WriteStateInfoBase) == 0x38, "Size mismatch!");

} // namespace end def System::Net::Mime
