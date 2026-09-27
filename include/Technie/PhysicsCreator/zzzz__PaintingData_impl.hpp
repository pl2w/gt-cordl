#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/PaintingData.hpp"
#include "Technie/PhysicsCreator/zzzz__AutoHullPreset_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__PaintingData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Hash160_def.hpp"
#include "Technie/PhysicsCreator/zzzz__HullData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__HullType_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IEditorData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IHull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__VhacdParameters_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.get_TotalOutputColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::get_TotalOutputColliders)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xadcd424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_TotalOutputColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.get_CachedHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Hash160* (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::get_CachedHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcd57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_CachedHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.set_CachedHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PaintingData::*)(::Technie::PhysicsCreator::Hash160*)>(&::Technie::PhysicsCreator::PaintingData::set_CachedHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcd584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"set_CachedHash", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.get_HasCachedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::get_HasCachedData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xadcd58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_HasCachedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.get_SourceMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::get_SourceMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_SourceMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.get_Hulls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Technie::PhysicsCreator::IHull*> (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::get_Hulls)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadcd5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_Hulls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.get_HasSuppressMeshModificationWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::get_HasSuppressMeshModificationWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcd638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_HasSuppressMeshModificationWarning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.AddHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PaintingData::*)(::Technie::PhysicsCreator::HullType, ::UnityEngine::PhysicsMaterial*, bool, bool)>(&::Technie::PhysicsCreator::PaintingData::AddHull)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xadcd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"AddHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::HullType>(), ::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.RemoveHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PaintingData::*)(int32_t)>(&::Technie::PhysicsCreator::PaintingData::RemoveHull)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xadcda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"RemoveHull", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.RemoveAllHulls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::RemoveAllHulls)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xadcdad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"RemoveAllHulls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.HasActiveHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::HasActiveHull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xadcdb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"HasActiveHull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.GetActiveHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Rigid::Hull* (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::GetActiveHull)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadcdbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"GetActiveHull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.ContainsMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::PaintingData::*)(::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::PaintingData::ContainsMesh)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xadcdc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"ContainsMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.HasAutoHulls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::HasAutoHulls)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xadcdeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"HasAutoHulls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData.SetAssetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::SetAssetDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadcdfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"SetAssetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::PaintingData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PaintingData::*)()>(&::Technie::PhysicsCreator::PaintingData::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xadcdfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Technie::PhysicsCreator::HullData>& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_hullData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullData;
}
constexpr ::UnityW<::Technie::PhysicsCreator::HullData> const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_hullData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullData;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_hullData(::UnityW<::Technie::PhysicsCreator::HullData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hullData = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_sourceMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_sourceMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMesh;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_sourceMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMesh = value;
}
constexpr ::Technie::PhysicsCreator::Hash160*& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_sourceMeshHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMeshHash;
}
constexpr ::Technie::PhysicsCreator::Hash160* const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_sourceMeshHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMeshHash;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_sourceMeshHash(::Technie::PhysicsCreator::Hash160*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMeshHash = value;
}
constexpr int32_t& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_activeHull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeHull;
}
constexpr int32_t const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_activeHull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeHull;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_activeHull(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeHull = value;
}
constexpr float_t& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_faceThickness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceThickness;
}
constexpr float_t const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_faceThickness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceThickness;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_faceThickness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceThickness = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_hulls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hulls;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>* const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_hulls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hulls;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_hulls(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hulls = value;
}
constexpr ::Technie::PhysicsCreator::AutoHullPreset& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_autoHullPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoHullPreset;
}
constexpr ::Technie::PhysicsCreator::AutoHullPreset const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_autoHullPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoHullPreset;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_autoHullPreset(::Technie::PhysicsCreator::AutoHullPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoHullPreset = value;
}
constexpr ::Technie::PhysicsCreator::VhacdParameters*& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_vhacdParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vhacdParams;
}
constexpr ::Technie::PhysicsCreator::VhacdParameters* const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_vhacdParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vhacdParams;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_vhacdParams(::Technie::PhysicsCreator::VhacdParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vhacdParams = value;
}
constexpr bool& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_hasLastVhacdTimings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLastVhacdTimings;
}
constexpr bool const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_hasLastVhacdTimings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLastVhacdTimings;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_hasLastVhacdTimings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLastVhacdTimings = value;
}
constexpr ::Technie::PhysicsCreator::AutoHullPreset& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_lastVhacdPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVhacdPreset;
}
constexpr ::Technie::PhysicsCreator::AutoHullPreset const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_lastVhacdPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVhacdPreset;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_lastVhacdPreset(::Technie::PhysicsCreator::AutoHullPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVhacdPreset = value;
}
constexpr float_t& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_lastVhacdDurationSecs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVhacdDurationSecs;
}
constexpr float_t const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_lastVhacdDurationSecs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVhacdDurationSecs;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_lastVhacdDurationSecs(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVhacdDurationSecs = value;
}
constexpr bool& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_suppressMeshModificationWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressMeshModificationWarning;
}
constexpr bool const& Technie::PhysicsCreator::PaintingData::__cordl_internal_get_suppressMeshModificationWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressMeshModificationWarning;
}
constexpr void Technie::PhysicsCreator::PaintingData::__cordl_internal_set_suppressMeshModificationWarning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___suppressMeshModificationWarning = value;
}
inline int32_t Technie::PhysicsCreator::PaintingData::get_TotalOutputColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_TotalOutputColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Hash160* Technie::PhysicsCreator::PaintingData::get_CachedHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_CachedHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Hash160*>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::PaintingData::set_CachedHash(::Technie::PhysicsCreator::Hash160*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"set_CachedHash", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Technie::PhysicsCreator::PaintingData::get_HasCachedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_HasCachedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> Technie::PhysicsCreator::PaintingData::get_SourceMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_SourceMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::ArrayW<::Technie::PhysicsCreator::IHull*> Technie::PhysicsCreator::PaintingData::get_Hulls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_Hulls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Technie::PhysicsCreator::IHull*>>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::PaintingData::get_HasSuppressMeshModificationWarning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"get_HasSuppressMeshModificationWarning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::PaintingData::AddHull(::Technie::PhysicsCreator::HullType  type, ::UnityEngine::PhysicsMaterial*  material, bool  isChild, bool  isTrigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"AddHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::HullType>(), ::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, material, isChild, isTrigger);
}
inline void Technie::PhysicsCreator::PaintingData::RemoveHull(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"RemoveHull", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Technie::PhysicsCreator::PaintingData::RemoveAllHulls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"RemoveAllHulls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::PaintingData::HasActiveHull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"HasActiveHull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Rigid::Hull* Technie::PhysicsCreator::PaintingData::GetActiveHull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"GetActiveHull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Rigid::Hull*>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::PaintingData::ContainsMesh(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"ContainsMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline bool Technie::PhysicsCreator::PaintingData::HasAutoHulls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"HasAutoHulls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::PaintingData::SetAssetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {"SetAssetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::PaintingData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PaintingData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::PaintingData* Technie::PhysicsCreator::PaintingData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::PaintingData*>());
}
/// @brief Convert operator to "::Technie::PhysicsCreator::IEditorData"
constexpr  Technie::PhysicsCreator::PaintingData::operator ::Technie::PhysicsCreator::IEditorData*() noexcept {
return static_cast<::Technie::PhysicsCreator::IEditorData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Technie::PhysicsCreator::IEditorData"
constexpr ::Technie::PhysicsCreator::IEditorData* Technie::PhysicsCreator::PaintingData::i___Technie__PhysicsCreator__IEditorData() noexcept {
return static_cast<::Technie::PhysicsCreator::IEditorData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::PaintingData::PaintingData()   {
}
