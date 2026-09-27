#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ShadowHand.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ShadowHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)()>(&::Oculus::Interaction::Input::ShadowHand::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa512734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.GetLocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::ShadowHand::GetLocalPose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa5128d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetLocalPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.SetLocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Pose)>(&::Oculus::Interaction::Input::ShadowHand::SetLocalPose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa512910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetLocalPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.GetWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::ShadowHand::GetWorldPose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa512a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.GetWorldPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Pose> (::Oculus::Interaction::Input::ShadowHand::*)()>(&::Oculus::Interaction::Input::ShadowHand::GetWorldPoses)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa512c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetWorldPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.GetRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::ShadowHand::*)()>(&::Oculus::Interaction::Input::ShadowHand::GetRoot)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa512c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.SetRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Input::ShadowHand::SetRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa512c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetRoot", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.GetRootScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::ShadowHand::*)()>(&::Oculus::Interaction::Input::ShadowHand::GetRootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa512c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetRootScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.SetRootScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(float_t)>(&::Oculus::Interaction::Input::ShadowHand::SetRootScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa512ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetRootScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.CheckDirtyBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ShadowHand::*)(int32_t)>(&::Oculus::Interaction::Input::ShadowHand::CheckDirtyBit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa512cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"CheckDirtyBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.SetDirtyBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(int32_t)>(&::Oculus::Interaction::Input::ShadowHand::SetDirtyBit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa512cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetDirtyBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.ClearDirtyBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(int32_t)>(&::Oculus::Interaction::Input::ShadowHand::ClearDirtyBit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa512cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"ClearDirtyBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.MarkDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::ShadowHand::MarkDirty)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa51295c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"MarkDirty", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.UpdateDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::ShadowHand::UpdateDirty)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa512a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"UpdateDirty", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHand.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*)>(&::Oculus::Interaction::Input::ShadowHand::Copy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa512cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"Copy", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__localJointMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localJointMap;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__localJointMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localJointMap;
}
constexpr void Oculus::Interaction::Input::ShadowHand::__cordl_internal_set__localJointMap(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localJointMap = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__worldJointMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldJointMap;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__worldJointMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldJointMap;
}
constexpr void Oculus::Interaction::Input::ShadowHand::__cordl_internal_set__worldJointMap(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldJointMap = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__rootPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__rootPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPose;
}
constexpr void Oculus::Interaction::Input::ShadowHand::__cordl_internal_set__rootPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootPose = value;
}
constexpr float_t& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__rootScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootScale;
}
constexpr float_t const& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__rootScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootScale;
}
constexpr void Oculus::Interaction::Input::ShadowHand::__cordl_internal_set__rootScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootScale = value;
}
constexpr uint64_t& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__dirtyMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyMap;
}
constexpr uint64_t const& Oculus::Interaction::Input::ShadowHand::__cordl_internal_get__dirtyMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyMap;
}
constexpr void Oculus::Interaction::Input::ShadowHand::__cordl_internal_set__dirtyMap(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirtyMap = value;
}
inline void Oculus::Interaction::Input::ShadowHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::ShadowHand::GetLocalPose(::Oculus::Interaction::Input::HandJointId  handJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetLocalPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, handJointId);
}
inline void Oculus::Interaction::Input::ShadowHand::SetLocalPose(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetLocalPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId, pose);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::ShadowHand::GetWorldPose(::Oculus::Interaction::Input::HandJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::ArrayW<::UnityEngine::Pose> Oculus::Interaction::Input::ShadowHand::GetWorldPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetWorldPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Pose>>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::ShadowHand::GetRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ShadowHand::SetRoot(::UnityEngine::Pose  rootPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetRoot", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootPose);
}
inline float_t Oculus::Interaction::Input::ShadowHand::GetRootScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"GetRootScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ShadowHand::SetRootScale(float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetRootScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline bool Oculus::Interaction::Input::ShadowHand::CheckDirtyBit(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"CheckDirtyBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline void Oculus::Interaction::Input::ShadowHand::SetDirtyBit(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"SetDirtyBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void Oculus::Interaction::Input::ShadowHand::ClearDirtyBit(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"ClearDirtyBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void Oculus::Interaction::Input::ShadowHand::MarkDirty(::Oculus::Interaction::Input::HandJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"MarkDirty", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId);
}
inline void Oculus::Interaction::Input::ShadowHand::UpdateDirty(::Oculus::Interaction::Input::HandJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"UpdateDirty", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId);
}
inline void Oculus::Interaction::Input::ShadowHand::Copy(::Oculus::Interaction::Input::ShadowHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHand*>(),
                        {"Copy", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline ::Oculus::Interaction::Input::ShadowHand* Oculus::Interaction::Input::ShadowHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::ShadowHand*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ShadowHand::ShadowHand()   {
}
