#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVH.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__BVH_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_def.hpp"
#include "Fusion/LagCompensation/zzzz__IBoundsTraversalTest_def.hpp"
#include "Fusion/LagCompensation/zzzz__ILagCompensationBroadphase_def.hpp"
#include "Fusion/LagCompensation/zzzz__Mapper_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.get_rootBVH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::BVHNode> (::Fusion::LagCompensation::BVH::*)()>(&::Fusion::LagCompensation::BVH::get_rootBVH)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x600c8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"get_rootBVH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(::Fusion::LagCompensation::ILagCompensationBroadphase*)>(&::Fusion::LagCompensation::BVH::CopyFrom)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x600c920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.get_UsedNodesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::BVH::*)()>(&::Fusion::LagCompensation::BVH::get_UsedNodesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600cb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"get_UsedNodesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.GetNextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::BVHNode> (::Fusion::LagCompensation::BVH::*)(::by_ref<int32_t>)>(&::Fusion::LagCompensation::BVH::GetNextNode)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x600cb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"GetNextNode", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.DisposeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(int32_t)>(&::Fusion::LagCompensation::BVH::DisposeNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x600cc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"DisposeNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::BVHNode> (::Fusion::LagCompensation::BVH::*)(int32_t)>(&::Fusion::LagCompensation::BVH::GetNode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x600ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(::Fusion::HitboxRoot*, int32_t)>(&::Fusion::LagCompensation::BVH::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x600cd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.Traverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(::Fusion::LagCompensation::IBoundsTraversalTest*, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*, int32_t)>(&::Fusion::LagCompensation::BVH::Traverse)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x600ce1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Traverse", {}, {::i2c::type_of<::Fusion::LagCompensation::IBoundsTraversalTest*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.TraverseInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(::by_ref<::Fusion::LagCompensation::BVHNode>, ::Fusion::LagCompensation::IBoundsTraversalTest*, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*, int32_t)>(&::Fusion::LagCompensation::BVH::TraverseInternal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x600ce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"TraverseInternal", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::LagCompensation::IBoundsTraversalTest*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.PosUpdateRefit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)()>(&::Fusion::LagCompensation::BVH::PosUpdateRefit)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x600d044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"PosUpdateRefit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::BVH::Add)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x600d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.BoundsFromSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Vector3, float_t)>(&::Fusion::LagCompensation::BVH::BoundsFromSphere)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x600db68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"BoundsFromSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVH::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::BVH::Remove)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x600dbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(::Fusion::LagCompensation::Mapper*, int32_t, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*, float_t, int32_t)>(&::Fusion::LagCompensation::BVH::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x600deb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::Mapper*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.BuildNodesLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(::System::Text::StringBuilder*)>(&::Fusion::LagCompensation::BVH::BuildNodesLog)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x600e384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"BuildNodesLog", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVH.ResizeNodesArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVH::*)(int32_t)>(&::Fusion::LagCompensation::BVH::ResizeNodesArray)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x600ca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"ResizeNodesArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Fusion::LagCompensation::BVHNode>& Fusion::LagCompensation::BVH::__cordl_internal_get__nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes;
}
constexpr ::ArrayW<::Fusion::LagCompensation::BVHNode> const& Fusion::LagCompensation::BVH::__cordl_internal_get__nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set__nodes(::ArrayW<::Fusion::LagCompensation::BVHNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodes = value;
}
constexpr ::Fusion::LagCompensation::Mapper*& Fusion::LagCompensation::BVH::__cordl_internal_get_Mapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mapper;
}
constexpr ::Fusion::LagCompensation::Mapper* const& Fusion::LagCompensation::BVH::__cordl_internal_get_Mapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mapper;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set_Mapper(::Fusion::LagCompensation::Mapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mapper = value;
}
constexpr int32_t& Fusion::LagCompensation::BVH::__cordl_internal_get_maxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr int32_t const& Fusion::LagCompensation::BVH::__cordl_internal_get_maxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set_maxDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDepth = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Fusion::LagCompensation::BVH::__cordl_internal_get_refitNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refitNodes;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Fusion::LagCompensation::BVH::__cordl_internal_get_refitNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refitNodes;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set_refitNodes(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___refitNodes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*& Fusion::LagCompensation::BVH::__cordl_internal_get_ReusableList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReusableList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>* const& Fusion::LagCompensation::BVH::__cordl_internal_get_ReusableList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReusableList;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set_ReusableList(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReusableList = value;
}
constexpr int32_t& Fusion::LagCompensation::BVH::__cordl_internal_get__nodesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodesCount;
}
constexpr int32_t const& Fusion::LagCompensation::BVH::__cordl_internal_get__nodesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodesCount;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set__nodesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodesCount = value;
}
constexpr int32_t& Fusion::LagCompensation::BVH::__cordl_internal_get__usedNodesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usedNodesCount;
}
constexpr int32_t const& Fusion::LagCompensation::BVH::__cordl_internal_get__usedNodesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usedNodesCount;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set__usedNodesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____usedNodesCount = value;
}
constexpr int32_t& Fusion::LagCompensation::BVH::__cordl_internal_get__freeNodesHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeNodesHead;
}
constexpr int32_t const& Fusion::LagCompensation::BVH::__cordl_internal_get__freeNodesHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeNodesHead;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set__freeNodesHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeNodesHead = value;
}
constexpr float_t& Fusion::LagCompensation::BVH::__cordl_internal_get_ExpansionFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpansionFactor;
}
constexpr float_t const& Fusion::LagCompensation::BVH::__cordl_internal_get_ExpansionFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpansionFactor;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set_ExpansionFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpansionFactor = value;
}
constexpr int32_t& Fusion::LagCompensation::BVH::__cordl_internal_get_ParentsToExpand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParentsToExpand;
}
constexpr int32_t const& Fusion::LagCompensation::BVH::__cordl_internal_get_ParentsToExpand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParentsToExpand;
}
constexpr void Fusion::LagCompensation::BVH::__cordl_internal_set_ParentsToExpand(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParentsToExpand = value;
}
inline ::by_ref<::Fusion::LagCompensation::BVHNode> Fusion::LagCompensation::BVH::get_rootBVH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"get_rootBVH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::BVHNode>>(this, ___internal_method);
}
inline void Fusion::LagCompensation::BVH::CopyFrom(::Fusion::LagCompensation::ILagCompensationBroadphase*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline int32_t Fusion::LagCompensation::BVH::get_UsedNodesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"get_UsedNodesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::by_ref<::Fusion::LagCompensation::BVHNode> Fusion::LagCompensation::BVH::GetNextNode(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"GetNextNode", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::BVHNode>>(this, ___internal_method, index);
}
inline void Fusion::LagCompensation::BVH::DisposeNode(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"DisposeNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::by_ref<::Fusion::LagCompensation::BVHNode> Fusion::LagCompensation::BVH::GetNode(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::BVHNode>>(this, ___internal_method, index);
}
inline void Fusion::LagCompensation::BVH::Update(::Fusion::HitboxRoot*  changed, int32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changed, tick);
}
inline void Fusion::LagCompensation::BVH::Traverse(::Fusion::LagCompensation::IBoundsTraversalTest*  hitTest, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  candidateRoots, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Traverse", {}, {::i2c::type_of<::Fusion::LagCompensation::IBoundsTraversalTest*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitTest, candidateRoots, layerMask);
}
inline void Fusion::LagCompensation::BVH::TraverseInternal(::by_ref<::Fusion::LagCompensation::BVHNode>  curNode, ::Fusion::LagCompensation::IBoundsTraversalTest*  hitTest, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  candidateRoots, int32_t  layermask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"TraverseInternal", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::LagCompensation::IBoundsTraversalTest*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curNode, hitTest, candidateRoots, layermask);
}
inline void Fusion::LagCompensation::BVH::PosUpdateRefit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"PosUpdateRefit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::LagCompensation::BVH::Add(::Fusion::HitboxRoot*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::UnityEngine::Bounds Fusion::LagCompensation::BVH::BoundsFromSphere(::UnityEngine::Vector3  pos, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"BoundsFromSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, pos, radius);
}
inline bool Fusion::LagCompensation::BVH::Remove(::Fusion::HitboxRoot*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root);
}
inline void Fusion::LagCompensation::BVH::_ctor(::Fusion::LagCompensation::Mapper*  mapper, int32_t  nodesCapacity, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialEntries, float_t  expansionFactor, int32_t  parentsToExpand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::Mapper*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapper, nodesCapacity, initialEntries, expansionFactor, parentsToExpand);
}
inline void Fusion::LagCompensation::BVH::BuildNodesLog(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"BuildNodesLog", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline void Fusion::LagCompensation::BVH::ResizeNodesArray(int32_t  minimumIncrease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVH*>(),
                        {"ResizeNodesArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimumIncrease);
}
inline ::Fusion::LagCompensation::BVH* Fusion::LagCompensation::BVH::New_ctor(::Fusion::LagCompensation::Mapper*  mapper, int32_t  nodesCapacity, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialEntries, float_t  expansionFactor, int32_t  parentsToExpand)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::BVH*>(mapper, nodesCapacity, initialEntries, expansionFactor, parentsToExpand));
}
/// @brief Convert operator to "::Fusion::LagCompensation::ILagCompensationBroadphase"
constexpr  Fusion::LagCompensation::BVH::operator ::Fusion::LagCompensation::ILagCompensationBroadphase*() noexcept {
return static_cast<::Fusion::LagCompensation::ILagCompensationBroadphase*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::LagCompensation::ILagCompensationBroadphase"
constexpr ::Fusion::LagCompensation::ILagCompensationBroadphase* Fusion::LagCompensation::BVH::i___Fusion__LagCompensation__ILagCompensationBroadphase() noexcept {
return static_cast<::Fusion::LagCompensation::ILagCompensationBroadphase*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BVH::BVH()   {
}
