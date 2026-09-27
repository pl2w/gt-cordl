#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/Constants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__Constants_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__Constants_CMSGameModeType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::Constants._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::Constants::*)()>(&::GT_CustomMapSupportRuntime::Constants::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb3d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::Constants*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_customMapSupportVersion(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "customMapSupportVersion", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_customMapSupportVersion()  {
return ::cordl_internals::getStaticField<int32_t, "customMapSupportVersion", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_minRopeLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "minRopeLength", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_minRopeLength()  {
return ::cordl_internals::getStaticField<int32_t, "minRopeLength", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_maxRopeLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxRopeLength", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_maxRopeLength()  {
return ::cordl_internals::getStaticField<int32_t, "maxRopeLength", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_storeATMLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "storeATMLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_storeATMLimit()  {
return ::cordl_internals::getStaticField<int32_t, "storeATMLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_atmCreatorCodeSizeLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "atmCreatorCodeSizeLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_atmCreatorCodeSizeLimit()  {
return ::cordl_internals::getStaticField<int32_t, "atmCreatorCodeSizeLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_storeDisplayStandLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "storeDisplayStandLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_storeDisplayStandLimit()  {
return ::cordl_internals::getStaticField<int32_t, "storeDisplayStandLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_storeCheckoutCounterLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "storeCheckoutCounterLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_storeCheckoutCounterLimit()  {
return ::cordl_internals::getStaticField<int32_t, "storeCheckoutCounterLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_storeTryOnConsoleLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "storeTryOnConsoleLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_storeTryOnConsoleLimit()  {
return ::cordl_internals::getStaticField<int32_t, "storeTryOnConsoleLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_storeTryOnAreaLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "storeTryOnAreaLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_storeTryOnAreaLimit()  {
return ::cordl_internals::getStaticField<int32_t, "storeTryOnAreaLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_storeTryOnAreaVolumeLimit(float_t  value)  {
::cordl_internals::setStaticField<float_t, "storeTryOnAreaVolumeLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<float_t>(value));
}
inline float_t GT_CustomMapSupportRuntime::Constants::getStaticF_storeTryOnAreaVolumeLimit()  {
return ::cordl_internals::getStaticField<float_t, "storeTryOnAreaVolumeLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_minTeleportDistFromStorePlaceholder(float_t  value)  {
::cordl_internals::setStaticField<float_t, "minTeleportDistFromStorePlaceholder", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<float_t>(value));
}
inline float_t GT_CustomMapSupportRuntime::Constants::getStaticF_minTeleportDistFromStorePlaceholder()  {
return ::cordl_internals::getStaticField<float_t, "minTeleportDistFromStorePlaceholder", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_aiAgentLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "aiAgentLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_aiAgentLimit()  {
return ::cordl_internals::getStaticField<int32_t, "aiAgentLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_leafGliderLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "leafGliderLimit", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<int32_t>(value));
}
inline int32_t GT_CustomMapSupportRuntime::Constants::getStaticF_leafGliderLimit()  {
return ::cordl_internals::getStaticField<int32_t, "leafGliderLimit", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_AccessDoorWorldPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "AccessDoorWorldPosition", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GT_CustomMapSupportRuntime::Constants::getStaticF_AccessDoorWorldPosition()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "AccessDoorWorldPosition", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_componentAllowList(::System::Collections::Generic::List_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "componentAllowList", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Type*>* GT_CustomMapSupportRuntime::Constants::getStaticF_componentAllowList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "componentAllowList", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_componentTypeStringAllowList(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "componentTypeStringAllowList", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GT_CustomMapSupportRuntime::Constants::getStaticF_componentTypeStringAllowList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "componentTypeStringAllowList", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::setStaticF_componentTypeStringsToStripPreExport(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "componentTypeStringsToStripPreExport", ::GT_CustomMapSupportRuntime::Constants*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GT_CustomMapSupportRuntime::Constants::getStaticF_componentTypeStringsToStripPreExport()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "componentTypeStringsToStripPreExport", ::GT_CustomMapSupportRuntime::Constants*>();
}
inline void GT_CustomMapSupportRuntime::Constants::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::Constants*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::Constants* GT_CustomMapSupportRuntime::Constants::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::Constants*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::Constants::Constants()   {
}
