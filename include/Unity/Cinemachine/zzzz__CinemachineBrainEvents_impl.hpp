#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBrainEvents.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineMixerEventsBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrainEvents_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrainEvents.GetMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineMixer* (::Unity::Cinemachine::CinemachineBrainEvents::*)()>(&::Unity::Cinemachine::CinemachineBrainEvents::GetMixer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaede278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrainEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrainEvents::*)()>(&::Unity::Cinemachine::CinemachineBrainEvents::OnEnable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xaede280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrainEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrainEvents::*)()>(&::Unity::Cinemachine::CinemachineBrainEvents::OnDisable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaede638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrainEvents.OnCameraUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrainEvents::*)(::Unity::Cinemachine::CinemachineBrain*)>(&::Unity::Cinemachine::CinemachineBrainEvents::OnCameraUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaede930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {"OnCameraUpdated", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrainEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrainEvents::*)()>(&::Unity::Cinemachine::CinemachineBrainEvents::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaede9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain>& Unity::Cinemachine::CinemachineBrainEvents::__cordl_internal_get_Brain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Brain;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain> const& Unity::Cinemachine::CinemachineBrainEvents::__cordl_internal_get_Brain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Brain;
}
constexpr void Unity::Cinemachine::CinemachineBrainEvents::__cordl_internal_set_Brain(::UnityW<::Unity::Cinemachine::CinemachineBrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Brain = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_BrainEvent*& Unity::Cinemachine::CinemachineBrainEvents::__cordl_internal_get_BrainUpdatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BrainUpdatedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_BrainEvent* const& Unity::Cinemachine::CinemachineBrainEvents::__cordl_internal_get_BrainUpdatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BrainUpdatedEvent;
}
constexpr void Unity::Cinemachine::CinemachineBrainEvents::__cordl_internal_set_BrainUpdatedEvent(::Unity::Cinemachine::CinemachineCore_BrainEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BrainUpdatedEvent = value;
}
inline ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineBrainEvents::GetMixer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineMixer*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrainEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrainEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrainEvents::OnCameraUpdated(::Unity::Cinemachine::CinemachineBrain*  brain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {"OnCameraUpdated", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brain);
}
inline void Unity::Cinemachine::CinemachineBrainEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrainEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBrainEvents* Unity::Cinemachine::CinemachineBrainEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineBrainEvents*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBrainEvents::CinemachineBrainEvents()   {
}
