#pragma once
// IWYU pragma private; include "Photon/Voice/AudioDesc.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__AudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::AudioDesc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioDesc::*)(int32_t, int32_t, ::StringW)>(&::Photon::Voice::AudioDesc::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa74c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioDesc.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioDesc::*)()>(&::Photon::Voice::AudioDesc::get_SamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioDesc.set_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioDesc::*)(int32_t)>(&::Photon::Voice::AudioDesc::set_SamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"set_SamplingRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioDesc.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioDesc::*)()>(&::Photon::Voice::AudioDesc::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioDesc.set_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioDesc::*)(int32_t)>(&::Photon::Voice::AudioDesc::set_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"set_Channels", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioDesc.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::AudioDesc::*)()>(&::Photon::Voice::AudioDesc::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioDesc.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioDesc::*)(::StringW)>(&::Photon::Voice::AudioDesc::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioDesc.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioDesc::*)()>(&::Photon::Voice::AudioDesc::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa74c184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Voice::AudioDesc::__cordl_internal_get__SamplingRate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingRate_k__BackingField;
}
constexpr int32_t const& Photon::Voice::AudioDesc::__cordl_internal_get__SamplingRate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingRate_k__BackingField;
}
constexpr void Photon::Voice::AudioDesc::__cordl_internal_set__SamplingRate_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SamplingRate_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::AudioDesc::__cordl_internal_get__Channels_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channels_k__BackingField;
}
constexpr int32_t const& Photon::Voice::AudioDesc::__cordl_internal_get__Channels_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channels_k__BackingField;
}
constexpr void Photon::Voice::AudioDesc::__cordl_internal_set__Channels_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Channels_k__BackingField = value;
}
constexpr ::StringW& Photon::Voice::AudioDesc::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::AudioDesc::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Photon::Voice::AudioDesc::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline void Photon::Voice::AudioDesc::_ctor(int32_t  samplingRate, int32_t  channels, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, channels, error);
}
inline int32_t Photon::Voice::AudioDesc::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioDesc::set_SamplingRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"set_SamplingRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::AudioDesc::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioDesc::set_Channels(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"set_Channels", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Photon::Voice::AudioDesc::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::AudioDesc::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::AudioDesc::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioDesc*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::AudioDesc* Photon::Voice::AudioDesc::New_ctor(int32_t  samplingRate, int32_t  channels, ::StringW  error)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioDesc*>(samplingRate, channels, error));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr  Photon::Voice::AudioDesc::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::AudioDesc::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::AudioDesc::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::AudioDesc::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioDesc::AudioDesc()   {
}
