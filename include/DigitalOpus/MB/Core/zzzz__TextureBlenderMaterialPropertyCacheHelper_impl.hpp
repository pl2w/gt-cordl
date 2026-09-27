#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderMaterialPropertyCacheHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper.AllNonTexturePropertyValuesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::AllNonTexturePropertyValuesAreEqual)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x9df52f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {"AllNonTexturePropertyValuesAreEqual", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper.CacheMaterialProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::*)(::UnityEngine::Material*, ::StringW, ::System::Object*)>(&::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::CacheMaterialProperty)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9df5534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {"CacheMaterialProperty", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper.GetValueIfAllSourceAreTheSameOrDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::*)(::StringW, ::System::Object*)>(&::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::GetValueIfAllSourceAreTheSameOrDefault)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9df5604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {"GetValueIfAllSourceAreTheSameOrDefault", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::*)()>(&::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9df57e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>*& DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::__cordl_internal_get_nonTexturePropertyValuesForSourceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonTexturePropertyValuesForSourceMaterials;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>* const& DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::__cordl_internal_get_nonTexturePropertyValuesForSourceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonTexturePropertyValuesForSourceMaterials;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::__cordl_internal_set_nonTexturePropertyValuesForSourceMaterials(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonTexturePropertyValuesForSourceMaterials = value;
}
inline bool DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::AllNonTexturePropertyValuesAreEqual(::StringW  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {"AllNonTexturePropertyValuesAreEqual", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prop);
}
inline void DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::CacheMaterialProperty(::UnityEngine::Material*  m, ::StringW  property, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {"CacheMaterialProperty", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, property, value);
}
inline ::System::Object* DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::GetValueIfAllSourceAreTheSameOrDefault(::StringW  property, ::System::Object*  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {"GetValueIfAllSourceAreTheSameOrDefault", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, property, defaultValue);
}
inline void DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::TextureBlenderMaterialPropertyCacheHelper()   {
}
