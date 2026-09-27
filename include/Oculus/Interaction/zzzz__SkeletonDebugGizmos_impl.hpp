#pragma once
// IWYU pragma private; include "Oculus/Interaction/SkeletonDebugGizmos.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_VisibilityFlags_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_def.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_VisibilityFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::SkeletonDebugGizmos::*)()>(&::Oculus::Interaction::SkeletonDebugGizmos::get_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SkeletonDebugGizmos::*)(float_t)>(&::Oculus::Interaction::SkeletonDebugGizmos::set_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.get_Visibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags (::Oculus::Interaction::SkeletonDebugGizmos::*)()>(&::Oculus::Interaction::SkeletonDebugGizmos::get_Visibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffe44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_Visibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.set_Visibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SkeletonDebugGizmos::*)(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags)>(&::Oculus::Interaction::SkeletonDebugGizmos::set_Visibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffe4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_Visibility", {}, {::i2c::type_of<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.get_JointColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::SkeletonDebugGizmos::*)()>(&::Oculus::Interaction::SkeletonDebugGizmos::get_JointColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3ffe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_JointColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.set_JointColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SkeletonDebugGizmos::*)(::UnityEngine::Color)>(&::Oculus::Interaction::SkeletonDebugGizmos::set_JointColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3ffe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_JointColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.get_BoneColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::SkeletonDebugGizmos::*)()>(&::Oculus::Interaction::SkeletonDebugGizmos::get_BoneColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3ffe6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_BoneColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.set_BoneColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SkeletonDebugGizmos::*)(::UnityEngine::Color)>(&::Oculus::Interaction::SkeletonDebugGizmos::set_BoneColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3ffe78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_BoneColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.get_LineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::SkeletonDebugGizmos::*)()>(&::Oculus::Interaction::SkeletonDebugGizmos::get_LineWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3ffe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_LineWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.TryGetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SkeletonDebugGizmos::*)(int32_t, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::SkeletonDebugGizmos::TryGetJointPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.TryGetParentJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SkeletonDebugGizmos::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::SkeletonDebugGizmos::TryGetParentJointId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.get_HasNegativeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SkeletonDebugGizmos::*)()>(&::Oculus::Interaction::SkeletonDebugGizmos::get_HasNegativeScale)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa3ffe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_HasNegativeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SkeletonDebugGizmos::*)(int32_t, ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags)>(&::Oculus::Interaction::SkeletonDebugGizmos::Draw)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa3fff0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"Draw", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SkeletonDebugGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SkeletonDebugGizmos::*)()>(&::Oculus::Interaction::SkeletonDebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4000e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__visibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibility;
}
constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags const& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__visibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibility;
}
constexpr void Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_set__visibility(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visibility = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__jointColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__jointColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointColor;
}
constexpr void Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_set__jointColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__boneColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__boneColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneColor;
}
constexpr void Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_set__boneColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boneColor = value;
}
constexpr float_t& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void Oculus::Interaction::SkeletonDebugGizmos::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
inline float_t Oculus::Interaction::SkeletonDebugGizmos::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::SkeletonDebugGizmos::set_Radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags Oculus::Interaction::SkeletonDebugGizmos::get_Visibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_Visibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags>(this, ___internal_method);
}
inline void Oculus::Interaction::SkeletonDebugGizmos::set_Visibility(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_Visibility", {}, {::i2c::type_of<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::SkeletonDebugGizmos::get_JointColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_JointColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::SkeletonDebugGizmos::set_JointColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_JointColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::SkeletonDebugGizmos::get_BoneColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_BoneColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::SkeletonDebugGizmos::set_BoneColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"set_BoneColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::SkeletonDebugGizmos::get_LineWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_LineWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::SkeletonDebugGizmos::TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, pose);
}
inline bool Oculus::Interaction::SkeletonDebugGizmos::TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, parent);
}
inline bool Oculus::Interaction::SkeletonDebugGizmos::get_HasNegativeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"get_HasNegativeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::SkeletonDebugGizmos::Draw(int32_t  joint, ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  visibility)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {"Draw", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joint, visibility);
}
inline void Oculus::Interaction::SkeletonDebugGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SkeletonDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::SkeletonDebugGizmos* Oculus::Interaction::SkeletonDebugGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SkeletonDebugGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SkeletonDebugGizmos::SkeletonDebugGizmos()   {
}
