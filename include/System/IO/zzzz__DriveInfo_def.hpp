#pragma once
// IWYU pragma private; include "System/IO/DriveInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DriveInfo)
namespace System::IO {
class DriveInfo___c;
}
namespace System::IO {
struct MonoIOError;
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
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace System::IO {
class DriveInfo;
}
namespace System::IO {
class DriveInfo___c;
}
// Write type traits
MARK_REF_T(::System::IO::DriveInfo*);
MARK_REF_T(::System::IO::DriveInfo___c*);
DEFINE_IL2CPP_CLASS(::System::IO::DriveInfo*, "System.IO", "DriveInfo");
DEFINE_IL2CPP_CLASS(::System::IO::DriveInfo___c*, "System.IO", "DriveInfo/<>c");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.DriveInfo
class CORDL_TYPE DriveInfo : public ::System::Object {
public:
// Declarations
using __c = ::System::IO::DriveInfo___c;

 __declspec(property(get=get_AvailableFreeSpace)) int64_t  AvailableFreeSpace;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field drive_format, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_drive_format, put=__cordl_internal_set_drive_format)) ::StringW  drive_format;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method GetDiskFreeSpace, addr 0xa2ac268, size 0x64, virtual false, abstract: false, final false
static inline void GetDiskFreeSpace(::StringW  path, ::by_ref<uint64_t>  availableFreeSpace, ::by_ref<uint64_t>  totalSize, ::by_ref<uint64_t>  totalFreeSpace) ;

/// @brief Method GetDiskFreeSpaceInternal, addr 0xa2ac2cc, size 0x5c, virtual false, abstract: false, final false
static inline bool GetDiskFreeSpaceInternal(::StringW  pathName, ::by_ref<uint64_t>  freeBytesAvail, ::by_ref<uint64_t>  totalNumberOfBytes, ::by_ref<uint64_t>  totalNumberOfFreeBytes, ::by_ref<::System::IO::MonoIOError>  error) ;

/// @brief Method GetDiskFreeSpaceInternal, addr 0xa2acadc, size 0x4, virtual false, abstract: false, final false
static inline bool GetDiskFreeSpaceInternal(char16_t*  pathName, int32_t  pathName_length, ::by_ref<uint64_t>  freeBytesAvail, ::by_ref<uint64_t>  totalNumberOfBytes, ::by_ref<uint64_t>  totalNumberOfFreeBytes, ::by_ref<::System::IO::MonoIOError>  error) ;

/// @brief Method GetDriveFormat, addr 0xa2aca70, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW GetDriveFormat(::StringW  rootPathName) ;

/// @brief Method GetDriveFormatInternal, addr 0xa2acae0, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetDriveFormatInternal(char16_t*  rootPathName, int32_t  rootPathName_length) ;

/// [MonoTODO("In windows, alldrives are \'Fixed\'")]
/// @brief Method GetDrives, addr 0xa2ac140, size 0x128, virtual false, abstract: false, final false
static inline ::ArrayW<::System::IO::DriveInfo*> GetDrives() ;

static inline ::System::IO::DriveInfo* New_ctor(::StringW  driveName) ;

static inline ::System::IO::DriveInfo* New_ctor(::StringW  path, ::StringW  fstype) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xa2aca9c, size 0x38, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ToString, addr 0xa2acad4, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_drive_format() const;

constexpr ::StringW& __cordl_internal_get_drive_format() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_drive_format(::StringW  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

/// @brief Method .ctor, addr 0xa2abe4c, size 0x2f4, virtual false, abstract: false, final false
inline void _ctor(::StringW  driveName) ;

/// @brief Method .ctor, addr 0xa2abe08, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, ::StringW  fstype) ;

/// @brief Method get_AvailableFreeSpace, addr 0xa2aca30, size 0x38, virtual false, abstract: false, final false
inline int64_t get_AvailableFreeSpace() ;

/// @brief Method get_Name, addr 0xa2aca68, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DriveInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DriveInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DriveInfo(DriveInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DriveInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DriveInfo(DriveInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7060};

/// @brief Field drive_format, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___drive_format;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::DriveInfo, ___drive_format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::DriveInfo, ___path) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::IO::DriveInfo) == 0x20, "Size mismatch!");

} // namespace end def System::IO
// [CompilerGenerated]
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.DriveInfo/<>c
class CORDL_TYPE DriveInfo___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::IO::DriveInfo___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Comparison_1<::System::IO::DriveInfo*>*  __9__3_0;

static inline ::System::IO::DriveInfo___c* New_ctor() ;

/// @brief Method <.ctor>b__3_0, addr 0xa2acb54, size 0x28, virtual false, abstract: false, final false
inline int32_t __ctor_b__3_0(::System::IO::DriveInfo*  di1, ::System::IO::DriveInfo*  di2) ;

/// @brief Method .ctor, addr 0xa2acb4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::DriveInfo___c* getStaticF___9() ;

static inline ::System::Comparison_1<::System::IO::DriveInfo*>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::System::IO::DriveInfo___c*  value) ;

static inline void setStaticF___9__3_0(::System::Comparison_1<::System::IO::DriveInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DriveInfo___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DriveInfo___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DriveInfo___c(DriveInfo___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DriveInfo___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DriveInfo___c(DriveInfo___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7059};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::DriveInfo___c) == 0x10, "Size mismatch!");

} // namespace end def System::IO
