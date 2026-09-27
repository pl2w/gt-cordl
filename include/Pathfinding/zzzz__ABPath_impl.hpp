#pragma once
// IWYU pragma private; include "Pathfinding/ABPath.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "Pathfinding/zzzz__Path_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GridNode_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__PathLog_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::ABPath.get_hasEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ABPath::*)()>(&::Pathfinding::ABPath::get_hasEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eab648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)()>(&::Pathfinding::ABPath::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eab650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ABPath* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::ABPath::Construct)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5eab6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::ABPath::Setup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5eab780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.FakePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ABPath* (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::ABPath::FakePath)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5eab85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"FakePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.UpdateStartEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::ABPath::UpdateStartEnd)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5eab7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"UpdateStartEnd", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.GetConnectionSpecialCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::ABPath::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::ABPath::GetConnectionSpecialCost)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5eabbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)()>(&::Pathfinding::ABPath::Reset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5eabe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.EndPointGridGraphSpecialCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ABPath::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::ABPath::EndPointGridGraphSpecialCase)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5eabf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.SetFlagOnSurroundingGridNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)(::Pathfinding::GridNode*, int32_t, bool)>(&::Pathfinding::ABPath::SetFlagOnSurroundingGridNodes)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5eac3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"SetFlagOnSurroundingGridNodes", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)()>(&::Pathfinding::ABPath::Prepare)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5eac678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.CompletePathIfStartIsValidTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)()>(&::Pathfinding::ABPath::CompletePathIfStartIsValidTarget)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5eac9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)()>(&::Pathfinding::ABPath::Initialize)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5eacb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)()>(&::Pathfinding::ABPath::Cleanup)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5eacdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.CompletePartial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)(::Pathfinding::PathNode*)>(&::Pathfinding::ABPath::CompletePartial)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5eacd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"CompletePartial", {}, {::i2c::type_of<::Pathfinding::PathNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.CompleteWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::ABPath::CompleteWith)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5eaca58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"CompleteWith", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPath::*)(int64_t)>(&::Pathfinding::ABPath::CalculateStep)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5eaced8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.DebugString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::ABPath::*)(::Pathfinding::PathLog)>(&::Pathfinding::ABPath::DebugString)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5ead130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPath*>(),
                    {::i2c::class_of<::Pathfinding::ABPath*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPath.GetMovementVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::ABPath::*)(::UnityEngine::Vector3)>(&::Pathfinding::ABPath::GetMovementVector)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5ead49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"GetMovementVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphNode*& Pathfinding::ABPath::__cordl_internal_get_startNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::ABPath::__cordl_internal_get_startNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNode;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_startNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startNode = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::ABPath::__cordl_internal_get_endNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::ABPath::__cordl_internal_get_endNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endNode;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_endNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endNode = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::ABPath::__cordl_internal_get_originalStartPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalStartPoint;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::ABPath::__cordl_internal_get_originalStartPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalStartPoint;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_originalStartPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalStartPoint = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::ABPath::__cordl_internal_get_originalEndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalEndPoint;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::ABPath::__cordl_internal_get_originalEndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalEndPoint;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_originalEndPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalEndPoint = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::ABPath::__cordl_internal_get_startPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::ABPath::__cordl_internal_get_startPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_startPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPoint = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::ABPath::__cordl_internal_get_endPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPoint;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::ABPath::__cordl_internal_get_endPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPoint;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_endPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPoint = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::ABPath::__cordl_internal_get_startIntPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startIntPoint;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::ABPath::__cordl_internal_get_startIntPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startIntPoint;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_startIntPoint(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startIntPoint = value;
}
constexpr bool& Pathfinding::ABPath::__cordl_internal_get_calculatePartial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatePartial;
}
constexpr bool const& Pathfinding::ABPath::__cordl_internal_get_calculatePartial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatePartial;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_calculatePartial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calculatePartial = value;
}
constexpr ::Pathfinding::PathNode*& Pathfinding::ABPath::__cordl_internal_get_partialBestTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialBestTarget;
}
constexpr ::Pathfinding::PathNode* const& Pathfinding::ABPath::__cordl_internal_get_partialBestTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialBestTarget;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_partialBestTarget(::Pathfinding::PathNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partialBestTarget = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::ABPath::__cordl_internal_get_endNodeCosts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endNodeCosts;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::ABPath::__cordl_internal_get_endNodeCosts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endNodeCosts;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_endNodeCosts(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endNodeCosts = value;
}
constexpr ::Pathfinding::GridNode*& Pathfinding::ABPath::__cordl_internal_get_gridSpecialCaseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSpecialCaseNode;
}
constexpr ::Pathfinding::GridNode* const& Pathfinding::ABPath::__cordl_internal_get_gridSpecialCaseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSpecialCaseNode;
}
constexpr void Pathfinding::ABPath::__cordl_internal_set_gridSpecialCaseNode(::Pathfinding::GridNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridSpecialCaseNode = value;
}
inline void Pathfinding::ABPath::setStaticF_NNConstraintNone(::Pathfinding::NNConstraint*  value)  {
::cordl_internals::setStaticField<::Pathfinding::NNConstraint*, "NNConstraintNone", ::Pathfinding::ABPath*>(std::forward<::Pathfinding::NNConstraint*>(value));
}
inline ::Pathfinding::NNConstraint* Pathfinding::ABPath::getStaticF_NNConstraintNone()  {
return ::cordl_internals::getStaticField<::Pathfinding::NNConstraint*, "NNConstraintNone", ::Pathfinding::ABPath*>();
}
inline bool Pathfinding::ABPath::get_hasEndPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ABPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ABPath* Pathfinding::ABPath::Construct(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ABPath*>(nullptr, ___internal_method, start, end, callback);
}
inline void Pathfinding::ABPath::Setup(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callbackDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, callbackDelegate);
}
inline ::Pathfinding::ABPath* Pathfinding::ABPath::FakePath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vectorPath, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"FakePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ABPath*>(nullptr, ___internal_method, vectorPath, nodePath);
}
inline void Pathfinding::ABPath::UpdateStartEnd(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"UpdateStartEnd", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline uint32_t Pathfinding::ABPath::GetConnectionSpecialCost(::Pathfinding::GraphNode*  a, ::Pathfinding::GraphNode*  b, uint32_t  currentCost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, a, b, currentCost);
}
inline void Pathfinding::ABPath::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::ABPath::EndPointGridGraphSpecialCase(::Pathfinding::GraphNode*  closestWalkableEndNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, closestWalkableEndNode);
}
inline void Pathfinding::ABPath::SetFlagOnSurroundingGridNodes(::Pathfinding::GridNode*  gridNode, int32_t  flag, bool  flagState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"SetFlagOnSurroundingGridNodes", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gridNode, flag, flagState);
}
inline void Pathfinding::ABPath::Prepare()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ABPath::CompletePathIfStartIsValidTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ABPath::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ABPath::Cleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ABPath::CompletePartial(::Pathfinding::PathNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"CompletePartial", {}, {::i2c::type_of<::Pathfinding::PathNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::ABPath::CompleteWith(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"CompleteWith", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::ABPath::CalculateStep(int64_t  targetTick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline ::StringW Pathfinding::ABPath::DebugString(::Pathfinding::PathLog  logMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPath*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, logMode);
}
inline ::UnityEngine::Vector3 Pathfinding::ABPath::GetMovementVector(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPath*>(),
                        {"GetMovementVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline ::Pathfinding::ABPath* Pathfinding::ABPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ABPath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ABPath::ABPath()   {
}
