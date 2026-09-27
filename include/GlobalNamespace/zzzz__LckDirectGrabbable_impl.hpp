#pragma once
// IWYU pragma private; include "GlobalNamespace/LckDirectGrabbable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LckDirectGrabbable_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__IGorillaGrabable_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.add_onGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::System::Action*)>(&::GlobalNamespace::LckDirectGrabbable::add_onGrabbed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c2d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"add_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.remove_onGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::System::Action*)>(&::GlobalNamespace::LckDirectGrabbable::remove_onGrabbed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c58ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"remove_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.add_onReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::System::Action*)>(&::GlobalNamespace::LckDirectGrabbable::add_onReleased)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"add_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.remove_onReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::System::Action*)>(&::GlobalNamespace::LckDirectGrabbable::remove_onReleased)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c51d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"remove_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.get_grabber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaGrabber> (::GlobalNamespace::LckDirectGrabbable::*)()>(&::GlobalNamespace::LckDirectGrabbable::get_grabber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c5948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"get_grabber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.get_isGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckDirectGrabbable::*)()>(&::GlobalNamespace::LckDirectGrabbable::get_isGrabbed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56c49ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"get_isGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.GetLocalGrabbedPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LckDirectGrabbable::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::LckDirectGrabbable::GetLocalGrabbedPosition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56c5950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"GetLocalGrabbedPosition", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckDirectGrabbable::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::LckDirectGrabbable::CanBeGrabbed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56c5a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"CanBeGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::GlobalNamespace::GorillaGrabber*, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::LckDirectGrabbable::OnGrabbed)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x56c5aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.OnGrabReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::LckDirectGrabbable::OnGrabReleased)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56c5ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.ForceGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::LckDirectGrabbable::ForceGrab)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56c4ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"ForceGrab", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.ForceRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)()>(&::GlobalNamespace::LckDirectGrabbable::ForceRelease)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56c4e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"ForceRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.IsSlingshotHeldInHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckDirectGrabbable::*)(::by_ref<bool>, ::by_ref<bool>)>(&::GlobalNamespace::LckDirectGrabbable::IsSlingshotHeldInHand)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x56c5d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"IsSlingshotHeldInHand", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.SetOriginalTargetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::LckDirectGrabbable::SetOriginalTargetParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c5f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"SetOriginalTargetParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.MomentaryGrabOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckDirectGrabbable::*)()>(&::GlobalNamespace::LckDirectGrabbable::MomentaryGrabOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c5f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckDirectGrabbable::*)()>(&::GlobalNamespace::LckDirectGrabbable::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56c5f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckDirectGrabbable.GorillaLocomotion_Gameplay_IGorillaGrabable_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LckDirectGrabbable::*)()>(&::GlobalNamespace::LckDirectGrabbable::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c6024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_onGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrabbed;
}
constexpr ::System::Action* const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_onGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrabbed;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set_onGrabbed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGrabbed = value;
}
constexpr ::System::Action*& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_onReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReleased;
}
constexpr ::System::Action* const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_onReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReleased;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set_onReleased(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReleased = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_OnTabletGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabletGrabbed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_OnTabletGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabletGrabbed;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set_OnTabletGrabbed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTabletGrabbed = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_OnTabletReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabletReleased;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_OnTabletReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabletReleased;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set_OnTabletReleased(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTabletReleased = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get__originalTargetParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalTargetParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get__originalTargetParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalTargetParent;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set__originalTargetParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalTargetParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get__precise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____precise;
}
constexpr bool const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get__precise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____precise;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set__precise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____precise = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGrabber>& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get__grabber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabber;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGrabber> const& GlobalNamespace::LckDirectGrabbable::__cordl_internal_get__grabber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabber;
}
constexpr void GlobalNamespace::LckDirectGrabbable::__cordl_internal_set__grabber(::UnityW<::GlobalNamespace::GorillaGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabber = value;
}
inline void GlobalNamespace::LckDirectGrabbable::add_onGrabbed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"add_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckDirectGrabbable::remove_onGrabbed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"remove_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckDirectGrabbable::add_onReleased(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"add_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckDirectGrabbable::remove_onReleased(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"remove_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GorillaGrabber> GlobalNamespace::LckDirectGrabbable::get_grabber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"get_grabber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaGrabber>>(this, ___internal_method);
}
inline bool GlobalNamespace::LckDirectGrabbable::get_isGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"get_isGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LckDirectGrabbable::GetLocalGrabbedPosition(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"GetLocalGrabbedPosition", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, grabber);
}
inline bool GlobalNamespace::LckDirectGrabbable::CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"CanBeGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabber);
}
inline void GlobalNamespace::LckDirectGrabbable::OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber, grabbedTransform, localGrabbedPosition);
}
inline void GlobalNamespace::LckDirectGrabbable::OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber);
}
inline void GlobalNamespace::LckDirectGrabbable::ForceGrab(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"ForceGrab", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber);
}
inline void GlobalNamespace::LckDirectGrabbable::ForceRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"ForceRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckDirectGrabbable::IsSlingshotHeldInHand(::by_ref<bool>  leftHand, ::by_ref<bool>  rightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"IsSlingshotHeldInHand", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftHand, rightHand);
}
inline void GlobalNamespace::LckDirectGrabbable::SetOriginalTargetParent(::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"SetOriginalTargetParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline bool GlobalNamespace::LckDirectGrabbable::MomentaryGrabOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LckDirectGrabbable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LckDirectGrabbable::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckDirectGrabbable*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::LckDirectGrabbable* GlobalNamespace::LckDirectGrabbable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckDirectGrabbable*>());
}
/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr  GlobalNamespace::LckDirectGrabbable::operator ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* GlobalNamespace::LckDirectGrabbable::i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckDirectGrabbable::LckDirectGrabbable()   {
}
