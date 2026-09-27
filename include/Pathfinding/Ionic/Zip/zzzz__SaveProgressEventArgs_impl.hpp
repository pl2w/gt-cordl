#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/SaveProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__SaveProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SaveProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::SaveProgressEventArgs::*)(::StringW, bool, int32_t, int32_t, ::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::SaveProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa68c2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SaveProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::SaveProgressEventArgs::*)(::StringW, ::Pathfinding::Ionic::Zip::ZipProgressEventType)>(&::Pathfinding::Ionic::Zip::SaveProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SaveProgressEventArgs.ByteUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::SaveProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int64_t, int64_t)>(&::Pathfinding::Ionic::Zip::SaveProgressEventArgs::ByteUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa68c314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {"ByteUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SaveProgressEventArgs.Started
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::SaveProgressEventArgs* (*)(::StringW)>(&::Pathfinding::Ionic::Zip::SaveProgressEventArgs::Started)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa68c3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {"Started", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SaveProgressEventArgs.Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::SaveProgressEventArgs* (*)(::StringW)>(&::Pathfinding::Ionic::Zip::SaveProgressEventArgs::Completed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa68c414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {"Completed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Ionic::Zip::SaveProgressEventArgs::__cordl_internal_get__entriesSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesSaved;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::SaveProgressEventArgs::__cordl_internal_get__entriesSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesSaved;
}
constexpr void Pathfinding::Ionic::Zip::SaveProgressEventArgs::__cordl_internal_set__entriesSaved(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entriesSaved = value;
}
inline void Pathfinding::Ionic::Zip::SaveProgressEventArgs::_ctor(::StringW  archiveName, bool  before, int32_t  entriesTotal, int32_t  entriesSaved, ::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveName, before, entriesTotal, entriesSaved, entry);
}
inline void Pathfinding::Ionic::Zip::SaveProgressEventArgs::_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveName, flavor);
}
inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Pathfinding::Ionic::Zip::SaveProgressEventArgs::ByteUpdate(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesXferred, int64_t  totalBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {"ByteUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, bytesXferred, totalBytes);
}
inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Pathfinding::Ionic::Zip::SaveProgressEventArgs::Started(::StringW  archiveName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {"Started", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(nullptr, ___internal_method, archiveName);
}
inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Pathfinding::Ionic::Zip::SaveProgressEventArgs::Completed(::StringW  archiveName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(),
                        {"Completed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(nullptr, ___internal_method, archiveName);
}
inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Pathfinding::Ionic::Zip::SaveProgressEventArgs::New_ctor(::StringW  archiveName, bool  before, int32_t  entriesTotal, int32_t  entriesSaved, ::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(archiveName, before, entriesTotal, entriesSaved, entry));
}
inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Pathfinding::Ionic::Zip::SaveProgressEventArgs::New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>(archiveName, flavor));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::SaveProgressEventArgs::SaveProgressEventArgs()   {
}
