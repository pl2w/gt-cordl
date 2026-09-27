#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkin.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_SkinType_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.get_bodyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::GorillaSkin::*)()>(&::GlobalNamespace::GorillaSkin::get_bodyMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5651388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_bodyMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.get_allowHeadless
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSkin::*)()>(&::GlobalNamespace::GorillaSkin::get_allowHeadless)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5651390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_allowHeadless", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.CopyWithInstancedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaSkin> (*)(::GlobalNamespace::GorillaSkin*)>(&::GlobalNamespace::GorillaSkin::CopyWithInstancedMaterials)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x56513a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"CopyWithInstancedMaterials", {}, {::i2c::type_of<::GlobalNamespace::GorillaSkin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.get_bodyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::GorillaSkin::*)()>(&::GlobalNamespace::GorillaSkin::get_bodyMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5651554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_bodyMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.get_chestMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::GorillaSkin::*)()>(&::GlobalNamespace::GorillaSkin::get_chestMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565155c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_chestMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.get_scoreboardMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::GorillaSkin::*)()>(&::GlobalNamespace::GorillaSkin::get_scoreboardMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5651564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_scoreboardMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.ShowActiveSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaSkin::ShowActiveSkin)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x565156c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ShowActiveSkin", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.ApplySkinToMannequin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkin::*)(::UnityEngine::GameObject*, bool)>(&::GlobalNamespace::GorillaSkin::ApplySkinToMannequin)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x5651834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ApplySkinToMannequin", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.GetActiveSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaSkin> (*)(::GlobalNamespace::VRRig*, ::by_ref<bool>)>(&::GlobalNamespace::GorillaSkin::GetActiveSkin)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56515e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"GetActiveSkin", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.ShowSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GorillaSkin*, bool)>(&::GlobalNamespace::GorillaSkin::ShowSkin)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x56516cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ShowSkin", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GorillaSkin*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin.ApplyToRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GorillaSkin*, ::GlobalNamespace::GorillaSkin_SkinType)>(&::GlobalNamespace::GorillaSkin::ApplyToRig)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5651fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ApplyToRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GorillaSkin*>(), ::i2c::type_of<::GlobalNamespace::GorillaSkin_SkinType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkin::*)()>(&::GlobalNamespace::GorillaSkin::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5652190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaSkin::__cordl_internal_get__chestMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chestMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaSkin::__cordl_internal_get__chestMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chestMaterial;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__chestMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chestMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaSkin::__cordl_internal_get__bodyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaSkin::__cordl_internal_get__bodyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyMaterial;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__bodyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaSkin::__cordl_internal_get__scoreboardMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreboardMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaSkin::__cordl_internal_get__scoreboardMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreboardMaterial;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__scoreboardMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scoreboardMaterial = value;
}
constexpr bool& GlobalNamespace::GorillaSkin::__cordl_internal_get__disableHeadless()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableHeadless;
}
constexpr bool const& GlobalNamespace::GorillaSkin::__cordl_internal_get__disableHeadless() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableHeadless;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__disableHeadless(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableHeadless = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::GorillaSkin::__cordl_internal_get__bodyMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::GorillaSkin::__cordl_internal_get__bodyMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyMesh;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__bodyMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaSkin::__cordl_internal_get__bodyRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRuntime;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaSkin::__cordl_internal_get__bodyRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRuntime;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__bodyRuntime(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyRuntime = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaSkin::__cordl_internal_get__chestRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chestRuntime;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaSkin::__cordl_internal_get__chestRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chestRuntime;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__chestRuntime(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chestRuntime = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaSkin::__cordl_internal_get__scoreRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreRuntime;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaSkin::__cordl_internal_get__scoreRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreRuntime;
}
constexpr void GlobalNamespace::GorillaSkin::__cordl_internal_set__scoreRuntime(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scoreRuntime = value;
}
inline void GlobalNamespace::GorillaSkin::setStaticF__g_sharedMaterialsCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "_g_sharedMaterialsCache", ::GlobalNamespace::GorillaSkin*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::GorillaSkin::getStaticF__g_sharedMaterialsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "_g_sharedMaterialsCache", ::GlobalNamespace::GorillaSkin*>();
}
inline void GlobalNamespace::GorillaSkin::setStaticF__g_materialsWriteCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "_g_materialsWriteCache", ::GlobalNamespace::GorillaSkin*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::GorillaSkin::getStaticF__g_materialsWriteCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "_g_materialsWriteCache", ::GlobalNamespace::GorillaSkin*>();
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::GorillaSkin::get_bodyMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_bodyMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaSkin::get_allowHeadless()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_allowHeadless", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GorillaSkin> GlobalNamespace::GorillaSkin::CopyWithInstancedMaterials(::GlobalNamespace::GorillaSkin*  basis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"CopyWithInstancedMaterials", {}, {::i2c::type_of<::GlobalNamespace::GorillaSkin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaSkin>>(nullptr, ___internal_method, basis);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::GorillaSkin::get_bodyMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_bodyMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::GorillaSkin::get_chestMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_chestMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::GorillaSkin::get_scoreboardMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"get_scoreboardMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkin::ShowActiveSkin(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ShowActiveSkin", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline void GlobalNamespace::GorillaSkin::ApplySkinToMannequin(::UnityEngine::GameObject*  mannequin, bool  swapMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ApplySkinToMannequin", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mannequin, swapMesh);
}
inline ::UnityW<::GlobalNamespace::GorillaSkin> GlobalNamespace::GorillaSkin::GetActiveSkin(::GlobalNamespace::VRRig*  rig, ::by_ref<bool>  useDefaultBodySkin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"GetActiveSkin", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaSkin>>(nullptr, ___internal_method, rig, useDefaultBodySkin);
}
inline void GlobalNamespace::GorillaSkin::ShowSkin(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GorillaSkin*  skin, bool  useDefaultBodySkin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ShowSkin", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GorillaSkin*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, skin, useDefaultBodySkin);
}
inline void GlobalNamespace::GorillaSkin::ApplyToRig(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GorillaSkin*  skin, ::GlobalNamespace::GorillaSkin_SkinType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {"ApplyToRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GorillaSkin*>(), ::i2c::type_of<::GlobalNamespace::GorillaSkin_SkinType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, skin, type);
}
inline void GlobalNamespace::GorillaSkin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSkin* GlobalNamespace::GorillaSkin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSkin*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSkin::GorillaSkin()   {
}
