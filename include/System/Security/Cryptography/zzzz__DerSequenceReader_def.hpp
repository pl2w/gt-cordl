#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DerSequenceReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerSequenceReader)
namespace GlobalNamespace {
struct DerSequenceReader_DerTag;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Security::Cryptography {
class DerSequenceReader___c;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DerSequenceReader;
}
namespace System::Security::Cryptography {
class DerSequenceReader___c;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::DerSequenceReader*);
MARK_REF_T(::System::Security::Cryptography::DerSequenceReader___c*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::DerSequenceReader*, "System.Security.Cryptography", "DerSequenceReader");
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::DerSequenceReader___c*, "System.Security.Cryptography", "DerSequenceReader/<>c");
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DerSequenceReader
class CORDL_TYPE DerSequenceReader : public ::System::Object {
public:
// Declarations
using DerTag = ::GlobalNamespace::DerSequenceReader_DerTag;

using __c = ::System::Security::Cryptography::DerSequenceReader___c;

 __declspec(property(put=set_ContentLength)) int32_t  ContentLength;

 __declspec(property(get=get_HasData)) bool  HasData;

/// @brief Field <ContentLength>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__ContentLength_k__BackingField, put=__cordl_internal_set__ContentLength_k__BackingField)) int32_t  _ContentLength_k__BackingField;

/// @brief Field _data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<uint8_t>  _data;

/// @brief Field _end, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) int32_t  _end;

/// @brief Field _position, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) int32_t  _position;

/// @brief Field s_latin1Encoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_latin1Encoding, put=setStaticF_s_latin1Encoding)) ::System::Text::Encoding*  s_latin1Encoding;

/// @brief Field s_utf8EncodingWithExceptionFallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_utf8EncodingWithExceptionFallback, put=setStaticF_s_utf8EncodingWithExceptionFallback)) ::System::Text::Encoding*  s_utf8EncodingWithExceptionFallback;

/// @brief Field s_validityDateTimeFormatInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_validityDateTimeFormatInfo, put=setStaticF_s_validityDateTimeFormatInfo)) ::System::Globalization::DateTimeFormatInfo*  s_validityDateTimeFormatInfo;

/// @brief Method CheckTag, addr 0xad31f0c, size 0x98, virtual false, abstract: false, final false
static inline void CheckTag(::GlobalNamespace::DerSequenceReader_DerTag  expected, ::ArrayW<uint8_t>  data, int32_t  position) ;

/// @brief Method EatLength, addr 0xad313e0, size 0x3c, virtual false, abstract: false, final false
inline int32_t EatLength() ;

/// @brief Method EatTag, addr 0xad31360, size 0x80, virtual false, abstract: false, final false
inline void EatTag(::GlobalNamespace::DerSequenceReader_DerTag  expected) ;

static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::ArrayW<uint8_t>  data) ;

static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::GlobalNamespace::DerSequenceReader_DerTag  tagToEat, ::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

/// @brief Method PeekTag, addr 0xad3142c, size 0x94, virtual false, abstract: false, final false
inline uint8_t PeekTag() ;

/// @brief Method ReadBMPString, addr 0xad326e4, size 0x80, virtual false, abstract: false, final false
inline ::StringW ReadBMPString() ;

/// @brief Method ReadBitString, addr 0xad31930, size 0x144, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadBitString() ;

/// @brief Method ReadBoolean, addr 0xad316e8, size 0xc8, virtual false, abstract: false, final false
inline bool ReadBoolean() ;

/// @brief Method ReadCollectionWithTag, addr 0xad31e4c, size 0xc0, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::DerSequenceReader* ReadCollectionWithTag(::GlobalNamespace::DerSequenceReader_DerTag  expected) ;

/// @brief Method ReadContentAsBytes, addr 0xad31880, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadContentAsBytes() ;

/// @brief Method ReadGeneralizedTime, addr 0xad32458, size 0x4c, virtual false, abstract: false, final false
inline ::System::DateTime ReadGeneralizedTime() ;

/// @brief Method ReadIA5String, addr 0xad32034, size 0x80, virtual false, abstract: false, final false
inline ::StringW ReadIA5String() ;

/// @brief Method ReadInteger, addr 0xad317b0, size 0xb4, virtual false, abstract: false, final false
inline int32_t ReadInteger() ;

/// @brief Method ReadIntegerBytes, addr 0xad31864, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadIntegerBytes() ;

/// @brief Method ReadNextEncodedValue, addr 0xad31514, size 0xb4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadNextEncodedValue() ;

/// @brief Method ReadOctetString, addr 0xad31a74, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadOctetString() ;

/// @brief Method ReadOidAsString, addr 0xad31a90, size 0x2c0, virtual false, abstract: false, final false
inline ::StringW ReadOidAsString() ;

/// @brief Method ReadPrintableString, addr 0xad31fb4, size 0x80, virtual false, abstract: false, final false
inline ::StringW ReadPrintableString() ;

/// @brief Method ReadSequence, addr 0xad31fa4, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::DerSequenceReader* ReadSequence() ;

/// @brief Method ReadSet, addr 0xad31fac, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::DerSequenceReader* ReadSet() ;

/// @brief Method ReadT61String, addr 0xad320b4, size 0x2d8, virtual false, abstract: false, final false
inline ::StringW ReadT61String() ;

/// @brief Method ReadTime, addr 0xad324a4, size 0x240, virtual false, abstract: false, final false
inline ::System::DateTime ReadTime(::GlobalNamespace::DerSequenceReader_DerTag  timeTag, ::StringW  formatString) ;

/// @brief Method ReadUtcTime, addr 0xad3240c, size 0x4c, virtual false, abstract: false, final false
inline ::System::DateTime ReadUtcTime() ;

/// @brief Method ReadUtf8String, addr 0xad31d50, size 0x80, virtual false, abstract: false, final false
inline ::StringW ReadUtf8String() ;

/// @brief Method ReadX509Date, addr 0xad3238c, size 0x80, virtual false, abstract: false, final false
inline ::System::DateTime ReadX509Date() ;

/// @brief Method ScanContentLength, addr 0xad315c8, size 0x120, virtual false, abstract: false, final false
static inline int32_t ScanContentLength(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  end, ::by_ref<int32_t>  bytesConsumed) ;

/// @brief Method SkipValue, addr 0xad314c0, size 0x54, virtual false, abstract: false, final false
inline void SkipValue() ;

/// @brief Method TrimTrailingNulls, addr 0xad31dd0, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW TrimTrailingNulls(::StringW  value) ;

constexpr int32_t const& __cordl_internal_get__ContentLength_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ContentLength_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__data() ;

constexpr int32_t const& __cordl_internal_get__end() const;

constexpr int32_t& __cordl_internal_get__end() ;

constexpr int32_t const& __cordl_internal_get__position() const;

constexpr int32_t& __cordl_internal_get__position() ;

constexpr void __cordl_internal_set__ContentLength_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__end(int32_t  value) ;

constexpr void __cordl_internal_set__position(int32_t  value) ;

/// @brief Method .ctor, addr 0xad3122c, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method .ctor, addr 0xad3124c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

/// @brief Method .ctor, addr 0xad31260, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::DerSequenceReader_DerTag  tagToEat, ::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

static inline ::System::Text::Encoding* getStaticF_s_latin1Encoding() ;

static inline ::System::Text::Encoding* getStaticF_s_utf8EncodingWithExceptionFallback() ;

static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_s_validityDateTimeFormatInfo() ;

/// @brief Method get_HasData, addr 0xad3141c, size 0x10, virtual false, abstract: false, final false
inline bool get_HasData() ;

static inline void setStaticF_s_latin1Encoding(::System::Text::Encoding*  value) ;

static inline void setStaticF_s_utf8EncodingWithExceptionFallback(::System::Text::Encoding*  value) ;

static inline void setStaticF_s_validityDateTimeFormatInfo(::System::Globalization::DateTimeFormatInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ContentLength, addr 0xad31224, size 0x8, virtual false, abstract: false, final false
inline void set_ContentLength(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DerSequenceReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DerSequenceReader(DerSequenceReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerSequenceReader(DerSequenceReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10039};

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____data;

/// @brief Field _end, offset: 0x18, size: 0x4, def value: None
 int32_t  ____end;

/// @brief Field _position, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____position;

/// [CompilerGenerated]
/// @brief Field <ContentLength>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____ContentLength_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____end) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____position) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____ContentLength_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::DerSequenceReader) == 0x28, "Size mismatch!");

} // namespace end def System::Security::Cryptography
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DerSequenceReader/<>c
class CORDL_TYPE DerSequenceReader___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Security::Cryptography::DerSequenceReader___c*  __9;

/// @brief Field <>9__45_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__45_0, put=setStaticF___9__45_0)) ::System::Func_1<::System::Text::Encoding*>*  __9__45_0;

/// @brief Field <>9__45_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__45_1, put=setStaticF___9__45_1)) ::System::Func_1<::System::Text::Encoding*>*  __9__45_1;

/// @brief Field <>9__51_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__51_0, put=setStaticF___9__51_0)) ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*  __9__51_0;

static inline ::System::Security::Cryptography::DerSequenceReader___c* New_ctor() ;

/// @brief Method <ReadT61String>b__45_0, addr 0xad327d4, size 0x5c, virtual false, abstract: false, final false
inline ::System::Text::Encoding* _ReadT61String_b__45_0() ;

/// @brief Method <ReadT61String>b__45_1, addr 0xad32830, size 0x44, virtual false, abstract: false, final false
inline ::System::Text::Encoding* _ReadT61String_b__45_1() ;

/// @brief Method <ReadTime>b__51_0, addr 0xad32874, size 0xcc, virtual false, abstract: false, final false
inline ::System::Globalization::DateTimeFormatInfo* _ReadTime_b__51_0() ;

/// @brief Method .ctor, addr 0xad327cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Security::Cryptography::DerSequenceReader___c* getStaticF___9() ;

static inline ::System::Func_1<::System::Text::Encoding*>* getStaticF___9__45_0() ;

static inline ::System::Func_1<::System::Text::Encoding*>* getStaticF___9__45_1() ;

static inline ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* getStaticF___9__51_0() ;

static inline void setStaticF___9(::System::Security::Cryptography::DerSequenceReader___c*  value) ;

static inline void setStaticF___9__45_0(::System::Func_1<::System::Text::Encoding*>*  value) ;

static inline void setStaticF___9__45_1(::System::Func_1<::System::Text::Encoding*>*  value) ;

static inline void setStaticF___9__51_0(::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DerSequenceReader___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DerSequenceReader___c(DerSequenceReader___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerSequenceReader___c(DerSequenceReader___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::DerSequenceReader___c) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
