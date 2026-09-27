#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeLipSyncAnimator.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventAnimator_2_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeLipSyncAnimator_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVisemeEvent_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeChangedEvent_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__VisemeLerpEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.get_LastViseme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::Viseme (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_LastViseme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e53ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_LastViseme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.set_LastViseme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)(::Meta::WitAi::TTS::Data::Viseme)>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::set_LastViseme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e53ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"set_LastViseme", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.get_OnVisemeStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e53ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.get_OnVisemeFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e53edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.get_OnVisemeLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::LipSync::VisemeLerpEvent* (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeLerp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e53ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeLerp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.get_OnVisemeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e53eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.LerpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)(::Meta::WitAi::TTS::Data::TTSVisemeEvent*, ::Meta::WitAi::TTS::Data::TTSVisemeEvent*, float_t)>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::LerpEvent)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e53ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator.SetViseme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)(::Meta::WitAi::TTS::Data::Viseme)>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::SetViseme)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e53fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"SetViseme", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::*)()>(&::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e54060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__onVisemeStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisemeStarted;
}
constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* const& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__onVisemeStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisemeStarted;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_set__onVisemeStarted(::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onVisemeStarted = value;
}
constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__onVisemeFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisemeFinished;
}
constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* const& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__onVisemeFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisemeFinished;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_set__onVisemeFinished(::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onVisemeFinished = value;
}
constexpr ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__onVisemeLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisemeLerp;
}
constexpr ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent* const& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__onVisemeLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisemeLerp;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_set__onVisemeLerp(::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onVisemeLerp = value;
}
constexpr ::Meta::WitAi::TTS::Data::Viseme& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__LastViseme_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastViseme_k__BackingField;
}
constexpr ::Meta::WitAi::TTS::Data::Viseme const& Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_get__LastViseme_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastViseme_k__BackingField;
}
constexpr void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::__cordl_internal_set__LastViseme_k__BackingField(::Meta::WitAi::TTS::Data::Viseme  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastViseme_k__BackingField = value;
}
inline ::Meta::WitAi::TTS::Data::Viseme Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_LastViseme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_LastViseme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::Viseme>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::set_LastViseme(::Meta::WitAi::TTS::Data::Viseme  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"set_LastViseme", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent* Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeLerp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeLerp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::get_OnVisemeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"get_OnVisemeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::LerpEvent(::Meta::WitAi::TTS::Data::TTSVisemeEvent*  fromEvent, ::Meta::WitAi::TTS::Data::TTSVisemeEvent*  toEvent, float_t  percentage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromEvent, toEvent, percentage);
}
inline void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::SetViseme(::Meta::WitAi::TTS::Data::Viseme  newViseme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {"SetViseme", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::Viseme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newViseme);
}
inline void Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator* Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator::VisemeLipSyncAnimator()   {
}
