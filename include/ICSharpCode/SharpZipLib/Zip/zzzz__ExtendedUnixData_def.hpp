#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ExtendedUnixData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ExtendedUnixData_Flags_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedUnixData)
namespace GlobalNamespace {
struct ExtendedUnixData_Flags;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ITaggedData;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ExtendedUnixData;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*, "ICSharpCode.SharpZipLib.Zip", "ExtendedUnixData");
// Dependencies ICSharpCode.SharpZipLib.Zip.ExtendedUnixData::Flags, System.DateTime, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ExtendedUnixData
class CORDL_TYPE ExtendedUnixData : public ::System::Object {
public:
// Declarations
using Flags = ::GlobalNamespace::ExtendedUnixData_Flags;

 __declspec(property(get=get_AccessTime, put=set_AccessTime)) ::System::DateTime  AccessTime;

 __declspec(property(get=get_CreateTime, put=set_CreateTime)) ::System::DateTime  CreateTime;

 __declspec(property(get=get_Include, put=set_Include)) ::GlobalNamespace::ExtendedUnixData_Flags  Include;

 __declspec(property(get=get_ModificationTime, put=set_ModificationTime)) ::System::DateTime  ModificationTime;

 __declspec(property(get=get_TagID)) int16_t  TagID;

/// @brief Field _createTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__createTime, put=__cordl_internal_set__createTime)) ::System::DateTime  _createTime;

/// @brief Field _flags, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__flags, put=__cordl_internal_set__flags)) ::GlobalNamespace::ExtendedUnixData_Flags  _flags;

/// @brief Field _lastAccessTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastAccessTime, put=__cordl_internal_set__lastAccessTime)) ::System::DateTime  _lastAccessTime;

/// @brief Field _modificationTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__modificationTime, put=__cordl_internal_set__modificationTime)) ::System::DateTime  _modificationTime;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr operator  ::ICSharpCode::SharpZipLib::Zip::ITaggedData*() noexcept;

/// @brief Method GetData, addr 0x9f81960, size 0x558, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> GetData() ;

/// @brief Method IsValidValue, addr 0x9f81ee0, size 0xe8, virtual false, abstract: false, final false
static inline bool IsValidValue(::System::DateTime  value) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData* New_ctor() ;

/// @brief Method SetData, addr 0x9f813ec, size 0x4d4, virtual true, abstract: false, final true
inline void SetData(::ArrayW<uint8_t>  data, int32_t  index, int32_t  count) ;

constexpr ::System::DateTime const& __cordl_internal_get__createTime() const;

constexpr ::System::DateTime& __cordl_internal_get__createTime() ;

constexpr ::GlobalNamespace::ExtendedUnixData_Flags const& __cordl_internal_get__flags() const;

constexpr ::GlobalNamespace::ExtendedUnixData_Flags& __cordl_internal_get__flags() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastAccessTime() const;

constexpr ::System::DateTime& __cordl_internal_get__lastAccessTime() ;

constexpr ::System::DateTime const& __cordl_internal_get__modificationTime() const;

constexpr ::System::DateTime& __cordl_internal_get__modificationTime() ;

constexpr void __cordl_internal_set__createTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__flags(::GlobalNamespace::ExtendedUnixData_Flags  value) ;

constexpr void __cordl_internal_set__lastAccessTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__modificationTime(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x9f82170, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AccessTime, addr 0x9f82050, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_AccessTime() ;

/// @brief Method get_CreateTime, addr 0x9f820d8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_CreateTime() ;

/// @brief Method get_Include, addr 0x9f82160, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ExtendedUnixData_Flags get_Include() ;

/// @brief Method get_ModificationTime, addr 0x9f81fc8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_ModificationTime() ;

/// @brief Method get_TagID, addr 0x9f813e4, size 0x8, virtual true, abstract: false, final true
inline int16_t get_TagID() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr ::ICSharpCode::SharpZipLib::Zip::ITaggedData* i___ICSharpCode__SharpZipLib__Zip__ITaggedData() noexcept;

/// @brief Method set_AccessTime, addr 0x9f82058, size 0x80, virtual false, abstract: false, final false
inline void set_AccessTime(::System::DateTime  value) ;

/// @brief Method set_CreateTime, addr 0x9f820e0, size 0x80, virtual false, abstract: false, final false
inline void set_CreateTime(::System::DateTime  value) ;

/// @brief Method set_Include, addr 0x9f82168, size 0x8, virtual false, abstract: false, final false
inline void set_Include(::GlobalNamespace::ExtendedUnixData_Flags  value) ;

/// @brief Method set_ModificationTime, addr 0x9f81fd0, size 0x80, virtual false, abstract: false, final false
inline void set_ModificationTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExtendedUnixData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExtendedUnixData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtendedUnixData(ExtendedUnixData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedUnixData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtendedUnixData(ExtendedUnixData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17333};

/// @brief Field _flags, offset: 0x10, size: 0x1, def value: None
 ::GlobalNamespace::ExtendedUnixData_Flags  ____flags;

/// @brief Field _modificationTime, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____modificationTime;

/// @brief Field _lastAccessTime, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ____lastAccessTime;

/// @brief Field _createTime, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ____createTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData, ____flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData, ____modificationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData, ____lastAccessTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData, ____createTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData) == 0x30, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
