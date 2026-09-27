#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEyeExpressions.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaEyeExpressions_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__ISpeakerLoudness_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaEyeExpressions.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEyeExpressions::*)()>(&::GlobalNamespace::GorillaEyeExpressions::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59059a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEyeExpressions.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEyeExpressions::*)()>(&::GlobalNamespace::GorillaEyeExpressions::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59059fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEyeExpressions.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEyeExpressions::*)()>(&::GlobalNamespace::GorillaEyeExpressions::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5905a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEyeExpressions.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEyeExpressions::*)()>(&::GlobalNamespace::GorillaEyeExpressions::SliceUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5905a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEyeExpressions.CheckEyeEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEyeExpressions::*)()>(&::GlobalNamespace::GorillaEyeExpressions::CheckEyeEffects)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5905a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"CheckEyeEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEyeExpressions.UpdateEyeExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEyeExpressions::*)()>(&::GlobalNamespace::GorillaEyeExpressions::UpdateEyeExpression)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5905c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"UpdateEyeExpression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEyeExpressions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEyeExpressions::*)()>(&::GlobalNamespace::GorillaEyeExpressions::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5905c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_targetFace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFace;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_targetFace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFace;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_targetFace(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetFace = value;
}
constexpr float_t& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_screamVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screamVolume;
}
constexpr float_t const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_screamVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screamVolume;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_screamVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screamVolume = value;
}
constexpr float_t& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_screamDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screamDuration;
}
constexpr float_t const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_screamDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screamDuration;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_screamDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screamDuration = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_ScreamUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScreamUV;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_ScreamUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScreamUV;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_ScreamUV(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScreamUV = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_BaseUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseUV;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_BaseUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseUV;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_BaseUV(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BaseUV = value;
}
constexpr ::GlobalNamespace::ISpeakerLoudness*& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_loudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr ::GlobalNamespace::ISpeakerLoudness* const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_loudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_loudness(::GlobalNamespace::ISpeakerLoudness*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudness = value;
}
constexpr float_t& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_overrideDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDuration;
}
constexpr float_t const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_overrideDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDuration;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_overrideDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideDuration = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_overrideUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideUV;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_overrideUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideUV;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_overrideUV(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideUV = value;
}
constexpr float_t& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_timeLastUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastUpdated;
}
constexpr float_t const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_timeLastUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastUpdated;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_timeLastUpdated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastUpdated = value;
}
constexpr float_t& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get__BaseMap_ST()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseMap_ST;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::GorillaEyeExpressions::__cordl_internal_get__BaseMap_ST() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseMap_ST;
}
constexpr void GlobalNamespace::GorillaEyeExpressions::__cordl_internal_set__BaseMap_ST(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BaseMap_ST = value;
}
inline void GlobalNamespace::GorillaEyeExpressions::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEyeExpressions::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEyeExpressions::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEyeExpressions::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEyeExpressions::CheckEyeEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"CheckEyeEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEyeExpressions::UpdateEyeExpression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {"UpdateEyeExpression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEyeExpressions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEyeExpressions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaEyeExpressions* GlobalNamespace::GorillaEyeExpressions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaEyeExpressions*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GorillaEyeExpressions::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GorillaEyeExpressions::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaEyeExpressions::GorillaEyeExpressions()   {
}
