#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCageDeposit.hpp"
#include "GlobalNamespace/zzzz__CrittersActorDeposit_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersCageDeposit_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersCageDeposit_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "GlobalNamespace/zzzz__Menagerie_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit.add_OnDepositCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit::*)(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*)>(&::GlobalNamespace::CrittersCageDeposit::add_OnDepositCritter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55fd608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"add_OnDepositCritter", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit.remove_OnDepositCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit::*)(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*)>(&::GlobalNamespace::CrittersCageDeposit::remove_OnDepositCritter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55fd6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"remove_OnDepositCritter", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit::*)()>(&::GlobalNamespace::CrittersCageDeposit::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x55fd768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit.CanDeposit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersCageDeposit::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersCageDeposit::CanDeposit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x55fd7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit.StartProcessCage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersCageDeposit::StartProcessCage)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55fd828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"StartProcessCage", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit.ProcessCage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CrittersCageDeposit::*)()>(&::GlobalNamespace::CrittersCageDeposit::ProcessCage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55fd854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"ProcessCage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit::*)()>(&::GlobalNamespace::CrittersCageDeposit::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55fd8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit::*)()>(&::GlobalNamespace::CrittersCageDeposit::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55fd9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_isHandlingDeposit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandlingDeposit;
}
constexpr bool const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_isHandlingDeposit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandlingDeposit;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_isHandlingDeposit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHandlingDeposit = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositStartLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositStartLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositStartLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositStartLocation;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_depositStartLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositStartLocation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositEndLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEndLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositEndLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEndLocation;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_depositEndLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositEndLocation = value;
}
constexpr float_t& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_submitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitDuration;
}
constexpr float_t const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_submitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitDuration;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_submitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submitDuration = value;
}
constexpr float_t& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_returnDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDuration;
}
constexpr float_t const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_returnDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDuration;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_returnDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositAudio;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_depositAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositStartSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositStartSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositStartSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositStartSound;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_depositStartSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositStartSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositEmptySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEmptySound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositEmptySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEmptySound;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_depositEmptySound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositEmptySound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositCritterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositCritterSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_depositCritterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositCritterSound;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_depositCritterSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositCritterSound = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_currentCage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCage;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_currentCage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCage;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_currentCage(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCage = value;
}
constexpr ::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_OnDepositCritter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDepositCritter;
}
constexpr ::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>* const& GlobalNamespace::CrittersCageDeposit::__cordl_internal_get_OnDepositCritter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDepositCritter;
}
constexpr void GlobalNamespace::CrittersCageDeposit::__cordl_internal_set_OnDepositCritter(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDepositCritter = value;
}
inline void GlobalNamespace::CrittersCageDeposit::add_OnDepositCritter(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"add_OnDepositCritter", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersCageDeposit::remove_OnDepositCritter(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"remove_OnDepositCritter", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersCageDeposit::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersCageDeposit::CanDeposit(::GlobalNamespace::CrittersActor*  depositActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, depositActor);
}
inline void GlobalNamespace::CrittersCageDeposit::StartProcessCage(::GlobalNamespace::CrittersActor*  depositedActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"StartProcessCage", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depositedActor);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CrittersCageDeposit::ProcessCage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"ProcessCage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCageDeposit::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCageDeposit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersCageDeposit* GlobalNamespace::CrittersCageDeposit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersCageDeposit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersCageDeposit::CrittersCageDeposit()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::*)(int32_t)>(&::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55fd8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::*)()>(&::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55fda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::*)()>(&::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x55fda04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::*)()>(&::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fdf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::*)()>(&::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55fdf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::*)()>(&::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fdf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersCageDeposit>& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CrittersCageDeposit> const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersCageDeposit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__isLocalDeposit_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocalDeposit_5__2;
}
constexpr bool const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__isLocalDeposit_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocalDeposit_5__2;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set__isLocalDeposit_5__2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLocalDeposit_5__2 = value;
}
constexpr float_t& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__transition_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transition_5__3;
}
constexpr float_t const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__transition_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transition_5__3;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set__transition_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transition_5__3 = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersPawn>& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__crittersPawn_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crittersPawn_5__4;
}
constexpr ::UnityW<::GlobalNamespace::CrittersPawn> const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__crittersPawn_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crittersPawn_5__4;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set__crittersPawn_5__4(::UnityW<::GlobalNamespace::CrittersPawn>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crittersPawn_5__4 = value;
}
constexpr ::GlobalNamespace::Menagerie_CritterData*& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__critterData_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critterData_5__5;
}
constexpr ::GlobalNamespace::Menagerie_CritterData* const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__critterData_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critterData_5__5;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set__critterData_5__5(::GlobalNamespace::Menagerie_CritterData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____critterData_5__5 = value;
}
constexpr int32_t& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__lastGrabbedPlayer_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastGrabbedPlayer_5__6;
}
constexpr int32_t const& GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_get__lastGrabbedPlayer_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastGrabbedPlayer_5__6;
}
constexpr void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::__cordl_internal_set__lastGrabbedPlayer_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastGrabbedPlayer_5__6 = value;
}
inline void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16* GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16::CrittersCageDeposit__ProcessCage_d__16()   {
}
