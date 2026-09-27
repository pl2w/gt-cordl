#pragma once
// IWYU pragma private; include "GlobalNamespace/GiantSnowflakeAudio.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GiantSnowflakeAudio_def.hpp"
#include "GlobalNamespace/zzzz__GiantSnowflakeAudio_SnowflakeScaleOverride_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GiantSnowflakeAudio.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GiantSnowflakeAudio::*)()>(&::GlobalNamespace::GiantSnowflakeAudio::Start)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58f0f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GiantSnowflakeAudio*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GiantSnowflakeAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GiantSnowflakeAudio::*)()>(&::GlobalNamespace::GiantSnowflakeAudio::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f109c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GiantSnowflakeAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*& GlobalNamespace::GiantSnowflakeAudio::__cordl_internal_get_audioOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOverrides;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>* const& GlobalNamespace::GiantSnowflakeAudio::__cordl_internal_get_audioOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOverrides;
}
constexpr void GlobalNamespace::GiantSnowflakeAudio::__cordl_internal_set_audioOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioOverrides = value;
}
inline void GlobalNamespace::GiantSnowflakeAudio::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GiantSnowflakeAudio*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GiantSnowflakeAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GiantSnowflakeAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GiantSnowflakeAudio* GlobalNamespace::GiantSnowflakeAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GiantSnowflakeAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GiantSnowflakeAudio::GiantSnowflakeAudio()   {
}
