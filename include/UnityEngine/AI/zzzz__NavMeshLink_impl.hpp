#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshLink.hpp"
#include "UnityEngine/AI/zzzz__NavMeshLinkInstance_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshLink_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36a2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(int32_t)>(&::UnityEngine::AI::NavMeshLink::set_agentTypeID)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa36a304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_startPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_startPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36a348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_startPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_startPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshLink::set_startPoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa36a354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_startPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_endPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_endPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36a37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_endPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_endPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshLink::set_endPoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa36a388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_endPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36a3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(float_t)>(&::UnityEngine::AI::NavMeshLink::set_width)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa36a3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_width", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_costModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_costModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36a3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_costModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_costModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(int32_t)>(&::UnityEngine::AI::NavMeshLink::set_costModifier)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa36a3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_costModifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_bidirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_bidirectional)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36a408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_bidirectional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_bidirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(bool)>(&::UnityEngine::AI::NavMeshLink::set_bidirectional)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa36a410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_bidirectional", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_autoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_autoUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36a434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_autoUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_autoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(bool)>(&::UnityEngine::AI::NavMeshLink::set_autoUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa36a43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_autoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.get_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::get_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36a4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.set_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(int32_t)>(&::UnityEngine::AI::NavMeshLink::set_area)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa36a4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa36a510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa36a8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.UpdateLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::UpdateLink)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa36a328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"UpdateLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.AddTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AI::NavMeshLink*)>(&::UnityEngine::AI::NavMeshLink::AddTracking)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa36a708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"AddTracking", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.RemoveTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AI::NavMeshLink*)>(&::UnityEngine::AI::NavMeshLink::RemoveTracking)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa36a954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"RemoveTracking", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.SetAutoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)(bool)>(&::UnityEngine::AI::NavMeshLink::SetAutoUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa36a440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"SetAutoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.AddLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::AddLink)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa36a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"AddLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.HasTransformChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::HasTransformChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa36aadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"HasTransformChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.OnDidApplyAnimationProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa36aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"OnDidApplyAnimationProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink.UpdateTrackedInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AI::NavMeshLink::UpdateTrackedInstances)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa36abc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"UpdateTrackedInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLink::*)()>(&::UnityEngine::AI::NavMeshLink::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa36ad34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_AgentTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr int32_t const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_AgentTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_AgentTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AgentTypeID = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_StartPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_StartPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPoint;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_StartPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartPoint = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_EndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_EndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPoint;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_EndPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndPoint = value;
}
constexpr float_t& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_Width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Width;
}
constexpr float_t const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_Width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Width;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_Width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Width = value;
}
constexpr int32_t& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_CostModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CostModifier;
}
constexpr int32_t const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_CostModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CostModifier;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_CostModifier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CostModifier = value;
}
constexpr bool& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_Bidirectional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bidirectional;
}
constexpr bool const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_Bidirectional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bidirectional;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_Bidirectional(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Bidirectional = value;
}
constexpr bool& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_AutoUpdatePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoUpdatePosition;
}
constexpr bool const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_AutoUpdatePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoUpdatePosition;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_AutoUpdatePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoUpdatePosition = value;
}
constexpr int32_t& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_Area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr int32_t const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_Area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_Area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Area = value;
}
constexpr ::UnityEngine::AI::NavMeshLinkInstance& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_LinkInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkInstance;
}
constexpr ::UnityEngine::AI::NavMeshLinkInstance const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_LinkInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkInstance;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_LinkInstance(::UnityEngine::AI::NavMeshLinkInstance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LinkInstance = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_LastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_LastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_LastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_LastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::AI::NavMeshLink::__cordl_internal_get_m_LastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr void UnityEngine::AI::NavMeshLink::__cordl_internal_set_m_LastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastRotation = value;
}
inline void UnityEngine::AI::NavMeshLink::setStaticF_s_Tracked(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>*, "s_Tracked", ::UnityEngine::AI::NavMeshLink*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>* UnityEngine::AI::NavMeshLink::getStaticF_s_Tracked()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>*, "s_Tracked", ::UnityEngine::AI::NavMeshLink*>();
}
inline int32_t UnityEngine::AI::NavMeshLink::get_agentTypeID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshLink::get_startPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_startPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_startPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_startPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshLink::get_endPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_endPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_endPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_endPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AI::NavMeshLink::get_width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_width(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_width", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AI::NavMeshLink::get_costModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_costModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_costModifier(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_costModifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshLink::get_bidirectional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_bidirectional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_bidirectional(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_bidirectional", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshLink::get_autoUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_autoUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_autoUpdate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_autoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AI::NavMeshLink::get_area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"get_area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::set_area(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLink::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::UpdateLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"UpdateLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::AddTracking(::UnityEngine::AI::NavMeshLink*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"AddTracking", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, link);
}
inline void UnityEngine::AI::NavMeshLink::RemoveTracking(::UnityEngine::AI::NavMeshLink*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"RemoveTracking", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, link);
}
inline void UnityEngine::AI::NavMeshLink::SetAutoUpdate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"SetAutoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLink::AddLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"AddLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AI::NavMeshLink::HasTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"HasTransformChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::OnDidApplyAnimationProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"OnDidApplyAnimationProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::UpdateTrackedInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {"UpdateTrackedInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshLink* UnityEngine::AI::NavMeshLink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMeshLink*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshLink::NavMeshLink()   {
}
