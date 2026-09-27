#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipExtraData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipExtraData)
namespace ICSharpCode::SharpZipLib::Zip {
class ITaggedData;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipExtraData;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*, "ICSharpCode.SharpZipLib.Zip", "ZipExtraData");
// Dependencies ICSharpCode.SharpZipLib.Zip.ITaggedData, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipExtraData
class CORDL_TYPE ZipExtraData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentReadIndex)) int32_t  CurrentReadIndex;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_UnreadCount)) int32_t  UnreadCount;

 __declspec(property(get=get_ValueLength)) int32_t  ValueLength;

/// @brief Field _data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<uint8_t>  _data;

/// @brief Field _index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _newEntry, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__newEntry, put=__cordl_internal_set__newEntry)) ::System::IO::MemoryStream*  _newEntry;

/// @brief Field _readValueLength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__readValueLength, put=__cordl_internal_set__readValueLength)) int32_t  _readValueLength;

/// @brief Field _readValueStart, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__readValueStart, put=__cordl_internal_set__readValueStart)) int32_t  _readValueStart;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddData, addr 0x9f836a0, size 0x78, virtual false, abstract: false, final false
inline void AddData(::ArrayW<uint8_t>  data) ;

/// @brief Method AddData, addr 0x9f83680, size 0x20, virtual false, abstract: false, final false
inline void AddData(uint8_t  data) ;

/// @brief Method AddEntry, addr 0x9f83238, size 0x224, virtual false, abstract: false, final false
inline void AddEntry(int32_t  headerID, ::ArrayW<uint8_t>  fieldData) ;

/// @brief Method AddEntry, addr 0x9f830e4, size 0x154, virtual false, abstract: false, final false
inline void AddEntry(::ICSharpCode::SharpZipLib::Zip::ITaggedData*  taggedData) ;

/// @brief Method AddLeInt, addr 0x9f83768, size 0x2c, virtual false, abstract: false, final false
inline void AddLeInt(int32_t  toAdd) ;

/// @brief Method AddLeLong, addr 0x9f83794, size 0x44, virtual false, abstract: false, final false
inline void AddLeLong(int64_t  toAdd) ;

/// @brief Method AddLeShort, addr 0x9f83718, size 0x50, virtual false, abstract: false, final false
inline void AddLeShort(int32_t  toAdd) ;

/// @brief Method AddNewEntry, addr 0x9f8361c, size 0x64, virtual false, abstract: false, final false
inline void AddNewEntry(int32_t  headerID) ;

/// @brief Method Clear, addr 0x9f82dc4, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Delete, addr 0x9f8345c, size 0xf8, virtual false, abstract: false, final false
inline bool Delete(int32_t  headerID) ;

/// @brief Method Dispose, addr 0x9f83968, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Find, addr 0x9f80500, size 0xb0, virtual false, abstract: false, final false
inline bool Find(int32_t  headerID) ;

/// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::ICSharpCode::SharpZipLib::Zip::ITaggedData*> && ::cordl_internals::reference_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T GetData() ;

/// @brief Method GetEntryData, addr 0x9f82e34, size 0xc8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetEntryData() ;

/// @brief Method GetStreamForTag, addr 0x9f82f14, size 0x98, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetStreamForTag(int32_t  tag) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipExtraData* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipExtraData* New_ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method ReadByte, addr 0x9f80828, size 0x60, virtual false, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method ReadCheck, addr 0x9f837d8, size 0xd8, virtual false, abstract: false, final false
inline void ReadCheck(int32_t  length) ;

/// @brief Method ReadInt, addr 0x9f838b0, size 0x8c, virtual false, abstract: false, final false
inline int32_t ReadInt() ;

/// @brief Method ReadLong, addr 0x9f805b0, size 0x3c, virtual false, abstract: false, final false
inline int64_t ReadLong() ;

/// @brief Method ReadShort, addr 0x9f807cc, size 0x5c, virtual false, abstract: false, final false
inline int32_t ReadShort() ;

/// @brief Method ReadShortInternal, addr 0x9f83040, size 0xa4, virtual false, abstract: false, final false
inline int32_t ReadShortInternal() ;

/// @brief Method SetShort, addr 0x9f83554, size 0x68, virtual false, abstract: false, final false
inline void SetShort(::by_ref<int32_t>  index, int32_t  source) ;

/// @brief Method Skip, addr 0x9f8393c, size 0x2c, virtual false, abstract: false, final false
inline void Skip(int32_t  amount) ;

/// @brief Method StartNewEntry, addr 0x9f835bc, size 0x60, virtual false, abstract: false, final false
inline void StartNewEntry() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__data() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get__newEntry() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get__newEntry() ;

constexpr int32_t const& __cordl_internal_get__readValueLength() const;

constexpr int32_t& __cordl_internal_get__readValueLength() ;

constexpr int32_t const& __cordl_internal_get__readValueStart() const;

constexpr int32_t& __cordl_internal_get__readValueStart() ;

constexpr void __cordl_internal_set__data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__newEntry(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set__readValueLength(int32_t  value) ;

constexpr void __cordl_internal_set__readValueStart(int32_t  value) ;

/// @brief Method .ctor, addr 0x9f82da8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f80488, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method get_CurrentReadIndex, addr 0x9f82fb4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentReadIndex() ;

/// @brief Method get_Length, addr 0x9f82efc, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_UnreadCount, addr 0x9f82fbc, size 0x84, virtual false, abstract: false, final false
inline int32_t get_UnreadCount() ;

/// @brief Method get_ValueLength, addr 0x9f82fac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ValueLength() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipExtraData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipExtraData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipExtraData(ZipExtraData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipExtraData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipExtraData(ZipExtraData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17336};

/// @brief Field _index, offset: 0x10, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _readValueStart, offset: 0x14, size: 0x4, def value: None
 int32_t  ____readValueStart;

/// @brief Field _readValueLength, offset: 0x18, size: 0x4, def value: None
 int32_t  ____readValueLength;

/// @brief Field _newEntry, offset: 0x20, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ____newEntry;

/// @brief Field _data, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipExtraData, ____index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipExtraData, ____readValueStart) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipExtraData, ____readValueLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipExtraData, ____newEntry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipExtraData, ____data) == 0x28, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipExtraData) == 0x30, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
