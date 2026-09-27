#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialInstance.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialInstance_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.AcquireMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialInstance::*)(::UnityEngine::Object*, bool)>(&::GlobalNamespace::MaterialInstance::AcquireMaterial)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a1dc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"AcquireMaterial", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.AcquireMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::GlobalNamespace::MaterialInstance::*)(::UnityEngine::Object*, bool)>(&::GlobalNamespace::MaterialInstance::AcquireMaterials)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a1dddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"AcquireMaterials", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.ReleaseMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)(::UnityEngine::Object*, bool)>(&::GlobalNamespace::MaterialInstance::ReleaseMaterial)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1deb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"ReleaseMaterial", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::get_Material)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a1e0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.get_Materials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::get_Materials)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a1e0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_Materials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.get_CacheSharedMaterialsFromRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::get_CacheSharedMaterialsFromRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1e0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_CacheSharedMaterialsFromRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.set_CacheSharedMaterialsFromRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)(bool)>(&::GlobalNamespace::MaterialInstance::set_CacheSharedMaterialsFromRenderer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a1e0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"set_CacheSharedMaterialsFromRenderer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.get_CachedRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::get_CachedRenderer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a1e148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_CachedRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.get_CachedRendererSharedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::get_CachedRendererSharedMaterials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a1e214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_CachedRendererSharedMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.set_CachedRendererSharedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)(::ArrayW<::UnityEngine::Material*>)>(&::GlobalNamespace::MaterialInstance::set_CachedRendererSharedMaterials)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a1e274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"set_CachedRendererSharedMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1e2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1e384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.RestoreRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::RestoreRenderer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a1e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"RestoreRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::Initialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a1e2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.AcquireInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::AcquireInstances)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a1dd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"AcquireInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.CreateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::CreateInstances)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a1e664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"CreateInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.MaterialsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Material*>, ::ArrayW<::UnityEngine::Material*>)>(&::GlobalNamespace::MaterialInstance::MaterialsMatch)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a1e494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"MaterialsMatch", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.InstanceMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (*)(::ArrayW<::UnityEngine::Material*>)>(&::GlobalNamespace::MaterialInstance::InstanceMaterials)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5a1e71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"InstanceMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.DestroyMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Material*>)>(&::GlobalNamespace::MaterialInstance::DestroyMaterials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a1e388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"DestroyMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.IsInstanceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Material*)>(&::GlobalNamespace::MaterialInstance::IsInstanceMaterial)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a1e990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"IsInstanceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.HasValidMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Material*>)>(&::GlobalNamespace::MaterialInstance::HasValidMaterial)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a1e3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"HasValidMaterial", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance.DestroySafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::MaterialInstance::DestroySafe)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a1df78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"DestroySafe", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialInstance::*)()>(&::GlobalNamespace::MaterialInstance::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a1ea38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MaterialInstance::__cordl_internal_get_cachedRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MaterialInstance::__cordl_internal_get_cachedRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRenderer;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_cachedRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedRenderer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MaterialInstance::__cordl_internal_get_defaultMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MaterialInstance::__cordl_internal_get_defaultMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterials;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_defaultMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MaterialInstance::__cordl_internal_get_instanceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MaterialInstance::__cordl_internal_get_instanceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceMaterials;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_instanceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MaterialInstance::__cordl_internal_get_cachedSharedMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSharedMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MaterialInstance::__cordl_internal_get_cachedSharedMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSharedMaterials;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_cachedSharedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSharedMaterials = value;
}
constexpr bool& GlobalNamespace::MaterialInstance::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::MaterialInstance::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr bool& GlobalNamespace::MaterialInstance::__cordl_internal_get_materialsInstanced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialsInstanced;
}
constexpr bool const& GlobalNamespace::MaterialInstance::__cordl_internal_get_materialsInstanced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialsInstanced;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_materialsInstanced(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialsInstanced = value;
}
constexpr bool& GlobalNamespace::MaterialInstance::__cordl_internal_get_cacheSharedMaterialsFromRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheSharedMaterialsFromRenderer;
}
constexpr bool const& GlobalNamespace::MaterialInstance::__cordl_internal_get_cacheSharedMaterialsFromRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheSharedMaterialsFromRenderer;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_cacheSharedMaterialsFromRenderer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cacheSharedMaterialsFromRenderer = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*& GlobalNamespace::MaterialInstance::__cordl_internal_get_materialOwners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialOwners;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* const& GlobalNamespace::MaterialInstance::__cordl_internal_get_materialOwners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialOwners;
}
constexpr void GlobalNamespace::MaterialInstance::__cordl_internal_set_materialOwners(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialOwners = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialInstance::AcquireMaterial(::UnityEngine::Object*  owner, bool  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"AcquireMaterial", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, owner, instance);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> GlobalNamespace::MaterialInstance::AcquireMaterials(::UnityEngine::Object*  owner, bool  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"AcquireMaterials", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method, owner, instance);
}
inline void GlobalNamespace::MaterialInstance::ReleaseMaterial(::UnityEngine::Object*  owner, bool  autoDestroy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"ReleaseMaterial", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, autoDestroy);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialInstance::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> GlobalNamespace::MaterialInstance::get_Materials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_Materials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method);
}
inline bool GlobalNamespace::MaterialInstance::get_CacheSharedMaterialsFromRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_CacheSharedMaterialsFromRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialInstance::set_CacheSharedMaterialsFromRenderer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"set_CacheSharedMaterialsFromRenderer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::MaterialInstance::get_CachedRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_CachedRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> GlobalNamespace::MaterialInstance::get_CachedRendererSharedMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"get_CachedRendererSharedMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialInstance::set_CachedRendererSharedMaterials(::ArrayW<::UnityEngine::Material*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"set_CachedRendererSharedMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MaterialInstance::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialInstance::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialInstance::RestoreRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"RestoreRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialInstance::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialInstance::AcquireInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"AcquireInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialInstance::CreateInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"CreateInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MaterialInstance::MaterialsMatch(::ArrayW<::UnityEngine::Material*>  a, ::ArrayW<::UnityEngine::Material*>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"MaterialsMatch", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> GlobalNamespace::MaterialInstance::InstanceMaterials(::ArrayW<::UnityEngine::Material*>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"InstanceMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(nullptr, ___internal_method, source);
}
inline void GlobalNamespace::MaterialInstance::DestroyMaterials(::ArrayW<::UnityEngine::Material*>  materials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"DestroyMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materials);
}
inline bool GlobalNamespace::MaterialInstance::IsInstanceMaterial(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"IsInstanceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, material);
}
inline bool GlobalNamespace::MaterialInstance::HasValidMaterial(::ArrayW<::UnityEngine::Material*>  materials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"HasValidMaterial", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, materials);
}
inline void GlobalNamespace::MaterialInstance::DestroySafe(::UnityEngine::Object*  toDestroy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {"DestroySafe", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toDestroy);
}
inline void GlobalNamespace::MaterialInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialInstance* GlobalNamespace::MaterialInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialInstance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialInstance::MaterialInstance()   {
}
