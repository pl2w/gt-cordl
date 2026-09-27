#pragma once
// IWYU pragma private; include "Pathfinding/Examples/PathTypesDemo.hpp"
#include "Pathfinding/Examples/zzzz__PathTypesDemo_DemoMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Examples/zzzz__PathTypesDemo_def.hpp"
#include "Pathfinding/Examples/zzzz__PathTypesDemo_DemoMode_def.hpp"
#include "Pathfinding/Examples/zzzz__PathTypesDemo_def.hpp"
#include "Pathfinding/zzzz__ConstantPath_def.hpp"
#include "Pathfinding/zzzz__FloodPath_def.hpp"
#include "Pathfinding/zzzz__MultiTargetPath_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ef77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::OnGUI)> {
  constexpr static std::size_t size = 0xe5c;
  constexpr static std::size_t addrs = 0x5ef7d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo::*)(::Pathfinding::Path*)>(&::Pathfinding::Examples::PathTypesDemo::OnPathComplete)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5ef8bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.ClearPrevious
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::ClearPrevious)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ef8ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"ClearPrevious", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ef8f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.DemoPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::DemoPath)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5ef7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"DemoPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.DemoMultiTargetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::DemoMultiTargetPath)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef8fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"DemoMultiTargetPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo.DemoConstantPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::DemoConstantPath)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef9028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"DemoConstantPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo::*)()>(&::Pathfinding::Examples::PathTypesDemo::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ef90e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PathTypesDemo_DemoMode& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_activeDemo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeDemo;
}
constexpr ::GlobalNamespace::PathTypesDemo_DemoMode const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_activeDemo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeDemo;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_activeDemo(::GlobalNamespace::PathTypesDemo_DemoMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeDemo = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_start(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_pathOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathOffset;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_pathOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathOffset;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_pathOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathOffset = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lineMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lineMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineMat;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_lineMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_squareMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_squareMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareMat;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_squareMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squareMat = value;
}
constexpr float_t& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lineWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineWidth;
}
constexpr float_t const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lineWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineWidth;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_lineWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineWidth = value;
}
constexpr int32_t& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_searchLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchLength;
}
constexpr int32_t const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_searchLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchLength;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_searchLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchLength = value;
}
constexpr int32_t& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr int32_t const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_spread(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spread = value;
}
constexpr float_t& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_aimStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimStrength;
}
constexpr float_t const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_aimStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimStrength;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_aimStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aimStrength = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lastPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPath;
}
constexpr ::Pathfinding::Path* const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lastPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPath;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_lastPath(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPath = value;
}
constexpr ::Pathfinding::FloodPath*& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lastFloodPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFloodPath;
}
constexpr ::Pathfinding::FloodPath* const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lastFloodPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFloodPath;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_lastFloodPath(::Pathfinding::FloodPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFloodPath = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lastRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRender;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_lastRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRender;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_lastRender(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRender = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_multipoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multipoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::Examples::PathTypesDemo::__cordl_internal_get_multipoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multipoints;
}
constexpr void Pathfinding::Examples::PathTypesDemo::__cordl_internal_set_multipoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multipoints = value;
}
inline void Pathfinding::Examples::PathTypesDemo::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::PathTypesDemo::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::PathTypesDemo::OnPathComplete(::Pathfinding::Path*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Pathfinding::Examples::PathTypesDemo::ClearPrevious()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"ClearPrevious", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::PathTypesDemo::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::PathTypesDemo::DemoPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"DemoPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::PathTypesDemo::DemoMultiTargetPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"DemoMultiTargetPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::PathTypesDemo::DemoConstantPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {"DemoConstantPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::Examples::PathTypesDemo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::PathTypesDemo* Pathfinding::Examples::PathTypesDemo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::PathTypesDemo*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::PathTypesDemo::PathTypesDemo()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::*)(int32_t)>(&::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef9094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef9bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5ef9bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efa1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5efa1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efa204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo>& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo> const& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::PathTypesDemo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::MultiTargetPath*& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get__mp_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mp_5__2;
}
constexpr ::Pathfinding::MultiTargetPath* const& Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_get__mp_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mp_5__2;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::__cordl_internal_set__mp_5__2(::Pathfinding::MultiTargetPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mp_5__2 = value;
}
inline void Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21* Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21::PathTypesDemo__DemoMultiTargetPath_d__21()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::*)(int32_t)>(&::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef90bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef91cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x5ef91d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef9bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::*)()>(&::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo>& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo> const& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::PathTypesDemo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::ConstantPath*& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get__constPath_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constPath_5__2;
}
constexpr ::Pathfinding::ConstantPath* const& Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_get__constPath_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constPath_5__2;
}
constexpr void Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::__cordl_internal_set__constPath_5__2(::Pathfinding::ConstantPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constPath_5__2 = value;
}
inline void Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22* Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22::PathTypesDemo__DemoConstantPath_d__22()   {
}
