#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/VoiceSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__VoiceSetup_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__VoiceSetup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup.get_Speaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::get_Speaker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6103c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"get_Speaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup.set_Speaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)(::UnityEngine::GameObject*)>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::set_Speaker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f61044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"set_Speaker", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::Awake)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f6104c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f61150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f611cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup.OnLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)(::Fusion::NetworkRunner*)>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::OnLoaded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f61248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"OnLoaded", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup.SpawnSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)(::Fusion::NetworkRunner*)>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::SpawnSpeaker)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f61268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"SpawnSpeaker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f61318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::__cordl_internal_get_centerEyeAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerEyeAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::__cordl_internal_get_centerEyeAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerEyeAnchor;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::__cordl_internal_set_centerEyeAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerEyeAnchor = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::__cordl_internal_get__Speaker_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speaker_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::__cordl_internal_get__Speaker_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speaker_k__BackingField;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::__cordl_internal_set__Speaker_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speaker_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::get_Speaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"get_Speaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::set_Speaker(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"set_Speaker", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::OnLoaded(::Fusion::NetworkRunner*  networkRunner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"OnLoaded", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkRunner);
}
inline ::System::Collections::IEnumerator* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::SpawnSpeaker(::Fusion::NetworkRunner*  networkRunner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {"SpawnSpeaker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, networkRunner);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup::VoiceSetup()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::*)(int32_t)>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f612f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f616d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9f616d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f618d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f618e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f61918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get_networkRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkRunner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get_networkRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkRunner;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_set_networkRunner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkRunner = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup>& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup> const& Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::__cordl_internal_set___4__this(::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10::VoiceSetup__SpawnSpeaker_d__10()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f61388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c._Awake_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::_Awake_b__6_0)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x9f61390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>(),
                        {"<Awake>b__6_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::setStaticF___9(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*, "<>9", ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>(std::forward<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*, "<>9", ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::setStaticF___9__6_0(::System::Func_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__6_0", ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>(std::forward<::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_1<::UnityW<::UnityEngine::GameObject>>* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__6_0", ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::_Awake_b__6_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>(),
                        {"<Awake>b__6_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c* Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c::VoiceSetup___c()   {
}
