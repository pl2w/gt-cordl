#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MaterialAndUVRect.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MaterialAndUVRect_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_MaterialAndUVRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_MaterialAndUVRect::*)(::UnityEngine::Material*, ::UnityEngine::Rect, bool, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment, ::StringW)>(&::GlobalNamespace::MB_MaterialAndUVRect::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d72f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_MaterialAndUVRect.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB_MaterialAndUVRect::*)()>(&::GlobalNamespace::MB_MaterialAndUVRect::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d7305c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                    {::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_MaterialAndUVRect.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB_MaterialAndUVRect::*)(::System::Object*)>(&::GlobalNamespace::MB_MaterialAndUVRect::Equals)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9d730b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                    {::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_MaterialAndUVRect.GetEncapsulatingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::GlobalNamespace::MB_MaterialAndUVRect::*)()>(&::GlobalNamespace::MB_MaterialAndUVRect::GetEncapsulatingRect)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d73210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                        {"GetEncapsulatingRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_MaterialAndUVRect.GetMaterialTilingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::GlobalNamespace::MB_MaterialAndUVRect::*)()>(&::GlobalNamespace::MB_MaterialAndUVRect::GetMaterialTilingRect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d7325c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                        {"GetMaterialTilingRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_atlasRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasRect;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_atlasRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasRect;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_atlasRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasRect = value;
}
constexpr ::StringW& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_srcObjName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcObjName;
}
constexpr ::StringW const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_srcObjName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcObjName;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_srcObjName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcObjName = value;
}
constexpr int32_t& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_textureArraySliceIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArraySliceIdx;
}
constexpr int32_t const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_textureArraySliceIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArraySliceIdx;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_textureArraySliceIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureArraySliceIdx = value;
}
constexpr bool& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_allPropsUseSameTiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPropsUseSameTiling;
}
constexpr bool const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_allPropsUseSameTiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPropsUseSameTiling;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_allPropsUseSameTiling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPropsUseSameTiling = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_allPropsUseSameTiling_sourceMaterialTiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPropsUseSameTiling_sourceMaterialTiling;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_allPropsUseSameTiling_sourceMaterialTiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPropsUseSameTiling_sourceMaterialTiling;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_allPropsUseSameTiling_sourceMaterialTiling(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPropsUseSameTiling_sourceMaterialTiling = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_allPropsUseSameTiling_samplingEncapsulatinRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPropsUseSameTiling_samplingEncapsulatinRect;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_allPropsUseSameTiling_samplingEncapsulatinRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPropsUseSameTiling_samplingEncapsulatinRect;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_allPropsUseSameTiling_samplingEncapsulatinRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPropsUseSameTiling_samplingEncapsulatinRect = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_propsUseDifferntTiling_srcUVsamplingRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propsUseDifferntTiling_srcUVsamplingRect;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_propsUseDifferntTiling_srcUVsamplingRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propsUseDifferntTiling_srcUVsamplingRect;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_propsUseDifferntTiling_srcUVsamplingRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propsUseDifferntTiling_srcUVsamplingRect = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_objectsThatUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsThatUse;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_objectsThatUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsThatUse;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_objectsThatUse(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsThatUse = value;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_tilingTreatment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tilingTreatment;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const& GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_get_tilingTreatment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tilingTreatment;
}
constexpr void GlobalNamespace::MB_MaterialAndUVRect::__cordl_internal_set_tilingTreatment(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tilingTreatment = value;
}
inline void GlobalNamespace::MB_MaterialAndUVRect::_ctor(::UnityEngine::Material*  mat, ::UnityEngine::Rect  destRect, bool  allPropsUseSameTiling, ::UnityEngine::Rect  sourceMaterialTiling, ::UnityEngine::Rect  samplingEncapsulatingRect, ::UnityEngine::Rect  srcUVsamplingRect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment, ::StringW  objName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, destRect, allPropsUseSameTiling, sourceMaterialTiling, samplingEncapsulatingRect, srcUVsamplingRect, treatment, objName);
}
inline int32_t GlobalNamespace::MB_MaterialAndUVRect::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MB_MaterialAndUVRect::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::UnityEngine::Rect GlobalNamespace::MB_MaterialAndUVRect::GetEncapsulatingRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                        {"GetEncapsulatingRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityEngine::Rect GlobalNamespace::MB_MaterialAndUVRect::GetMaterialTilingRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MaterialAndUVRect*>(),
                        {"GetMaterialTilingRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_MaterialAndUVRect* GlobalNamespace::MB_MaterialAndUVRect::New_ctor(::UnityEngine::Material*  mat, ::UnityEngine::Rect  destRect, bool  allPropsUseSameTiling, ::UnityEngine::Rect  sourceMaterialTiling, ::UnityEngine::Rect  samplingEncapsulatingRect, ::UnityEngine::Rect  srcUVsamplingRect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment, ::StringW  objName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_MaterialAndUVRect*>(mat, destRect, allPropsUseSameTiling, sourceMaterialTiling, samplingEncapsulatingRect, srcUVsamplingRect, treatment, objName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_MaterialAndUVRect::MB_MaterialAndUVRect()   {
}
