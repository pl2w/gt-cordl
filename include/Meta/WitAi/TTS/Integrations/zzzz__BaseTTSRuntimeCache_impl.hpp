#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/BaseTTSRuntimeCache.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__BaseTTSRuntimeCache_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSRuntimeCacheHandler_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__TTSClipCallback_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.add_OnClipAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::add_OnClipAdded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e5454c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"add_OnClipAdded", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.remove_OnClipAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::remove_OnClipAdded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e545e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"remove_OnClipAdded", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.add_OnClipRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::add_OnClipRemoved)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e54684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"add_OnClipRemoved", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.remove_OnClipRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::remove_OnClipRemoved)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e54720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"remove_OnClipRemoved", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.GetClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)()>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::GetClips)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e547bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)()>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e54828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::StringW)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::GetClip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e54878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.AddClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::AddClip)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e548e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.SetupClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::SetupClip)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e549d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.RemoveClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::StringW)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::RemoveClip)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e549f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache.BreakdownClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::BreakdownClip)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e54ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::*)()>(&::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e54ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*& Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_get_OnClipAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipAdded;
}
constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback* const& Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_get_OnClipAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipAdded;
}
constexpr void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_set_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipAdded = value;
}
constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*& Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_get_OnClipRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipRemoved;
}
constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback* const& Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_get_OnClipRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipRemoved;
}
constexpr void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_set_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipRemoved = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_get__clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clips;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_get__clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clips;
}
constexpr void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::__cordl_internal_set__clips(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clips = value;
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::add_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"add_OnClipAdded", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::remove_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"remove_OnClipAdded", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::add_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"add_OnClipRemoved", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::remove_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {"remove_OnClipRemoved", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::GetClips()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::GetClip(::StringW  clipId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, clipId);
}
inline bool Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::AddClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::SetupClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::RemoveClip(::StringW  clipID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipID);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::BreakdownClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache* Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*>());
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler"
constexpr  Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::operator ::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler* Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::i___Meta__WitAi__TTS__Interfaces__ITTSRuntimeCacheHandler() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache::BaseTTSRuntimeCache()   {
}
