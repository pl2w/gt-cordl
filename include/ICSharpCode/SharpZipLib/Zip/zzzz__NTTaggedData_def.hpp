#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/NTTaggedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NTTaggedData)
namespace ICSharpCode::SharpZipLib::Zip {
class ITaggedData;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class NTTaggedData;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::NTTaggedData*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::NTTaggedData*, "ICSharpCode.SharpZipLib.Zip", "NTTaggedData");
// Dependencies System.DateTime, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.NTTaggedData
class CORDL_TYPE NTTaggedData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CreateTime, put=set_CreateTime)) ::System::DateTime  CreateTime;

 __declspec(property(get=get_LastAccessTime, put=set_LastAccessTime)) ::System::DateTime  LastAccessTime;

 __declspec(property(get=get_LastModificationTime, put=set_LastModificationTime)) ::System::DateTime  LastModificationTime;

 __declspec(property(get=get_TagID)) int16_t  TagID;

/// @brief Field _createTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__createTime, put=__cordl_internal_set__createTime)) ::System::DateTime  _createTime;

/// @brief Field _lastAccessTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastAccessTime, put=__cordl_internal_set__lastAccessTime)) ::System::DateTime  _lastAccessTime;

/// @brief Field _lastModificationTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastModificationTime, put=__cordl_internal_set__lastModificationTime)) ::System::DateTime  _lastModificationTime;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr operator  ::ICSharpCode::SharpZipLib::Zip::ITaggedData*() noexcept;

/// @brief Method GetData, addr 0x9f826bc, size 0x35c, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> GetData() ;

/// @brief Method IsValidValue, addr 0x9f82aa8, size 0x100, virtual false, abstract: false, final false
static inline bool IsValidValue(::System::DateTime  value) ;

static inline ::ICSharpCode::SharpZipLib::Zip::NTTaggedData* New_ctor() ;

/// @brief Method SetData, addr 0x9f82208, size 0x3dc, virtual true, abstract: false, final true
inline void SetData(::ArrayW<uint8_t>  data, int32_t  index, int32_t  count) ;

constexpr ::System::DateTime const& __cordl_internal_get__createTime() const;

constexpr ::System::DateTime& __cordl_internal_get__createTime() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastAccessTime() const;

constexpr ::System::DateTime& __cordl_internal_get__lastAccessTime() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastModificationTime() const;

constexpr ::System::DateTime& __cordl_internal_get__lastModificationTime() ;

constexpr void __cordl_internal_set__createTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__lastAccessTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__lastModificationTime(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x9f82d1c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CreateTime, addr 0x9f82c24, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_CreateTime() ;

/// @brief Method get_LastAccessTime, addr 0x9f82ca0, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_LastAccessTime() ;

/// @brief Method get_LastModificationTime, addr 0x9f82ba8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_LastModificationTime() ;

/// @brief Method get_TagID, addr 0x9f82200, size 0x8, virtual true, abstract: false, final true
inline int16_t get_TagID() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr ::ICSharpCode::SharpZipLib::Zip::ITaggedData* i___ICSharpCode__SharpZipLib__Zip__ITaggedData() noexcept;

/// @brief Method set_CreateTime, addr 0x9f82c2c, size 0x74, virtual false, abstract: false, final false
inline void set_CreateTime(::System::DateTime  value) ;

/// @brief Method set_LastAccessTime, addr 0x9f82ca8, size 0x74, virtual false, abstract: false, final false
inline void set_LastAccessTime(::System::DateTime  value) ;

/// @brief Method set_LastModificationTime, addr 0x9f82bb0, size 0x74, virtual false, abstract: false, final false
inline void set_LastModificationTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NTTaggedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NTTaggedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NTTaggedData(NTTaggedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NTTaggedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NTTaggedData(NTTaggedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17334};

/// @brief Field _lastAccessTime, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ____lastAccessTime;

/// @brief Field _lastModificationTime, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____lastModificationTime;

/// @brief Field _createTime, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ____createTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::NTTaggedData, ____lastAccessTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::NTTaggedData, ____lastModificationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::NTTaggedData, ____createTime) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::NTTaggedData) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
