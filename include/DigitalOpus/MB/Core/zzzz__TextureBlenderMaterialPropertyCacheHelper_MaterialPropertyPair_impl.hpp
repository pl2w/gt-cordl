#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::*)(::UnityEngine::Material*, ::StringW)>(&::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9df55d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::*)(::System::Object*)>(&::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9df5868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(),
                    {::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::*)()>(&::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9df590c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(),
                    {::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::_ctor(::UnityEngine::Material*  m, ::StringW  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m, prop);
}
inline bool GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "property", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair(::UnityW<::UnityEngine::Material>  material, ::StringW  property) noexcept  {
this->material = material;
this->property = property;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair()   {
}
