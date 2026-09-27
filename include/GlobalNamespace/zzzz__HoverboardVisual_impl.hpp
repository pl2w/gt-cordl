#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HoverboardVisual_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__HoverboardAudio_def.hpp"
#include "GlobalNamespace/zzzz__HoverboardHandle_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.get_boardColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::get_boardColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5956e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_boardColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.set_boardColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(::UnityEngine::Color)>(&::GlobalNamespace::HoverboardVisual::set_boardColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5956e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_boardColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5956e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.get_IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::get_IsHeld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5956f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_IsHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.set_IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(bool)>(&::GlobalNamespace::HoverboardVisual::set_IsHeld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5956f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_IsHeld", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.get_IsLeftHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::get_IsLeftHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5956fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_IsLeftHanded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.set_IsLeftHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(bool)>(&::GlobalNamespace::HoverboardVisual::set_IsLeftHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5956fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_IsLeftHanded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.get_NominalLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::get_NominalLocalPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5956fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_NominalLocalPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.set_NominalLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::HoverboardVisual::set_NominalLocalPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5956fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_NominalLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.get_NominalLocalRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::get_NominalLocalRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5956fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_NominalLocalRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.set_NominalLocalRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::HoverboardVisual::set_NominalLocalRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5956fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_NominalLocalRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.get_NominalParentTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::get_NominalParentTransform)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5956fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_NominalParentTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.SetIsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Color)>(&::GlobalNamespace::HoverboardVisual::SetIsHeld)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x59564c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetIsHeld", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.SetNotHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(bool)>(&::GlobalNamespace::HoverboardVisual::SetNotHeld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5957044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetNotHeld", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.SetNotHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::SetNotHeld)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x59569a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetNotHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.ICallBack_CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::ICallBack_CallBack)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x595704c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"ICallBack.CallBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.PlayGrindHaptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::PlayGrindHaptic)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59575d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"PlayGrindHaptic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.PlayCarveHaptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(float_t)>(&::GlobalNamespace::HoverboardVisual::PlayCarveHaptic)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5957688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"PlayCarveHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.ProxyGrabHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(bool)>(&::GlobalNamespace::HoverboardVisual::ProxyGrabHandle)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5957750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"ProxyGrabHandle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.DropFreeBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::DropFreeBoard)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5956888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"DropFreeBoard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.SetRaceDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(::StringW)>(&::GlobalNamespace::HoverboardVisual::SetRaceDisplay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59577c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetRaceDisplay", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual.SetRaceLapsDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)(::StringW)>(&::GlobalNamespace::HoverboardVisual::SetRaceLapsDisplay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5957854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetRaceLapsDisplay", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardVisual::*)()>(&::GlobalNamespace::HoverboardVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59578e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_parentRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_parentRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentRig;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_parentRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentRig = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardAudio>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_hoverboardAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardAudio;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardAudio> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_hoverboardAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardAudio;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_hoverboardAudio(::UnityW<::GlobalNamespace::HoverboardAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardHandle>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_handlePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handlePosition;
}
constexpr ::UnityW<::GlobalNamespace::HoverboardHandle> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_handlePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handlePosition;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_handlePosition(::UnityW<::GlobalNamespace::HoverboardHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handlePosition = value;
}
constexpr float_t& GlobalNamespace::HoverboardVisual::__cordl_internal_get_grindHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grindHapticStrength;
}
constexpr float_t const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_grindHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grindHapticStrength;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_grindHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grindHapticStrength = value;
}
constexpr float_t& GlobalNamespace::HoverboardVisual::__cordl_internal_get_grindHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grindHapticDuration;
}
constexpr float_t const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_grindHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grindHapticDuration;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_grindHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grindHapticDuration = value;
}
constexpr float_t& GlobalNamespace::HoverboardVisual::__cordl_internal_get_carveHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carveHapticStrength;
}
constexpr float_t const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_carveHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carveHapticStrength;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_carveHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___carveHapticStrength = value;
}
constexpr float_t& GlobalNamespace::HoverboardVisual::__cordl_internal_get_carveHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carveHapticDuration;
}
constexpr float_t const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_carveHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carveHapticDuration;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_carveHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___carveHapticDuration = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_boardMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boardMesh;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_boardMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boardMesh;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_boardMesh(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boardMesh = value;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_handleInteractionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleInteractionPoint;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_handleInteractionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleInteractionPoint;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_handleInteractionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleInteractionPoint = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_racePositionReadout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___racePositionReadout;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_racePositionReadout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___racePositionReadout;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_racePositionReadout(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___racePositionReadout = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_raceLapsReadout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceLapsReadout;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_raceLapsReadout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceLapsReadout;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_raceLapsReadout(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceLapsReadout = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::HoverboardVisual::__cordl_internal_get_colorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_colorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorMaterial;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_colorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorMaterial = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::HoverboardVisual::__cordl_internal_get__boardColor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boardColor_k__BackingField;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::HoverboardVisual::__cordl_internal_get__boardColor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boardColor_k__BackingField;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set__boardColor_k__BackingField(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boardColor_k__BackingField = value;
}
constexpr bool& GlobalNamespace::HoverboardVisual::__cordl_internal_get__IsHeld_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsHeld_k__BackingField;
}
constexpr bool const& GlobalNamespace::HoverboardVisual::__cordl_internal_get__IsHeld_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsHeld_k__BackingField;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set__IsHeld_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsHeld_k__BackingField = value;
}
constexpr bool& GlobalNamespace::HoverboardVisual::__cordl_internal_get__IsLeftHanded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLeftHanded_k__BackingField;
}
constexpr bool const& GlobalNamespace::HoverboardVisual::__cordl_internal_get__IsLeftHanded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLeftHanded_k__BackingField;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set__IsLeftHanded_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsLeftHanded_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HoverboardVisual::__cordl_internal_get__NominalLocalPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NominalLocalPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HoverboardVisual::__cordl_internal_get__NominalLocalPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NominalLocalPosition_k__BackingField;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set__NominalLocalPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NominalLocalPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::HoverboardVisual::__cordl_internal_get__NominalLocalRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NominalLocalRotation_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::HoverboardVisual::__cordl_internal_get__NominalLocalRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NominalLocalRotation_k__BackingField;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set__NominalLocalRotation_k__BackingField(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NominalLocalRotation_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HoverboardVisual::__cordl_internal_get_interpolatedLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatedLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_interpolatedLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatedLocalPosition;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_interpolatedLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolatedLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::HoverboardVisual::__cordl_internal_get_interpolatedLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatedLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_interpolatedLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatedLocalRotation;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_interpolatedLocalRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolatedLocalRotation = value;
}
constexpr float_t& GlobalNamespace::HoverboardVisual::__cordl_internal_get_lerpIntoHandDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpIntoHandDuration;
}
constexpr float_t const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_lerpIntoHandDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpIntoHandDuration;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_lerpIntoHandDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpIntoHandDuration = value;
}
constexpr float_t& GlobalNamespace::HoverboardVisual::__cordl_internal_get_positionLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionLerpSpeed;
}
constexpr float_t const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_positionLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionLerpSpeed;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_positionLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionLerpSpeed = value;
}
constexpr float_t& GlobalNamespace::HoverboardVisual::__cordl_internal_get_rotationLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationLerpSpeed;
}
constexpr float_t const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_rotationLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationLerpSpeed;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_rotationLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationLerpSpeed = value;
}
constexpr bool& GlobalNamespace::HoverboardVisual::__cordl_internal_get_isCallbackActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCallbackActive;
}
constexpr bool const& GlobalNamespace::HoverboardVisual::__cordl_internal_get_isCallbackActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCallbackActive;
}
constexpr void GlobalNamespace::HoverboardVisual::__cordl_internal_set_isCallbackActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCallbackActive = value;
}
inline ::UnityEngine::Color GlobalNamespace::HoverboardVisual::get_boardColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_boardColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::set_boardColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_boardColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HoverboardVisual::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HoverboardVisual::get_IsHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_IsHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::set_IsHeld(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_IsHeld", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::HoverboardVisual::get_IsLeftHanded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_IsLeftHanded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::set_IsLeftHanded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_IsLeftHanded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::HoverboardVisual::get_NominalLocalPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_NominalLocalPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::set_NominalLocalPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_NominalLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion GlobalNamespace::HoverboardVisual::get_NominalLocalRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_NominalLocalRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::set_NominalLocalRotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"set_NominalLocalRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::HoverboardVisual::get_NominalParentTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"get_NominalParentTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::SetIsHeld(bool  isHeldLeftHanded, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Color  boardColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetIsHeld", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isHeldLeftHanded, localPosition, localRotation, boardColor);
}
inline void GlobalNamespace::HoverboardVisual::SetNotHeld(bool  isLeftHanded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetNotHeld", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHanded);
}
inline void GlobalNamespace::HoverboardVisual::SetNotHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetNotHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::ICallBack_CallBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"ICallBack.CallBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::PlayGrindHaptic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"PlayGrindHaptic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::PlayCarveHaptic(float_t  carveForce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"PlayCarveHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, carveForce);
}
inline void GlobalNamespace::HoverboardVisual::ProxyGrabHandle(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"ProxyGrabHandle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::HoverboardVisual::DropFreeBoard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"DropFreeBoard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardVisual::SetRaceDisplay(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetRaceDisplay", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::HoverboardVisual::SetRaceLapsDisplay(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {"SetRaceLapsDisplay", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::HoverboardVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoverboardVisual* GlobalNamespace::HoverboardVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoverboardVisual*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GlobalNamespace::HoverboardVisual::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GlobalNamespace::HoverboardVisual::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoverboardVisual::HoverboardVisual()   {
}
