#pragma once
// IWYU pragma private; include "System/Text/StringBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuilder)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
struct ParamsArray;
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
namespace System::Text {
class StringBuilder;
}
// Write type traits
MARK_REF_T(::System::Text::StringBuilder*);
DEFINE_IL2CPP_CLASS(::System::Text::StringBuilder*, "System.Text", "StringBuilder");
// [DefaultMember("Chars")]
// Dependencies System.IFormattable, System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.StringBuilder
class CORDL_TYPE StringBuilder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Chars, put=set_Chars)) char16_t  Chars[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

 __declspec(property(get=get_MaxCapacity)) int32_t  MaxCapacity;

 __declspec(property(get=get_RemainingCurrentChunk)) ::System::Span_1<char16_t>  RemainingCurrentChunk;

/// @brief Field m_ChunkChars, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChunkChars, put=__cordl_internal_set_m_ChunkChars)) ::ArrayW<char16_t>  m_ChunkChars;

/// @brief Field m_ChunkLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ChunkLength, put=__cordl_internal_set_m_ChunkLength)) int32_t  m_ChunkLength;

/// @brief Field m_ChunkOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ChunkOffset, put=__cordl_internal_set_m_ChunkOffset)) int32_t  m_ChunkOffset;

/// @brief Field m_ChunkPrevious, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChunkPrevious, put=__cordl_internal_set_m_ChunkPrevious)) ::System::Text::StringBuilder*  m_ChunkPrevious;

/// @brief Field m_MaxCapacity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxCapacity, put=__cordl_internal_set_m_MaxCapacity)) int32_t  m_MaxCapacity;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Append, addr 0xa1403c0, size 0x28, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t>  value) ;

/// @brief Method Append, addr 0xa13f054, size 0x13c, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  charCount) ;

/// @brief Method Append, addr 0xa1371a8, size 0x104, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::StringW  value) ;

/// @brief Method Append, addr 0xa13f318, size 0x13c, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Append, addr 0xa140278, size 0x60, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::System::Decimal  value) ;

/// @brief Method Append, addr 0xa140388, size 0x38, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::System::Object*  value) ;

/// @brief Method Append, addr 0xa1403e8, size 0x88, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method Append, addr 0xa13f454, size 0x24, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder*  value) ;

/// @brief Method Append, addr 0xa140074, size 0x4c, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(bool  value) ;

/// @brief Method Append, addr 0xa137158, size 0x50, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(char16_t  value) ;

/// @brief Method Append, addr 0xa13ec08, size 0x134, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(char16_t  value, int32_t  repeatCount) ;

/// [CLSCompliant(false)]
/// @brief Method Append, addr 0xa13f190, size 0x150, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(char16_t*  value, int32_t  valueCount) ;

/// @brief Method Append, addr 0xa140220, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(double_t  value) ;

/// @brief Method Append, addr 0xa140118, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(int16_t  value) ;

/// @brief Method Append, addr 0xa140170, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(int32_t  value) ;

/// @brief Method Append, addr 0xa1401c8, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method Append, addr 0xa1402d8, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method Append, addr 0xa140330, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(uint32_t  value) ;

/// @brief Method Append, addr 0xa1400c0, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(uint8_t  value) ;

/// @brief Method AppendCore, addr 0xa13f478, size 0x218, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendCore(::System::Text::StringBuilder*  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method AppendFormat, addr 0xa14065c, size 0x58, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendFormat(::StringW  format, ::System::Object*  arg0) ;

/// @brief Method AppendFormat, addr 0xa14113c, size 0x5c, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendFormat(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method AppendFormat, addr 0xa141198, size 0x60, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendFormat(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method AppendFormat, addr 0xa1411f8, size 0xb4, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method AppendFormat, addr 0xa1379ac, size 0x5c, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0) ;

/// @brief Method AppendFormat, addr 0xa1412ac, size 0x64, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method AppendFormatHelper, addr 0xa1406b4, size 0xa88, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendFormatHelper(::System::IFormatProvider*  provider, ::StringW  format, ::System::ParamsArray  args) ;

/// @brief Method AppendHelper, addr 0xa13f2e0, size 0x38, virtual false, abstract: false, final false
inline void AppendHelper(::StringW  value) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Text::StringBuilder* AppendJoin(::StringW  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method AppendJoinCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Text::StringBuilder* AppendJoinCore(char16_t*  separator, int32_t  separatorLength, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method AppendLine, addr 0xa13f690, size 0x20, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendLine() ;

/// @brief Method AppendLine, addr 0xa13f6b0, size 0x24, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* AppendLine(::StringW  value) ;

/// @brief Method AppendSpanFormattable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IFormattable*>)
inline ::System::Text::StringBuilder* AppendSpanFormattable(T  value) ;

/// @brief Method Clear, addr 0xa13e988, size 0x1c, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Clear() ;

/// @brief Method CopyTo, addr 0xa13e7c0, size 0x1c8, virtual false, abstract: false, final false
inline void CopyTo(int32_t  sourceIndex, ::System::Span_1<char16_t>  destination, int32_t  count) ;

/// @brief Method ExpandByABlock, addr 0xa13eea4, size 0x1b0, virtual false, abstract: false, final false
inline void ExpandByABlock(int32_t  minBlockCharCount) ;

/// @brief Method FindChunkForIndex, addr 0xa13ed3c, size 0x28, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* FindChunkForIndex(int32_t  index) ;

/// @brief Method FormatError, addr 0xa141310, size 0x4c, virtual false, abstract: false, final false
static inline void FormatError() ;

/// @brief Method Insert, addr 0xa140470, size 0xb0, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Insert(int32_t  index, ::StringW  value) ;

/// @brief Method Insert, addr 0xa13f838, size 0x188, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Insert(int32_t  index, ::StringW  value, int32_t  count) ;

/// @brief Method Insert, addr 0xa1405f0, size 0x2c, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Insert(int32_t  index, char16_t  value) ;

/// @brief Method Insert, addr 0xa14061c, size 0x40, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Insert(int32_t  index, int32_t  value) ;

/// @brief Method Insert, addr 0xa140520, size 0xd0, virtual false, abstract: false, final false
inline void Insert(int32_t  index, char16_t*  value, int32_t  valueCount) ;

/// @brief Method MakeRoom, addr 0xa13f9c0, size 0x2e0, virtual false, abstract: false, final false
inline void MakeRoom(int32_t  index, int32_t  count, ::by_ref<::System::Text::StringBuilder*>  chunk, ::by_ref<int32_t>  indexInChunk, bool  doNotMoveFollowingChars) ;

static inline ::System::Text::StringBuilder* New_ctor() ;

static inline ::System::Text::StringBuilder* New_ctor(int32_t  capacity) ;

static inline ::System::Text::StringBuilder* New_ctor(int32_t  capacity, int32_t  maxCapacity) ;

static inline ::System::Text::StringBuilder* New_ctor(::System::Text::StringBuilder*  from) ;

static inline ::System::Text::StringBuilder* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Text::StringBuilder* New_ctor(int32_t  size, int32_t  maxCapacity, ::System::Text::StringBuilder*  previousBlock) ;

static inline ::System::Text::StringBuilder* New_ctor(::StringW  value) ;

static inline ::System::Text::StringBuilder* New_ctor(::StringW  value, int32_t  capacity) ;

static inline ::System::Text::StringBuilder* New_ctor(::StringW  value, int32_t  startIndex, int32_t  length, int32_t  capacity) ;

/// @brief Method Next, addr 0xa1418f4, size 0x40, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Next(::System::Text::StringBuilder*  chunk) ;

/// @brief Method Remove, addr 0xa13fdb4, size 0x130, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Remove(int32_t  startIndex, int32_t  length) ;

/// @brief Method Remove, addr 0xa13fee4, size 0x190, virtual false, abstract: false, final false
inline void Remove(int32_t  startIndex, int32_t  count, ::by_ref<::System::Text::StringBuilder*>  chunk, ::by_ref<int32_t>  indexInChunk) ;

/// @brief Method Replace, addr 0xa14135c, size 0x10, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Replace(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method Replace, addr 0xa14136c, size 0x2fc, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Replace(::StringW  oldValue, ::StringW  newValue, int32_t  startIndex, int32_t  count) ;

/// @brief Method ReplaceAllInChunk, addr 0xa141748, size 0x1ac, virtual false, abstract: false, final false
inline void ReplaceAllInChunk(::ArrayW<int32_t>  replacements, int32_t  replacementsCount, ::System::Text::StringBuilder*  sourceChunk, int32_t  removeCount, ::StringW  value) ;

/// @brief Method ReplaceInPlaceAtChunk, addr 0xa13fca0, size 0x114, virtual false, abstract: false, final false
inline void ReplaceInPlaceAtChunk(::by_ref<::System::Text::StringBuilder*>  chunk, ::by_ref<int32_t>  indexInChunk, char16_t*  value, int32_t  count) ;

/// @brief Method StartsWith, addr 0xa141668, size 0xe0, virtual false, abstract: false, final false
inline bool StartsWith(::System::Text::StringBuilder*  chunk, int32_t  indexInChunk, int32_t  count, ::StringW  value) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xa13e220, size 0x144, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ThreadSafeCopy, addr 0xa13f6d4, size 0x164, virtual false, abstract: false, final false
static inline void ThreadSafeCopy(::ArrayW<char16_t>  source, int32_t  sourceIndex, ::System::Span_1<char16_t>  destination, int32_t  destinationIndex, int32_t  count) ;

/// @brief Method ThreadSafeCopy, addr 0xa13de5c, size 0xc8, virtual false, abstract: false, final false
static inline void ThreadSafeCopy(char16_t*  sourcePtr, ::ArrayW<char16_t>  destination, int32_t  destinationIndex, int32_t  count) ;

/// @brief Method ToString, addr 0xa13e514, size 0x114, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa13e628, size 0x198, virtual false, abstract: false, final false
inline ::StringW ToString(int32_t  startIndex, int32_t  length) ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_m_ChunkChars() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_m_ChunkChars() ;

constexpr int32_t const& __cordl_internal_get_m_ChunkLength() const;

constexpr int32_t& __cordl_internal_get_m_ChunkLength() ;

constexpr int32_t const& __cordl_internal_get_m_ChunkOffset() const;

constexpr int32_t& __cordl_internal_get_m_ChunkOffset() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_m_ChunkPrevious() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_m_ChunkPrevious() ;

constexpr int32_t const& __cordl_internal_get_m_MaxCapacity() const;

constexpr int32_t& __cordl_internal_get_m_MaxCapacity() ;

constexpr void __cordl_internal_set_m_ChunkChars(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_m_ChunkLength(int32_t  value) ;

constexpr void __cordl_internal_set_m_ChunkOffset(int32_t  value) ;

constexpr void __cordl_internal_set_m_ChunkPrevious(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_m_MaxCapacity(int32_t  value) ;

/// @brief Method .ctor, addr 0xa13d994, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa137150, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0xa13da00, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, int32_t  maxCapacity) ;

/// @brief Method .ctor, addr 0xa14199c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::System::Text::StringBuilder*  from) ;

/// @brief Method .ctor, addr 0xa13df24, size 0x2fc, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xa1419f8, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, int32_t  maxCapacity, ::System::Text::StringBuilder*  previousBlock) ;

/// @brief Method .ctor, addr 0xa13dbd0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xa13dbec, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  value, int32_t  capacity) ;

/// @brief Method .ctor, addr 0xa13dc08, size 0x254, virtual false, abstract: false, final false
inline void _ctor(::StringW  value, int32_t  startIndex, int32_t  length, int32_t  capacity) ;

/// @brief Method get_Capacity, addr 0xa13e364, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Chars, addr 0xa13ed64, size 0x88, virtual false, abstract: false, final false
inline char16_t get_Chars(int32_t  index) ;

/// @brief Method get_Length, addr 0xa1379a0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_MaxCapacity, addr 0xa13e50c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxCapacity() ;

/// @brief Method get_RemainingCurrentChunk, addr 0xa141934, size 0x68, virtual false, abstract: false, final false
inline ::System::Span_1<char16_t> get_RemainingCurrentChunk() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Method set_Capacity, addr 0xa13e384, size 0x188, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Chars, addr 0xa13edec, size 0xb8, virtual false, abstract: false, final false
inline void set_Chars(int32_t  index, char16_t  value) ;

/// @brief Method set_Length, addr 0xa13e9a4, size 0x264, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringBuilder(StringBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringBuilder(StringBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5996};

/// @brief Field m_ChunkChars, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___m_ChunkChars;

/// @brief Field m_ChunkPrevious, offset: 0x18, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___m_ChunkPrevious;

/// @brief Field m_ChunkLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_ChunkLength;

/// @brief Field m_ChunkOffset, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_ChunkOffset;

/// @brief Field m_MaxCapacity, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_MaxCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkChars) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkPrevious) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_MaxCapacity) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Text::StringBuilder) == 0x30, "Size mismatch!");

} // namespace end def System::Text
