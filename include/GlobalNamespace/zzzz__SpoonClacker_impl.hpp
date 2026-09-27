#pragma once
// IWYU pragma private; include "GlobalNamespace/SpoonClacker.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpoonClacker_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__HingeJoint_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpoonClacker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpoonClacker::*)()>(&::GlobalNamespace::SpoonClacker::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5986a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpoonClacker.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpoonClacker::*)()>(&::GlobalNamespace::SpoonClacker::Setup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5986a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpoonClacker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpoonClacker::*)()>(&::GlobalNamespace::SpoonClacker::Update)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5986ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpoonClacker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpoonClacker::*)()>(&::GlobalNamespace::SpoonClacker::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5986c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::SpoonClacker::__cordl_internal_get_transferObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::SpoonClacker::__cordl_internal_get_transferObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferObject;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_transferObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferObject = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::SpoonClacker::__cordl_internal_get_skinnedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMesh;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::SpoonClacker::__cordl_internal_get_skinnedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMesh;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_skinnedMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinnedMesh = value;
}
constexpr ::UnityW<::UnityEngine::HingeJoint>& GlobalNamespace::SpoonClacker::__cordl_internal_get_hingeJoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hingeJoint;
}
constexpr ::UnityW<::UnityEngine::HingeJoint> const& GlobalNamespace::SpoonClacker::__cordl_internal_get_hingeJoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hingeJoint;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_hingeJoint(::UnityW<::UnityEngine::HingeJoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hingeJoint = value;
}
constexpr int32_t& GlobalNamespace::SpoonClacker::__cordl_internal_get_targetBlendShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBlendShape;
}
constexpr int32_t const& GlobalNamespace::SpoonClacker::__cordl_internal_get_targetBlendShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBlendShape;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_targetBlendShape(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetBlendShape = value;
}
constexpr float_t& GlobalNamespace::SpoonClacker::__cordl_internal_get_hingeMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hingeMin;
}
constexpr float_t const& GlobalNamespace::SpoonClacker::__cordl_internal_get_hingeMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hingeMin;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_hingeMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hingeMin = value;
}
constexpr float_t& GlobalNamespace::SpoonClacker::__cordl_internal_get_hingeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hingeMax;
}
constexpr float_t const& GlobalNamespace::SpoonClacker::__cordl_internal_get_hingeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hingeMax;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_hingeMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hingeMax = value;
}
constexpr bool& GlobalNamespace::SpoonClacker::__cordl_internal_get_invertOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertOut;
}
constexpr bool const& GlobalNamespace::SpoonClacker::__cordl_internal_get_invertOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertOut;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_invertOut(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertOut = value;
}
constexpr float_t& GlobalNamespace::SpoonClacker::__cordl_internal_get_minThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minThreshold;
}
constexpr float_t const& GlobalNamespace::SpoonClacker::__cordl_internal_get_minThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minThreshold;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_minThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minThreshold = value;
}
constexpr float_t& GlobalNamespace::SpoonClacker::__cordl_internal_get_maxThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThreshold;
}
constexpr float_t const& GlobalNamespace::SpoonClacker::__cordl_internal_get_maxThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThreshold;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_maxThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxThreshold = value;
}
constexpr float_t& GlobalNamespace::SpoonClacker::__cordl_internal_get_hysterisisFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hysterisisFactor;
}
constexpr float_t const& GlobalNamespace::SpoonClacker::__cordl_internal_get_hysterisisFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hysterisisFactor;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_hysterisisFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hysterisisFactor = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SpoonClacker::__cordl_internal_get_OnHitMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitMin;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SpoonClacker::__cordl_internal_get_OnHitMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitMin;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_OnHitMin(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHitMin = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SpoonClacker::__cordl_internal_get_OnHitMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitMax;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SpoonClacker::__cordl_internal_get_OnHitMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitMax;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_OnHitMax(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHitMax = value;
}
constexpr bool& GlobalNamespace::SpoonClacker::__cordl_internal_get__lockMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockMin;
}
constexpr bool const& GlobalNamespace::SpoonClacker::__cordl_internal_get__lockMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockMin;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set__lockMin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockMin = value;
}
constexpr bool& GlobalNamespace::SpoonClacker::__cordl_internal_get__lockMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockMax;
}
constexpr bool const& GlobalNamespace::SpoonClacker::__cordl_internal_get__lockMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockMax;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set__lockMax(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockMax = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SpoonClacker::__cordl_internal_get_soundsSingle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsSingle;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SpoonClacker::__cordl_internal_get_soundsSingle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsSingle;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_soundsSingle(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundsSingle = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SpoonClacker::__cordl_internal_get_soundsMulti()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsMulti;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SpoonClacker::__cordl_internal_get_soundsMulti() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsMulti;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_soundsMulti(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundsMulti = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::SpoonClacker::__cordl_internal_get__sincelastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sincelastHit;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::SpoonClacker::__cordl_internal_get__sincelastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sincelastHit;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set__sincelastHit(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sincelastHit = value;
}
constexpr float_t& GlobalNamespace::SpoonClacker::__cordl_internal_get_multiHitCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiHitCutoff;
}
constexpr float_t const& GlobalNamespace::SpoonClacker::__cordl_internal_get_multiHitCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiHitCutoff;
}
constexpr void GlobalNamespace::SpoonClacker::__cordl_internal_set_multiHitCutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiHitCutoff = value;
}
inline void GlobalNamespace::SpoonClacker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpoonClacker::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpoonClacker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpoonClacker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpoonClacker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpoonClacker* GlobalNamespace::SpoonClacker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpoonClacker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpoonClacker::SpoonClacker()   {
}
