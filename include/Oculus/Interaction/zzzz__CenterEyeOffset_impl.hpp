#pragma once
// IWYU pragma private; include "Oculus/Interaction/CenterEyeOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__CenterEyeOffset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.get_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHmd* (::Oculus::Interaction::CenterEyeOffset::*)()>(&::Oculus::Interaction::CenterEyeOffset::get_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"get_Hmd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.set_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::CenterEyeOffset::set_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47b638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)()>(&::Oculus::Interaction::CenterEyeOffset::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)()>(&::Oculus::Interaction::CenterEyeOffset::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa47b698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)()>(&::Oculus::Interaction::CenterEyeOffset::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47b6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)()>(&::Oculus::Interaction::CenterEyeOffset::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47b7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.HandleUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)()>(&::Oculus::Interaction::CenterEyeOffset::HandleUpdated)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa47b8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"HandleUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.GetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::CenterEyeOffset::GetOffset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa47b9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.GetWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::CenterEyeOffset::GetWorldPose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa47b9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.InjectOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::CenterEyeOffset::InjectOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47ba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.InjectRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::CenterEyeOffset::InjectRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47ba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.InjectAllCenterEyeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)(::Oculus::Interaction::Input::IHmd*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Oculus::Interaction::CenterEyeOffset::InjectAllCenterEyeOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa47ba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectAllCenterEyeOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset.InjectHmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::CenterEyeOffset::InjectHmd)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa47bab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CenterEyeOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CenterEyeOffset::*)()>(&::Oculus::Interaction::CenterEyeOffset::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa47bb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::CenterEyeOffset::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__Hmd_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__Hmd_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr void Oculus::Interaction::CenterEyeOffset::__cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hmd_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void Oculus::Interaction::CenterEyeOffset::__cordl_internal_set__offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr void Oculus::Interaction::CenterEyeOffset::__cordl_internal_set__rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotation = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__cachedPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__cachedPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr void Oculus::Interaction::CenterEyeOffset::__cordl_internal_set__cachedPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedPose = value;
}
constexpr bool& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::CenterEyeOffset::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::CenterEyeOffset::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::CenterEyeOffset::get_Hmd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"get_Hmd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHmd*>(this, ___internal_method);
}
inline void Oculus::Interaction::CenterEyeOffset::set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::CenterEyeOffset::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::CenterEyeOffset::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::CenterEyeOffset::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::CenterEyeOffset::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::CenterEyeOffset::HandleUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"HandleUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::CenterEyeOffset::GetOffset(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::CenterEyeOffset::GetWorldPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::CenterEyeOffset::InjectOffset(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Oculus::Interaction::CenterEyeOffset::InjectRotation(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotation);
}
inline void Oculus::Interaction::CenterEyeOffset::InjectAllCenterEyeOffset(::Oculus::Interaction::Input::IHmd*  hmd, ::UnityEngine::Vector3  offset, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectAllCenterEyeOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd, offset, rotation);
}
inline void Oculus::Interaction::CenterEyeOffset::InjectHmd(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::CenterEyeOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CenterEyeOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::CenterEyeOffset* Oculus::Interaction::CenterEyeOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::CenterEyeOffset*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::CenterEyeOffset::CenterEyeOffset()   {
}
