#pragma once
// IWYU pragma private; include "Fusion/TickTimer.hpp"
#include "Fusion/zzzz__TickTimer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::TickTimer.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TickTimer (*)()>(&::Fusion::TickTimer::get_None)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TickTimer::*)()>(&::Fusion::TickTimer::get_IsRunning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa63d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.get_TargetTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::TickTimer::*)()>(&::Fusion::TickTimer::get_TargetTick)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fa63e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"get_TargetTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.Expired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TickTimer::*)(::Fusion::NetworkRunner*)>(&::Fusion::TickTimer::Expired)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fa644c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"Expired", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.ExpiredOrNotRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TickTimer::*)(::Fusion::NetworkRunner*)>(&::Fusion::TickTimer::ExpiredOrNotRunning)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fa64f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"ExpiredOrNotRunning", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.RemainingTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::TickTimer::*)(::Fusion::NetworkRunner*)>(&::Fusion::TickTimer::RemainingTicks)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5fa6544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"RemainingTicks", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.RemainingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Fusion::TickTimer::*)(::Fusion::NetworkRunner*)>(&::Fusion::TickTimer::RemainingTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fa666c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"RemainingTime", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.CreateFromSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TickTimer (*)(::Fusion::NetworkRunner*, float_t)>(&::Fusion::TickTimer::CreateFromSeconds)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5fa673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"CreateFromSeconds", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.CreateFromTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TickTimer (*)(::Fusion::NetworkRunner*, int32_t)>(&::Fusion::TickTimer::CreateFromTicks)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fa6840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"CreateFromTicks", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickTimer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::TickTimer::*)()>(&::Fusion::TickTimer::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa68d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::TickTimer>(),
                    {::i2c::class_of<::Fusion::TickTimer>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::TickTimer::__cordl_internal_get__target()  {
return this->____target;
}
constexpr int32_t const& Fusion::TickTimer::__cordl_internal_get__target() const {
return this->____target;
}
constexpr void Fusion::TickTimer::__cordl_internal_set__target(int32_t  value)  {
this->____target = value;
}
inline ::Fusion::TickTimer Fusion::TickTimer::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TickTimer>(nullptr, ___internal_method);
}
inline bool Fusion::TickTimer::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Fusion::TickTimer::get_TargetTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"get_TargetTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(*this, ___internal_method);
}
inline bool Fusion::TickTimer::Expired(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"Expired", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, runner);
}
inline bool Fusion::TickTimer::ExpiredOrNotRunning(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"ExpiredOrNotRunning", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, runner);
}
inline ::System::Nullable_1<int32_t> Fusion::TickTimer::RemainingTicks(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"RemainingTicks", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(*this, ___internal_method, runner);
}
inline ::System::Nullable_1<float_t> Fusion::TickTimer::RemainingTime(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"RemainingTime", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(*this, ___internal_method, runner);
}
inline ::Fusion::TickTimer Fusion::TickTimer::CreateFromSeconds(::Fusion::NetworkRunner*  runner, float_t  delayInSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"CreateFromSeconds", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TickTimer>(nullptr, ___internal_method, runner, delayInSeconds);
}
inline ::Fusion::TickTimer Fusion::TickTimer::CreateFromTicks(::Fusion::NetworkRunner*  runner, int32_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickTimer>(),
                        {"CreateFromTicks", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TickTimer>(nullptr, ___internal_method, runner, ticks);
}
inline ::StringW Fusion::TickTimer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::TickTimer>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::TickTimer::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::TickTimer::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_target", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::TickTimer::TickTimer(int32_t  _target) noexcept  {
this->_target = _target;
}
// Ctor Parameters []
constexpr ::Fusion::TickTimer::TickTimer()   {
}
