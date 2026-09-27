#pragma once
// IWYU pragma private; include "GlobalNamespace/StopwatchFace.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StopwatchFace_def.hpp"
#include "GlobalNamespace/zzzz__LerpTask_1_def.hpp"
#include "GlobalNamespace/zzzz__StopwatchCosmetic_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.get_watchActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::get_watchActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5986e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"get_watchActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.get_millisElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::get_millisElapsed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5986e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"get_millisElapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.get_digitsMmSsMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::get_digitsMmSsMs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5986e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"get_digitsMmSsMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.SetMillisElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)(int32_t, bool)>(&::GlobalNamespace::StopwatchFace::SetMillisElapsed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5987064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"SetMillisElapsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::Awake)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59872d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.OnLerpToZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::StopwatchFace::OnLerpToZero)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5987418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnLerpToZero", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.OnLerpEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::OnLerpEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59874d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnLerpEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59875d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59875e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59875e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.ParseDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::System::TimeSpan)>(&::GlobalNamespace::StopwatchFace::ParseDigits)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5986ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"ParseDigits", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.UpdateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::UpdateText)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5987088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"UpdateText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.UpdateHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::UpdateHand)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5987270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"UpdateHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.WatchToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::WatchToggle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59876f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchToggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.WatchStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::WatchStart)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5987734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.WatchStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::WatchStop)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x598775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.WatchReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::WatchReset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5987780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace.WatchReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)(bool)>(&::GlobalNamespace::StopwatchFace::WatchReset)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x59874dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchReset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchFace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchFace::*)()>(&::GlobalNamespace::StopwatchFace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5987788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StopwatchFace::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StopwatchFace::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__hand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::StopwatchFace::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::StopwatchFace::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::UnityW<::GlobalNamespace::StopwatchCosmetic>& GlobalNamespace::StopwatchFace::__cordl_internal_get__cosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmetic;
}
constexpr ::UnityW<::GlobalNamespace::StopwatchCosmetic> const& GlobalNamespace::StopwatchFace::__cordl_internal_get__cosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmetic;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__cosmetic(::UnityW<::GlobalNamespace::StopwatchCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmetic = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::StopwatchFace::__cordl_internal_get__audioClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClick;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::StopwatchFace::__cordl_internal_get__audioClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClick;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__audioClick(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioClick = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::StopwatchFace::__cordl_internal_get__audioReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioReset;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::StopwatchFace::__cordl_internal_get__audioReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioReset;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__audioReset(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioReset = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::StopwatchFace::__cordl_internal_get__audioTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTick;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::StopwatchFace::__cordl_internal_get__audioTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTick;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__audioTick(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioTick = value;
}
constexpr int32_t& GlobalNamespace::StopwatchFace::__cordl_internal_get__millisElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____millisElapsed;
}
constexpr int32_t const& GlobalNamespace::StopwatchFace::__cordl_internal_get__millisElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____millisElapsed;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__millisElapsed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____millisElapsed = value;
}
constexpr bool& GlobalNamespace::StopwatchFace::__cordl_internal_get__watchActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchActive;
}
constexpr bool const& GlobalNamespace::StopwatchFace::__cordl_internal_get__watchActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchActive;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__watchActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____watchActive = value;
}
constexpr ::GlobalNamespace::LerpTask_1<int32_t>*& GlobalNamespace::StopwatchFace::__cordl_internal_get__lerpToZero()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpToZero;
}
constexpr ::GlobalNamespace::LerpTask_1<int32_t>* const& GlobalNamespace::StopwatchFace::__cordl_internal_get__lerpToZero() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpToZero;
}
constexpr void GlobalNamespace::StopwatchFace::__cordl_internal_set__lerpToZero(::GlobalNamespace::LerpTask_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpToZero = value;
}
inline bool GlobalNamespace::StopwatchFace::get_watchActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"get_watchActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StopwatchFace::get_millisElapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"get_millisElapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::StopwatchFace::get_digitsMmSsMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"get_digitsMmSsMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::SetMillisElapsed(int32_t  millis, bool  updateFace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"SetMillisElapsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, millis, updateFace);
}
inline void GlobalNamespace::StopwatchFace::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::OnLerpToZero(int32_t  a, int32_t  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnLerpToZero", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, t);
}
inline void GlobalNamespace::StopwatchFace::OnLerpEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnLerpEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::StopwatchFace::ParseDigits(::System::TimeSpan  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"ParseDigits", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, time);
}
inline void GlobalNamespace::StopwatchFace::UpdateText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"UpdateText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::UpdateHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"UpdateHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::WatchToggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchToggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::WatchStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::WatchStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::WatchReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchFace::WatchReset(bool  doLerp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {"WatchReset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doLerp);
}
inline void GlobalNamespace::StopwatchFace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchFace*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StopwatchFace* GlobalNamespace::StopwatchFace::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StopwatchFace*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StopwatchFace::StopwatchFace()   {
}
