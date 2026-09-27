#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSDiskCache.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSDiskCache_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSDiskCacheHandler_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSDiskCache.get_DiskPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Integrations::TTSDiskCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSDiskCache::get_DiskPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e54c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"get_DiskPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSDiskCache.get_DiskCacheDefaultSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* (::Meta::WitAi::TTS::Integrations::TTSDiskCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSDiskCache::get_DiskCacheDefaultSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e54c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"get_DiskCacheDefaultSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSDiskCache.GetDiskCachePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Integrations::TTSDiskCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSDiskCache::GetDiskCachePath)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9e54c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"GetDiskCachePath", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSDiskCache.ShouldCacheToDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::TTSDiskCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSDiskCache::ShouldCacheToDisk)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e54ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"ShouldCacheToDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSDiskCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSDiskCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSDiskCache::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e54f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSDiskCache::__cordl_internal_get__diskPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSDiskCache::__cordl_internal_get__diskPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskPath;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSDiskCache::__cordl_internal_set__diskPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diskPath = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Integrations::TTSDiskCache::__cordl_internal_get__defaultSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Integrations::TTSDiskCache::__cordl_internal_get__defaultSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSettings;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSDiskCache::__cordl_internal_set__defaultSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultSettings = value;
}
inline ::StringW Meta::WitAi::TTS::Integrations::TTSDiskCache::get_DiskPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"get_DiskPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* Meta::WitAi::TTS::Integrations::TTSDiskCache::get_DiskCacheDefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"get_DiskCacheDefaultSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::TTS::Integrations::TTSDiskCache::GetDiskCachePath(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"GetDiskCachePath", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, clipData);
}
inline bool Meta::WitAi::TTS::Integrations::TTSDiskCache::ShouldCacheToDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {"ShouldCacheToDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::TTSDiskCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSDiskCache* Meta::WitAi::TTS::Integrations::TTSDiskCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSDiskCache*>());
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler"
constexpr  Meta::WitAi::TTS::Integrations::TTSDiskCache::operator ::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler* Meta::WitAi::TTS::Integrations::TTSDiskCache::i___Meta__WitAi__TTS__Interfaces__ITTSDiskCacheHandler() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSDiskCache::TTSDiskCache()   {
}
