#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySector.hpp"
#include "GlobalNamespace/zzzz__BakerySector_CaptureMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakerySector_def.hpp"
#include "GlobalNamespace/zzzz__BakerySectorCapture_def.hpp"
#include "GlobalNamespace/zzzz__BakerySector_CaptureMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakerySector.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakerySector::*)()>(&::GlobalNamespace::BakerySector::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f27a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySector*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakerySector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakerySector::*)()>(&::GlobalNamespace::BakerySector::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f27b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BakerySector_CaptureMode& GlobalNamespace::BakerySector::__cordl_internal_get_captureMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureMode;
}
constexpr ::GlobalNamespace::BakerySector_CaptureMode const& GlobalNamespace::BakerySector::__cordl_internal_get_captureMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureMode;
}
constexpr void GlobalNamespace::BakerySector::__cordl_internal_set_captureMode(::GlobalNamespace::BakerySector_CaptureMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___captureMode = value;
}
constexpr ::StringW& GlobalNamespace::BakerySector::__cordl_internal_get_captureAssetName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureAssetName;
}
constexpr ::StringW const& GlobalNamespace::BakerySector::__cordl_internal_get_captureAssetName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureAssetName;
}
constexpr void GlobalNamespace::BakerySector::__cordl_internal_set_captureAssetName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___captureAssetName = value;
}
constexpr ::UnityW<::GlobalNamespace::BakerySectorCapture>& GlobalNamespace::BakerySector::__cordl_internal_get_captureAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureAsset;
}
constexpr ::UnityW<::GlobalNamespace::BakerySectorCapture> const& GlobalNamespace::BakerySector::__cordl_internal_get_captureAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureAsset;
}
constexpr void GlobalNamespace::BakerySector::__cordl_internal_set_captureAsset(::UnityW<::GlobalNamespace::BakerySectorCapture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___captureAsset = value;
}
constexpr bool& GlobalNamespace::BakerySector::__cordl_internal_get_allowUVPaddingAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowUVPaddingAdjustment;
}
constexpr bool const& GlobalNamespace::BakerySector::__cordl_internal_get_allowUVPaddingAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowUVPaddingAdjustment;
}
constexpr void GlobalNamespace::BakerySector::__cordl_internal_set_allowUVPaddingAdjustment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowUVPaddingAdjustment = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::BakerySector::__cordl_internal_get_tforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::BakerySector::__cordl_internal_get_tforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tforms;
}
constexpr void GlobalNamespace::BakerySector::__cordl_internal_set_tforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tforms = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::BakerySector::__cordl_internal_get_cpoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::BakerySector::__cordl_internal_get_cpoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpoints;
}
constexpr void GlobalNamespace::BakerySector::__cordl_internal_set_cpoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cpoints = value;
}
inline void GlobalNamespace::BakerySector::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySector*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakerySector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakerySector* GlobalNamespace::BakerySector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakerySector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakerySector::BakerySector()   {
}
