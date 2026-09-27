#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/MeshCutter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__MeshCutter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__CuttableMesh_def.hpp"
#include "Technie/PhysicsCreator/zzzz__CuttableSubMesh_def.hpp"
#include "Technie/PhysicsCreator/zzzz__VertexClassification_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)()>(&::Technie::PhysicsCreator::MeshCutter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcb3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.Cut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)(::Technie::PhysicsCreator::CuttableMesh*, ::UnityEngine::Plane)>(&::Technie::PhysicsCreator::MeshCutter::Cut)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0xadcb3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"Cut", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableMesh*>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.ClosestPointOnPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Plane, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::MeshCutter::ClosestPointOnPlane)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xadcb760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"ClosestPointOnPlane", {}, {::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.GetFrontOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CuttableMesh* (::Technie::PhysicsCreator::MeshCutter::*)()>(&::Technie::PhysicsCreator::MeshCutter::GetFrontOutput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xadcbdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"GetFrontOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.GetBackOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CuttableMesh* (::Technie::PhysicsCreator::MeshCutter::*)()>(&::Technie::PhysicsCreator::MeshCutter::GetBackOutput)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadcbe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"GetBackOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.Cut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)(::Technie::PhysicsCreator::CuttableSubMesh*, ::UnityEngine::Plane)>(&::Technie::PhysicsCreator::MeshCutter::Cut)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0xadcb794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"Cut", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.Classify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::VertexClassification (::Technie::PhysicsCreator::MeshCutter::*)(::UnityEngine::Vector3, ::UnityEngine::Plane)>(&::Technie::PhysicsCreator::MeshCutter::Classify)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xadcbe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"Classify", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.CountSides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)(::Technie::PhysicsCreator::VertexClassification, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Technie::PhysicsCreator::MeshCutter::CountSides)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xadcbed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"CountSides", {}, {::i2c::type_of<::Technie::PhysicsCreator::VertexClassification>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.KeepTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)(int32_t, int32_t, int32_t, ::Technie::PhysicsCreator::CuttableSubMesh*, ::Technie::PhysicsCreator::CuttableSubMesh*)>(&::Technie::PhysicsCreator::MeshCutter::KeepTriangle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xadcbef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"KeepTriangle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.SplitA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)(int32_t, int32_t, int32_t, ::Technie::PhysicsCreator::CuttableSubMesh*, ::UnityEngine::Plane, ::Technie::PhysicsCreator::CuttableSubMesh*, ::Technie::PhysicsCreator::CuttableSubMesh*)>(&::Technie::PhysicsCreator::MeshCutter::SplitA)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xadcbf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"SplitA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.SplitB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)(int32_t, int32_t, int32_t, ::Technie::PhysicsCreator::CuttableSubMesh*, ::UnityEngine::Plane, ::Technie::PhysicsCreator::CuttableSubMesh*, ::Technie::PhysicsCreator::CuttableSubMesh*)>(&::Technie::PhysicsCreator::MeshCutter::SplitB)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xadcc124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"SplitB", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.SplitBFlipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::MeshCutter::*)(int32_t, int32_t, int32_t, ::Technie::PhysicsCreator::CuttableSubMesh*, ::UnityEngine::Plane, ::Technie::PhysicsCreator::CuttableSubMesh*, ::Technie::PhysicsCreator::CuttableSubMesh*)>(&::Technie::PhysicsCreator::MeshCutter::SplitBFlipped)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xadcc258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"SplitBFlipped", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::MeshCutter.CalcIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Technie::PhysicsCreator::MeshCutter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Plane, ::by_ref<float_t>)>(&::Technie::PhysicsCreator::MeshCutter::CalcIntersection)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xadcc398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"CalcIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Technie::PhysicsCreator::CuttableMesh*& Technie::PhysicsCreator::MeshCutter::__cordl_internal_get_inputMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMesh;
}
constexpr ::Technie::PhysicsCreator::CuttableMesh* const& Technie::PhysicsCreator::MeshCutter::__cordl_internal_get_inputMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMesh;
}
constexpr void Technie::PhysicsCreator::MeshCutter::__cordl_internal_set_inputMesh(::Technie::PhysicsCreator::CuttableMesh*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*& Technie::PhysicsCreator::MeshCutter::__cordl_internal_get_outputFrontSubMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputFrontSubMeshes;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* const& Technie::PhysicsCreator::MeshCutter::__cordl_internal_get_outputFrontSubMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputFrontSubMeshes;
}
constexpr void Technie::PhysicsCreator::MeshCutter::__cordl_internal_set_outputFrontSubMeshes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputFrontSubMeshes = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*& Technie::PhysicsCreator::MeshCutter::__cordl_internal_get_outputBackSubMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputBackSubMeshes;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* const& Technie::PhysicsCreator::MeshCutter::__cordl_internal_get_outputBackSubMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputBackSubMeshes;
}
constexpr void Technie::PhysicsCreator::MeshCutter::__cordl_internal_set_outputBackSubMeshes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputBackSubMeshes = value;
}
inline void Technie::PhysicsCreator::MeshCutter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::MeshCutter::Cut(::Technie::PhysicsCreator::CuttableMesh*  input, ::UnityEngine::Plane  worldCutPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"Cut", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableMesh*>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, worldCutPlane);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::MeshCutter::ClosestPointOnPlane(::UnityEngine::Plane  plane, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"ClosestPointOnPlane", {}, {::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, plane, point);
}
inline ::Technie::PhysicsCreator::CuttableMesh* Technie::PhysicsCreator::MeshCutter::GetFrontOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"GetFrontOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CuttableMesh*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::CuttableMesh* Technie::PhysicsCreator::MeshCutter::GetBackOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"GetBackOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CuttableMesh*>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::MeshCutter::Cut(::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"Cut", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSubMesh, cutPlane);
}
inline ::Technie::PhysicsCreator::VertexClassification Technie::PhysicsCreator::MeshCutter::Classify(::UnityEngine::Vector3  vertex, ::UnityEngine::Plane  cutPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"Classify", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::VertexClassification>(this, ___internal_method, vertex, cutPlane);
}
inline void Technie::PhysicsCreator::MeshCutter::CountSides(::Technie::PhysicsCreator::VertexClassification  c, ::by_ref<int32_t>  numFront, ::by_ref<int32_t>  numBehind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"CountSides", {}, {::i2c::type_of<::Technie::PhysicsCreator::VertexClassification>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, numFront, numBehind);
}
inline void Technie::PhysicsCreator::MeshCutter::KeepTriangle(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  destSubMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"KeepTriangle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i0, i1, i2, inputSubMesh, destSubMesh);
}
inline void Technie::PhysicsCreator::MeshCutter::SplitA(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane, ::Technie::PhysicsCreator::CuttableSubMesh*  frontSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  backSubMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"SplitA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i0, i1, i2, inputSubMesh, cutPlane, frontSubMesh, backSubMesh);
}
inline void Technie::PhysicsCreator::MeshCutter::SplitB(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane, ::Technie::PhysicsCreator::CuttableSubMesh*  frontSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  backSubMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"SplitB", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i0, i1, i2, inputSubMesh, cutPlane, frontSubMesh, backSubMesh);
}
inline void Technie::PhysicsCreator::MeshCutter::SplitBFlipped(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane, ::Technie::PhysicsCreator::CuttableSubMesh*  frontSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  backSubMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"SplitBFlipped", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>(), ::i2c::type_of<::Technie::PhysicsCreator::CuttableSubMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i0, i1, i2, inputSubMesh, cutPlane, frontSubMesh, backSubMesh);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::MeshCutter::CalcIntersection(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1, ::UnityEngine::Plane  plane, ::by_ref<float_t>  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::MeshCutter*>(),
                        {"CalcIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, v0, v1, plane, weight);
}
inline ::Technie::PhysicsCreator::MeshCutter* Technie::PhysicsCreator::MeshCutter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::MeshCutter*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::MeshCutter::MeshCutter()   {
}
