#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ReadProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ReadProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ReadProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ReadProgressEventArgs::*)(::StringW, ::Pathfinding::Ionic::Zip::ZipProgressEventType)>(&::Pathfinding::Ionic::Zip::ReadProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68bfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ReadProgressEventArgs.Before
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW, int32_t)>(&::Pathfinding::Ionic::Zip::ReadProgressEventArgs::Before)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa68bfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"Before", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ReadProgressEventArgs.After
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int32_t)>(&::Pathfinding::Ionic::Zip::ReadProgressEventArgs::After)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa68c05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"After", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ReadProgressEventArgs.Started
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW)>(&::Pathfinding::Ionic::Zip::ReadProgressEventArgs::Started)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa68c0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"Started", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ReadProgressEventArgs.ByteUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int64_t, int64_t)>(&::Pathfinding::Ionic::Zip::ReadProgressEventArgs::ByteUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa68c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"ByteUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ReadProgressEventArgs.Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW)>(&::Pathfinding::Ionic::Zip::ReadProgressEventArgs::Completed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa68c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"Completed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::ReadProgressEventArgs::_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveName, flavor);
}
inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Pathfinding::Ionic::Zip::ReadProgressEventArgs::Before(::StringW  archiveName, int32_t  entriesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"Before", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(nullptr, ___internal_method, archiveName, entriesTotal);
}
inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Pathfinding::Ionic::Zip::ReadProgressEventArgs::After(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int32_t  entriesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"After", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, entriesTotal);
}
inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Pathfinding::Ionic::Zip::ReadProgressEventArgs::Started(::StringW  archiveName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"Started", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(nullptr, ___internal_method, archiveName);
}
inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Pathfinding::Ionic::Zip::ReadProgressEventArgs::ByteUpdate(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesXferred, int64_t  totalBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"ByteUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, bytesXferred, totalBytes);
}
inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Pathfinding::Ionic::Zip::ReadProgressEventArgs::Completed(::StringW  archiveName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(),
                        {"Completed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(nullptr, ___internal_method, archiveName);
}
inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Pathfinding::Ionic::Zip::ReadProgressEventArgs::New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>(archiveName, flavor));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ReadProgressEventArgs::ReadProgressEventArgs()   {
}
