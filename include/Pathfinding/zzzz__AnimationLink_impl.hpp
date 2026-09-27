#pragma once
// IWYU pragma private; include "Pathfinding/AnimationLink.hpp"
#include "Pathfinding/zzzz__NodeLink2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__AnimationLink_def.hpp"
#include "Pathfinding/zzzz__AnimationLink_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::AnimationLink.SearchRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::StringW)>(&::Pathfinding::AnimationLink::SearchRec)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e529c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink*>(),
                        {"SearchRec", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AnimationLink.CalculateOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AnimationLink::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::by_ref<::UnityEngine::Vector3>)>(&::Pathfinding::AnimationLink::CalculateOffsets)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x5e52ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink*>(),
                        {"CalculateOffsets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AnimationLink.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AnimationLink::*)()>(&::Pathfinding::AnimationLink::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e5326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AnimationLink*>(),
                    {::i2c::class_of<::Pathfinding::AnimationLink*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AnimationLink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AnimationLink::*)()>(&::Pathfinding::AnimationLink::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e5340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Pathfinding::AnimationLink::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::StringW const& Pathfinding::AnimationLink::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void Pathfinding::AnimationLink::__cordl_internal_set_clip(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
constexpr float_t& Pathfinding::AnimationLink::__cordl_internal_get_animSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr float_t const& Pathfinding::AnimationLink::__cordl_internal_get_animSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr void Pathfinding::AnimationLink::__cordl_internal_set_animSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animSpeed = value;
}
constexpr bool& Pathfinding::AnimationLink::__cordl_internal_get_reverseAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseAnim;
}
constexpr bool const& Pathfinding::AnimationLink::__cordl_internal_get_reverseAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseAnim;
}
constexpr void Pathfinding::AnimationLink::__cordl_internal_set_reverseAnim(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseAnim = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::AnimationLink::__cordl_internal_get_referenceMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::AnimationLink::__cordl_internal_get_referenceMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceMesh;
}
constexpr void Pathfinding::AnimationLink::__cordl_internal_set_referenceMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceMesh = value;
}
constexpr ::ArrayW<::Pathfinding::AnimationLink_LinkClip*>& Pathfinding::AnimationLink::__cordl_internal_get_sequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr ::ArrayW<::Pathfinding::AnimationLink_LinkClip*> const& Pathfinding::AnimationLink::__cordl_internal_get_sequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr void Pathfinding::AnimationLink::__cordl_internal_set_sequence(::ArrayW<::Pathfinding::AnimationLink_LinkClip*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequence = value;
}
constexpr ::StringW& Pathfinding::AnimationLink::__cordl_internal_get_boneRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneRoot;
}
constexpr ::StringW const& Pathfinding::AnimationLink::__cordl_internal_get_boneRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneRoot;
}
constexpr void Pathfinding::AnimationLink::__cordl_internal_set_boneRoot(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneRoot = value;
}
inline ::UnityW<::UnityEngine::Transform> Pathfinding::AnimationLink::SearchRec(::UnityEngine::Transform*  tr, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink*>(),
                        {"SearchRec", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, tr, name);
}
inline void Pathfinding::AnimationLink::CalculateOffsets(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  trace, ::by_ref<::UnityEngine::Vector3>  endPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink*>(),
                        {"CalculateOffsets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trace, endPosition);
}
inline void Pathfinding::AnimationLink::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AnimationLink*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AnimationLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AnimationLink* Pathfinding::AnimationLink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AnimationLink*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AnimationLink::AnimationLink()   {
}
//  Writing Method size for method: ::Pathfinding::AnimationLink_LinkClip.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::AnimationLink_LinkClip::*)()>(&::Pathfinding::AnimationLink_LinkClip::get_name)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e534a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink_LinkClip*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AnimationLink_LinkClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AnimationLink_LinkClip::*)()>(&::Pathfinding::AnimationLink_LinkClip::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e5353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink_LinkClip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AnimationClip>& Pathfinding::AnimationLink_LinkClip::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Pathfinding::AnimationLink_LinkClip::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void Pathfinding::AnimationLink_LinkClip::__cordl_internal_set_clip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AnimationLink_LinkClip::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AnimationLink_LinkClip::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Pathfinding::AnimationLink_LinkClip::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr int32_t& Pathfinding::AnimationLink_LinkClip::__cordl_internal_get_loopCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCount;
}
constexpr int32_t const& Pathfinding::AnimationLink_LinkClip::__cordl_internal_get_loopCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCount;
}
constexpr void Pathfinding::AnimationLink_LinkClip::__cordl_internal_set_loopCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopCount = value;
}
inline ::StringW Pathfinding::AnimationLink_LinkClip::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink_LinkClip*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::AnimationLink_LinkClip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AnimationLink_LinkClip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AnimationLink_LinkClip* Pathfinding::AnimationLink_LinkClip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AnimationLink_LinkClip*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AnimationLink_LinkClip::AnimationLink_LinkClip()   {
}
