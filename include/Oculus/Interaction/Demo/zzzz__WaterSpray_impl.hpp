#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/WaterSpray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__SnapAxis_impl.hpp"
#include "Oculus/Interaction/Demo/zzzz__WaterSpray_def.hpp"
#include "Oculus/Interaction/Demo/zzzz__MeshBlit_def.hpp"
#include "Oculus/Interaction/Demo/zzzz__WaterSpray_NozzleMode_def.hpp"
#include "Oculus/Interaction/Demo/zzzz__WaterSpray_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabUseDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.SprayWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::SprayWater)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa42fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"SprayWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.UpdateTriggerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)(float_t)>(&::Oculus::Interaction::Demo::WaterSpray::UpdateTriggerRotation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa42ff48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"UpdateTriggerRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.GetNozzleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WaterSpray_NozzleMode (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::GetNozzleMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa42fe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"GetNozzleMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.Spray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::Spray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa42feec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"Spray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.Stream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::Stream)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa42ff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"Stream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.StampRoutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Demo::WaterSpray::*)(int32_t, float_t, float_t, float_t)>(&::Oculus::Interaction::Demo::WaterSpray::StampRoutine)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa42ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"StampRoutine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.StartStamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::StartStamping)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa430078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"StartStamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.StartDrying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::StartDrying)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4300ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"StartDrying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.Stamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)(::UnityEngine::Pose, float_t, float_t, float_t)>(&::Oculus::Interaction::Demo::WaterSpray::Stamp)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xa4301b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"Stamp", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.RenderSplash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Demo::WaterSpray::RenderSplash)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa43087c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"RenderSplash", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.CreateMeshBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Demo::MeshBlit> (::Oculus::Interaction::Demo::WaterSpray::*)(::UnityEngine::MeshFilter*)>(&::Oculus::Interaction::Demo::WaterSpray::CreateMeshBlit)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa430ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"CreateMeshBlit", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.CreateStampMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Oculus::Interaction::Demo::WaterSpray::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Demo::WaterSpray::CreateStampMatrix)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa43052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"CreateStampMatrix", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::OnDestroy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa430e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.BeginUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::BeginUse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa431144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"BeginUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.EndUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::EndUse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa431164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"EndUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.ComputeUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Demo::WaterSpray::*)(float_t)>(&::Oculus::Interaction::Demo::WaterSpray::ComputeUseStrength)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa431168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray.UpdateTriggerProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)(float_t)>(&::Oculus::Interaction::Demo::WaterSpray::UpdateTriggerProgress)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa431210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"UpdateTriggerProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray::*)()>(&::Oculus::Interaction::Demo::WaterSpray::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa43126c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__trigger(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trigger = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__nozzle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nozzle;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__nozzle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nozzle;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__nozzle(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nozzle = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__triggerRotationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerRotationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__triggerRotationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerRotationCurve;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__triggerRotationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerRotationCurve = value;
}
constexpr ::UnityEngine::SnapAxis& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::UnityEngine::SnapAxis const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__axis(::UnityEngine::SnapAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__releaseThresold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseThresold;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__releaseThresold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseThresold;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__releaseThresold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____releaseThresold = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__fireThresold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireThresold;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__fireThresold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireThresold;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__fireThresold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fireThresold = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__triggerSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerSpeed;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__triggerSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerSpeed;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__triggerSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__strengthCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strengthCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__strengthCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strengthCurve;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__strengthCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strengthCurve = value;
}
constexpr ::UnityEngine::LayerMask& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__raycastLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastLayerMask;
}
constexpr ::UnityEngine::LayerMask const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__raycastLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastLayerMask;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__raycastLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastLayerMask = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__spraySpreadAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spraySpreadAngle;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__spraySpreadAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spraySpreadAngle;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__spraySpreadAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spraySpreadAngle = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__streamSpreadAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamSpreadAngle;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__streamSpreadAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamSpreadAngle;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__streamSpreadAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamSpreadAngle = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayStrength;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayStrength;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__sprayStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sprayStrength = value;
}
constexpr int32_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayHits;
}
constexpr int32_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayHits;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__sprayHits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sprayHits = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayRandomness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayRandomness;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayRandomness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayRandomness;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__sprayRandomness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sprayRandomness = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__dryingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryingSpeed;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__dryingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryingSpeed;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__dryingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dryingSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayStampMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayStampMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__sprayStampMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sprayStampMaterial;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__sprayStampMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sprayStampMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__waterBumpOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterBumpOverride;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__waterBumpOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterBumpOverride;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__waterBumpOverride(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterBumpOverride = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get_WhenSpray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSpray;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get_WhenSpray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSpray;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set_WhenSpray(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSpray = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get_WhenStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStream;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get_WhenStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStream;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set_WhenStream(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenStream = value;
}
constexpr bool& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__wasFired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasFired;
}
constexpr bool const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__wasFired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasFired;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__wasFired(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasFired = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__dampedUseStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dampedUseStrength;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__dampedUseStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dampedUseStrength;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__dampedUseStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dampedUseStrength = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__lastUseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUseTime;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray::__cordl_internal_get__lastUseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUseTime;
}
constexpr void Oculus::Interaction::Demo::WaterSpray::__cordl_internal_set__lastUseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUseTime = value;
}
inline void Oculus::Interaction::Demo::WaterSpray::setStaticF_WET_MAP_PROPERTY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WET_MAP_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::Demo::WaterSpray::getStaticF_WET_MAP_PROPERTY()  {
return ::cordl_internals::getStaticField<int32_t, "WET_MAP_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>();
}
inline void Oculus::Interaction::Demo::WaterSpray::setStaticF_STAMP_MULTIPLIER_PROPERTY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "STAMP_MULTIPLIER_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::Demo::WaterSpray::getStaticF_STAMP_MULTIPLIER_PROPERTY()  {
return ::cordl_internals::getStaticField<int32_t, "STAMP_MULTIPLIER_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>();
}
inline void Oculus::Interaction::Demo::WaterSpray::setStaticF_SUBTRACT_PROPERTY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SUBTRACT_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::Demo::WaterSpray::getStaticF_SUBTRACT_PROPERTY()  {
return ::cordl_internals::getStaticField<int32_t, "SUBTRACT_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>();
}
inline void Oculus::Interaction::Demo::WaterSpray::setStaticF_WET_BUMPMAP_PROPERTY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WET_BUMPMAP_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::Demo::WaterSpray::getStaticF_WET_BUMPMAP_PROPERTY()  {
return ::cordl_internals::getStaticField<int32_t, "WET_BUMPMAP_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>();
}
inline void Oculus::Interaction::Demo::WaterSpray::setStaticF_STAMP_MATRIX_PROPERTY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "STAMP_MATRIX_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::Demo::WaterSpray::getStaticF_STAMP_MATRIX_PROPERTY()  {
return ::cordl_internals::getStaticField<int32_t, "STAMP_MATRIX_PROPERTY", ::Oculus::Interaction::Demo::WaterSpray*>();
}
inline void Oculus::Interaction::Demo::WaterSpray::setStaticF_WAIT_TIME(::UnityEngine::WaitForSeconds*  value)  {
::cordl_internals::setStaticField<::UnityEngine::WaitForSeconds*, "WAIT_TIME", ::Oculus::Interaction::Demo::WaterSpray*>(std::forward<::UnityEngine::WaitForSeconds*>(value));
}
inline ::UnityEngine::WaitForSeconds* Oculus::Interaction::Demo::WaterSpray::getStaticF_WAIT_TIME()  {
return ::cordl_internals::getStaticField<::UnityEngine::WaitForSeconds*, "WAIT_TIME", ::Oculus::Interaction::Demo::WaterSpray*>();
}
inline void Oculus::Interaction::Demo::WaterSpray::SprayWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"SprayWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray::UpdateTriggerRotation(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"UpdateTriggerRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline ::GlobalNamespace::WaterSpray_NozzleMode Oculus::Interaction::Demo::WaterSpray::GetNozzleMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"GetNozzleMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaterSpray_NozzleMode>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray::Spray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"Spray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray::Stream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"Stream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Demo::WaterSpray::StampRoutine(int32_t  stampCount, float_t  randomness, float_t  spread, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"StampRoutine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, stampCount, randomness, spread, strength);
}
inline void Oculus::Interaction::Demo::WaterSpray::StartStamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"StartStamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray::StartDrying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"StartDrying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray::Stamp(::UnityEngine::Pose  pose, float_t  maxDistance, float_t  angle, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"Stamp", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose, maxDistance, angle, strength);
}
inline void Oculus::Interaction::Demo::WaterSpray::RenderSplash(::UnityEngine::Transform*  rootObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"RenderSplash", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootObject);
}
inline ::UnityW<::Oculus::Interaction::Demo::MeshBlit> Oculus::Interaction::Demo::WaterSpray::CreateMeshBlit(::UnityEngine::MeshFilter*  meshFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"CreateMeshBlit", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Demo::MeshBlit>>(this, ___internal_method, meshFilter);
}
inline ::UnityEngine::Matrix4x4 Oculus::Interaction::Demo::WaterSpray::CreateStampMatrix(::UnityEngine::Pose  pose, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"CreateStampMatrix", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, pose, angle);
}
inline void Oculus::Interaction::Demo::WaterSpray::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray::BeginUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"BeginUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray::EndUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"EndUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Demo::WaterSpray::ComputeUseStrength(float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, strength);
}
inline void Oculus::Interaction::Demo::WaterSpray::UpdateTriggerProgress(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {"UpdateTriggerProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline void Oculus::Interaction::Demo::WaterSpray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Demo::WaterSpray* Oculus::Interaction::Demo::WaterSpray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Demo::WaterSpray*>());
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr  Oculus::Interaction::Demo::WaterSpray::operator ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* Oculus::Interaction::Demo::WaterSpray::i___Oculus__Interaction__HandGrab__IHandGrabUseDelegate() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Demo::WaterSpray::WaterSpray()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::*)(int32_t)>(&::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa430050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::*)()>(&::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa431708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::*)()>(&::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa43170c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::*)()>(&::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa431968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::*)()>(&::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa431970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::*)()>(&::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4319a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::Demo::WaterSpray>& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Demo::WaterSpray> const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Demo::WaterSpray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_randomness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomness;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_randomness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomness;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set_randomness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomness = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set_spread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spread = value;
}
constexpr float_t& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr int32_t& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_stampCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stampCount;
}
constexpr int32_t const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get_stampCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stampCount;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set_stampCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stampCount = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get__originalPose_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPose_5__2;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get__originalPose_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPose_5__2;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set__originalPose_5__2(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalPose_5__2 = value;
}
constexpr int32_t& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get__i_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr int32_t const& Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_get__i_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::__cordl_internal_set__i_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__3 = value;
}
inline void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35* Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35::WaterSpray__StampRoutine_d__35()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray_NonAlloc.get_PropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (*)()>(&::Oculus::Interaction::Demo::WaterSpray_NonAlloc::get_PropertyBlock)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa430d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"get_PropertyBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray_NonAlloc.GetMeshFiltersInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* (*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Demo::WaterSpray_NonAlloc::GetMeshFiltersInChildren)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa430a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"GetMeshFiltersInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray_NonAlloc.GetRootsFromOverlapResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* (*)(int32_t)>(&::Oculus::Interaction::Demo::WaterSpray_NonAlloc::GetRootsFromOverlapResults)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa43074c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"GetRootsFromOverlapResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray_NonAlloc.GetRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::Demo::WaterSpray_NonAlloc::GetRoot)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa43148c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"GetRoot", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::WaterSpray_NonAlloc.CleanUpDestroyedBlits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Interaction::Demo::WaterSpray_NonAlloc::CleanUpDestroyedBlits)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa430e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"CleanUpDestroyedBlits", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Demo::WaterSpray_NonAlloc::setStaticF__overlapResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "_overlapResults", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Oculus::Interaction::Demo::WaterSpray_NonAlloc::getStaticF__overlapResults()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "_overlapResults", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>();
}
inline void Oculus::Interaction::Demo::WaterSpray_NonAlloc::setStaticF__blits(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>*, "_blits", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>* Oculus::Interaction::Demo::WaterSpray_NonAlloc::getStaticF__blits()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>*, "_blits", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>();
}
inline void Oculus::Interaction::Demo::WaterSpray_NonAlloc::setStaticF__meshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, "_meshFilters", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* Oculus::Interaction::Demo::WaterSpray_NonAlloc::getStaticF__meshFilters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, "_meshFilters", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>();
}
inline void Oculus::Interaction::Demo::WaterSpray_NonAlloc::setStaticF__roots(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*, "_roots", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* Oculus::Interaction::Demo::WaterSpray_NonAlloc::getStaticF__roots()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*, "_roots", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>();
}
inline void Oculus::Interaction::Demo::WaterSpray_NonAlloc::setStaticF__block(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_block", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* Oculus::Interaction::Demo::WaterSpray_NonAlloc::getStaticF__block()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_block", ::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>();
}
inline ::UnityEngine::MaterialPropertyBlock* Oculus::Interaction::Demo::WaterSpray_NonAlloc::get_PropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"get_PropertyBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* Oculus::Interaction::Demo::WaterSpray_NonAlloc::GetMeshFiltersInChildren(::UnityEngine::Transform*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"GetMeshFiltersInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>(nullptr, ___internal_method, root);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* Oculus::Interaction::Demo::WaterSpray_NonAlloc::GetRootsFromOverlapResults(int32_t  hitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"GetRootsFromOverlapResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*>(nullptr, ___internal_method, hitCount);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Demo::WaterSpray_NonAlloc::GetRoot(::UnityEngine::Collider*  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"GetRoot", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, hit);
}
inline void Oculus::Interaction::Demo::WaterSpray_NonAlloc::CleanUpDestroyedBlits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::WaterSpray_NonAlloc*>(),
                        {"CleanUpDestroyedBlits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Demo::WaterSpray_NonAlloc::WaterSpray_NonAlloc()   {
}
