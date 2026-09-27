#pragma once
// IWYU pragma private; include "GlobalNamespace/GRGameEntityInteractionPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRGameEntityInteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRGameEntityInteractionPoint.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGameEntityInteractionPoint::*)()>(&::GlobalNamespace::GRGameEntityInteractionPoint::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x589b7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGameEntityInteractionPoint.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGameEntityInteractionPoint::*)()>(&::GlobalNamespace::GRGameEntityInteractionPoint::OnEnable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x589b7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGameEntityInteractionPoint.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGameEntityInteractionPoint::*)()>(&::GlobalNamespace::GRGameEntityInteractionPoint::OnDisable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x589b938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGameEntityInteractionPoint.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGameEntityInteractionPoint::*)()>(&::GlobalNamespace::GRGameEntityInteractionPoint::OnGrabbed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x589ba94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGameEntityInteractionPoint.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGameEntityInteractionPoint::*)()>(&::GlobalNamespace::GRGameEntityInteractionPoint::OnReleased)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x589bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGameEntityInteractionPoint.TickWhileHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGameEntityInteractionPoint::*)()>(&::GlobalNamespace::GRGameEntityInteractionPoint::TickWhileHeld)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x589bd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"TickWhileHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGameEntityInteractionPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGameEntityInteractionPoint::*)()>(&::GlobalNamespace::GRGameEntityInteractionPoint::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x589c008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr float_t& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_autoReleaseDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoReleaseDistance;
}
constexpr float_t const& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_autoReleaseDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoReleaseDistance;
}
constexpr void GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_set_autoReleaseDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoReleaseDistance = value;
}
constexpr ::System::Action*& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_OnGrabStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabStart;
}
constexpr ::System::Action* const& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_OnGrabStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabStart;
}
constexpr void GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_set_OnGrabStart(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabStart = value;
}
constexpr ::System::Action*& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_OnGrabContinue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabContinue;
}
constexpr ::System::Action* const& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_OnGrabContinue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabContinue;
}
constexpr void GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_set_OnGrabContinue(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabContinue = value;
}
constexpr ::System::Action*& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_OnGrabEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabEnd;
}
constexpr ::System::Action* const& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_OnGrabEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabEnd;
}
constexpr void GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_set_OnGrabEnd(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabEnd = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_targetParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_get_targetParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParent;
}
constexpr void GlobalNamespace::GRGameEntityInteractionPoint::__cordl_internal_set_targetParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetParent = value;
}
inline void GlobalNamespace::GRGameEntityInteractionPoint::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRGameEntityInteractionPoint::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRGameEntityInteractionPoint::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRGameEntityInteractionPoint::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRGameEntityInteractionPoint::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRGameEntityInteractionPoint::TickWhileHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {"TickWhileHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRGameEntityInteractionPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGameEntityInteractionPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRGameEntityInteractionPoint* GlobalNamespace::GRGameEntityInteractionPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRGameEntityInteractionPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRGameEntityInteractionPoint::GRGameEntityInteractionPoint()   {
}
