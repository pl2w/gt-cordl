#pragma once
// IWYU pragma private; include "GlobalNamespace/DoorSlidingOpenAudio.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DoorSlidingOpenAudio_def.hpp"
#include "GlobalNamespace/zzzz__GhostLabButton_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DoorSlidingOpenAudio.ITickSystemTick_get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DoorSlidingOpenAudio::*)()>(&::GlobalNamespace::DoorSlidingOpenAudio::ITickSystemTick_get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d09c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DoorSlidingOpenAudio.ITickSystemTick_set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DoorSlidingOpenAudio::*)(bool)>(&::GlobalNamespace::DoorSlidingOpenAudio::ITickSystemTick_set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d09c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DoorSlidingOpenAudio.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DoorSlidingOpenAudio::*)()>(&::GlobalNamespace::DoorSlidingOpenAudio::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d09c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DoorSlidingOpenAudio.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DoorSlidingOpenAudio::*)()>(&::GlobalNamespace::DoorSlidingOpenAudio::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d09cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DoorSlidingOpenAudio.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DoorSlidingOpenAudio::*)()>(&::GlobalNamespace::DoorSlidingOpenAudio::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d09d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DoorSlidingOpenAudio.ITickSystemTick_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DoorSlidingOpenAudio::*)()>(&::GlobalNamespace::DoorSlidingOpenAudio::ITickSystemTick_Tick)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d09e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DoorSlidingOpenAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DoorSlidingOpenAudio::*)()>(&::GlobalNamespace::DoorSlidingOpenAudio::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0a1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostLabButton>& GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::GhostLabButton> const& GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_set_button(::UnityW<::GlobalNamespace::GhostLabButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr bool& GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::DoorSlidingOpenAudio::__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemTick_TickRunning_k__BackingField = value;
}
inline bool GlobalNamespace::DoorSlidingOpenAudio::ITickSystemTick_get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DoorSlidingOpenAudio::ITickSystemTick_set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DoorSlidingOpenAudio::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DoorSlidingOpenAudio::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DoorSlidingOpenAudio::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DoorSlidingOpenAudio::ITickSystemTick_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DoorSlidingOpenAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DoorSlidingOpenAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DoorSlidingOpenAudio* GlobalNamespace::DoorSlidingOpenAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DoorSlidingOpenAudio*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::DoorSlidingOpenAudio::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::DoorSlidingOpenAudio::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::DoorSlidingOpenAudio::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::DoorSlidingOpenAudio::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DoorSlidingOpenAudio::DoorSlidingOpenAudio()   {
}
