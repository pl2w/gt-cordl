#pragma once
// IWYU pragma private; include "GlobalNamespace/EventDialogueBank.hpp"
#include "GlobalNamespace/zzzz__EventDialogueBank_EventDialogueBankEntry_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EventDialogueBank_def.hpp"
#include "GlobalNamespace/zzzz__EventDialogueBank_EventDialogueBankEntry_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventDialogueBank.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventDialogueBank::*)()>(&::GlobalNamespace::EventDialogueBank::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57048e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventDialogueBank*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventDialogueBank.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventDialogueBank::*)()>(&::GlobalNamespace::EventDialogueBank::LateUpdate)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5704a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventDialogueBank*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventDialogueBank._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventDialogueBank::*)()>(&::GlobalNamespace::EventDialogueBank::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5704c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventDialogueBank*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry>& GlobalNamespace::EventDialogueBank::__cordl_internal_get_bank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bank;
}
constexpr ::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry> const& GlobalNamespace::EventDialogueBank::__cordl_internal_get_bank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bank;
}
constexpr void GlobalNamespace::EventDialogueBank::__cordl_internal_set_bank(::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bank = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::EventDialogueBank::__cordl_internal_get_defaultAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::EventDialogueBank::__cordl_internal_get_defaultAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAudioSource;
}
constexpr void GlobalNamespace::EventDialogueBank::__cordl_internal_set_defaultAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAudioSource = value;
}
constexpr float_t& GlobalNamespace::EventDialogueBank::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr float_t const& GlobalNamespace::EventDialogueBank::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::EventDialogueBank::__cordl_internal_set_index(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr int32_t& GlobalNamespace::EventDialogueBank::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& GlobalNamespace::EventDialogueBank::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void GlobalNamespace::EventDialogueBank::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
inline void GlobalNamespace::EventDialogueBank::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventDialogueBank*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EventDialogueBank::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventDialogueBank*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EventDialogueBank::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventDialogueBank*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EventDialogueBank* GlobalNamespace::EventDialogueBank::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventDialogueBank*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventDialogueBank::EventDialogueBank()   {
}
