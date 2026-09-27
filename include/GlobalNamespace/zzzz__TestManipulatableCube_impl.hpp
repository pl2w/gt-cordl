#pragma once
// IWYU pragma private; include "GlobalNamespace/TestManipulatableCube.hpp"
#include "GlobalNamespace/zzzz__ManipulatableObject_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TestManipulatableCube_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)()>(&::GlobalNamespace::TestManipulatableCube::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x575cedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.OnStartManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::TestManipulatableCube::OnStartManipulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575cf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                    {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.OnStopManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::TestManipulatableCube::OnStopManipulation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x575cf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                    {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.ShouldHandDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TestManipulatableCube::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::TestManipulatableCube::ShouldHandDetach)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x575cf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                    {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.OnHeldUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::TestManipulatableCube::OnHeldUpdate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x575d014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                    {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.OnReleasedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)()>(&::GlobalNamespace::TestManipulatableCube::OnReleasedUpdate)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x575d0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                    {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.GetLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::TestManipulatableCube::*)()>(&::GlobalNamespace::TestManipulatableCube::GetLocalSpace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x575d300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"GetLocalSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.SetCubeToSpecificPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::TestManipulatableCube::SetCubeToSpecificPosition)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x575d31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"SetCubeToSpecificPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube.SetCubeToSpecificPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)(float_t, float_t, float_t)>(&::GlobalNamespace::TestManipulatableCube::SetCubeToSpecificPosition)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x575d3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"SetCubeToSpecificPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableCube._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableCube::*)()>(&::GlobalNamespace::TestManipulatableCube::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x575d4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_breakDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_breakDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_breakDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakDistance = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_maxXOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxXOffset;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_maxXOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxXOffset;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_maxXOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxXOffset = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_minXOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minXOffset;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_minXOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minXOffset;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_minXOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minXOffset = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_maxYOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxYOffset;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_maxYOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxYOffset;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_maxYOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxYOffset = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_minYOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minYOffset;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_minYOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minYOffset;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_minYOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minYOffset = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_maxZOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxZOffset;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_maxZOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxZOffset;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_maxZOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxZOffset = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_minZOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minZOffset;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_minZOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minZOffset;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_minZOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minZOffset = value;
}
constexpr bool& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_applyReleaseVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyReleaseVelocity;
}
constexpr bool const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_applyReleaseVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyReleaseVelocity;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_applyReleaseVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyReleaseVelocity = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_releaseDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDrag;
}
constexpr float_t const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_releaseDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDrag;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_releaseDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseDrag = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_localSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpace;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_localSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpace;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_localSpace(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localSpace = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_startingPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_startingPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_startingPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TestManipulatableCube::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::TestManipulatableCube::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
inline void GlobalNamespace::TestManipulatableCube::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableCube::OnStartManipulation(::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingHand);
}
inline void GlobalNamespace::TestManipulatableCube::OnStopManipulation(::UnityEngine::GameObject*  releasingHand, ::UnityEngine::Vector3  releaseVelocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasingHand, releaseVelocity);
}
inline bool GlobalNamespace::TestManipulatableCube::ShouldHandDetach(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand);
}
inline void GlobalNamespace::TestManipulatableCube::OnHeldUpdate(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::TestManipulatableCube::OnReleasedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::TestManipulatableCube::GetLocalSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"GetLocalSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableCube::SetCubeToSpecificPosition(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"SetCubeToSpecificPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void GlobalNamespace::TestManipulatableCube::SetCubeToSpecificPosition(float_t  x, float_t  y, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {"SetCubeToSpecificPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, z);
}
inline void GlobalNamespace::TestManipulatableCube::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableCube*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestManipulatableCube* GlobalNamespace::TestManipulatableCube::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestManipulatableCube*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestManipulatableCube::TestManipulatableCube()   {
}
