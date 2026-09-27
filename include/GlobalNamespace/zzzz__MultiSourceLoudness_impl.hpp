#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiSourceLoudness.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiSourceLoudness_def.hpp"
#include "GlobalNamespace/zzzz__ISpeakerLoudness_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiSourceLoudness::*)()>(&::GlobalNamespace::MultiSourceLoudness::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596be7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.set_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)(bool)>(&::GlobalNamespace::MultiSourceLoudness::set_IsSpeaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596be84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"set_IsSpeaking", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.get_Loudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiSourceLoudness::*)()>(&::GlobalNamespace::MultiSourceLoudness::get_Loudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596be8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"get_Loudness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.set_Loudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)(float_t)>(&::GlobalNamespace::MultiSourceLoudness::set_Loudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596be94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"set_Loudness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.get_IsMicEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiSourceLoudness::*)()>(&::GlobalNamespace::MultiSourceLoudness::get_IsMicEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596be9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"get_IsMicEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.set_IsMicEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)(bool)>(&::GlobalNamespace::MultiSourceLoudness::set_IsMicEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596bea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"set_IsMicEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)()>(&::GlobalNamespace::MultiSourceLoudness::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596beac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.RebuildSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)()>(&::GlobalNamespace::MultiSourceLoudness::RebuildSources)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x596beb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"RebuildSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.AddSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)(::GlobalNamespace::ISpeakerLoudness*)>(&::GlobalNamespace::MultiSourceLoudness::AddSource)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x596c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"AddSource", {}, {::i2c::type_of<::GlobalNamespace::ISpeakerLoudness*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.RemoveSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)(::GlobalNamespace::ISpeakerLoudness*)>(&::GlobalNamespace::MultiSourceLoudness::RemoveSource)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x596c0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"RemoveSource", {}, {::i2c::type_of<::GlobalNamespace::ISpeakerLoudness*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)()>(&::GlobalNamespace::MultiSourceLoudness::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x596c154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiSourceLoudness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiSourceLoudness::*)()>(&::GlobalNamespace::MultiSourceLoudness::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x596c3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get_sourceBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get_sourceBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceBehaviours;
}
constexpr void GlobalNamespace::MultiSourceLoudness::__cordl_internal_set_sourceBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceBehaviours = value;
}
constexpr float_t& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get_loudnessMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudnessMultiplier;
}
constexpr float_t const& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get_loudnessMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudnessMultiplier;
}
constexpr void GlobalNamespace::MultiSourceLoudness::__cordl_internal_set_loudnessMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudnessMultiplier = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>*& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get_sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sources;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>* const& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get_sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sources;
}
constexpr void GlobalNamespace::MultiSourceLoudness::__cordl_internal_set_sources(::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sources = value;
}
constexpr bool& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get__IsSpeaking_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpeaking_k__BackingField;
}
constexpr bool const& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get__IsSpeaking_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpeaking_k__BackingField;
}
constexpr void GlobalNamespace::MultiSourceLoudness::__cordl_internal_set__IsSpeaking_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpeaking_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get__Loudness_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Loudness_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get__Loudness_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Loudness_k__BackingField;
}
constexpr void GlobalNamespace::MultiSourceLoudness::__cordl_internal_set__Loudness_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Loudness_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get__IsMicEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMicEnabled_k__BackingField;
}
constexpr bool const& GlobalNamespace::MultiSourceLoudness::__cordl_internal_get__IsMicEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMicEnabled_k__BackingField;
}
constexpr void GlobalNamespace::MultiSourceLoudness::__cordl_internal_set__IsMicEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMicEnabled_k__BackingField = value;
}
inline bool GlobalNamespace::MultiSourceLoudness::get_IsSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiSourceLoudness::set_IsSpeaking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"set_IsSpeaking", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MultiSourceLoudness::get_Loudness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"get_Loudness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiSourceLoudness::set_Loudness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"set_Loudness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiSourceLoudness::get_IsMicEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"get_IsMicEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiSourceLoudness::set_IsMicEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"set_IsMicEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiSourceLoudness::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiSourceLoudness::RebuildSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"RebuildSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiSourceLoudness::AddSource(::GlobalNamespace::ISpeakerLoudness*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"AddSource", {}, {::i2c::type_of<::GlobalNamespace::ISpeakerLoudness*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::MultiSourceLoudness::RemoveSource(::GlobalNamespace::ISpeakerLoudness*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"RemoveSource", {}, {::i2c::type_of<::GlobalNamespace::ISpeakerLoudness*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::MultiSourceLoudness::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiSourceLoudness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiSourceLoudness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiSourceLoudness* GlobalNamespace::MultiSourceLoudness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiSourceLoudness*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISpeakerLoudness"
constexpr  GlobalNamespace::MultiSourceLoudness::operator ::GlobalNamespace::ISpeakerLoudness*() noexcept {
return static_cast<::GlobalNamespace::ISpeakerLoudness*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISpeakerLoudness"
constexpr ::GlobalNamespace::ISpeakerLoudness* GlobalNamespace::MultiSourceLoudness::i___GlobalNamespace__ISpeakerLoudness() noexcept {
return static_cast<::GlobalNamespace::ISpeakerLoudness*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiSourceLoudness::MultiSourceLoudness()   {
}
