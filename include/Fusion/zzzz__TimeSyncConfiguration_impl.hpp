#pragma once
// IWYU pragma private; include "Fusion/TimeSyncConfiguration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__TimeSyncConfiguration_def.hpp"
#include "Fusion/zzzz__TickRate_Resolved_def.hpp"
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.GetFromTickrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TimeSyncConfiguration* (*)(::GlobalNamespace::TickRate_Resolved)>(&::Fusion::TimeSyncConfiguration::GetFromTickrate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5ff3454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"GetFromTickrate", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Resolved>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_SampleWindowSecondsNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_SampleWindowSecondsNormalized)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60022e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_SampleWindowSecondsNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_MaxLateInputsNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_MaxLateInputsNormalized)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x600234c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxLateInputsNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_MaxLateSnapshotsNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_MaxLateSnapshotsNormalized)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60023cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxLateSnapshotsNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_RedundantInputsNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_RedundantInputsNormalized)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x600244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_RedundantInputsNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_RedundantSnapshotsNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_RedundantSnapshotsNormalized)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60024b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_RedundantSnapshotsNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_MaxSimSpeedAdjust
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_MaxSimSpeedAdjust)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxSimSpeedAdjust", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_MaxSimSpeedAdjustNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_MaxSimSpeedAdjustNormalized)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x600251c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxSimSpeedAdjustNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_MaxInterpSpeedAdjust
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_MaxInterpSpeedAdjust)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxInterpSpeedAdjust", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration.get_MaxInterpSpeedAdjustNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::get_MaxInterpSpeedAdjustNormalized)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6002590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxInterpSpeedAdjustNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSyncConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeSyncConfiguration::*)()>(&::Fusion::TimeSyncConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60022c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Fusion::TimeSyncConfiguration::__cordl_internal_get_SampleWindowSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleWindowSeconds;
}
constexpr double_t const& Fusion::TimeSyncConfiguration::__cordl_internal_get_SampleWindowSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleWindowSeconds;
}
constexpr void Fusion::TimeSyncConfiguration::__cordl_internal_set_SampleWindowSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SampleWindowSeconds = value;
}
constexpr double_t& Fusion::TimeSyncConfiguration::__cordl_internal_get_MaxLateInputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLateInputs;
}
constexpr double_t const& Fusion::TimeSyncConfiguration::__cordl_internal_get_MaxLateInputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLateInputs;
}
constexpr void Fusion::TimeSyncConfiguration::__cordl_internal_set_MaxLateInputs(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLateInputs = value;
}
constexpr double_t& Fusion::TimeSyncConfiguration::__cordl_internal_get_MaxLateSnapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLateSnapshots;
}
constexpr double_t const& Fusion::TimeSyncConfiguration::__cordl_internal_get_MaxLateSnapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLateSnapshots;
}
constexpr void Fusion::TimeSyncConfiguration::__cordl_internal_set_MaxLateSnapshots(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLateSnapshots = value;
}
constexpr int32_t& Fusion::TimeSyncConfiguration::__cordl_internal_get_RedundantInputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RedundantInputs;
}
constexpr int32_t const& Fusion::TimeSyncConfiguration::__cordl_internal_get_RedundantInputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RedundantInputs;
}
constexpr void Fusion::TimeSyncConfiguration::__cordl_internal_set_RedundantInputs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RedundantInputs = value;
}
constexpr int32_t& Fusion::TimeSyncConfiguration::__cordl_internal_get_RedundantSnapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RedundantSnapshots;
}
constexpr int32_t const& Fusion::TimeSyncConfiguration::__cordl_internal_get_RedundantSnapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RedundantSnapshots;
}
constexpr void Fusion::TimeSyncConfiguration::__cordl_internal_set_RedundantSnapshots(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RedundantSnapshots = value;
}
inline ::Fusion::TimeSyncConfiguration* Fusion::TimeSyncConfiguration::GetFromTickrate(::GlobalNamespace::TickRate_Resolved  tickrate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"GetFromTickrate", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Resolved>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TimeSyncConfiguration*>(nullptr, ___internal_method, tickrate);
}
inline double_t Fusion::TimeSyncConfiguration::get_SampleWindowSecondsNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_SampleWindowSecondsNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSyncConfiguration::get_MaxLateInputsNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxLateInputsNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSyncConfiguration::get_MaxLateSnapshotsNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxLateSnapshotsNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t Fusion::TimeSyncConfiguration::get_RedundantInputsNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_RedundantInputsNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::TimeSyncConfiguration::get_RedundantSnapshotsNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_RedundantSnapshotsNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSyncConfiguration::get_MaxSimSpeedAdjust()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxSimSpeedAdjust", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSyncConfiguration::get_MaxSimSpeedAdjustNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxSimSpeedAdjustNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSyncConfiguration::get_MaxInterpSpeedAdjust()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxInterpSpeedAdjust", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSyncConfiguration::get_MaxInterpSpeedAdjustNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {"get_MaxInterpSpeedAdjustNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::TimeSyncConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSyncConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::TimeSyncConfiguration* Fusion::TimeSyncConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::TimeSyncConfiguration*>());
}
// Ctor Parameters []
constexpr ::Fusion::TimeSyncConfiguration::TimeSyncConfiguration()   {
}
