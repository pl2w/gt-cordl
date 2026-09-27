#pragma once
// IWYU pragma private; include "Pathfinding/FloodPath.hpp"
#include "Pathfinding/zzzz__Path_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__FloodPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::FloodPath.get_FloodingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::FloodPath::*)()>(&::Pathfinding::FloodPath::get_FloodingPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eae35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPath*>(),
                    {::i2c::class_of<::Pathfinding::FloodPath*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.HasPathTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::FloodPath::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::FloodPath::HasPathTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5eae364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"HasPathTo", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.GetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::FloodPath::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::FloodPath::GetParent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eae3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"GetParent", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPath::*)()>(&::Pathfinding::FloodPath::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5eae41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::FloodPath* (*)(::UnityEngine::Vector3, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FloodPath::Construct)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5eae47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::FloodPath* (*)(::Pathfinding::GraphNode*, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FloodPath::Construct)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5eae580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Construct", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPath::*)(::UnityEngine::Vector3, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FloodPath::Setup)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5eae534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPath::*)(::Pathfinding::GraphNode*, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FloodPath::Setup)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5eae658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Setup", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPath::*)()>(&::Pathfinding::FloodPath::Reset)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5eae6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPath*>(),
                    {::i2c::class_of<::Pathfinding::FloodPath*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPath::*)()>(&::Pathfinding::FloodPath::Prepare)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5eae7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPath*>(),
                    {::i2c::class_of<::Pathfinding::FloodPath*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPath::*)()>(&::Pathfinding::FloodPath::Initialize)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5eae994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPath*>(),
                    {::i2c::class_of<::Pathfinding::FloodPath*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPath.CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPath::*)(int64_t)>(&::Pathfinding::FloodPath::CalculateStep)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5eaeaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPath*>(),
                    {::i2c::class_of<::Pathfinding::FloodPath*>(), 27}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Pathfinding::FloodPath::__cordl_internal_get_originalStartPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalStartPoint;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::FloodPath::__cordl_internal_get_originalStartPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalStartPoint;
}
constexpr void Pathfinding::FloodPath::__cordl_internal_set_originalStartPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalStartPoint = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::FloodPath::__cordl_internal_get_startPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::FloodPath::__cordl_internal_get_startPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr void Pathfinding::FloodPath::__cordl_internal_set_startPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPoint = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::FloodPath::__cordl_internal_get_startNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::FloodPath::__cordl_internal_get_startNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNode;
}
constexpr void Pathfinding::FloodPath::__cordl_internal_set_startNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startNode = value;
}
constexpr bool& Pathfinding::FloodPath::__cordl_internal_get_saveParents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveParents;
}
constexpr bool const& Pathfinding::FloodPath::__cordl_internal_get_saveParents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveParents;
}
constexpr void Pathfinding::FloodPath::__cordl_internal_set_saveParents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveParents = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>*& Pathfinding::FloodPath::__cordl_internal_get_parents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parents;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>* const& Pathfinding::FloodPath::__cordl_internal_get_parents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parents;
}
constexpr void Pathfinding::FloodPath::__cordl_internal_set_parents(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parents = value;
}
inline bool Pathfinding::FloodPath::get_FloodingPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPath*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::FloodPath::HasPathTo(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"HasPathTo", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::GraphNode* Pathfinding::FloodPath::GetParent(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"GetParent", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method, node);
}
inline void Pathfinding::FloodPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::FloodPath* Pathfinding::FloodPath::Construct(::UnityEngine::Vector3  start, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::FloodPath*>(nullptr, ___internal_method, start, callback);
}
inline ::Pathfinding::FloodPath* Pathfinding::FloodPath::Construct(::Pathfinding::GraphNode*  start, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Construct", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::FloodPath*>(nullptr, ___internal_method, start, callback);
}
inline void Pathfinding::FloodPath::Setup(::UnityEngine::Vector3  start, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, callback);
}
inline void Pathfinding::FloodPath::Setup(::Pathfinding::GraphNode*  start, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPath*>(),
                        {"Setup", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, callback);
}
inline void Pathfinding::FloodPath::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPath*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::FloodPath::Prepare()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPath*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::FloodPath::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPath*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::FloodPath::CalculateStep(int64_t  targetTick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPath*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline ::Pathfinding::FloodPath* Pathfinding::FloodPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::FloodPath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::FloodPath::FloodPath()   {
}
