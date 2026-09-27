#pragma once
// IWYU pragma private; include "System/IO/DriveInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__DriveInfo_def.hpp"
#include "System/IO/zzzz__DriveInfo_def.hpp"
#include "System/IO/zzzz__MonoIOError_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::System::IO::DriveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DriveInfo::*)(::StringW, ::StringW)>(&::System::IO::DriveInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa2abe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DriveInfo::*)(::StringW)>(&::System::IO::DriveInfo::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa2abe4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.GetDiskFreeSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::System::IO::DriveInfo::GetDiskFreeSpace)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa2ac268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDiskFreeSpace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.get_AvailableFreeSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::DriveInfo::*)()>(&::System::IO::DriveInfo::get_AvailableFreeSpace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2aca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"get_AvailableFreeSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::DriveInfo::*)()>(&::System::IO::DriveInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2aca68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.GetDrives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IO::DriveInfo*> (*)()>(&::System::IO::DriveInfo::GetDrives)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa2ac140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDrives", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DriveInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::DriveInfo::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2aca9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::DriveInfo::*)()>(&::System::IO::DriveInfo::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2acad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::DriveInfo*>(),
                    {::i2c::class_of<::System::IO::DriveInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.GetDiskFreeSpaceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, int32_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::DriveInfo::GetDiskFreeSpaceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa2acadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDiskFreeSpaceInternal", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.GetDiskFreeSpaceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::DriveInfo::GetDiskFreeSpaceInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa2ac2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDiskFreeSpaceInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.GetDriveFormatInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t)>(&::System::IO::DriveInfo::GetDriveFormatInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa2acae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDriveFormatInternal", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo.GetDriveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::DriveInfo::GetDriveFormat)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa2aca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDriveFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::DriveInfo::__cordl_internal_get_drive_format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drive_format;
}
constexpr ::StringW const& System::IO::DriveInfo::__cordl_internal_get_drive_format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drive_format;
}
constexpr void System::IO::DriveInfo::__cordl_internal_set_drive_format(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drive_format = value;
}
constexpr ::StringW& System::IO::DriveInfo::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& System::IO::DriveInfo::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void System::IO::DriveInfo::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
inline void System::IO::DriveInfo::_ctor(::StringW  path, ::StringW  fstype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, fstype);
}
inline void System::IO::DriveInfo::_ctor(::StringW  driveName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, driveName);
}
inline void System::IO::DriveInfo::GetDiskFreeSpace(::StringW  path, ::by_ref<uint64_t>  availableFreeSpace, ::by_ref<uint64_t>  totalSize, ::by_ref<uint64_t>  totalFreeSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDiskFreeSpace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, availableFreeSpace, totalSize, totalFreeSpace);
}
inline int64_t System::IO::DriveInfo::get_AvailableFreeSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"get_AvailableFreeSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::IO::DriveInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::IO::DriveInfo*> System::IO::DriveInfo::GetDrives()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDrives", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IO::DriveInfo*>>(nullptr, ___internal_method);
}
inline void System::IO::DriveInfo::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::IO::DriveInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::DriveInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::IO::DriveInfo::GetDiskFreeSpaceInternal(char16_t*  pathName, int32_t  pathName_length, ::by_ref<uint64_t>  freeBytesAvail, ::by_ref<uint64_t>  totalNumberOfBytes, ::by_ref<uint64_t>  totalNumberOfFreeBytes, ::by_ref<::System::IO::MonoIOError>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDiskFreeSpaceInternal", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pathName, pathName_length, freeBytesAvail, totalNumberOfBytes, totalNumberOfFreeBytes, error);
}
inline bool System::IO::DriveInfo::GetDiskFreeSpaceInternal(::StringW  pathName, ::by_ref<uint64_t>  freeBytesAvail, ::by_ref<uint64_t>  totalNumberOfBytes, ::by_ref<uint64_t>  totalNumberOfFreeBytes, ::by_ref<::System::IO::MonoIOError>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDiskFreeSpaceInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pathName, freeBytesAvail, totalNumberOfBytes, totalNumberOfFreeBytes, error);
}
inline ::StringW System::IO::DriveInfo::GetDriveFormatInternal(char16_t*  rootPathName, int32_t  rootPathName_length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDriveFormatInternal", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rootPathName, rootPathName_length);
}
inline ::StringW System::IO::DriveInfo::GetDriveFormat(::StringW  rootPathName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo*>(),
                        {"GetDriveFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rootPathName);
}
inline ::System::IO::DriveInfo* System::IO::DriveInfo::New_ctor(::StringW  path, ::StringW  fstype)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::DriveInfo*>(path, fstype));
}
inline ::System::IO::DriveInfo* System::IO::DriveInfo::New_ctor(::StringW  driveName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::DriveInfo*>(driveName));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::IO::DriveInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::IO::DriveInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::DriveInfo::DriveInfo()   {
}
//  Writing Method size for method: ::System::IO::DriveInfo___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DriveInfo___c::*)()>(&::System::IO::DriveInfo___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2acb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DriveInfo___c.__ctor_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::DriveInfo___c::*)(::System::IO::DriveInfo*, ::System::IO::DriveInfo*)>(&::System::IO::DriveInfo___c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2acb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo___c*>(),
                        {"<.ctor>b__3_0", {}, {::i2c::type_of<::System::IO::DriveInfo*>(), ::i2c::type_of<::System::IO::DriveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::DriveInfo___c::setStaticF___9(::System::IO::DriveInfo___c*  value)  {
::cordl_internals::setStaticField<::System::IO::DriveInfo___c*, "<>9", ::System::IO::DriveInfo___c*>(std::forward<::System::IO::DriveInfo___c*>(value));
}
inline ::System::IO::DriveInfo___c* System::IO::DriveInfo___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::IO::DriveInfo___c*, "<>9", ::System::IO::DriveInfo___c*>();
}
inline void System::IO::DriveInfo___c::setStaticF___9__3_0(::System::Comparison_1<::System::IO::DriveInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::System::IO::DriveInfo*>*, "<>9__3_0", ::System::IO::DriveInfo___c*>(std::forward<::System::Comparison_1<::System::IO::DriveInfo*>*>(value));
}
inline ::System::Comparison_1<::System::IO::DriveInfo*>* System::IO::DriveInfo___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::System::IO::DriveInfo*>*, "<>9__3_0", ::System::IO::DriveInfo___c*>();
}
inline void System::IO::DriveInfo___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::IO::DriveInfo___c::__ctor_b__3_0(::System::IO::DriveInfo*  di1, ::System::IO::DriveInfo*  di2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DriveInfo___c*>(),
                        {"<.ctor>b__3_0", {}, {::i2c::type_of<::System::IO::DriveInfo*>(), ::i2c::type_of<::System::IO::DriveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, di1, di2);
}
inline ::System::IO::DriveInfo___c* System::IO::DriveInfo___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::DriveInfo___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::DriveInfo___c::DriveInfo___c()   {
}
