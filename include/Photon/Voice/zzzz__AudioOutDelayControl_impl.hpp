#pragma once
// IWYU pragma private; include "Photon/Voice/AudioOutDelayControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioOutDelayControl::*)()>(&::Photon::Voice::AudioOutDelayControl::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74596c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::AudioOutDelayControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::AudioOutDelayControl* Photon::Voice::AudioOutDelayControl::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioOutDelayControl*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioOutDelayControl::AudioOutDelayControl()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)()>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa745974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.get_Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)()>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_Low", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.set_Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)(int32_t)>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7459a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_Low", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.get_High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)()>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7459a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_High", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.set_High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)(int32_t)>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7459b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_High", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.get_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)()>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_Max)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7459b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_Max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.set_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)(int32_t)>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_Max)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7459c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_Max", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.get_SpeedUpPerc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)()>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_SpeedUpPerc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7459c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_SpeedUpPerc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.set_SpeedUpPerc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)(int32_t)>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_SpeedUpPerc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_SpeedUpPerc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* (::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::*)()>(&::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::Clone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7459d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__Low_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Low_k__BackingField;
}
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__Low_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Low_k__BackingField;
}
constexpr void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_set__Low_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Low_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__High_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____High_k__BackingField;
}
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__High_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____High_k__BackingField;
}
constexpr void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_set__High_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____High_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__Max_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Max_k__BackingField;
}
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__Max_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Max_k__BackingField;
}
constexpr void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_set__Max_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Max_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__SpeedUpPerc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpeedUpPerc_k__BackingField;
}
constexpr int32_t const& Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_get__SpeedUpPerc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpeedUpPerc_k__BackingField;
}
constexpr void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::__cordl_internal_set__SpeedUpPerc_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpeedUpPerc_k__BackingField = value;
}
inline void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_Low()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_Low", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_Low(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_Low", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_High()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_High", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_High(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_High", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_Max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_Max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_Max(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_Max", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::AudioOutDelayControl_PlayDelayConfig::get_SpeedUpPerc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"get_SpeedUpPerc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioOutDelayControl_PlayDelayConfig::set_SpeedUpPerc(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"set_SpeedUpPerc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* Photon::Voice::AudioOutDelayControl_PlayDelayConfig::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(this, ___internal_method);
}
inline ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* Photon::Voice::AudioOutDelayControl_PlayDelayConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig::AudioOutDelayControl_PlayDelayConfig()   {
}
