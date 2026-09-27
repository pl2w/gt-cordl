#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreBundleData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StoreBundleData_def.hpp"
#include "GlobalNamespace/zzzz__NexusCreatorCode_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StoreBundleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreBundleData::*)()>(&::GorillaNetworking::Store::StoreBundleData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ca8f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreBundleData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreBundleData.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreBundleData::*)()>(&::GorillaNetworking::Store::StoreBundleData::OnValidate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ca9010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreBundleData*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_playfabBundleID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabBundleID;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_playfabBundleID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabBundleID;
}
constexpr void GorillaNetworking::Store::StoreBundleData::__cordl_internal_set_playfabBundleID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabBundleID = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_bundleSKU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleSKU;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_bundleSKU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleSKU;
}
constexpr void GorillaNetworking::Store::StoreBundleData::__cordl_internal_set_bundleSKU(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleSKU = value;
}
constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode>& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_creatorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCode;
}
constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode> const& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_creatorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCode;
}
constexpr void GorillaNetworking::Store::StoreBundleData::__cordl_internal_set_creatorCode(::UnityW<::GlobalNamespace::NexusCreatorCode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCode = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_bundleImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_bundleImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleImage;
}
constexpr void GorillaNetworking::Store::StoreBundleData::__cordl_internal_set_bundleImage(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleImage = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_bundleDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleDescriptionText;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreBundleData::__cordl_internal_get_bundleDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleDescriptionText;
}
constexpr void GorillaNetworking::Store::StoreBundleData::__cordl_internal_set_bundleDescriptionText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleDescriptionText = value;
}
inline void GorillaNetworking::Store::StoreBundleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreBundleData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreBundleData::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreBundleData*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::StoreBundleData* GorillaNetworking::Store::StoreBundleData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreBundleData*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreBundleData::StoreBundleData()   {
}
