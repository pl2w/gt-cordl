#pragma once
// IWYU pragma private; include "GlobalNamespace/ManipulatableSlider.hpp"
#include "GlobalNamespace/zzzz__ManipulatableObject_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ManipulatableSlider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSlider::*)()>(&::GlobalNamespace::ManipulatableSlider::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x575db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.OnStartManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableSlider::OnStartManipulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575db8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.OnStopManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::ManipulatableSlider::OnStopManipulation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x575db90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.ShouldHandDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableSlider::ShouldHandDetach)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x575dbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.OnHeldUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSlider::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableSlider::OnHeldUpdate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x575dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.OnReleasedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSlider::*)()>(&::GlobalNamespace::ManipulatableSlider::OnReleasedUpdate)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x575dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.SetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSlider::*)(float_t, float_t, float_t)>(&::GlobalNamespace::ManipulatableSlider::SetProgress)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x575df44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"SetProgress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.GetProgressX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ManipulatableSlider::*)()>(&::GlobalNamespace::ManipulatableSlider::GetProgressX)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x575e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"GetProgressX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.GetProgressY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ManipulatableSlider::*)()>(&::GlobalNamespace::ManipulatableSlider::GetProgressY)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x575e070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"GetProgressY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider.GetProgressZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ManipulatableSlider::*)()>(&::GlobalNamespace::ManipulatableSlider::GetProgressZ)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x575e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"GetProgressZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSlider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSlider::*)()>(&::GlobalNamespace::ManipulatableSlider::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x575e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_breakDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_breakDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_breakDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakDistance = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_maxXOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxXOffset;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_maxXOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxXOffset;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_maxXOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxXOffset = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_minXOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minXOffset;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_minXOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minXOffset;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_minXOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minXOffset = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_maxYOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxYOffset;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_maxYOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxYOffset;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_maxYOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxYOffset = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_minYOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minYOffset;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_minYOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minYOffset;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_minYOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minYOffset = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_maxZOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxZOffset;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_maxZOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxZOffset;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_maxZOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxZOffset = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_minZOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minZOffset;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_minZOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minZOffset;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_minZOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minZOffset = value;
}
constexpr bool& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_applyReleaseVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyReleaseVelocity;
}
constexpr bool const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_applyReleaseVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyReleaseVelocity;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_applyReleaseVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyReleaseVelocity = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_releaseDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDrag;
}
constexpr float_t const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_releaseDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDrag;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_releaseDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseDrag = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_localSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpace;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_localSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpace;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_localSpace(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localSpace = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_startingPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_startingPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_startingPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ManipulatableSlider::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::ManipulatableSlider::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
inline void GlobalNamespace::ManipulatableSlider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableSlider::OnStartManipulation(::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingHand);
}
inline void GlobalNamespace::ManipulatableSlider::OnStopManipulation(::UnityEngine::GameObject*  releasingHand, ::UnityEngine::Vector3  releaseVelocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasingHand, releaseVelocity);
}
inline bool GlobalNamespace::ManipulatableSlider::ShouldHandDetach(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableSlider::OnHeldUpdate(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableSlider::OnReleasedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableSlider::SetProgress(float_t  x, float_t  y, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"SetProgress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, z);
}
inline float_t GlobalNamespace::ManipulatableSlider::GetProgressX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"GetProgressX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ManipulatableSlider::GetProgressY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"GetProgressY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ManipulatableSlider::GetProgressZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {"GetProgressZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSlider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ManipulatableSlider* GlobalNamespace::ManipulatableSlider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ManipulatableSlider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManipulatableSlider::ManipulatableSlider()   {
}
