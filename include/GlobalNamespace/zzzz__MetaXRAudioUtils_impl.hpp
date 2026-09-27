#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioUtils.GetCaseSensitivePathForFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::MetaXRAudioUtils::GetCaseSensitivePathForFile)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9ebe524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioUtils*>(),
                        {"GetCaseSensitivePathForFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioUtils.CreateDirectoryForFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::MetaXRAudioUtils::CreateDirectoryForFilePath)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9ebe64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioUtils*>(),
                        {"CreateDirectoryForFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioUtils::*)()>(&::GlobalNamespace::MetaXRAudioUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebe71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MetaXRAudioUtils::GetCaseSensitivePathForFile(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioUtils*>(),
                        {"GetCaseSensitivePathForFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline void GlobalNamespace::MetaXRAudioUtils::CreateDirectoryForFilePath(::StringW  absPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioUtils*>(),
                        {"CreateDirectoryForFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, absPath);
}
inline void GlobalNamespace::MetaXRAudioUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioUtils* GlobalNamespace::MetaXRAudioUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioUtils*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioUtils::MetaXRAudioUtils()   {
}
