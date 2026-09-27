#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/MaterialChangerCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__MaterialChangerCosmetic_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::MaterialChangerCosmetic.ChangeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::MaterialChangerCosmetic::*)(::UnityEngine::Material*)>(&::GorillaTag::Cosmetics::MaterialChangerCosmetic::ChangeMaterial)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5d99848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::MaterialChangerCosmetic*>(),
                        {"ChangeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::MaterialChangerCosmetic.ChangeAllMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::MaterialChangerCosmetic::*)(::UnityEngine::Material*)>(&::GorillaTag::Cosmetics::MaterialChangerCosmetic::ChangeAllMaterials)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d999f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::MaterialChangerCosmetic*>(),
                        {"ChangeAllMaterials", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::MaterialChangerCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::MaterialChangerCosmetic::*)()>(&::GorillaTag::Cosmetics::MaterialChangerCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d99b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::MaterialChangerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GorillaTag::Cosmetics::MaterialChangerCosmetic::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GorillaTag::Cosmetics::MaterialChangerCosmetic::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GorillaTag::Cosmetics::MaterialChangerCosmetic::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr int32_t& GorillaTag::Cosmetics::MaterialChangerCosmetic::__cordl_internal_get_materialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr int32_t const& GorillaTag::Cosmetics::MaterialChangerCosmetic::__cordl_internal_get_materialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr void GorillaTag::Cosmetics::MaterialChangerCosmetic::__cordl_internal_set_materialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialIndex = value;
}
inline void GorillaTag::Cosmetics::MaterialChangerCosmetic::ChangeMaterial(::UnityEngine::Material*  newMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::MaterialChangerCosmetic*>(),
                        {"ChangeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMaterial);
}
inline void GorillaTag::Cosmetics::MaterialChangerCosmetic::ChangeAllMaterials(::UnityEngine::Material*  newMat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::MaterialChangerCosmetic*>(),
                        {"ChangeAllMaterials", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMat);
}
inline void GorillaTag::Cosmetics::MaterialChangerCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::MaterialChangerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::MaterialChangerCosmetic* GorillaTag::Cosmetics::MaterialChangerCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::MaterialChangerCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::MaterialChangerCosmetic::MaterialChangerCosmetic()   {
}
