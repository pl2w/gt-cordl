#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSRuntimeLRUCache.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__BaseTTSRuntimeCache_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSRuntimeLRUCache_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.GetClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClips)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e54f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::OnDestroy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e550f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.RefreshClipLRU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)(::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::RefreshClipLRU)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9e55168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"RefreshClipLRU", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)(::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClip)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e55278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.SetupClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::SetupClip)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e552a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.AddClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::AddClip)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9e55370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.BreakdownClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::BreakdownClip)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e5550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.IsCacheFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::IsCacheFull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e55488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"IsCacheFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.GetCacheDiskSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetCacheDiskSize)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x9e555a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"GetCacheDiskSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.GetClipBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::AudioClip*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClipBytes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e55a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"GetClipBytes", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache.GetClipBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClipBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e55a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"GetClipBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e55ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_ClipLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipLimit;
}
constexpr bool const& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_ClipLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipLimit;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_set_ClipLimit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClipLimit = value;
}
constexpr int32_t& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_ClipCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipCapacity;
}
constexpr int32_t const& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_ClipCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipCapacity;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_set_ClipCapacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClipCapacity = value;
}
constexpr bool& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_RamLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RamLimit;
}
constexpr bool const& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_RamLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RamLimit;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_set_RamLimit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RamLimit = value;
}
constexpr int32_t& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_RamCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RamCapacity;
}
constexpr int32_t const& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get_RamCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RamCapacity;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_set_RamCapacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RamCapacity = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get__clipOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipOrder;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_get__clipOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipOrder;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::__cordl_internal_set__clipOrder(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipOrder = value;
}
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClips()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::RefreshClipLRU(::StringW  clipId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"RefreshClipLRU", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipId);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClip(::StringW  clipId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, clipId);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::SetupClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline bool Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::AddClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::BreakdownClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline bool Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::IsCacheFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"IsCacheFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetCacheDiskSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"GetCacheDiskSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClipBytes(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"GetClipBytes", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clip);
}
inline int64_t Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::GetClipBytes(int32_t  channels, int32_t  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {"GetClipBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, channels, samples);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache* Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache::TTSRuntimeLRUCache()   {
}
