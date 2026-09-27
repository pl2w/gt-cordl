#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/BodyDebugGizmos.hpp"
#include "Oculus/Interaction/Body/zzzz__BodyDebugGizmos_CoordSpace_impl.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_impl.hpp"
#include "Oculus/Interaction/Body/zzzz__BodyDebugGizmos_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__IBody_def.hpp"
#include "Oculus/Interaction/Body/zzzz__BodyDebugGizmos_CoordSpace_def.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_VisibilityFlags_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.get_Space
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDebugGizmos_CoordSpace (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::get_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f3a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"get_Space", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.set_Space
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)(::GlobalNamespace::BodyDebugGizmos_CoordSpace)>(&::Oculus::Interaction::Body::BodyDebugGizmos::set_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f3a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"set_Space", {}, {::i2c::type_of<::GlobalNamespace::BodyDebugGizmos_CoordSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f3a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4f3ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4f3b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4f3c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.TryGetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::BodyDebugGizmos::*)(int32_t, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::BodyDebugGizmos::TryGetJointPose)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa4f3d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.TryGetParentJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::BodyDebugGizmos::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::Body::BodyDebugGizmos::TryGetParentJointId)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa4f3f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.GetModifiedDrawFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::GetModifiedDrawFlags)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4f405c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"GetModifiedDrawFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.HandleBodyUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::HandleBodyUpdated)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xa4f4098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"HandleBodyUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.InjectAllBodyJointDebugGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)(::Oculus::Interaction::Body::Input::IBody*)>(&::Oculus::Interaction::Body::BodyDebugGizmos::InjectAllBodyJointDebugGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f4330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"InjectAllBodyJointDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos.InjectBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)(::Oculus::Interaction::Body::Input::IBody*)>(&::Oculus::Interaction::Body::BodyDebugGizmos::InjectBody)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f4334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"InjectBody", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::BodyDebugGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::BodyDebugGizmos::*)()>(&::Oculus::Interaction::Body::BodyDebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f4404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get__body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____body;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get__body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____body;
}
constexpr void Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_set__body(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____body = value;
}
constexpr ::Oculus::Interaction::Body::Input::IBody*& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get_Body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr ::Oculus::Interaction::Body::Input::IBody* const& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get_Body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr void Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_set_Body(::Oculus::Interaction::Body::Input::IBody*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Body = value;
}
constexpr ::GlobalNamespace::BodyDebugGizmos_CoordSpace& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get__space()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr ::GlobalNamespace::BodyDebugGizmos_CoordSpace const& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get__space() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr void Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_set__space(::GlobalNamespace::BodyDebugGizmos_CoordSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____space = value;
}
constexpr bool& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Body::BodyDebugGizmos::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::GlobalNamespace::BodyDebugGizmos_CoordSpace Oculus::Interaction::Body::BodyDebugGizmos::get_Space()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"get_Space", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDebugGizmos_CoordSpace>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::set_Space(::GlobalNamespace::BodyDebugGizmos_CoordSpace  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"set_Space", {}, {::i2c::type_of<::GlobalNamespace::BodyDebugGizmos_CoordSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::BodyDebugGizmos::TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, pose);
}
inline bool Oculus::Interaction::Body::BodyDebugGizmos::TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, parent);
}
inline ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags Oculus::Interaction::Body::BodyDebugGizmos::GetModifiedDrawFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"GetModifiedDrawFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::HandleBodyUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"HandleBodyUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::InjectAllBodyJointDebugGizmos(::Oculus::Interaction::Body::Input::IBody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"InjectAllBodyJointDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::InjectBody(::Oculus::Interaction::Body::Input::IBody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {"InjectBody", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void Oculus::Interaction::Body::BodyDebugGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::BodyDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::BodyDebugGizmos* Oculus::Interaction::Body::BodyDebugGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::BodyDebugGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::BodyDebugGizmos::BodyDebugGizmos()   {
}
