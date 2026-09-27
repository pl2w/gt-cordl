#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodyDataAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyDataAsset_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ICopyFrom_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.get_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f84a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.set_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(::Oculus::Interaction::Body::Input::ISkeletonMapping*)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f84a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_SkeletonMapping", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::get_Root)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4f84b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.set_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::set_Root)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4f84c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_Root", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.get_RootScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::get_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f84e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_RootScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.set_RootScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(float_t)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::set_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f84e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_RootScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.get_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f84f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_IsDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.set_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(bool)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f84f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.get_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.set_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(bool)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f8508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.get_JointPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Pose> (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::get_JointPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f8510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_JointPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.set_JointPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(::ArrayW<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::set_JointPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f8518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_JointPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.get_SkeletonChangedCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_SkeletonChangedCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.set_SkeletonChangedCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(int32_t)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f8528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_SkeletonChangedCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)(::Oculus::Interaction::Body::Input::BodyDataAsset*)>(&::Oculus::Interaction::Body::Input::BodyDataAsset::CopyFrom)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4f8530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyDataAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&::Oculus::Interaction::Body::Input::BodyDataAsset::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4f860c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping*& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__SkeletonMapping_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkeletonMapping_k__BackingField;
}
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* const& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__SkeletonMapping_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkeletonMapping_k__BackingField;
}
constexpr void Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_set__SkeletonMapping_k__BackingField(::Oculus::Interaction::Body::Input::ISkeletonMapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SkeletonMapping_k__BackingField = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__Root_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__Root_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root_k__BackingField;
}
constexpr void Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_set__Root_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Root_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__RootScale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RootScale_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__RootScale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RootScale_k__BackingField;
}
constexpr void Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_set__RootScale_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RootScale_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__IsDataValid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataValid_k__BackingField;
}
constexpr bool const& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__IsDataValid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataValid_k__BackingField;
}
constexpr void Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_set__IsDataValid_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDataValid_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__IsDataHighConfidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__IsDataHighConfidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_set__IsDataHighConfidence_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__JointPoses_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JointPoses_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__JointPoses_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JointPoses_k__BackingField;
}
constexpr void Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_set__JointPoses_k__BackingField(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JointPoses_k__BackingField = value;
}
constexpr int32_t& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__SkeletonChangedCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkeletonChangedCount_k__BackingField;
}
constexpr int32_t const& Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_get__SkeletonChangedCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkeletonChangedCount_k__BackingField;
}
constexpr void Oculus::Interaction::Body::Input::BodyDataAsset::__cordl_internal_set__SkeletonChangedCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SkeletonChangedCount_k__BackingField = value;
}
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonMapping(::Oculus::Interaction::Body::Input::ISkeletonMapping*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_SkeletonMapping", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::Body::Input::BodyDataAsset::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::set_Root(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_Root", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Body::Input::BodyDataAsset::get_RootScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_RootScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::set_RootScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_RootScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_IsDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataHighConfidence(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Pose> Oculus::Interaction::Body::Input::BodyDataAsset::get_JointPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_JointPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Pose>>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::set_JointPoses(::ArrayW<::UnityEngine::Pose>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_JointPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonChangedCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"get_SkeletonChangedCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonChangedCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"set_SkeletonChangedCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::CopyFrom(::Oculus::Interaction::Body::Input::BodyDataAsset*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::Body::Input::BodyDataAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Input::BodyDataAsset* Oculus::Interaction::Body::Input::BodyDataAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::BodyDataAsset*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>"
constexpr  Oculus::Interaction::Body::Input::BodyDataAsset::operator ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>*() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>* Oculus::Interaction::Body::Input::BodyDataAsset::i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Body__Input__BodyDataAsset__() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Input::BodyDataAsset::BodyDataAsset()   {
}
