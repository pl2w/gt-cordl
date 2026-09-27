#pragma once
// IWYU pragma private; include "GlobalNamespace/FlickerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlickerManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlickerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlickerManager::*)()>(&::GlobalNamespace::FlickerManager::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x579abf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlickerManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlickerManager::*)()>(&::GlobalNamespace::FlickerManager::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x579ad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlickerManager.GetServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::FlickerManager::GetServerTime)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x579ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {"GetServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlickerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlickerManager::*)()>(&::GlobalNamespace::FlickerManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579af58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& GlobalNamespace::FlickerManager::__cordl_internal_get_FlickerDurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlickerDurations;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::FlickerManager::__cordl_internal_get_FlickerDurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlickerDurations;
}
constexpr void GlobalNamespace::FlickerManager::__cordl_internal_set_FlickerDurations(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FlickerDurations = value;
}
constexpr float_t& GlobalNamespace::FlickerManager::__cordl_internal_get_FlickerFadeInDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlickerFadeInDuration;
}
constexpr float_t const& GlobalNamespace::FlickerManager::__cordl_internal_get_FlickerFadeInDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlickerFadeInDuration;
}
constexpr void GlobalNamespace::FlickerManager::__cordl_internal_set_FlickerFadeInDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FlickerFadeInDuration = value;
}
constexpr float_t& GlobalNamespace::FlickerManager::__cordl_internal_get_FlickerFadeOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlickerFadeOutDuration;
}
constexpr float_t const& GlobalNamespace::FlickerManager::__cordl_internal_get_FlickerFadeOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlickerFadeOutDuration;
}
constexpr void GlobalNamespace::FlickerManager::__cordl_internal_set_FlickerFadeOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FlickerFadeOutDuration = value;
}
constexpr int32_t& GlobalNamespace::FlickerManager::__cordl_internal_get_LightmapIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LightmapIndex;
}
constexpr int32_t const& GlobalNamespace::FlickerManager::__cordl_internal_get_LightmapIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LightmapIndex;
}
constexpr void GlobalNamespace::FlickerManager::__cordl_internal_set_LightmapIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LightmapIndex = value;
}
constexpr int32_t& GlobalNamespace::FlickerManager::__cordl_internal_get__flickerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flickerIndex;
}
constexpr int32_t const& GlobalNamespace::FlickerManager::__cordl_internal_get__flickerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flickerIndex;
}
constexpr void GlobalNamespace::FlickerManager::__cordl_internal_set__flickerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flickerIndex = value;
}
constexpr float_t& GlobalNamespace::FlickerManager::__cordl_internal_get__nextFlickerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFlickerTime;
}
constexpr float_t const& GlobalNamespace::FlickerManager::__cordl_internal_get__nextFlickerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFlickerTime;
}
constexpr void GlobalNamespace::FlickerManager::__cordl_internal_set__nextFlickerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextFlickerTime = value;
}
inline void GlobalNamespace::FlickerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlickerManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::FlickerManager::GetServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {"GetServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FlickerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlickerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlickerManager* GlobalNamespace::FlickerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlickerManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlickerManager::FlickerManager()   {
}
