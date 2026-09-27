#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/WallPenetrationTunneling.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__WallPenetrationTunneling_def.hpp"
#include "Oculus/Interaction/zzzz__TunnelingEffect_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.get_PenetrationFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_PenetrationFov)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_PenetrationFov", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.set_PenetrationFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_PenetrationFov)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_PenetrationFov", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.get_ExtraDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_ExtraDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_ExtraDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.set_ExtraDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(float_t)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_ExtraDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_ExtraDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.get_IgnoreTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_IgnoreTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_IgnoreTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.set_IgnoreTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::StringW)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_IgnoreTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_IgnoreTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.get_LayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_LayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_LayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.set_LayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::UnityEngine::LayerMask)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_LayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d17dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_LayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4d17e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d183c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::LateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4d1868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.CalculatePenetration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::by_ref<float_t>)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::CalculatePenetration)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xa4d1898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"CalculatePenetration", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.UpdateTunneling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(bool, float_t)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::UpdateTunneling)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa4d1c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"UpdateTunneling", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.InjectAllWallPenetrationTunneling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::Oculus::Interaction::TunnelingEffect*, int32_t)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectAllWallPenetrationTunneling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4d1db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectAllWallPenetrationTunneling", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::TunnelingEffect*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.InjectTrackedPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectTrackedPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectTrackedPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.InjectLogicalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectLogicalPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectLogicalPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.InjectTunneling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(::Oculus::Interaction::TunnelingEffect*)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectTunneling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectTunneling", {}, {::i2c::type_of<::Oculus::Interaction::TunnelingEffect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling.InjectMaxCollidersCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)(int32_t)>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectMaxCollidersCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectMaxCollidersCheck", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WallPenetrationTunneling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WallPenetrationTunneling::*)()>(&::Oculus::Interaction::Locomotion::WallPenetrationTunneling::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4d1e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__trackedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackedPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__trackedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackedPosition;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__trackedPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackedPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__logicalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__logicalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalPosition;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__logicalPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logicalPosition = value;
}
constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect>& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__tunneling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tunneling;
}
constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect> const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__tunneling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tunneling;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__tunneling(::UnityW<::Oculus::Interaction::TunnelingEffect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tunneling = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__penetrationFov()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____penetrationFov;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__penetrationFov() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____penetrationFov;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__penetrationFov(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____penetrationFov = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__extraDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraDistance;
}
constexpr float_t const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__extraDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraDistance;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__extraDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extraDistance = value;
}
constexpr int32_t& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__maxCollidersCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxCollidersCheck;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__maxCollidersCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxCollidersCheck;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__maxCollidersCheck(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxCollidersCheck = value;
}
constexpr ::StringW& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__ignoreTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreTag;
}
constexpr ::StringW const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__ignoreTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreTag;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__ignoreTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreTag = value;
}
constexpr ::UnityEngine::LayerMask& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerMask = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hits;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hits = value;
}
constexpr bool& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::WallPenetrationTunneling::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_PenetrationFov()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_PenetrationFov", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_PenetrationFov(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_PenetrationFov", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_ExtraDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_ExtraDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_ExtraDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_ExtraDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_IgnoreTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_IgnoreTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_IgnoreTag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_IgnoreTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask Oculus::Interaction::Locomotion::WallPenetrationTunneling::get_LayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"get_LayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::set_LayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"set_LayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::WallPenetrationTunneling::CalculatePenetration(::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"CalculatePenetration", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, distance);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::UpdateTunneling(bool  headBlocked, float_t  penetrationDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"UpdateTunneling", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headBlocked, penetrationDistance);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectAllWallPenetrationTunneling(::UnityEngine::Transform*  trackedPosition, ::UnityEngine::Transform*  logicalPosition, ::Oculus::Interaction::TunnelingEffect*  tunneling, int32_t  maxCollidersCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectAllWallPenetrationTunneling", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::TunnelingEffect*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackedPosition, logicalPosition, tunneling, maxCollidersCheck);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectTrackedPosition(::UnityEngine::Transform*  trackedPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectTrackedPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackedPosition);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectLogicalPosition(::UnityEngine::Transform*  logicalPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectLogicalPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logicalPosition);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectTunneling(::Oculus::Interaction::TunnelingEffect*  tunneling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectTunneling", {}, {::i2c::type_of<::Oculus::Interaction::TunnelingEffect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tunneling);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::InjectMaxCollidersCheck(int32_t  maxCollidersCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {"InjectMaxCollidersCheck", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxCollidersCheck);
}
inline void Oculus::Interaction::Locomotion::WallPenetrationTunneling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::WallPenetrationTunneling* Oculus::Interaction::Locomotion::WallPenetrationTunneling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::WallPenetrationTunneling*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::WallPenetrationTunneling::WallPenetrationTunneling()   {
}
