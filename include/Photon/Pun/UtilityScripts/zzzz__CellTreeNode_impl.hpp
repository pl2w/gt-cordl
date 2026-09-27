#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CellTreeNode.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_ENodeType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_ENodeType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)()>(&::Photon::Pun::UtilityScripts::CellTreeNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72fd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)(uint8_t, ::GlobalNamespace::CellTreeNode_ENodeType, ::Photon::Pun::UtilityScripts::CellTreeNode*)>(&::Photon::Pun::UtilityScripts::CellTreeNode::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa72f3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::CellTreeNode_ENodeType>(), ::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.AddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)(::Photon::Pun::UtilityScripts::CellTreeNode*)>(&::Photon::Pun::UtilityScripts::CellTreeNode::AddChild)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa72f6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"AddChild", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)()>(&::Photon::Pun::UtilityScripts::CellTreeNode::Draw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa72f7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"Draw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.GetActiveCells
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)(::System::Collections::Generic::List_1<uint8_t>*, bool, ::UnityEngine::Vector3)>(&::Photon::Pun::UtilityScripts::CellTreeNode::GetActiveCells)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa72f904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"GetActiveCells", {}, {::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.IsPointInsideCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::CellTreeNode::*)(bool, ::UnityEngine::Vector3)>(&::Photon::Pun::UtilityScripts::CellTreeNode::IsPointInsideCell)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa72fd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"IsPointInsideCell", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.IsPointNearCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::CellTreeNode::*)(bool, ::UnityEngine::Vector3)>(&::Photon::Pun::UtilityScripts::CellTreeNode::IsPointNearCell)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa72fd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"IsPointNearCell", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr uint8_t const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Id(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_TopLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TopLeft;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_TopLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TopLeft;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_TopLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TopLeft = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_BottomRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomRight;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_BottomRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomRight;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_BottomRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BottomRight = value;
}
constexpr ::GlobalNamespace::CellTreeNode_ENodeType& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_NodeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NodeType;
}
constexpr ::GlobalNamespace::CellTreeNode_ENodeType const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_NodeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NodeType;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_NodeType(::GlobalNamespace::CellTreeNode_ENodeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NodeType = value;
}
constexpr ::Photon::Pun::UtilityScripts::CellTreeNode*& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
constexpr ::Photon::Pun::UtilityScripts::CellTreeNode* const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Parent(::Photon::Pun::UtilityScripts::CellTreeNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parent = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Childs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Childs;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>* const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Childs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Childs;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Childs(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Childs = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::_ctor(uint8_t  id, ::GlobalNamespace::CellTreeNode_ENodeType  nodeType, ::Photon::Pun::UtilityScripts::CellTreeNode*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::CellTreeNode_ENodeType>(), ::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, nodeType, parent);
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::AddChild(::Photon::Pun::UtilityScripts::CellTreeNode*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"AddChild", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::Draw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"Draw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::GetActiveCells(::System::Collections::Generic::List_1<uint8_t>*  activeCells, bool  yIsUpAxis, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"GetActiveCells", {}, {::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeCells, yIsUpAxis, position);
}
inline bool Photon::Pun::UtilityScripts::CellTreeNode::IsPointInsideCell(bool  yIsUpAxis, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"IsPointInsideCell", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, yIsUpAxis, point);
}
inline bool Photon::Pun::UtilityScripts::CellTreeNode::IsPointNearCell(bool  yIsUpAxis, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTreeNode*>(),
                        {"IsPointNearCell", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, yIsUpAxis, point);
}
inline ::Photon::Pun::UtilityScripts::CellTreeNode* Photon::Pun::UtilityScripts::CellTreeNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::CellTreeNode*>());
}
inline ::Photon::Pun::UtilityScripts::CellTreeNode* Photon::Pun::UtilityScripts::CellTreeNode::New_ctor(uint8_t  id, ::GlobalNamespace::CellTreeNode_ENodeType  nodeType, ::Photon::Pun::UtilityScripts::CellTreeNode*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::CellTreeNode*>(id, nodeType, parent));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::CellTreeNode::CellTreeNode()   {
}
