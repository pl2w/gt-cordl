#pragma once
// IWYU pragma private; include "GlobalNamespace/ElfLauncherElf.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ElfLauncherElf_def.hpp"
#include "GlobalNamespace/zzzz__ElfLauncherElf_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncherElf::*)()>(&::GlobalNamespace::ElfLauncherElf::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x564d4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf.ReturnToPoolAfterDelayCo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ElfLauncherElf::*)()>(&::GlobalNamespace::ElfLauncherElf::ReturnToPoolAfterDelayCo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x564d514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"ReturnToPoolAfterDelayCo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncherElf::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::ElfLauncherElf::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x564d5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncherElf::*)()>(&::GlobalNamespace::ElfLauncherElf::FixedUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x564d5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncherElf::*)()>(&::GlobalNamespace::ElfLauncherElf::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564d6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::ElfLauncherElf::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_bounceAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_bounceAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudio;
}
constexpr void GlobalNamespace::ElfLauncherElf::__cordl_internal_set_bounceAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceAudio = value;
}
constexpr float_t& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_bounceAudioCooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudioCooldownDuration;
}
constexpr float_t const& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_bounceAudioCooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudioCooldownDuration;
}
constexpr void GlobalNamespace::ElfLauncherElf::__cordl_internal_set_bounceAudioCooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceAudioCooldownDuration = value;
}
constexpr float_t& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_destroyAfterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyAfterDuration;
}
constexpr float_t const& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_destroyAfterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyAfterDuration;
}
constexpr void GlobalNamespace::ElfLauncherElf::__cordl_internal_set_destroyAfterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyAfterDuration = value;
}
constexpr float_t& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_bounceAudioCoolingDownUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudioCoolingDownUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::ElfLauncherElf::__cordl_internal_get_bounceAudioCoolingDownUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudioCoolingDownUntilTimestamp;
}
constexpr void GlobalNamespace::ElfLauncherElf::__cordl_internal_set_bounceAudioCoolingDownUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceAudioCoolingDownUntilTimestamp = value;
}
inline void GlobalNamespace::ElfLauncherElf::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ElfLauncherElf::ReturnToPoolAfterDelayCo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"ReturnToPoolAfterDelayCo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::ElfLauncherElf::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::ElfLauncherElf::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElfLauncherElf::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ElfLauncherElf* GlobalNamespace::ElfLauncherElf::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ElfLauncherElf*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ElfLauncherElf::ElfLauncherElf()   {
}
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::*)(int32_t)>(&::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x564d580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::*)()>(&::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x564d6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::*)()>(&::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x564d6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::*)()>(&::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564d7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::*)()>(&::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x564d7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::*)()>(&::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564d82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ElfLauncherElf>& GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ElfLauncherElf> const& GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ElfLauncherElf>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6* GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6::ElfLauncherElf__ReturnToPoolAfterDelayCo_d__6()   {
}
