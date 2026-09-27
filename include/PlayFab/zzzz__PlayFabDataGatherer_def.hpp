#pragma once
// IWYU pragma private; include "PlayFab/PlayFabDataGatherer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/zzzz__DeviceType_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabDataGatherer)
// Forward declare root types
namespace PlayFab {
class PlayFabDataGatherer;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabDataGatherer*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabDataGatherer*, "PlayFab", "PlayFabDataGatherer");
// Dependencies System.Object, UnityEngine.DeviceType, UnityEngine.Rendering.GraphicsDeviceType, UnityEngine.RuntimePlatform
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabDataGatherer
class CORDL_TYPE PlayFabDataGatherer : public ::System::Object {
public:
// Declarations
/// @brief Field Company, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Company, put=__cordl_internal_set_Company)) ::StringW  Company;

/// @brief Field DataPath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataPath, put=__cordl_internal_set_DataPath)) ::StringW  DataPath;

/// @brief Field DeviceModel, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceModel, put=__cordl_internal_set_DeviceModel)) ::StringW  DeviceModel;

/// @brief Field DeviceType, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_DeviceType, put=__cordl_internal_set_DeviceType)) ::UnityEngine::DeviceType  DeviceType;

/// @brief Field DeviceUniqueId, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceUniqueId, put=__cordl_internal_set_DeviceUniqueId)) ::StringW  DeviceUniqueId;

/// @brief Field GraphicsDeviceId, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_GraphicsDeviceId, put=__cordl_internal_set_GraphicsDeviceId)) int32_t  GraphicsDeviceId;

/// @brief Field GraphicsDeviceName, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_GraphicsDeviceName, put=__cordl_internal_set_GraphicsDeviceName)) ::StringW  GraphicsDeviceName;

/// @brief Field GraphicsMemorySize, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_GraphicsMemorySize, put=__cordl_internal_set_GraphicsMemorySize)) int32_t  GraphicsMemorySize;

/// @brief Field GraphicsMultiThreaded, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_GraphicsMultiThreaded, put=__cordl_internal_set_GraphicsMultiThreaded)) bool  GraphicsMultiThreaded;

/// @brief Field GraphicsShaderLevel, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_GraphicsShaderLevel, put=__cordl_internal_set_GraphicsShaderLevel)) int32_t  GraphicsShaderLevel;

/// @brief Field GraphicsType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_GraphicsType, put=__cordl_internal_set_GraphicsType)) ::UnityEngine::Rendering::GraphicsDeviceType  GraphicsType;

/// @brief Field OperatingSystem, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperatingSystem, put=__cordl_internal_set_OperatingSystem)) ::StringW  OperatingSystem;

/// @brief Field PersistentDataPath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PersistentDataPath, put=__cordl_internal_set_PersistentDataPath)) ::StringW  PersistentDataPath;

/// @brief Field Platform, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::UnityEngine::RuntimePlatform  Platform;

/// @brief Field ProcessorCount, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProcessorCount, put=__cordl_internal_set_ProcessorCount)) int32_t  ProcessorCount;

/// @brief Field ProcessorFrequency, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProcessorFrequency, put=__cordl_internal_set_ProcessorFrequency)) int32_t  ProcessorFrequency;

/// @brief Field ProcessorType, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProcessorType, put=__cordl_internal_set_ProcessorType)) ::StringW  ProcessorType;

/// @brief Field ProductBundle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProductBundle, put=__cordl_internal_set_ProductBundle)) ::StringW  ProductBundle;

/// @brief Field ProductName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProductName, put=__cordl_internal_set_ProductName)) ::StringW  ProductName;

/// @brief Field RunInBackground, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_RunInBackground, put=__cordl_internal_set_RunInBackground)) bool  RunInBackground;

/// @brief Field StreamingAssetsPath, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_StreamingAssetsPath, put=__cordl_internal_set_StreamingAssetsPath)) ::StringW  StreamingAssetsPath;

/// @brief Field SupportsAccelerometer, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_SupportsAccelerometer, put=__cordl_internal_set_SupportsAccelerometer)) bool  SupportsAccelerometer;

/// @brief Field SupportsGyroscope, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_SupportsGyroscope, put=__cordl_internal_set_SupportsGyroscope)) bool  SupportsGyroscope;

/// @brief Field SupportsLocationService, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get_SupportsLocationService, put=__cordl_internal_set_SupportsLocationService)) bool  SupportsLocationService;

/// @brief Field SystemMemorySize, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_SystemMemorySize, put=__cordl_internal_set_SystemMemorySize)) int32_t  SystemMemorySize;

/// @brief Field TargetFrameRate, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_TargetFrameRate, put=__cordl_internal_set_TargetFrameRate)) int32_t  TargetFrameRate;

/// @brief Field UnityVersion, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnityVersion, put=__cordl_internal_set_UnityVersion)) ::StringW  UnityVersion;

/// @brief Field Version, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) ::StringW  Version;

/// @brief Method GenerateReport, addr 0xa7dd834, size 0x164, virtual false, abstract: false, final false
inline ::StringW GenerateReport() ;

static inline ::PlayFab::PlayFabDataGatherer* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Company() const;

constexpr ::StringW& __cordl_internal_get_Company() ;

constexpr ::StringW const& __cordl_internal_get_DataPath() const;

constexpr ::StringW& __cordl_internal_get_DataPath() ;

constexpr ::StringW const& __cordl_internal_get_DeviceModel() const;

constexpr ::StringW& __cordl_internal_get_DeviceModel() ;

constexpr ::UnityEngine::DeviceType const& __cordl_internal_get_DeviceType() const;

constexpr ::UnityEngine::DeviceType& __cordl_internal_get_DeviceType() ;

constexpr ::StringW const& __cordl_internal_get_DeviceUniqueId() const;

constexpr ::StringW& __cordl_internal_get_DeviceUniqueId() ;

constexpr int32_t const& __cordl_internal_get_GraphicsDeviceId() const;

constexpr int32_t& __cordl_internal_get_GraphicsDeviceId() ;

constexpr ::StringW const& __cordl_internal_get_GraphicsDeviceName() const;

constexpr ::StringW& __cordl_internal_get_GraphicsDeviceName() ;

constexpr int32_t const& __cordl_internal_get_GraphicsMemorySize() const;

constexpr int32_t& __cordl_internal_get_GraphicsMemorySize() ;

constexpr bool const& __cordl_internal_get_GraphicsMultiThreaded() const;

constexpr bool& __cordl_internal_get_GraphicsMultiThreaded() ;

constexpr int32_t const& __cordl_internal_get_GraphicsShaderLevel() const;

constexpr int32_t& __cordl_internal_get_GraphicsShaderLevel() ;

constexpr ::UnityEngine::Rendering::GraphicsDeviceType const& __cordl_internal_get_GraphicsType() const;

constexpr ::UnityEngine::Rendering::GraphicsDeviceType& __cordl_internal_get_GraphicsType() ;

constexpr ::StringW const& __cordl_internal_get_OperatingSystem() const;

constexpr ::StringW& __cordl_internal_get_OperatingSystem() ;

constexpr ::StringW const& __cordl_internal_get_PersistentDataPath() const;

constexpr ::StringW& __cordl_internal_get_PersistentDataPath() ;

constexpr ::UnityEngine::RuntimePlatform const& __cordl_internal_get_Platform() const;

constexpr ::UnityEngine::RuntimePlatform& __cordl_internal_get_Platform() ;

constexpr int32_t const& __cordl_internal_get_ProcessorCount() const;

constexpr int32_t& __cordl_internal_get_ProcessorCount() ;

constexpr int32_t const& __cordl_internal_get_ProcessorFrequency() const;

constexpr int32_t& __cordl_internal_get_ProcessorFrequency() ;

constexpr ::StringW const& __cordl_internal_get_ProcessorType() const;

constexpr ::StringW& __cordl_internal_get_ProcessorType() ;

constexpr ::StringW const& __cordl_internal_get_ProductBundle() const;

constexpr ::StringW& __cordl_internal_get_ProductBundle() ;

constexpr ::StringW const& __cordl_internal_get_ProductName() const;

constexpr ::StringW& __cordl_internal_get_ProductName() ;

constexpr bool const& __cordl_internal_get_RunInBackground() const;

constexpr bool& __cordl_internal_get_RunInBackground() ;

constexpr ::StringW const& __cordl_internal_get_StreamingAssetsPath() const;

constexpr ::StringW& __cordl_internal_get_StreamingAssetsPath() ;

constexpr bool const& __cordl_internal_get_SupportsAccelerometer() const;

constexpr bool& __cordl_internal_get_SupportsAccelerometer() ;

constexpr bool const& __cordl_internal_get_SupportsGyroscope() const;

constexpr bool& __cordl_internal_get_SupportsGyroscope() ;

constexpr bool const& __cordl_internal_get_SupportsLocationService() const;

constexpr bool& __cordl_internal_get_SupportsLocationService() ;

constexpr int32_t const& __cordl_internal_get_SystemMemorySize() const;

constexpr int32_t& __cordl_internal_get_SystemMemorySize() ;

constexpr int32_t const& __cordl_internal_get_TargetFrameRate() const;

constexpr int32_t& __cordl_internal_get_TargetFrameRate() ;

constexpr ::StringW const& __cordl_internal_get_UnityVersion() const;

constexpr ::StringW& __cordl_internal_get_UnityVersion() ;

constexpr ::StringW const& __cordl_internal_get_Version() const;

constexpr ::StringW& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_Company(::StringW  value) ;

constexpr void __cordl_internal_set_DataPath(::StringW  value) ;

constexpr void __cordl_internal_set_DeviceModel(::StringW  value) ;

constexpr void __cordl_internal_set_DeviceType(::UnityEngine::DeviceType  value) ;

constexpr void __cordl_internal_set_DeviceUniqueId(::StringW  value) ;

constexpr void __cordl_internal_set_GraphicsDeviceId(int32_t  value) ;

constexpr void __cordl_internal_set_GraphicsDeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_GraphicsMemorySize(int32_t  value) ;

constexpr void __cordl_internal_set_GraphicsMultiThreaded(bool  value) ;

constexpr void __cordl_internal_set_GraphicsShaderLevel(int32_t  value) ;

constexpr void __cordl_internal_set_GraphicsType(::UnityEngine::Rendering::GraphicsDeviceType  value) ;

constexpr void __cordl_internal_set_OperatingSystem(::StringW  value) ;

constexpr void __cordl_internal_set_PersistentDataPath(::StringW  value) ;

constexpr void __cordl_internal_set_Platform(::UnityEngine::RuntimePlatform  value) ;

constexpr void __cordl_internal_set_ProcessorCount(int32_t  value) ;

constexpr void __cordl_internal_set_ProcessorFrequency(int32_t  value) ;

constexpr void __cordl_internal_set_ProcessorType(::StringW  value) ;

constexpr void __cordl_internal_set_ProductBundle(::StringW  value) ;

constexpr void __cordl_internal_set_ProductName(::StringW  value) ;

constexpr void __cordl_internal_set_RunInBackground(bool  value) ;

constexpr void __cordl_internal_set_StreamingAssetsPath(::StringW  value) ;

constexpr void __cordl_internal_set_SupportsAccelerometer(bool  value) ;

constexpr void __cordl_internal_set_SupportsGyroscope(bool  value) ;

constexpr void __cordl_internal_set_SupportsLocationService(bool  value) ;

constexpr void __cordl_internal_set_SystemMemorySize(int32_t  value) ;

constexpr void __cordl_internal_set_TargetFrameRate(int32_t  value) ;

constexpr void __cordl_internal_set_UnityVersion(::StringW  value) ;

constexpr void __cordl_internal_set_Version(::StringW  value) ;

/// @brief Method .ctor, addr 0xa7dd344, size 0x274, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabDataGatherer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDataGatherer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabDataGatherer(PlayFabDataGatherer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDataGatherer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabDataGatherer(PlayFabDataGatherer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19520};

/// @brief Field ProductName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ProductName;

/// @brief Field ProductBundle, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ProductBundle;

/// @brief Field Version, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Version;

/// @brief Field Company, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Company;

/// @brief Field Platform, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::RuntimePlatform  ___Platform;

/// @brief Field GraphicsMultiThreaded, offset: 0x34, size: 0x1, def value: None
 bool  ___GraphicsMultiThreaded;

/// @brief Field GraphicsType, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::Rendering::GraphicsDeviceType  ___GraphicsType;

/// @brief Field DataPath, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___DataPath;

/// @brief Field PersistentDataPath, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___PersistentDataPath;

/// @brief Field StreamingAssetsPath, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___StreamingAssetsPath;

/// @brief Field TargetFrameRate, offset: 0x58, size: 0x4, def value: None
 int32_t  ___TargetFrameRate;

/// @brief Field UnityVersion, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___UnityVersion;

/// @brief Field RunInBackground, offset: 0x68, size: 0x1, def value: None
 bool  ___RunInBackground;

/// @brief Field DeviceModel, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___DeviceModel;

/// @brief Field DeviceType, offset: 0x78, size: 0x4, def value: None
 ::UnityEngine::DeviceType  ___DeviceType;

/// @brief Field DeviceUniqueId, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___DeviceUniqueId;

/// @brief Field OperatingSystem, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___OperatingSystem;

/// @brief Field GraphicsDeviceId, offset: 0x90, size: 0x4, def value: None
 int32_t  ___GraphicsDeviceId;

/// @brief Field GraphicsDeviceName, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___GraphicsDeviceName;

/// @brief Field GraphicsMemorySize, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___GraphicsMemorySize;

/// @brief Field GraphicsShaderLevel, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___GraphicsShaderLevel;

/// @brief Field SystemMemorySize, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___SystemMemorySize;

/// @brief Field ProcessorCount, offset: 0xac, size: 0x4, def value: None
 int32_t  ___ProcessorCount;

/// @brief Field ProcessorFrequency, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___ProcessorFrequency;

/// @brief Field ProcessorType, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___ProcessorType;

/// @brief Field SupportsAccelerometer, offset: 0xc0, size: 0x1, def value: None
 bool  ___SupportsAccelerometer;

/// @brief Field SupportsGyroscope, offset: 0xc1, size: 0x1, def value: None
 bool  ___SupportsGyroscope;

/// @brief Field SupportsLocationService, offset: 0xc2, size: 0x1, def value: None
 bool  ___SupportsLocationService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___ProductName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___ProductBundle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___Version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___Company) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___Platform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___GraphicsMultiThreaded) == 0x34, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___GraphicsType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___DataPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___PersistentDataPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___StreamingAssetsPath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___TargetFrameRate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___UnityVersion) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___RunInBackground) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___DeviceModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___DeviceType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___DeviceUniqueId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___OperatingSystem) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___GraphicsDeviceId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___GraphicsDeviceName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___GraphicsMemorySize) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___GraphicsShaderLevel) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___SystemMemorySize) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___ProcessorCount) == 0xac, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___ProcessorFrequency) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___ProcessorType) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___SupportsAccelerometer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___SupportsGyroscope) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataGatherer, ___SupportsLocationService) == 0xc2, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabDataGatherer) == 0xc8, "Size mismatch!");

} // namespace end def PlayFab
