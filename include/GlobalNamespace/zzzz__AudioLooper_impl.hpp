#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLooper.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLooper_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioLooper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLooper::*)()>(&::GlobalNamespace::AudioLooper::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ae0ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioLooper*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioLooper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLooper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLooper::*)()>(&::GlobalNamespace::AudioLooper::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ae1050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLooper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLooper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLooper::*)()>(&::GlobalNamespace::AudioLooper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ae1188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLooper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioLooper::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioLooper::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::AudioLooper::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::AudioLooper::__cordl_internal_get_loopClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::AudioLooper::__cordl_internal_get_loopClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopClip;
}
constexpr void GlobalNamespace::AudioLooper::__cordl_internal_set_loopClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopClip = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::AudioLooper::__cordl_internal_get_interjectionClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interjectionClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::AudioLooper::__cordl_internal_get_interjectionClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interjectionClips;
}
constexpr void GlobalNamespace::AudioLooper::__cordl_internal_set_interjectionClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interjectionClips = value;
}
constexpr float_t& GlobalNamespace::AudioLooper::__cordl_internal_get_interjectionLikelyhood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interjectionLikelyhood;
}
constexpr float_t const& GlobalNamespace::AudioLooper::__cordl_internal_get_interjectionLikelyhood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interjectionLikelyhood;
}
constexpr void GlobalNamespace::AudioLooper::__cordl_internal_set_interjectionLikelyhood(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interjectionLikelyhood = value;
}
inline void GlobalNamespace::AudioLooper::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioLooper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioLooper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLooper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioLooper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLooper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioLooper* GlobalNamespace::AudioLooper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioLooper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLooper::AudioLooper()   {
}
