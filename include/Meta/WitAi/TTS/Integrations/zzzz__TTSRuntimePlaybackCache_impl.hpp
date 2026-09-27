#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSRuntimePlaybackCache.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__BaseTTSRuntimeCache_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSRuntimePlaybackCache_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache.SetupClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::SetupClip)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9e55b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache.OnRequestBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::OnRequestBegin)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e55d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                        {"OnRequestBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache.OnRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::OnRequestComplete)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e55df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                        {"OnRequestComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache.BreakdownClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::BreakdownClip)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9e55ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::*)()>(&::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e56088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>*& Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::__cordl_internal_get__requests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>* const& Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::__cordl_internal_get__requests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::__cordl_internal_set__requests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requests = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::SetupClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::OnRequestBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                        {"OnRequestBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::OnRequestComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                        {"OnRequestComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::BreakdownClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache* Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache::TTSRuntimePlaybackCache()   {
}
