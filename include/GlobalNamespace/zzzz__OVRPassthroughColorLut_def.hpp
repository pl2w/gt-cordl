#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_ColorChannels_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_CreateState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughColorLutData_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughColorLut)
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob;
}
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_ColorChannels;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut_ColorLutTextureConverter;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_CreateState;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_WriteColorsAsBytesJob;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughColorLutData;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPassthroughColorLut;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut_ColorLutTextureConverter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRPassthroughColorLut*);
MARK_REF_T(::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughColorLut*, "", "OVRPassthroughColorLut");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*, "", "OVRPassthroughColorLut/ColorLutTextureConverter");
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-customize-passthrough-color-mapping/#color-look-up-tables-luts")]
// [Feature((Meta.XR.Util.Feature)7)]
// Dependencies OVRPassthroughColorLut::ColorChannels, OVRPassthroughColorLut::CreateState, OVRPlugin::PassthroughColorLutData, System.Object, System.Runtime.InteropServices.GCHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughColorLut
class CORDL_TYPE OVRPassthroughColorLut : public ::System::Object {
public:
// Declarations
using ColorChannels = ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels;

using ColorLutTextureConverter = ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter;

using CreateState = ::GlobalNamespace::OVRPassthroughColorLut_CreateState;

using WriteColorsAsBytesJob = ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob;

 __declspec(property(get=get_Channels, put=set_Channels)) ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  Channels;

/// @brief [Obsolete("IsInitialized is deprecated. Use IsValid instead.", false)]
 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Resolution, put=set_Resolution)) uint32_t  Resolution;

/// @brief Field <Channels>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Channels_k__BackingField, put=__cordl_internal_set__Channels_k__BackingField)) ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  _Channels_k__BackingField;

/// @brief Field <Resolution>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution_k__BackingField, put=__cordl_internal_set__Resolution_k__BackingField)) uint32_t  _Resolution_k__BackingField;

/// @brief Field _allocHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocHandle, put=__cordl_internal_set__allocHandle)) ::System::Runtime::InteropServices::GCHandle  _allocHandle;

/// @brief Field _channelCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__channelCount, put=__cordl_internal_set__channelCount)) int32_t  _channelCount;

/// @brief Field _colorBytes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorBytes, put=__cordl_internal_set__colorBytes)) ::ArrayW<uint8_t>  _colorBytes;

/// @brief Field _colorLutHandle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorLutHandle, put=__cordl_internal_set__colorLutHandle)) uint64_t  _colorLutHandle;

/// @brief Field _createState, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__createState, put=__cordl_internal_set__createState)) ::GlobalNamespace::OVRPassthroughColorLut_CreateState  _createState;

/// @brief Field _locker, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__locker, put=__cordl_internal_set__locker)) ::System::Object*  _locker;

/// @brief Field _lutData, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__lutData, put=__cordl_internal_set__lutData)) ::GlobalNamespace::OVRPlugin_PassthroughColorLutData  _lutData;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ChannelsToCount, addr 0xa67e374, size 0x10, virtual false, abstract: false, final false
static inline int32_t ChannelsToCount(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

/// @brief Method Create, addr 0xa67cefc, size 0x16c, virtual false, abstract: false, final false
inline void Create(::GlobalNamespace::OVRPlugin_PassthroughColorLutData  lutData) ;

/// @brief Method CreateLutData, addr 0xa67e4b0, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutData(::by_ref<::ArrayW<uint8_t>>  colorBytes) ;

/// @brief Method CreateLutDataFromArray, addr 0xa67d1ec, size 0x4c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromArray(::ArrayW<::UnityEngine::Color32>  colors) ;

/// @brief Method CreateLutDataFromArray, addr 0xa67d104, size 0x4c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromArray(::ArrayW<::UnityEngine::Color>  colors) ;

/// @brief Method CreateLutDataFromArray, addr 0xa67d3a4, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromArray(::ArrayW<uint8_t>  colors) ;

/// @brief Method CreateLutDataFromTexture, addr 0xa67cea4, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromTexture(::UnityEngine::Texture2D*  lut, bool  flipY) ;

/// @brief Method Destroy, addr 0xa67dd14, size 0x11c, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Dispose, addr 0xa67dbc4, size 0x150, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0xa67e554, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FreeAllocHandle, addr 0xa67de30, size 0x14, virtual false, abstract: false, final false
inline void FreeAllocHandle() ;

/// @brief Method GetArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetArraySize(::ArrayW<T>  array) ;

/// @brief Method GetChannelsForTextureFormat, addr 0xa67cbc0, size 0x98, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GetChannelsForTextureFormat(::UnityEngine::TextureFormat  format) ;

/// @brief Method GetResolutionFromSize, addr 0xa67e204, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t GetResolutionFromSize(int32_t  size) ;

/// @brief Method GetTextureSize, addr 0xa67cae4, size 0xdc, virtual false, abstract: false, final false
static inline int32_t GetTextureSize(::UnityEngine::Texture2D*  texture) ;

/// @brief Method GetTextureSizeFromByteArray, addr 0xa67d294, size 0x110, virtual false, abstract: false, final false
static inline int32_t GetTextureSizeFromByteArray(::ArrayW<uint8_t>  initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

/// @brief Method InternalCreate, addr 0xa67e398, size 0xe0, virtual false, abstract: false, final false
inline void InternalCreate() ;

/// @brief Method IsPowerOfTwo, addr 0xa67e384, size 0x14, virtual false, abstract: false, final false
static inline bool IsPowerOfTwo(uint32_t  x) ;

/// @brief Method IsResolutionAccepted, addr 0xa67e2b8, size 0xbc, virtual false, abstract: false, final false
static inline bool IsResolutionAccepted(uint32_t  resolution, int32_t  size, ::by_ref<::StringW>  errorMessage) ;

/// @brief Method IsTextureSupported, addr 0xa67de44, size 0x1a0, virtual false, abstract: false, final false
static inline bool IsTextureSupported(::UnityEngine::Texture2D*  texture, ::by_ref<::StringW>  errorMessage) ;

/// @brief Method IsValidLutUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool IsValidLutUpdate(::ArrayW<T>  colorArray, int32_t  elementByteSize) ;

/// @brief Method IsValidUpdateResolution, addr 0xa67d9f8, size 0x118, virtual false, abstract: false, final false
inline bool IsValidUpdateResolution(int32_t  lutSize, int32_t  elementByteSize) ;

static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<::UnityEngine::Color32>  initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<::UnityEngine::Color>  initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<uint8_t>  initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::UnityEngine::Texture2D*  initialLutTexture, bool  flipY) ;

static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(int32_t  size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

/// @brief Method Recreate, addr 0xa67e498, size 0x18, virtual false, abstract: false, final false
inline void Recreate() ;

/// @brief Method RefreshIfInitialized, addr 0xa67e478, size 0x20, virtual false, abstract: false, final false
inline void RefreshIfInitialized(bool  isInitialized) ;

/// @brief Method UpdateFrom, addr 0xa67d6f0, size 0xc0, virtual false, abstract: false, final false
inline void UpdateFrom(::ArrayW<::UnityEngine::Color32>  colors) ;

/// @brief Method UpdateFrom, addr 0xa67d3fc, size 0xc0, virtual false, abstract: false, final false
inline void UpdateFrom(::ArrayW<::UnityEngine::Color>  colors) ;

/// @brief Method UpdateFrom, addr 0xa67d874, size 0xcc, virtual false, abstract: false, final false
inline void UpdateFrom(::ArrayW<uint8_t>  colors) ;

/// @brief Method UpdateFrom, addr 0xa67d940, size 0xb8, virtual false, abstract: false, final false
inline void UpdateFrom(::UnityEngine::Texture2D*  lutTexture, bool  flipY) ;

/// @brief Method WriteColorsAsBytes, addr 0xa67d7b0, size 0xc4, virtual false, abstract: false, final false
inline void WriteColorsAsBytes(::ArrayW<::UnityEngine::Color32>  colors, ::ArrayW<uint8_t>  target) ;

/// @brief Method WriteColorsAsBytes, addr 0xa67d4bc, size 0x234, virtual false, abstract: false, final false
inline void WriteColorsAsBytes(::ArrayW<::UnityEngine::Color>  colors, ::ArrayW<uint8_t>  target) ;

constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels const& __cordl_internal_get__Channels_k__BackingField() const;

constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels& __cordl_internal_get__Channels_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__Resolution_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__Resolution_k__BackingField() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__allocHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__allocHandle() ;

constexpr int32_t const& __cordl_internal_get__channelCount() const;

constexpr int32_t& __cordl_internal_get__channelCount() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__colorBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__colorBytes() ;

constexpr uint64_t const& __cordl_internal_get__colorLutHandle() const;

constexpr uint64_t& __cordl_internal_get__colorLutHandle() ;

constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState const& __cordl_internal_get__createState() const;

constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState& __cordl_internal_get__createState() ;

constexpr ::System::Object* const& __cordl_internal_get__locker() const;

constexpr ::System::Object*& __cordl_internal_get__locker() ;

constexpr ::GlobalNamespace::OVRPlugin_PassthroughColorLutData const& __cordl_internal_get__lutData() const;

constexpr ::GlobalNamespace::OVRPlugin_PassthroughColorLutData& __cordl_internal_get__lutData() ;

constexpr void __cordl_internal_set__Channels_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  value) ;

constexpr void __cordl_internal_set__Resolution_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__allocHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set__channelCount(int32_t  value) ;

constexpr void __cordl_internal_set__colorBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__colorLutHandle(uint64_t  value) ;

constexpr void __cordl_internal_set__createState(::GlobalNamespace::OVRPassthroughColorLut_CreateState  value) ;

constexpr void __cordl_internal_set__locker(::System::Object*  value) ;

constexpr void __cordl_internal_set__lutData(::GlobalNamespace::OVRPlugin_PassthroughColorLutData  value) ;

/// @brief Method .ctor, addr 0xa67d150, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Color32>  initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

/// @brief Method .ctor, addr 0xa67d068, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Color>  initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

/// @brief Method .ctor, addr 0xa67d238, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

/// @brief Method .ctor, addr 0xa67ca50, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Texture2D*  initialLutTexture, bool  flipY) ;

/// @brief Method .ctor, addr 0xa67cc58, size 0x24c, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  channels) ;

/// [CompilerGenerated]
/// @brief Method get_Channels, addr 0xa67ca20, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels get_Channels() ;

/// @brief Method get_IsInitialized, addr 0xa67ca30, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_IsValid, addr 0xa67ca40, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method get_Resolution, addr 0xa67ca10, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Resolution() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Channels, addr 0xa67ca28, size 0x8, virtual false, abstract: false, final false
inline void set_Channels(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  value) ;

/// [CompilerGenerated]
/// @brief Method set_Resolution, addr 0xa67ca18, size 0x8, virtual false, abstract: false, final false
inline void set_Resolution(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughColorLut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPassthroughColorLut(OVRPassthroughColorLut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPassthroughColorLut(OVRPassthroughColorLut const& ) = delete;

/// @brief Field RecomendedBatchSize offset 0xffffffff size 0x4
static constexpr int32_t  RecomendedBatchSize{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12736};

/// [CompilerGenerated]
/// @brief Field <Resolution>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  ____Resolution_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Channels>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels  ____Channels_k__BackingField;

/// @brief Field _colorLutHandle, offset: 0x18, size: 0x8, def value: None
 uint64_t  ____colorLutHandle;

/// @brief Field _allocHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ____allocHandle;

/// @brief Field _lutData, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_PassthroughColorLutData  ____lutData;

/// @brief Field _channelCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____channelCount;

/// @brief Field _colorBytes, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____colorBytes;

/// @brief Field _locker, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ____locker;

/// @brief Field _createState, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::OVRPassthroughColorLut_CreateState  ____createState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____Resolution_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____Channels_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____colorLutHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____allocHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____lutData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____channelCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____colorBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____locker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____createState) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughColorLut) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughColorLut/ColorLutTextureConverter
class CORDL_TYPE OVRPassthroughColorLut_ColorLutTextureConverter : public ::System::Object {
public:
// Declarations
using MapColorValuesJob = ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob;

using TextureSettings = ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings;

/// @brief Method GetTextureSettings, addr 0xa67e674, size 0xfc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings GetTextureSettings(::UnityEngine::Texture2D*  lut, int32_t  channelCount, bool  flipY) ;

/// @brief Method MapColorValues, addr 0xa67e770, size 0x194, virtual false, abstract: false, final false
static inline void MapColorValues(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings  settings, ::Unity::Collections::NativeArray_1<uint8_t>  source, ::ArrayW<uint8_t>  target) ;

/// @brief Method TextureToColorByteMap, addr 0xa67db10, size 0xb4, virtual false, abstract: false, final false
static inline void TextureToColorByteMap(::UnityEngine::Texture2D*  lut, int32_t  channelCount, ::ArrayW<uint8_t>  target, bool  flipY) ;

/// @brief Method TryGetTextureLayout, addr 0xa67dfe4, size 0x220, virtual false, abstract: false, final false
static inline bool TryGetTextureLayout(int32_t  width, int32_t  height, ::by_ref<int32_t>  resolution, ::by_ref<int32_t>  slicesPerRow, ::by_ref<::StringW>  errorMessage) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughColorLut_ColorLutTextureConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut_ColorLutTextureConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPassthroughColorLut_ColorLutTextureConverter(OVRPassthroughColorLut_ColorLutTextureConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut_ColorLutTextureConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPassthroughColorLut_ColorLutTextureConverter(OVRPassthroughColorLut_ColorLutTextureConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
