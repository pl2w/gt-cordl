#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleMeshDrawer.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_impl.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleMeshDrawer_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleDataMesh_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "Oculus/Interaction/zzzz__Tween_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.get_HandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor* (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_HandGrabInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f1dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"get_HandGrabInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.set_HandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::set_HandGrabInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f1dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"set_HandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.get_TravelData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseTravelData (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_TravelData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4f1ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"get_TravelData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.set_TravelData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::PoseTravelData)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::set_TravelData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4f1de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"set_TravelData", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.get_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractorView* (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f1dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.set_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::set_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f1e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.get_InteractableComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_InteractableComponent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa4f1e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4f1f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4f1f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4f2024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Draw)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa4f20bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Hide)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4f247c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.Align
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Align)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4f24b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.DestinationPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*, ::UnityEngine::Pose)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::DestinationPose)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa4f21f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"DestinationPose", {}, {::i2c::type_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.InjectAllReticleMeshDrawer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::UnityEngine::MeshFilter*, ::UnityEngine::MeshRenderer*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectAllReticleMeshDrawer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4f2578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectAllReticleMeshDrawer", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.InjectHandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectHandGrabInteractor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa4f25b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.InjectFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::UnityEngine::MeshFilter*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f26bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectFilter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer.InjectRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)(::UnityEngine::MeshRenderer*)>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f26c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f26cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer._Start_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::_Start_b__20_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4f2734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"<Start>b__20_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__handGrabInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__handGrabInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractor = value;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__HandGrabInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabInteractor_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__HandGrabInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabInteractor_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_set__HandGrabInteractor_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandGrabInteractor_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_set__filter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::Oculus::Interaction::PoseTravelData& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__travelData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travelData;
}
constexpr ::Oculus::Interaction::PoseTravelData const& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__travelData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travelData;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_set__travelData(::Oculus::Interaction::PoseTravelData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____travelData = value;
}
constexpr ::Oculus::Interaction::IInteractorView*& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__Interactor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractorView* const& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__Interactor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractorView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Interactor_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Tween*& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__tween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr ::Oculus::Interaction::Tween* const& Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_get__tween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::__cordl_internal_set__tween(::Oculus::Interaction::Tween*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tween = value;
}
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractor* Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_HandGrabInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"get_HandGrabInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::set_HandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"set_HandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::PoseTravelData Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_TravelData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"get_TravelData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseTravelData>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::set_TravelData(::Oculus::Interaction::PoseTravelData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"set_TravelData", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IInteractorView* Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_Interactor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractorView*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::set_Interactor(::Oculus::Interaction::IInteractorView*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Component> Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::get_InteractableComponent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Draw(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*  dataMesh)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataMesh);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::Align(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::Pose Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::DestinationPose(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*  data, ::UnityEngine::Pose  worldSnapPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"DestinationPose", {}, {::i2c::type_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, data, worldSnapPose);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectAllReticleMeshDrawer(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::UnityEngine::MeshFilter*  filter, ::UnityEngine::MeshRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectAllReticleMeshDrawer", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabInteractor, filter, renderer);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectHandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabInteractor);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectFilter(::UnityEngine::MeshFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectFilter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::InjectRenderer(::UnityEngine::MeshRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::_Start_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>(),
                        {"<Start>b__20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer* Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer::ReticleMeshDrawer()   {
}
