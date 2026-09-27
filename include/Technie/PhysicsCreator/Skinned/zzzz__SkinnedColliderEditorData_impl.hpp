#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/SkinnedColliderEditorData.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__ColliderType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__SkinnedColliderEditorData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneData_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneHullData_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__SkinnedColliderRuntimeData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Hash160_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IEditorData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IHull_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.get_CachedHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Hash160* (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_CachedHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_CachedHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.set_CachedHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Hash160*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::set_CachedHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"set_CachedHash", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.get_HasCachedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasCachedData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xadd8e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_HasCachedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.get_SourceMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_SourceMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_SourceMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.get_Hulls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Technie::PhysicsCreator::IHull*> (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_Hulls)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadd8ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_Hulls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.get_HasSuppressMeshModificationWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasSuppressMeshModificationWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_HasSuppressMeshModificationWarning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.SetSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadd8f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"SetSelection", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.SetSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadd8fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"SetSelection", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.ClearSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::ClearSelection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadd9060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"ClearSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.GetSelectedBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Skinned::BoneData* (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedBone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadd906c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetSelectedBone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.GetSelectedHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Skinned::BoneHullData* (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedHull)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadd90ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetSelectedHull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.GetBoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Skinned::BoneData* (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::UnityEngine::Transform*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xadd916c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.GetBoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Skinned::BoneData* (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::StringW)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xadd920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.GetBoneHullData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::UnityEngine::Transform*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xadd9364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneHullData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.GetBoneHullData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::StringW)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xadd941c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneHullData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.SetAssetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetAssetDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadd965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"SetAssetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.MarkDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::MarkDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadd8fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"MarkDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.GetLastModifiedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetLastModifiedFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd9660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetLastModifiedFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xadd9668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadd9714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Remove", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xadd976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadd9818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Remove", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xadd9870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData>& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_runtimeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runtimeData;
}
constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData> const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_runtimeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runtimeData;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_runtimeData(::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runtimeData = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMass;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMass;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_defaultMass(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMass = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultLinearDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLinearDrag;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultLinearDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLinearDrag;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_defaultLinearDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLinearDrag = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultAngularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAngularDrag;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultAngularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAngularDrag;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_defaultAngularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAngularDrag = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultLinearDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLinearDamping;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultLinearDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLinearDamping;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_defaultLinearDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLinearDamping = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultAngularDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAngularDamping;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultAngularDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAngularDamping;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_defaultAngularDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAngularDamping = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaterial = value;
}
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultColliderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColliderType;
}
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_defaultColliderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColliderType;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_defaultColliderType(::Technie::PhysicsCreator::Skinned::ColliderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColliderType = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_boneData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneData;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>* const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_boneData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneData;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_boneData(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneData = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_boneHullData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneHullData;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>* const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_boneHullData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneHullData;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_boneHullData(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneHullData = value;
}
constexpr int32_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_selectedBoneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedBoneIndex;
}
constexpr int32_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_selectedBoneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedBoneIndex;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_selectedBoneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedBoneIndex = value;
}
constexpr int32_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_selectedHullIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedHullIndex;
}
constexpr int32_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_selectedHullIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedHullIndex;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_selectedHullIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedHullIndex = value;
}
constexpr int32_t& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_lastModifiedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastModifiedFrame;
}
constexpr int32_t const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_lastModifiedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastModifiedFrame;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_lastModifiedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastModifiedFrame = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_sourceMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_sourceMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMesh;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_sourceMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMesh = value;
}
constexpr ::Technie::PhysicsCreator::Hash160*& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_sourceMeshHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMeshHash;
}
constexpr ::Technie::PhysicsCreator::Hash160* const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_sourceMeshHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMeshHash;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_sourceMeshHash(::Technie::PhysicsCreator::Hash160*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMeshHash = value;
}
constexpr bool& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_suppressMeshModificationWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressMeshModificationWarning;
}
constexpr bool const& Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_get_suppressMeshModificationWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressMeshModificationWarning;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::__cordl_internal_set_suppressMeshModificationWarning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___suppressMeshModificationWarning = value;
}
inline ::Technie::PhysicsCreator::Hash160* Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_CachedHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_CachedHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Hash160*>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::set_CachedHash(::Technie::PhysicsCreator::Hash160*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"set_CachedHash", {}, {::i2c::type_of<::Technie::PhysicsCreator::Hash160*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasCachedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_HasCachedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_SourceMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_SourceMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::ArrayW<::Technie::PhysicsCreator::IHull*> Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_Hulls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_Hulls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Technie::PhysicsCreator::IHull*>>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasSuppressMeshModificationWarning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"get_HasSuppressMeshModificationWarning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection(::Technie::PhysicsCreator::Skinned::BoneData*  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"SetSelection", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bone);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection(::Technie::PhysicsCreator::Skinned::BoneHullData*  hull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"SetSelection", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"ClearSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::BoneData* Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedBone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetSelectedBone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Skinned::BoneData*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::BoneHullData* Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedHull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetSelectedHull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Skinned::BoneHullData*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::BoneData* Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData(::UnityEngine::Transform*  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Skinned::BoneData*>(this, ___internal_method, bone);
}
inline ::Technie::PhysicsCreator::Skinned::BoneData* Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData(::StringW  boneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Skinned::BoneData*>(this, ___internal_method, boneName);
}
inline ::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData(::UnityEngine::Transform*  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneHullData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*>>(this, ___internal_method, bone);
}
inline ::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData(::StringW  boneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetBoneHullData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*>>(this, ___internal_method, boneName);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetAssetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"SetAssetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::MarkDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"MarkDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetLastModifiedFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"GetLastModifiedFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add(::Technie::PhysicsCreator::Skinned::BoneData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove(::Technie::PhysicsCreator::Skinned::BoneData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Remove", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add(::Technie::PhysicsCreator::Skinned::BoneHullData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove(::Technie::PhysicsCreator::Skinned::BoneHullData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {"Remove", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData* Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*>());
}
/// @brief Convert operator to "::Technie::PhysicsCreator::IEditorData"
constexpr  Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::operator ::Technie::PhysicsCreator::IEditorData*() noexcept {
return static_cast<::Technie::PhysicsCreator::IEditorData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Technie::PhysicsCreator::IEditorData"
constexpr ::Technie::PhysicsCreator::IEditorData* Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::i___Technie__PhysicsCreator__IEditorData() noexcept {
return static_cast<::Technie::PhysicsCreator::IEditorData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SkinnedColliderEditorData()   {
}
