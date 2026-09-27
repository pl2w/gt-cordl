#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/LoadZoneSettings.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__LoadZoneSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::LoadZoneSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::LoadZoneSettings::*)()>(&::GT_CustomMapSupportRuntime::LoadZoneSettings::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9cb70b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::LoadZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_useDynamicLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDynamicLighting;
}
constexpr bool const& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_useDynamicLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDynamicLighting;
}
constexpr void GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_set_useDynamicLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useDynamicLighting = value;
}
constexpr ::UnityEngine::Color& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_UberShaderAmbientDynamicLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UberShaderAmbientDynamicLight;
}
constexpr ::UnityEngine::Color const& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_UberShaderAmbientDynamicLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UberShaderAmbientDynamicLight;
}
constexpr void GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_set_UberShaderAmbientDynamicLight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UberShaderAmbientDynamicLight = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_scenesToLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToLoad;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_scenesToLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToLoad;
}
constexpr void GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_set_scenesToLoad(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenesToLoad = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_scenesToUnload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToUnload;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_get_scenesToUnload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToUnload;
}
constexpr void GT_CustomMapSupportRuntime::LoadZoneSettings::__cordl_internal_set_scenesToUnload(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenesToUnload = value;
}
inline void GT_CustomMapSupportRuntime::LoadZoneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::LoadZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::LoadZoneSettings* GT_CustomMapSupportRuntime::LoadZoneSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::LoadZoneSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::LoadZoneSettings::LoadZoneSettings()   {
}
