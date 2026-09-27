#pragma once
// IWYU pragma private; include "Pathfinding/Util/GraphGizmoHelper.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_Hasher_impl.hpp"
#include "Pathfinding/zzzz__GraphDebugMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Util/zzzz__GraphGizmoHelper_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Util/zzzz__IAstarPooledObject_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_Hasher_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.get_hasher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RetainedGizmos_Hasher (::Pathfinding::Util::GraphGizmoHelper::*)()>(&::Pathfinding::Util::GraphGizmoHelper::get_hasher)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ee0084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"get_hasher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.set_hasher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::GlobalNamespace::RetainedGizmos_Hasher)>(&::Pathfinding::Util::GraphGizmoHelper::set_hasher)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ee0098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"set_hasher", {}, {::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.get_builder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::RetainedGizmos_Builder* (::Pathfinding::Util::GraphGizmoHelper::*)()>(&::Pathfinding::Util::GraphGizmoHelper::get_builder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"get_builder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.set_builder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::Pathfinding::Util::RetainedGizmos_Builder*)>(&::Pathfinding::Util::GraphGizmoHelper::set_builder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee00b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"set_builder", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos_Builder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)()>(&::Pathfinding::Util::GraphGizmoHelper::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ee00c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::GlobalNamespace::AstarPath*, ::GlobalNamespace::RetainedGizmos_Hasher, ::Pathfinding::Util::RetainedGizmos*)>(&::Pathfinding::Util::GraphGizmoHelper::Init)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ee0150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>(), ::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>(), ::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)()>(&::Pathfinding::Util::GraphGizmoHelper::OnEnterPool)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ee0278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"OnEnterPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.DrawConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Util::GraphGizmoHelper::DrawConnections)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ee02f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawConnections", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.DrawConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Util::GraphGizmoHelper::DrawConnection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ee0994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawConnection", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.NodeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Pathfinding::Util::GraphGizmoHelper::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Util::GraphGizmoHelper::NodeColor)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5ee04b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"NodeColor", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.InSearchTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::GraphNode*, ::Pathfinding::PathHandler*, uint16_t)>(&::Pathfinding::Util::GraphGizmoHelper::InSearchTree)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ee0474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"InSearchTree", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::PathHandler*>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.DrawWireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Pathfinding::Util::GraphGizmoHelper::DrawWireTriangle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ee0a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawWireTriangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.DrawTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Color>, int32_t)>(&::Pathfinding::Util::GraphGizmoHelper::DrawTriangles)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ee0b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.DrawWireTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Color>, int32_t)>(&::Pathfinding::Util::GraphGizmoHelper::DrawWireTriangles)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ee0db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawWireTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.Submit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)()>(&::Pathfinding::Util::GraphGizmoHelper::Submit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ee0ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"Submit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::GraphGizmoHelper.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::GraphGizmoHelper::*)()>(&::Pathfinding::Util::GraphGizmoHelper::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ee0f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RetainedGizmos_Hasher& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get__hasher_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasher_k__BackingField;
}
constexpr ::GlobalNamespace::RetainedGizmos_Hasher const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get__hasher_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasher_k__BackingField;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set__hasher_k__BackingField(::GlobalNamespace::RetainedGizmos_Hasher  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasher_k__BackingField = value;
}
constexpr ::Pathfinding::Util::RetainedGizmos*& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_gizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr ::Pathfinding::Util::RetainedGizmos* const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_gizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_gizmos(::Pathfinding::Util::RetainedGizmos*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmos = value;
}
constexpr ::Pathfinding::PathHandler*& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugData;
}
constexpr ::Pathfinding::PathHandler* const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugData;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_debugData(::Pathfinding::PathHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugData = value;
}
constexpr uint16_t& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugPathID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPathID;
}
constexpr uint16_t const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugPathID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPathID;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_debugPathID(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPathID = value;
}
constexpr ::Pathfinding::GraphDebugMode& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr ::Pathfinding::GraphDebugMode const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_debugMode(::Pathfinding::GraphDebugMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMode = value;
}
constexpr bool& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_showSearchTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSearchTree;
}
constexpr bool const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_showSearchTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSearchTree;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_showSearchTree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSearchTree = value;
}
constexpr float_t& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFloor;
}
constexpr float_t const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFloor;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_debugFloor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugFloor = value;
}
constexpr float_t& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugRoof()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRoof;
}
constexpr float_t const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_debugRoof() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRoof;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_debugRoof(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugRoof = value;
}
constexpr ::Pathfinding::Util::RetainedGizmos_Builder*& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get__builder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____builder_k__BackingField;
}
constexpr ::Pathfinding::Util::RetainedGizmos_Builder* const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get__builder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____builder_k__BackingField;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set__builder_k__BackingField(::Pathfinding::Util::RetainedGizmos_Builder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____builder_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_drawConnectionStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawConnectionStart;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_drawConnectionStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawConnectionStart;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_drawConnectionStart(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawConnectionStart = value;
}
constexpr ::UnityEngine::Color& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_drawConnectionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawConnectionColor;
}
constexpr ::UnityEngine::Color const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_drawConnectionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawConnectionColor;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_drawConnectionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawConnectionColor = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_drawConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawConnection;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::Util::GraphGizmoHelper::__cordl_internal_get_drawConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawConnection;
}
constexpr void Pathfinding::Util::GraphGizmoHelper::__cordl_internal_set_drawConnection(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawConnection = value;
}
inline ::GlobalNamespace::RetainedGizmos_Hasher Pathfinding::Util::GraphGizmoHelper::get_hasher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"get_hasher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RetainedGizmos_Hasher>(this, ___internal_method);
}
inline void Pathfinding::Util::GraphGizmoHelper::set_hasher(::GlobalNamespace::RetainedGizmos_Hasher  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"set_hasher", {}, {::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Util::RetainedGizmos_Builder* Pathfinding::Util::GraphGizmoHelper::get_builder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"get_builder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::RetainedGizmos_Builder*>(this, ___internal_method);
}
inline void Pathfinding::Util::GraphGizmoHelper::set_builder(::Pathfinding::Util::RetainedGizmos_Builder*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"set_builder", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos_Builder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Util::GraphGizmoHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::GraphGizmoHelper::Init(::GlobalNamespace::AstarPath*  active, ::GlobalNamespace::RetainedGizmos_Hasher  hasher, ::Pathfinding::Util::RetainedGizmos*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>(), ::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>(), ::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active, hasher, gizmos);
}
inline void Pathfinding::Util::GraphGizmoHelper::OnEnterPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"OnEnterPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::GraphGizmoHelper::DrawConnections(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawConnections", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::Util::GraphGizmoHelper::DrawConnection(::Pathfinding::GraphNode*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawConnection", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::UnityEngine::Color Pathfinding::Util::GraphGizmoHelper::NodeColor(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"NodeColor", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, node);
}
inline bool Pathfinding::Util::GraphGizmoHelper::InSearchTree(::Pathfinding::GraphNode*  node, ::Pathfinding::PathHandler*  handler, uint16_t  pathID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"InSearchTree", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::PathHandler*>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node, handler, pathID);
}
inline void Pathfinding::Util::GraphGizmoHelper::DrawWireTriangle(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawWireTriangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, color);
}
inline void Pathfinding::Util::GraphGizmoHelper::DrawTriangles(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<::UnityEngine::Color>  colors, int32_t  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, colors, numTriangles);
}
inline void Pathfinding::Util::GraphGizmoHelper::DrawWireTriangles(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<::UnityEngine::Color>  colors, int32_t  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"DrawWireTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, colors, numTriangles);
}
inline void Pathfinding::Util::GraphGizmoHelper::Submit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"Submit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::GraphGizmoHelper::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::GraphGizmoHelper*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::GraphGizmoHelper* Pathfinding::Util::GraphGizmoHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::GraphGizmoHelper*>());
}
/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr  Pathfinding::Util::GraphGizmoHelper::operator ::Pathfinding::Util::IAstarPooledObject*() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* Pathfinding::Util::GraphGizmoHelper::i___Pathfinding__Util__IAstarPooledObject() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Util::GraphGizmoHelper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Util::GraphGizmoHelper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::GraphGizmoHelper::GraphGizmoHelper()   {
}
