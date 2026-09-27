#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/SkinnedColliderCreator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__SkinnedColliderCreator_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneData_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneHullData_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__SkinnedColliderEditorData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__ICreatorComponent_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IEditorData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadd8c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnEnable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xadd8c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.GetGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"GetGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.HasEditorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::HasEditorData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xadd8ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"HasEditorData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.GetEditorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::IEditorData* (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetEditorData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"GetEditorData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.FindBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xadd8d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"FindBone", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.FindBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xadd8d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"FindBone", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator.FindBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::SkinnedMeshRenderer*, ::StringW)>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xadd8730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"FindBone", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::__cordl_internal_get_targetSkinnedRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSkinnedRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::__cordl_internal_get_targetSkinnedRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSkinnedRenderer;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::__cordl_internal_set_targetSkinnedRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSkinnedRenderer = value;
}
constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData>& Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::__cordl_internal_get_editorData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorData;
}
constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData> const& Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::__cordl_internal_get_editorData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorData;
}
constexpr void Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::__cordl_internal_set_editorData(::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorData = value;
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"GetGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::HasEditorData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"HasEditorData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::IEditorData* Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetEditorData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"GetEditorData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::IEditorData*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone(::Technie::PhysicsCreator::Skinned::BoneData*  boneData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"FindBone", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, boneData);
}
inline ::UnityW<::UnityEngine::Transform> Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone(::Technie::PhysicsCreator::Skinned::BoneHullData*  hullData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"FindBone", {}, {::i2c::type_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, hullData);
}
inline ::UnityW<::UnityEngine::Transform> Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer, ::StringW  nameToFind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {"FindBone", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, skinnedRenderer, nameToFind);
}
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator* Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*>());
}
/// @brief Convert operator to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr  Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::operator ::Technie::PhysicsCreator::ICreatorComponent*() noexcept {
return static_cast<::Technie::PhysicsCreator::ICreatorComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr ::Technie::PhysicsCreator::ICreatorComponent* Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::i___Technie__PhysicsCreator__ICreatorComponent() noexcept {
return static_cast<::Technie::PhysicsCreator::ICreatorComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::SkinnedColliderCreator()   {
}
