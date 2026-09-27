#pragma once
// IWYU pragma private; include "PlayFab/PlayFabDataGatherer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_impl.hpp"
#include "UnityEngine/zzzz__DeviceType_impl.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_impl.hpp"
#include "PlayFab/zzzz__PlayFabDataGatherer_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabDataGatherer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabDataGatherer::*)()>(&::PlayFab::PlayFabDataGatherer::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xa7dd344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataGatherer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataGatherer.GenerateReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::PlayFabDataGatherer::*)()>(&::PlayFab::PlayFabDataGatherer::GenerateReport)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa7dd834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataGatherer*>(),
                        {"GenerateReport", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProductName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductName;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProductName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductName;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_ProductName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProductName = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProductBundle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductBundle;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProductBundle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductBundle;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_ProductBundle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProductBundle = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_Version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_Company()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Company;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_Company() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Company;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_Company(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Company = value;
}
constexpr ::UnityEngine::RuntimePlatform& PlayFab::PlayFabDataGatherer::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::UnityEngine::RuntimePlatform const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_Platform(::UnityEngine::RuntimePlatform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
constexpr bool& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsMultiThreaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsMultiThreaded;
}
constexpr bool const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsMultiThreaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsMultiThreaded;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_GraphicsMultiThreaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GraphicsMultiThreaded = value;
}
constexpr ::UnityEngine::Rendering::GraphicsDeviceType& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsType;
}
constexpr ::UnityEngine::Rendering::GraphicsDeviceType const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsType;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_GraphicsType(::UnityEngine::Rendering::GraphicsDeviceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GraphicsType = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DataPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataPath;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DataPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataPath;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_DataPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataPath = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_PersistentDataPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PersistentDataPath;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_PersistentDataPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PersistentDataPath;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_PersistentDataPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PersistentDataPath = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_StreamingAssetsPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StreamingAssetsPath;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_StreamingAssetsPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StreamingAssetsPath;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_StreamingAssetsPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StreamingAssetsPath = value;
}
constexpr int32_t& PlayFab::PlayFabDataGatherer::__cordl_internal_get_TargetFrameRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetFrameRate;
}
constexpr int32_t const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_TargetFrameRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetFrameRate;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_TargetFrameRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetFrameRate = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_UnityVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityVersion;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_UnityVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityVersion;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_UnityVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnityVersion = value;
}
constexpr bool& PlayFab::PlayFabDataGatherer::__cordl_internal_get_RunInBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunInBackground;
}
constexpr bool const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_RunInBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunInBackground;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_RunInBackground(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunInBackground = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DeviceModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceModel;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DeviceModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceModel;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_DeviceModel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceModel = value;
}
constexpr ::UnityEngine::DeviceType& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DeviceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceType;
}
constexpr ::UnityEngine::DeviceType const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DeviceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceType;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_DeviceType(::UnityEngine::DeviceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceType = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DeviceUniqueId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceUniqueId;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_DeviceUniqueId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceUniqueId;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_DeviceUniqueId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceUniqueId = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_OperatingSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperatingSystem;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_OperatingSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperatingSystem;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_OperatingSystem(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperatingSystem = value;
}
constexpr int32_t& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsDeviceId;
}
constexpr int32_t const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsDeviceId;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_GraphicsDeviceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GraphicsDeviceId = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsDeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsDeviceName;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsDeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsDeviceName;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_GraphicsDeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GraphicsDeviceName = value;
}
constexpr int32_t& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsMemorySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsMemorySize;
}
constexpr int32_t const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsMemorySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsMemorySize;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_GraphicsMemorySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GraphicsMemorySize = value;
}
constexpr int32_t& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsShaderLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsShaderLevel;
}
constexpr int32_t const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_GraphicsShaderLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GraphicsShaderLevel;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_GraphicsShaderLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GraphicsShaderLevel = value;
}
constexpr int32_t& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SystemMemorySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SystemMemorySize;
}
constexpr int32_t const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SystemMemorySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SystemMemorySize;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_SystemMemorySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SystemMemorySize = value;
}
constexpr int32_t& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProcessorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorCount;
}
constexpr int32_t const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProcessorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorCount;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_ProcessorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessorCount = value;
}
constexpr int32_t& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProcessorFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorFrequency;
}
constexpr int32_t const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProcessorFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorFrequency;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_ProcessorFrequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessorFrequency = value;
}
constexpr ::StringW& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProcessorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorType;
}
constexpr ::StringW const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_ProcessorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorType;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_ProcessorType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessorType = value;
}
constexpr bool& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SupportsAccelerometer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportsAccelerometer;
}
constexpr bool const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SupportsAccelerometer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportsAccelerometer;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_SupportsAccelerometer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SupportsAccelerometer = value;
}
constexpr bool& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SupportsGyroscope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportsGyroscope;
}
constexpr bool const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SupportsGyroscope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportsGyroscope;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_SupportsGyroscope(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SupportsGyroscope = value;
}
constexpr bool& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SupportsLocationService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportsLocationService;
}
constexpr bool const& PlayFab::PlayFabDataGatherer::__cordl_internal_get_SupportsLocationService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportsLocationService;
}
constexpr void PlayFab::PlayFabDataGatherer::__cordl_internal_set_SupportsLocationService(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SupportsLocationService = value;
}
inline void PlayFab::PlayFabDataGatherer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataGatherer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW PlayFab::PlayFabDataGatherer::GenerateReport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataGatherer*>(),
                        {"GenerateReport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::PlayFab::PlayFabDataGatherer* PlayFab::PlayFabDataGatherer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabDataGatherer*>());
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabDataGatherer::PlayFabDataGatherer()   {
}
