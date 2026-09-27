#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/NavMeshLink.hpp"
#include "UnityEngine/AI/zzzz__NavMeshLinkInstance_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/AI/Navigation/zzzz__NavMeshLink_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae72454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(int32_t)>(&::Unity::AI::Navigation::NavMeshLink::set_agentTypeID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae7245c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_startPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_startPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae724a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_startPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_startPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(::UnityEngine::Vector3)>(&::Unity::AI::Navigation::NavMeshLink::set_startPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae724b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_startPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_endPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_endPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae724fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_endPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_endPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(::UnityEngine::Vector3)>(&::Unity::AI::Navigation::NavMeshLink::set_endPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae72508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_endPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_startTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_startTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae72550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_startTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_startTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(::UnityEngine::Transform*)>(&::Unity::AI::Navigation::NavMeshLink::set_startTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae72558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_startTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_endTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_endTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae725f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_endTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_endTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(::UnityEngine::Transform*)>(&::Unity::AI::Navigation::NavMeshLink::set_endTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae725fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_endTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae72698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(float_t)>(&::Unity::AI::Navigation::NavMeshLink::set_width)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xae726a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_width", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_costModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_costModifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae726e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_costModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_costModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(float_t)>(&::Unity::AI::Navigation::NavMeshLink::set_costModifier)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae726fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_costModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_bidirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_bidirectional)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_bidirectional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_bidirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(bool)>(&::Unity::AI::Navigation::NavMeshLink::set_bidirectional)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae72774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_bidirectional", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_autoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_autoUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae72790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_autoUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_autoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(bool)>(&::Unity::AI::Navigation::NavMeshLink::set_autoUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xae72798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_autoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae72bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(int32_t)>(&::Unity::AI::Navigation::NavMeshLink::set_area)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae72bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_activated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_activated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae72bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_activated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_activated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(bool)>(&::Unity::AI::Navigation::NavMeshLink::set_activated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae72bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_activated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_occupied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_occupied)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae72bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_occupied", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.ClearTrackedList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::AI::Navigation::NavMeshLink::ClearTrackedList)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xae72bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"ClearTrackedList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.UpgradeSerializedVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::UpgradeSerializedVersion)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xae72c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpgradeSerializedVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae72dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae72dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae73030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.UpdateLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::UpdateLink)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xae72474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpdateLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.AddTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::AI::Navigation::NavMeshLink*)>(&::Unity::AI::Navigation::NavMeshLink::AddTracking)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xae7283c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"AddTracking", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.RemoveTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::AI::Navigation::NavMeshLink*)>(&::Unity::AI::Navigation::NavMeshLink::RemoveTracking)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xae72a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"RemoveTracking", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.GetWorldPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::AI::Navigation::NavMeshLink::GetWorldPositions)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xae73118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"GetWorldPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.GetLocalPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::AI::Navigation::NavMeshLink::GetLocalPositions)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xae733a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"GetLocalPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.AddLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::AddLink)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xae72e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"AddLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.RecordEndpointTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::RecordEndpointTransforms)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae73090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"RecordEndpointTransforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.HaveTransformsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::HaveTransformsChanged)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xae73548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"HaveTransformsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.LocalToWorldUnscaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::LocalToWorldUnscaled)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xae732a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"LocalToWorldUnscaled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.OnDidApplyAnimationProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae737e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"OnDidApplyAnimationProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.UpdateTrackedInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::AI::Navigation::NavMeshLink::UpdateTrackedInstances)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xae737e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpdateTrackedInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_autoUpdatePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_autoUpdatePositions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae73954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_autoUpdatePositions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_autoUpdatePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(bool)>(&::Unity::AI::Navigation::NavMeshLink::set_autoUpdatePositions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae7395c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_autoUpdatePositions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_biDirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_biDirectional)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae73960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_biDirectional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_biDirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(bool)>(&::Unity::AI::Navigation::NavMeshLink::set_biDirectional)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae73968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_biDirectional", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.get_costOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::get_costOverride)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae73984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_costOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.set_costOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)(float_t)>(&::Unity::AI::Navigation::NavMeshLink::set_costOverride)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae7399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_costOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink.UpdatePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::UpdatePositions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae739a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpdatePositions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshLink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshLink::*)()>(&::Unity::AI::Navigation::NavMeshLink::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xae739a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_SerializedVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedVersion;
}
constexpr uint8_t const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_SerializedVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedVersion;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_SerializedVersion(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SerializedVersion = value;
}
constexpr int32_t& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_AgentTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr int32_t const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_AgentTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_AgentTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AgentTypeID = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_StartPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPoint;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_StartPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPoint;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_StartPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartPoint = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_EndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPoint;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_EndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPoint;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_EndPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_StartTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_StartTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartTransform;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_StartTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_EndTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_EndTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndTransform;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_EndTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndTransform = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Activated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Activated;
}
constexpr bool const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Activated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Activated;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_Activated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Activated = value;
}
constexpr float_t& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Width;
}
constexpr float_t const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Width;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_Width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Width = value;
}
constexpr float_t& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_CostModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CostModifier;
}
constexpr float_t const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_CostModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CostModifier;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_CostModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CostModifier = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_IsOverridingCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsOverridingCost;
}
constexpr bool const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_IsOverridingCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsOverridingCost;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_IsOverridingCost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsOverridingCost = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Bidirectional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bidirectional;
}
constexpr bool const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Bidirectional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bidirectional;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_Bidirectional(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Bidirectional = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_AutoUpdatePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoUpdatePosition;
}
constexpr bool const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_AutoUpdatePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoUpdatePosition;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_AutoUpdatePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoUpdatePosition = value;
}
constexpr int32_t& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr int32_t const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_Area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_Area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Area = value;
}
constexpr ::UnityEngine::AI::NavMeshLinkInstance& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LinkInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkInstance;
}
constexpr ::UnityEngine::AI::NavMeshLinkInstance const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LinkInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkInstance;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_LinkInstance(::UnityEngine::AI::NavMeshLinkInstance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LinkInstance = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_StartTransformWasEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartTransformWasEmpty;
}
constexpr bool const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_StartTransformWasEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartTransformWasEmpty;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_StartTransformWasEmpty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartTransformWasEmpty = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_EndTransformWasEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndTransformWasEmpty;
}
constexpr bool const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_EndTransformWasEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndTransformWasEmpty;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_EndTransformWasEmpty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndTransformWasEmpty = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastStartWorldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastStartWorldPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastStartWorldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastStartWorldPosition;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_LastStartWorldPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastStartWorldPosition = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastEndWorldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastEndWorldPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastEndWorldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastEndWorldPosition;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_LastEndWorldPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastEndWorldPosition = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_LastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPosition = value;
}
constexpr ::UnityEngine::Quaternion& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr ::UnityEngine::Quaternion const& Unity::AI::Navigation::NavMeshLink::__cordl_internal_get_m_LastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr void Unity::AI::Navigation::NavMeshLink::__cordl_internal_set_m_LastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastRotation = value;
}
inline void Unity::AI::Navigation::NavMeshLink::setStaticF_s_Tracked(::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>*, "s_Tracked", ::Unity::AI::Navigation::NavMeshLink*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>* Unity::AI::Navigation::NavMeshLink::getStaticF_s_Tracked()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>*, "s_Tracked", ::Unity::AI::Navigation::NavMeshLink*>();
}
inline int32_t Unity::AI::Navigation::NavMeshLink::get_agentTypeID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::AI::Navigation::NavMeshLink::get_startPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_startPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_startPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_startPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::AI::Navigation::NavMeshLink::get_endPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_endPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_endPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_endPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::AI::Navigation::NavMeshLink::get_startTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_startTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_startTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_startTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::AI::Navigation::NavMeshLink::get_endTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_endTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_endTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_endTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::AI::Navigation::NavMeshLink::get_width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_width(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_width", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::AI::Navigation::NavMeshLink::get_costModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_costModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_costModifier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_costModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshLink::get_bidirectional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_bidirectional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_bidirectional(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_bidirectional", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshLink::get_autoUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_autoUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_autoUpdate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_autoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Unity::AI::Navigation::NavMeshLink::get_area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_area(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshLink::get_activated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_activated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_activated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_activated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshLink::get_occupied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_occupied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::ClearTrackedList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"ClearTrackedList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::UpgradeSerializedVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpgradeSerializedVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::UpdateLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpdateLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::AddTracking(::Unity::AI::Navigation::NavMeshLink*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"AddTracking", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, link);
}
inline void Unity::AI::Navigation::NavMeshLink::RemoveTracking(::Unity::AI::Navigation::NavMeshLink*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"RemoveTracking", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, link);
}
inline void Unity::AI::Navigation::NavMeshLink::GetWorldPositions(::by_ref<::UnityEngine::Vector3>  worldStartPosition, ::by_ref<::UnityEngine::Vector3>  worldEndPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"GetWorldPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldStartPosition, worldEndPosition);
}
inline void Unity::AI::Navigation::NavMeshLink::GetLocalPositions(::by_ref<::UnityEngine::Vector3>  localStartPosition, ::by_ref<::UnityEngine::Vector3>  localEndPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"GetLocalPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localStartPosition, localEndPosition);
}
inline void Unity::AI::Navigation::NavMeshLink::AddLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"AddLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::RecordEndpointTransforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"RecordEndpointTransforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::AI::Navigation::NavMeshLink::HaveTransformsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"HaveTransformsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 Unity::AI::Navigation::NavMeshLink::LocalToWorldUnscaled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"LocalToWorldUnscaled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::OnDidApplyAnimationProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"OnDidApplyAnimationProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::UpdateTrackedInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpdateTrackedInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Unity::AI::Navigation::NavMeshLink::get_autoUpdatePositions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_autoUpdatePositions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_autoUpdatePositions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_autoUpdatePositions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshLink::get_biDirectional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_biDirectional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_biDirectional(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_biDirectional", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::AI::Navigation::NavMeshLink::get_costOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"get_costOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::set_costOverride(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"set_costOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::AI::Navigation::NavMeshLink::UpdatePositions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {"UpdatePositions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshLink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::AI::Navigation::NavMeshLink* Unity::AI::Navigation::NavMeshLink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::AI::Navigation::NavMeshLink*>());
}
// Ctor Parameters []
constexpr ::Unity::AI::Navigation::NavMeshLink::NavMeshLink()   {
}
