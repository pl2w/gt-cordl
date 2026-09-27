#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateShape_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateStage_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphUpdateObject.set_requiresFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateObject::*)(bool)>(&::Pathfinding::GraphUpdateObject::set_requiresFloodFill)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e485c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {"set_requiresFloodFill", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateObject.get_stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphUpdateStage (::Pathfinding::GraphUpdateObject::*)()>(&::Pathfinding::GraphUpdateObject::get_stage)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e485cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {"get_stage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateObject.WillUpdateNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateObject::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphUpdateObject::WillUpdateNode)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x5e485f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                    {::i2c::class_of<::Pathfinding::GraphUpdateObject*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateObject.RevertFromBackup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateObject::*)()>(&::Pathfinding::GraphUpdateObject::RevertFromBackup)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5e48984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                    {::i2c::class_of<::Pathfinding::GraphUpdateObject*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateObject.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateObject::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphUpdateObject::Apply)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e48d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                    {::i2c::class_of<::Pathfinding::GraphUpdateObject*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateObject::*)()>(&::Pathfinding::GraphUpdateObject::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e48dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateObject::*)(::UnityEngine::Bounds)>(&::Pathfinding::GraphUpdateObject::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e48e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Bounds& Pathfinding::GraphUpdateObject::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::GraphUpdateObject::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr bool& Pathfinding::GraphUpdateObject::__cordl_internal_get_updatePhysics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePhysics;
}
constexpr bool const& Pathfinding::GraphUpdateObject::__cordl_internal_get_updatePhysics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePhysics;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_updatePhysics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatePhysics = value;
}
constexpr bool& Pathfinding::GraphUpdateObject::__cordl_internal_get_resetPenaltyOnPhysics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetPenaltyOnPhysics;
}
constexpr bool const& Pathfinding::GraphUpdateObject::__cordl_internal_get_resetPenaltyOnPhysics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetPenaltyOnPhysics;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_resetPenaltyOnPhysics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetPenaltyOnPhysics = value;
}
constexpr bool& Pathfinding::GraphUpdateObject::__cordl_internal_get_updateErosion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateErosion;
}
constexpr bool const& Pathfinding::GraphUpdateObject::__cordl_internal_get_updateErosion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateErosion;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_updateErosion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateErosion = value;
}
constexpr ::Pathfinding::NNConstraint*& Pathfinding::GraphUpdateObject::__cordl_internal_get_nnConstraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nnConstraint;
}
constexpr ::Pathfinding::NNConstraint* const& Pathfinding::GraphUpdateObject::__cordl_internal_get_nnConstraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nnConstraint;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_nnConstraint(::Pathfinding::NNConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nnConstraint = value;
}
constexpr int32_t& Pathfinding::GraphUpdateObject::__cordl_internal_get_addPenalty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addPenalty;
}
constexpr int32_t const& Pathfinding::GraphUpdateObject::__cordl_internal_get_addPenalty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addPenalty;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_addPenalty(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addPenalty = value;
}
constexpr bool& Pathfinding::GraphUpdateObject::__cordl_internal_get_modifyWalkability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyWalkability;
}
constexpr bool const& Pathfinding::GraphUpdateObject::__cordl_internal_get_modifyWalkability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyWalkability;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_modifyWalkability(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifyWalkability = value;
}
constexpr bool& Pathfinding::GraphUpdateObject::__cordl_internal_get_setWalkability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setWalkability;
}
constexpr bool const& Pathfinding::GraphUpdateObject::__cordl_internal_get_setWalkability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setWalkability;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_setWalkability(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setWalkability = value;
}
constexpr bool& Pathfinding::GraphUpdateObject::__cordl_internal_get_modifyTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyTag;
}
constexpr bool const& Pathfinding::GraphUpdateObject::__cordl_internal_get_modifyTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyTag;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_modifyTag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifyTag = value;
}
constexpr int32_t& Pathfinding::GraphUpdateObject::__cordl_internal_get_setTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setTag;
}
constexpr int32_t const& Pathfinding::GraphUpdateObject::__cordl_internal_get_setTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setTag;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_setTag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setTag = value;
}
constexpr bool& Pathfinding::GraphUpdateObject::__cordl_internal_get_trackChangedNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackChangedNodes;
}
constexpr bool const& Pathfinding::GraphUpdateObject::__cordl_internal_get_trackChangedNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackChangedNodes;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_trackChangedNodes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackChangedNodes = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::GraphUpdateObject::__cordl_internal_get_changedNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changedNodes;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::GraphUpdateObject::__cordl_internal_get_changedNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changedNodes;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_changedNodes(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changedNodes = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& Pathfinding::GraphUpdateObject::__cordl_internal_get_backupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backupData;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& Pathfinding::GraphUpdateObject::__cordl_internal_get_backupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backupData;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_backupData(::System::Collections::Generic::List_1<uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backupData = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>*& Pathfinding::GraphUpdateObject::__cordl_internal_get_backupPositionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backupPositionData;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>* const& Pathfinding::GraphUpdateObject::__cordl_internal_get_backupPositionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backupPositionData;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_backupPositionData(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backupPositionData = value;
}
constexpr ::Pathfinding::GraphUpdateShape*& Pathfinding::GraphUpdateObject::__cordl_internal_get_shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr ::Pathfinding::GraphUpdateShape* const& Pathfinding::GraphUpdateObject::__cordl_internal_get_shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_shape(::Pathfinding::GraphUpdateShape*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shape = value;
}
constexpr int32_t& Pathfinding::GraphUpdateObject::__cordl_internal_get_internalStage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalStage;
}
constexpr int32_t const& Pathfinding::GraphUpdateObject::__cordl_internal_get_internalStage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalStage;
}
constexpr void Pathfinding::GraphUpdateObject::__cordl_internal_set_internalStage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalStage = value;
}
inline void Pathfinding::GraphUpdateObject::set_requiresFloodFill(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {"set_requiresFloodFill", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::GraphUpdateStage Pathfinding::GraphUpdateObject::get_stage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {"get_stage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphUpdateStage>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateObject::WillUpdateNode(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphUpdateObject*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GraphUpdateObject::RevertFromBackup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphUpdateObject*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateObject::Apply(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphUpdateObject*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GraphUpdateObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateObject::_ctor(::UnityEngine::Bounds  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateObject*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::Pathfinding::GraphUpdateObject* Pathfinding::GraphUpdateObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphUpdateObject*>());
}
inline ::Pathfinding::GraphUpdateObject* Pathfinding::GraphUpdateObject::New_ctor(::UnityEngine::Bounds  b)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphUpdateObject*>(b));
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUpdateObject::GraphUpdateObject()   {
}
