#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/CuttableMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__CuttableMesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__CuttableSubMesh_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::CuttableMesh::*)(::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::CuttableMesh::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xadc920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::CuttableMesh::*)(::UnityEngine::MeshRenderer*)>(&::Technie::PhysicsCreator::CuttableMesh::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadc9524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::CuttableMesh::*)(::UnityEngine::Mesh*, ::StringW)>(&::Technie::PhysicsCreator::CuttableMesh::Init)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xadc9250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::CuttableMesh::*)(::Technie::PhysicsCreator::CuttableMesh*, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*)>(&::Technie::PhysicsCreator::CuttableMesh::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xadc9a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::CuttableMesh::*)(::Technie::PhysicsCreator::CuttableMesh*)>(&::Technie::PhysicsCreator::CuttableMesh::Add)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xadc9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.NumSubMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::CuttableMesh::*)()>(&::Technie::PhysicsCreator::CuttableMesh::NumSubMeshes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xadc9ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"NumSubMeshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.HasUvs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::CuttableMesh::*)()>(&::Technie::PhysicsCreator::CuttableMesh::HasUvs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc9d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"HasUvs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.HasColours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::CuttableMesh::*)()>(&::Technie::PhysicsCreator::CuttableMesh::HasColours)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc9d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"HasColours", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.GetSubMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* (::Technie::PhysicsCreator::CuttableMesh::*)()>(&::Technie::PhysicsCreator::CuttableMesh::GetSubMeshes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc9d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"GetSubMeshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.GetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CuttableSubMesh* (::Technie::PhysicsCreator::CuttableMesh::*)(int32_t)>(&::Technie::PhysicsCreator::CuttableMesh::GetSubMesh)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadc9d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.GetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Technie::PhysicsCreator::CuttableMesh::*)()>(&::Technie::PhysicsCreator::CuttableMesh::GetTransform)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadc9d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"GetTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.ConvertToRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (::Technie::PhysicsCreator::CuttableMesh::*)(::StringW)>(&::Technie::PhysicsCreator::CuttableMesh::ConvertToRenderer)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xadc9e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"ConvertToRenderer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::CuttableMesh.CreateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Technie::PhysicsCreator::CuttableMesh::*)()>(&::Technie::PhysicsCreator::CuttableMesh::CreateMesh)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0xadca0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"CreateMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_inputMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_inputMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMeshRenderer;
}
constexpr void Technie::PhysicsCreator::CuttableMesh::__cordl_internal_set_inputMeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputMeshRenderer = value;
}
constexpr bool& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_hasUvs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUvs;
}
constexpr bool const& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_hasUvs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUvs;
}
constexpr void Technie::PhysicsCreator::CuttableMesh::__cordl_internal_set_hasUvs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasUvs = value;
}
constexpr bool& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_hasUv1s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUv1s;
}
constexpr bool const& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_hasUv1s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUv1s;
}
constexpr void Technie::PhysicsCreator::CuttableMesh::__cordl_internal_set_hasUv1s(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasUv1s = value;
}
constexpr bool& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_hasColours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasColours;
}
constexpr bool const& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_hasColours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasColours;
}
constexpr void Technie::PhysicsCreator::CuttableMesh::__cordl_internal_set_hasColours(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasColours = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_subMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshes;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* const& Technie::PhysicsCreator::CuttableMesh::__cordl_internal_get_subMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshes;
}
constexpr void Technie::PhysicsCreator::CuttableMesh::__cordl_internal_set_subMeshes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subMeshes = value;
}
inline void Technie::PhysicsCreator::CuttableMesh::_ctor(::UnityEngine::Mesh*  inputMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputMesh);
}
inline void Technie::PhysicsCreator::CuttableMesh::_ctor(::UnityEngine::MeshRenderer*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Technie::PhysicsCreator::CuttableMesh::Init(::UnityEngine::Mesh*  inputMesh, ::StringW  debugName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputMesh, debugName);
}
inline void Technie::PhysicsCreator::CuttableMesh::_ctor(::Technie::PhysicsCreator::CuttableMesh*  inputMesh, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  newSubMeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputMesh, newSubMeshes);
}
inline void Technie::PhysicsCreator::CuttableMesh::Add(::Technie::PhysicsCreator::CuttableMesh*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::CuttableMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline int32_t Technie::PhysicsCreator::CuttableMesh::NumSubMeshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"NumSubMeshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::CuttableMesh::HasUvs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"HasUvs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::CuttableMesh::HasColours()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"HasColours", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* Technie::PhysicsCreator::CuttableMesh::GetSubMeshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"GetSubMeshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::CuttableSubMesh* Technie::PhysicsCreator::CuttableMesh::GetSubMesh(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CuttableSubMesh*>(this, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::Transform> Technie::PhysicsCreator::CuttableMesh::GetTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"GetTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MeshRenderer> Technie::PhysicsCreator::CuttableMesh::ConvertToRenderer(::StringW  newObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"ConvertToRenderer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>>(this, ___internal_method, newObjectName);
}
inline ::UnityW<::UnityEngine::Mesh> Technie::PhysicsCreator::CuttableMesh::CreateMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::CuttableMesh*>(),
                        {"CreateMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::CuttableMesh* Technie::PhysicsCreator::CuttableMesh::New_ctor(::UnityEngine::Mesh*  inputMesh)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::CuttableMesh*>(inputMesh));
}
inline ::Technie::PhysicsCreator::CuttableMesh* Technie::PhysicsCreator::CuttableMesh::New_ctor(::UnityEngine::MeshRenderer*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::CuttableMesh*>(input));
}
inline ::Technie::PhysicsCreator::CuttableMesh* Technie::PhysicsCreator::CuttableMesh::New_ctor(::Technie::PhysicsCreator::CuttableMesh*  inputMesh, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  newSubMeshes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::CuttableMesh*>(inputMesh, newSubMeshes));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::CuttableMesh::CuttableMesh()   {
}
