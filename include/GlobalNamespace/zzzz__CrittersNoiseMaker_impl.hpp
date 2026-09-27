#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersNoiseMaker.hpp"
#include "GlobalNamespace/zzzz__CrittersToolThrowable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersNoiseMaker_def.hpp"
#include "GlobalNamespace/zzzz__CrittersNoiseMaker_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker.OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersNoiseMaker::OnImpact)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5609a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker.OnImpactCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersNoiseMaker::OnImpactCritter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5609d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker.OnPickedUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker::*)()>(&::GlobalNamespace::CrittersNoiseMaker::OnPickedUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5609dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker.PlaySingleNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker::*)()>(&::GlobalNamespace::CrittersNoiseMaker::PlaySingleNoise)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5609ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"PlaySingleNoise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker.StartPlayingRepeatNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker::*)()>(&::GlobalNamespace::CrittersNoiseMaker::StartPlayingRepeatNoise)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5609cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"StartPlayingRepeatNoise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker.StopPlayRepeatNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker::*)()>(&::GlobalNamespace::CrittersNoiseMaker::StopPlayRepeatNoise)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5609dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"StopPlayRepeatNoise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker.PlayRepeatNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CrittersNoiseMaker::*)()>(&::GlobalNamespace::CrittersNoiseMaker::PlayRepeatNoise)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5609df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"PlayRepeatNoise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker::*)()>(&::GlobalNamespace::CrittersNoiseMaker::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5609e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_soundSubIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundSubIndex;
}
constexpr int32_t const& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_soundSubIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundSubIndex;
}
constexpr void GlobalNamespace::CrittersNoiseMaker::__cordl_internal_set_soundSubIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundSubIndex = value;
}
constexpr bool& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_playOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnce;
}
constexpr bool const& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_playOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnce;
}
constexpr void GlobalNamespace::CrittersNoiseMaker::__cordl_internal_set_playOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playOnce = value;
}
constexpr float_t& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_repeatNoiseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatNoiseDuration;
}
constexpr float_t const& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_repeatNoiseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatNoiseDuration;
}
constexpr void GlobalNamespace::CrittersNoiseMaker::__cordl_internal_set_repeatNoiseDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatNoiseDuration = value;
}
constexpr float_t& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_repeatNoiseRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatNoiseRate;
}
constexpr float_t const& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_repeatNoiseRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatNoiseRate;
}
constexpr void GlobalNamespace::CrittersNoiseMaker::__cordl_internal_set_repeatNoiseRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatNoiseRate = value;
}
constexpr bool& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_destroyAfterPlayingRepeatNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyAfterPlayingRepeatNoise;
}
constexpr bool const& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_destroyAfterPlayingRepeatNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyAfterPlayingRepeatNoise;
}
constexpr void GlobalNamespace::CrittersNoiseMaker::__cordl_internal_set_destroyAfterPlayingRepeatNoise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyAfterPlayingRepeatNoise = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_repeatPlayNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatPlayNoise;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::CrittersNoiseMaker::__cordl_internal_get_repeatPlayNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatPlayNoise;
}
constexpr void GlobalNamespace::CrittersNoiseMaker::__cordl_internal_set_repeatPlayNoise(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatPlayNoise = value;
}
inline void GlobalNamespace::CrittersNoiseMaker::OnImpact(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitPosition, hitNormal);
}
inline void GlobalNamespace::CrittersNoiseMaker::OnImpactCritter(::GlobalNamespace::CrittersPawn*  impactedCritter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impactedCritter);
}
inline void GlobalNamespace::CrittersNoiseMaker::OnPickedUp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersNoiseMaker::PlaySingleNoise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"PlaySingleNoise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersNoiseMaker::StartPlayingRepeatNoise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"StartPlayingRepeatNoise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersNoiseMaker::StopPlayRepeatNoise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"StopPlayRepeatNoise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CrittersNoiseMaker::PlayRepeatNoise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {"PlayRepeatNoise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersNoiseMaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersNoiseMaker* GlobalNamespace::CrittersNoiseMaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersNoiseMaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersNoiseMaker::CrittersNoiseMaker()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::*)(int32_t)>(&::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5609e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::*)()>(&::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5609ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::*)()>(&::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5609ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::*)()>(&::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5609ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::*)()>(&::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x560a000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::*)()>(&::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x560a038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersNoiseMaker>& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CrittersNoiseMaker> const& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersNoiseMaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12* GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12::CrittersNoiseMaker__PlayRepeatNoise_d__12()   {
}
