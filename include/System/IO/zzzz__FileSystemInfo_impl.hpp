#pragma once
// IWYU pragma private; include "System/IO/FileSystemInfo.hpp"
#include "System/IO/zzzz__FileStatus_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::IO::FileSystemInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa297a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileSystemInfo* (*)(::StringW, ::StringW, ::by_ref<::System::IO::FileStatus>)>(&::System::IO::FileSystemInfo::Create)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa29b9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Invalidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::Invalidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa297d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Invalidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::by_ref<::System::IO::FileStatus>)>(&::System::IO::FileSystemInfo::Init)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa29ba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::System::IO::FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa29a830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Attributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.set_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::IO::FileAttributes)>(&::System::IO::FileSystemInfo::set_Attributes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa29bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_Attributes", {}, {::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_ExistsCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_ExistsCore)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa29bb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_ExistsCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_CreationTimeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_CreationTimeCore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa29bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.set_CreationTimeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::DateTimeOffset)>(&::System::IO::FileSystemInfo::set_CreationTimeCore)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa29bc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_CreationTimeCore", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastAccessTimeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastAccessTimeCore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa29bc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastAccessTimeCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.set_LastAccessTimeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::DateTimeOffset)>(&::System::IO::FileSystemInfo::set_LastAccessTimeCore)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa29bca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_LastAccessTimeCore", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastWriteTimeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastWriteTimeCore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa29bcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastWriteTimeCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.set_LastWriteTimeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::DateTimeOffset)>(&::System::IO::FileSystemInfo::set_LastWriteTimeCore)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa29bd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_LastWriteTimeCore", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LengthCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LengthCore)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa29a8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LengthCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.ThrowNotFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystemInfo::ThrowNotFound)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa29b044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"ThrowNotFound", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_NormalizedPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_NormalizedPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa29bd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_NormalizedPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa2981bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileSystemInfo::GetObjectData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa29bd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_FullName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa29be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Extension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Extension)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa29be78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Extension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa29bf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Exists)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa29bfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::Delete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_CreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_CreationTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa29c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_CreationTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_CreationTimeUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa29c0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeUtc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastAccessTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa29c118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastAccessTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastAccessTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastAccessTimeUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa29c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastAccessTimeUtc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastWriteTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa29c208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastWriteTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastWriteTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastWriteTimeUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa29c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastWriteTimeUtc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa29c2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::FileStatus& System::IO::FileSystemInfo::__cordl_internal_get__fileStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStatus;
}
constexpr ::System::IO::FileStatus const& System::IO::FileSystemInfo::__cordl_internal_get__fileStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStatus;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set__fileStatus(::System::IO::FileStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fileStatus = value;
}
constexpr ::StringW& System::IO::FileSystemInfo::__cordl_internal_get_FullPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullPath;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__cordl_internal_get_FullPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullPath;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set_FullPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FullPath = value;
}
constexpr ::StringW& System::IO::FileSystemInfo::__cordl_internal_get_OriginalPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalPath;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__cordl_internal_get_OriginalPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalPath;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set_OriginalPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OriginalPath = value;
}
constexpr ::StringW& System::IO::FileSystemInfo::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
inline void System::IO::FileSystemInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::Create(::StringW  fullPath, ::StringW  fileName, ::by_ref<::System::IO::FileStatus>  fileStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileSystemInfo*>(nullptr, ___internal_method, fullPath, fileName, fileStatus);
}
inline void System::IO::FileSystemInfo::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Invalidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::Init(::by_ref<::System::IO::FileStatus>  fileStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::System::IO::FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileStatus);
}
inline ::System::IO::FileAttributes System::IO::FileSystemInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Attributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::set_Attributes(::System::IO::FileAttributes  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_Attributes", {}, {::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::IO::FileSystemInfo::get_ExistsCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_ExistsCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTimeOffset System::IO::FileSystemInfo::get_CreationTimeCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::set_CreationTimeCore(::System::DateTimeOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_CreationTimeCore", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::IO::FileSystemInfo::get_LastAccessTimeCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastAccessTimeCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::set_LastAccessTimeCore(::System::DateTimeOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_LastAccessTimeCore", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTimeOffset System::IO::FileSystemInfo::get_LastWriteTimeCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastWriteTimeCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::set_LastWriteTimeCore(::System::DateTimeOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"set_LastWriteTimeCore", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::IO::FileSystemInfo::get_LengthCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LengthCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::ThrowNotFound(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"ThrowNotFound", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::FileSystemInfo::get_NormalizedPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_NormalizedPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::IO::FileSystemInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::IO::FileSystemInfo::get_FullName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::get_Extension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Extension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::IO::FileSystemInfo::get_Exists()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::Delete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_CreationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_CreationTimeUtc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeUtc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_LastAccessTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastAccessTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_LastAccessTimeUtc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastAccessTimeUtc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_LastWriteTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastWriteTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_LastWriteTimeUtc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LastWriteTimeUtc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileSystemInfo*>());
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileSystemInfo*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::IO::FileSystemInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::IO::FileSystemInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::FileSystemInfo::FileSystemInfo()   {
}
