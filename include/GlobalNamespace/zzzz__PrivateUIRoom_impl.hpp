#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivateUIRoom.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__PrivateUIRoom_OverlaySource_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PrivateUIRoom_def.hpp"
#include "GlobalNamespace/zzzz__PrivateUIRoom_OverlaySource_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.get_overlayForcedActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::get_overlayForcedActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5715150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"get_overlayForcedActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.get_localPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::GTPlayer> (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::get_localPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5715160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"get_localPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::Awake)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x57151e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571542c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5715434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.ToggleLevelVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)(bool)>(&::GlobalNamespace::PrivateUIRoom::ToggleLevelVisibility)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x571543c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ToggleLevelVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.StopOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PrivateUIRoom::StopOverlay)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5715544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"StopOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.GetIdealScreenPositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::PrivateUIRoom::GetIdealScreenPositionRotation)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x57156bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"GetIdealScreenPositionRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.AssignShoulderCameraToCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PrivateUIRoom::AssignShoulderCameraToCanvases)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5715890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"AssignShoulderCameraToCanvases", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.AddUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PrivateUIRoom::AddUI)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5715894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"AddUI", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.RemoveUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PrivateUIRoom::RemoveUI)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5716134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"RemoveUI", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.ForceStartOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PrivateUIRoom_OverlaySource, ::StringW)>(&::GlobalNamespace::PrivateUIRoom::ForceStartOverlay)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5716434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ForceStartOverlay", {}, {::i2c::type_of<::GlobalNamespace::PrivateUIRoom_OverlaySource>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.StopForcedOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PrivateUIRoom_OverlaySource)>(&::GlobalNamespace::PrivateUIRoom::StopForcedOverlay)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5716518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"StopForcedOverlay", {}, {::i2c::type_of<::GlobalNamespace::PrivateUIRoom_OverlaySource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.StartOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PrivateUIRoom::StartOverlay)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5715c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"StartOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::Tick)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x57165fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                    {::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.ShouldUpdateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::ShouldUpdateRotation)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5716870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ShouldUpdateRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.ShouldUpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::ShouldUpdatePosition)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5716aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ShouldUpdatePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.UpdateUIPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::UpdateUIPositionAndRotation)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5715e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"UpdateUIPositionAndRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.SetTextPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PrivateUIRoom::SetTextPositionAndRotation)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5716c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"SetTextPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.UpdateUIPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::UpdateUIPosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5716b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"UpdateUIPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom.GetInOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::PrivateUIRoom::GetInOverlay)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5716ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"GetInOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateUIRoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateUIRoom::*)()>(&::GlobalNamespace::PrivateUIRoom::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5716f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr float_t& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__textDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textDistance;
}
constexpr float_t const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__textDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textDistance;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set__textDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textDistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_occluder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occluder;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_occluder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occluder;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_occluder(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occluder = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_visibleLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_visibleLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleLayers;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_visibleLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleLayers = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_leftHandObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_leftHandObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandObject;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_leftHandObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_rightHandObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_rightHandObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandObject;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_rightHandObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandObject = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_backgroundRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_backgroundRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundRenderer;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_backgroundRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundRenderer = value;
}
constexpr ::StringW& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_backgroundDirectionPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundDirectionPropertyName;
}
constexpr ::StringW const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_backgroundDirectionPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundDirectionPropertyName;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_backgroundDirectionPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundDirectionPropertyName = value;
}
constexpr int32_t& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_backgroundDirectionPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundDirectionPropertyID;
}
constexpr int32_t const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_backgroundDirectionPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundDirectionPropertyID;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_backgroundDirectionPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundDirectionPropertyID = value;
}
constexpr int32_t& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_savedCullingLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedCullingLayers;
}
constexpr int32_t const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_savedCullingLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedCullingLayers;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_savedCullingLayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedCullingLayers = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__uiRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__uiRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiRoot;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set__uiRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uiRoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_focusTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_focusTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusTransform;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_focusTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ui;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ui;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_ui(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ui = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_uiParents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiParents;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_uiParents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiParents;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_uiParents(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uiParents = value;
}
constexpr float_t& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__initialAudioVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialAudioVolume;
}
constexpr float_t const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get__initialAudioVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialAudioVolume;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set__initialAudioVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialAudioVolume = value;
}
constexpr bool& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_inOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inOverlay;
}
constexpr bool const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_inOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inOverlay;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_inOverlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inOverlay = value;
}
constexpr ::GlobalNamespace::PrivateUIRoom_OverlaySource& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_overlayForcedSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayForcedSources;
}
constexpr ::GlobalNamespace::PrivateUIRoom_OverlaySource const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_overlayForcedSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayForcedSources;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_overlayForcedSources(::GlobalNamespace::PrivateUIRoom_OverlaySource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlayForcedSources = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_lastStablePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStablePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_lastStablePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStablePosition;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_lastStablePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStablePosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_lastStableRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStableRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_lastStableRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStableRotation;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_lastStableRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStableRotation = value;
}
constexpr float_t& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_verticalPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalPlay;
}
constexpr float_t const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_verticalPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalPlay;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_verticalPlay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalPlay = value;
}
constexpr float_t& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_lateralPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateralPlay;
}
constexpr float_t const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_lateralPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateralPlay;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_lateralPlay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lateralPlay = value;
}
constexpr float_t& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_rotationalPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalPlay;
}
constexpr float_t const& GlobalNamespace::PrivateUIRoom::__cordl_internal_get_rotationalPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalPlay;
}
constexpr void GlobalNamespace::PrivateUIRoom::__cordl_internal_set_rotationalPlay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationalPlay = value;
}
inline void GlobalNamespace::PrivateUIRoom::setStaticF_instance(::UnityW<::GlobalNamespace::PrivateUIRoom>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PrivateUIRoom>, "instance", ::GlobalNamespace::PrivateUIRoom*>(std::forward<::UnityW<::GlobalNamespace::PrivateUIRoom>>(value));
}
inline ::UnityW<::GlobalNamespace::PrivateUIRoom> GlobalNamespace::PrivateUIRoom::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PrivateUIRoom>, "instance", ::GlobalNamespace::PrivateUIRoom*>();
}
inline bool GlobalNamespace::PrivateUIRoom::get_overlayForcedActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"get_overlayForcedActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::GTPlayer> GlobalNamespace::PrivateUIRoom::get_localPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"get_localPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::GTPlayer>>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::ToggleLevelVisibility(bool  levelShouldBeVisible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ToggleLevelVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelShouldBeVisible);
}
inline void GlobalNamespace::PrivateUIRoom::StopOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"StopOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::GetIdealScreenPositionRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"GetIdealScreenPositionRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void GlobalNamespace::PrivateUIRoom::AssignShoulderCameraToCanvases(::UnityEngine::Transform*  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"AssignShoulderCameraToCanvases", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, focus);
}
inline void GlobalNamespace::PrivateUIRoom::AddUI(::UnityEngine::Transform*  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"AddUI", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, focus);
}
inline void GlobalNamespace::PrivateUIRoom::RemoveUI(::UnityEngine::Transform*  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"RemoveUI", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, focus);
}
inline void GlobalNamespace::PrivateUIRoom::ForceStartOverlay(::GlobalNamespace::PrivateUIRoom_OverlaySource  source, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ForceStartOverlay", {}, {::i2c::type_of<::GlobalNamespace::PrivateUIRoom_OverlaySource>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text);
}
inline void GlobalNamespace::PrivateUIRoom::StopForcedOverlay(::GlobalNamespace::PrivateUIRoom_OverlaySource  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"StopForcedOverlay", {}, {::i2c::type_of<::GlobalNamespace::PrivateUIRoom_OverlaySource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void GlobalNamespace::PrivateUIRoom::StartOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"StartOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PrivateUIRoom::ShouldUpdateRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ShouldUpdateRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PrivateUIRoom::ShouldUpdatePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"ShouldUpdatePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::UpdateUIPositionAndRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"UpdateUIPositionAndRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::SetTextPositionAndRotation(::UnityEngine::Transform*  pov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"SetTextPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pov);
}
inline void GlobalNamespace::PrivateUIRoom::UpdateUIPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"UpdateUIPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PrivateUIRoom::GetInOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {"GetInOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PrivateUIRoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateUIRoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivateUIRoom* GlobalNamespace::PrivateUIRoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PrivateUIRoom*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivateUIRoom::PrivateUIRoom()   {
}
