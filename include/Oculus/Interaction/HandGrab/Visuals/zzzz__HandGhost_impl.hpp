#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandGhost.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandGhost_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandPuppet_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::get_Root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e54dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4e54e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::OnValidate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa4e5574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4e570c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.SetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)(::Oculus::Interaction::HandGrab::HandGrabPose*)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::SetPose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4e5694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"SetPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.SetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)(::Oculus::Interaction::HandGrab::HandPose*, ::UnityEngine::Pose)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::SetPose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4e5a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"SetPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.SetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)(::UnityEngine::Pose, ::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::SetRootPose)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4e5940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"SetRootPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.InjectAllHandGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectAllHandGhost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectAllHandGhost", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.InjectHandPuppet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectHandPuppet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectHandPuppet", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.InjectOptionalHandGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)(::Oculus::Interaction::HandGrab::HandGrabPose*)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectOptionalHandGrabPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectOptionalHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost.InjectOptionalRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectOptionalRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectOptionalRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhost._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhost::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandGhost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet>& Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_get__puppet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puppet;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet> const& Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_get__puppet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puppet;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_set__puppet(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____puppet = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>& Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_get__handGrabPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabPose;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> const& Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_get__handGrabPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabPose;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandGhost::__cordl_internal_set__handGrabPose(::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabPose = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::Visuals::HandGhost::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::SetPose(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"SetPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabPose);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::SetPose(::Oculus::Interaction::HandGrab::HandPose*  userPose, ::UnityEngine::Pose  rootPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"SetPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userPose, rootPose);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::SetRootPose(::UnityEngine::Pose  rootPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"SetRootPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootPose, relativeTo);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectAllHandGhost(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*  puppet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectAllHandGhost", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, puppet);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectHandPuppet(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*  puppet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectHandPuppet", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, puppet);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectOptionalHandGrabPose(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectOptionalHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabPose);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::InjectOptionalRoot(::UnityEngine::Transform*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {"InjectOptionalRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhost::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::Visuals::HandGhost* Oculus::Interaction::HandGrab::Visuals::HandGhost::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Visuals::HandGhost*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Visuals::HandGhost::HandGhost()   {
}
