#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderMaterialOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderMaterialOptions_def.hpp"
#include "GlobalNamespace/zzzz__BuilderMaterialOptions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderMaterialOptions.GetMaterialFromType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderMaterialOptions::*)(int32_t, ::by_ref<::UnityEngine::Material*>, ::by_ref<int32_t>)>(&::GlobalNamespace::BuilderMaterialOptions::GetMaterialFromType)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x57bea3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions*>(),
                        {"GetMaterialFromType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderMaterialOptions.GetDefaultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderMaterialOptions::*)(::by_ref<int32_t>, ::by_ref<::UnityEngine::Material*>, ::by_ref<int32_t>)>(&::GlobalNamespace::BuilderMaterialOptions::GetDefaultMaterial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57bebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions*>(),
                        {"GetDefaultMaterial", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderMaterialOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderMaterialOptions::*)()>(&::GlobalNamespace::BuilderMaterialOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57becf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>*& GlobalNamespace::BuilderMaterialOptions::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>* const& GlobalNamespace::BuilderMaterialOptions::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void GlobalNamespace::BuilderMaterialOptions::__cordl_internal_set_options(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
inline void GlobalNamespace::BuilderMaterialOptions::GetMaterialFromType(int32_t  materialType, ::by_ref<::UnityEngine::Material*>  material, ::by_ref<int32_t>  soundIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions*>(),
                        {"GetMaterialFromType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialType, material, soundIndex);
}
inline void GlobalNamespace::BuilderMaterialOptions::GetDefaultMaterial(::by_ref<int32_t>  materialType, ::by_ref<::UnityEngine::Material*>  material, ::by_ref<int32_t>  soundIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions*>(),
                        {"GetDefaultMaterial", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialType, material, soundIndex);
}
inline void GlobalNamespace::BuilderMaterialOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderMaterialOptions* GlobalNamespace::BuilderMaterialOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderMaterialOptions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderMaterialOptions::BuilderMaterialOptions()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderMaterialOptions_Options._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderMaterialOptions_Options::*)()>(&::GlobalNamespace::BuilderMaterialOptions_Options::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57becf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions_Options*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_materialId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr ::StringW const& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_materialId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr void GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_set_materialId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialId = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr int32_t& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_soundIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIndex;
}
constexpr int32_t const& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_soundIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIndex;
}
constexpr void GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_set_soundIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundIndex = value;
}
constexpr int32_t& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr int32_t const& GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_get_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr void GlobalNamespace::BuilderMaterialOptions_Options::__cordl_internal_set_materialType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialType = value;
}
inline void GlobalNamespace::BuilderMaterialOptions_Options::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderMaterialOptions_Options*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderMaterialOptions_Options* GlobalNamespace::BuilderMaterialOptions_Options::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderMaterialOptions_Options*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderMaterialOptions_Options::BuilderMaterialOptions_Options()   {
}
