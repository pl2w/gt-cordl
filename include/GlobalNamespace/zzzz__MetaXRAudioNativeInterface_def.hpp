#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioNativeInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioNativeInterface)
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_FMODPluginInterface;
}
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_NativeInterface;
}
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_UnityNativeInterface;
}
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_WwisePluginInterface;
}
namespace GlobalNamespace {
struct MetaXRAudioNativeInterface_ovrAudioScalarType;
}
namespace Meta::XR::Audio {
struct EnableFlag;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAudioNativeInterface;
}
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_FMODPluginInterface;
}
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_NativeInterface;
}
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_UnityNativeInterface;
}
namespace GlobalNamespace {
class MetaXRAudioNativeInterface_WwisePluginInterface;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAudioNativeInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioNativeInterface*, "", "MetaXRAudioNativeInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*, "", "MetaXRAudioNativeInterface/FMODPluginInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*, "", "MetaXRAudioNativeInterface/NativeInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*, "", "MetaXRAudioNativeInterface/UnityNativeInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*, "", "MetaXRAudioNativeInterface/WwisePluginInterface");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioNativeInterface
class CORDL_TYPE MetaXRAudioNativeInterface : public ::System::Object {
public:
// Declarations
using FMODPluginInterface = ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface;

using NativeInterface = ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface;

using UnityNativeInterface = ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface;

using WwisePluginInterface = ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface;

using ovrAudioScalarType = ::GlobalNamespace::MetaXRAudioNativeInterface_ovrAudioScalarType;

/// @brief Field CachedInterface, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CachedInterface, put=setStaticF_CachedInterface)) ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*  CachedInterface;

/// @brief Method FindInterface, addr 0x9ebb164, size 0x29c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* FindInterface() ;

static inline ::GlobalNamespace::MetaXRAudioNativeInterface* New_ctor() ;

/// @brief Method .ctor, addr 0x9ebb504, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* getStaticF_CachedInterface() ;

/// @brief Method get_Interface, addr 0x9ebb0ec, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* get_Interface() ;

static inline void setStaticF_CachedInterface(::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioNativeInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioNativeInterface(MetaXRAudioNativeInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioNativeInterface(MetaXRAudioNativeInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29950};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaXRAudioNativeInterface) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioNativeInterface/FMODPluginInterface
class CORDL_TYPE MetaXRAudioNativeInterface_FMODPluginInterface : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_context)) ::System::IntPtr  context;

/// @brief Field context_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context_, put=__cordl_internal_set_context_)) ::System::IntPtr  context_;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr operator  ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*() noexcept;

/// @brief Method GetRaycastHits, addr 0x9ebd190, size 0x4c, virtual true, abstract: false, final true
inline int32_t GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length) ;

/// @brief Method GetRoomDimensions, addr 0x9ebd098, size 0x4c, virtual true, abstract: false, final true
inline int32_t GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position) ;

static inline ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface* New_ctor() ;

/// @brief Method SetAdvancedBoxRoomParameters, addr 0x9ebc960, size 0x84, virtual true, abstract: false, final true
inline int32_t SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials) ;

/// @brief Method SetDynamicRoomInterpSpeed, addr 0x9ebce40, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomInterpSpeed(float_t  InterpSpeed) ;

/// @brief Method SetDynamicRoomMaxWallDistance, addr 0x9ebcf00, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance) ;

/// @brief Method SetDynamicRoomRaysPerSecond, addr 0x9ebcd80, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond) ;

/// @brief Method SetDynamicRoomRaysRayCacheSize, addr 0x9ebcfb8, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize) ;

/// @brief Method SetEnabled, addr 0x9ebccc0, size 0x3c, virtual false, abstract: false, final false
inline int32_t SetEnabled(::Meta::XR::Audio::EnableFlag  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x9ebcbf4, size 0x3c, virtual true, abstract: false, final true
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

/// @brief Method SetRoomClutterFactor, addr 0x9ebca70, size 0x34, virtual true, abstract: false, final true
inline int32_t SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor) ;

/// @brief Method SetSharedReverbWetLevel, addr 0x9ebcb30, size 0x34, virtual true, abstract: false, final true
inline int32_t SetSharedReverbWetLevel(float_t  linearLevel) ;

constexpr ::System::IntPtr const& __cordl_internal_get_context_() const;

constexpr ::System::IntPtr& __cordl_internal_get_context_() ;

constexpr void __cordl_internal_set_context_(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x9ebb4ec, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_context, addr 0x9ebc858, size 0x24, virtual false, abstract: false, final false
inline ::System::IntPtr get_context() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* i___GlobalNamespace__MetaXRAudioNativeInterface_NativeInterface() noexcept;

/// @brief Method ovrAudio_Enable, addr 0x9ebcc30, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Audio::EnableFlag  what, int32_t  enable) ;

/// @brief Method ovrAudio_Enable, addr 0x9ebcb64, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable) ;

/// @brief Method ovrAudio_GetPluginContext, addr 0x9ebb470, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context) ;

/// @brief Method ovrAudio_GetRaycastHits, addr 0x9ebd0e4, size 0xac, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetRaycastHits(::System::IntPtr  context, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length) ;

/// @brief Method ovrAudio_GetRoomDimensions, addr 0x9ebcfec, size 0xac, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetRoomDimensions(::System::IntPtr  context, ::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method ovrAudio_SetAdvancedBoxRoomParametersUnity, addr 0x9ebc87c, size 0xe4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetAdvancedBoxRoomParametersUnity(::System::IntPtr  context, float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, float_t  positionX, float_t  positionY, float_t  positionZ, ::ArrayW<float_t>  wallMaterials) ;

/// @brief Method ovrAudio_SetDynamicRoomInterpSpeed, addr 0x9ebcdb4, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomInterpSpeed(::System::IntPtr  context, float_t  InterpSpeed) ;

/// @brief Method ovrAudio_SetDynamicRoomMaxWallDistance, addr 0x9ebce74, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomMaxWallDistance(::System::IntPtr  context, float_t  MaxWallDistance) ;

/// @brief Method ovrAudio_SetDynamicRoomRaysPerSecond, addr 0x9ebccfc, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomRaysPerSecond(::System::IntPtr  context, int32_t  RaysPerSecond) ;

/// @brief Method ovrAudio_SetDynamicRoomRaysRayCacheSize, addr 0x9ebcf34, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomRaysRayCacheSize(::System::IntPtr  context, int32_t  RayCacheSize) ;

/// @brief Method ovrAudio_SetRoomClutterFactor, addr 0x9ebc9e4, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetRoomClutterFactor(::System::IntPtr  context, ::ArrayW<float_t>  clutterFactor) ;

/// @brief Method ovrAudio_SetSharedReverbWetLevel, addr 0x9ebcaa4, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetSharedReverbWetLevel(::System::IntPtr  context, float_t  linearLevel) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioNativeInterface_FMODPluginInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface_FMODPluginInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioNativeInterface_FMODPluginInterface(MetaXRAudioNativeInterface_FMODPluginInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface_FMODPluginInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioNativeInterface_FMODPluginInterface(MetaXRAudioNativeInterface_FMODPluginInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29949};

/// @brief Field binaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  binaryName{u"MetaXRAudioFMOD"};

/// @brief Field context_, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___context_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface, ___context_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioNativeInterface/WwisePluginInterface
class CORDL_TYPE MetaXRAudioNativeInterface_WwisePluginInterface : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_context)) ::System::IntPtr  context;

/// @brief Field context_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context_, put=__cordl_internal_set_context_)) ::System::IntPtr  context_;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr operator  ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*() noexcept;

/// @brief Method GetRaycastHits, addr 0x9ebc810, size 0x48, virtual true, abstract: false, final true
inline int32_t GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length) ;

/// @brief Method GetRoomDimensions, addr 0x9ebc71c, size 0x48, virtual true, abstract: false, final true
inline int32_t GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position) ;

static inline ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface* New_ctor() ;

/// @brief Method SetAdvancedBoxRoomParameters, addr 0x9ebc00c, size 0x80, virtual true, abstract: false, final true
inline int32_t SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials) ;

/// @brief Method SetDynamicRoomInterpSpeed, addr 0x9ebc4d0, size 0x30, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomInterpSpeed(float_t  InterpSpeed) ;

/// @brief Method SetDynamicRoomMaxWallDistance, addr 0x9ebc58c, size 0x30, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance) ;

/// @brief Method SetDynamicRoomRaysPerSecond, addr 0x9ebc414, size 0x30, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond) ;

/// @brief Method SetDynamicRoomRaysRayCacheSize, addr 0x9ebc640, size 0x30, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize) ;

/// @brief Method SetEnabled, addr 0x9ebc358, size 0x38, virtual false, abstract: false, final false
inline int32_t SetEnabled(::Meta::XR::Audio::EnableFlag  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x9ebc290, size 0x38, virtual true, abstract: false, final true
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

/// @brief Method SetRoomClutterFactor, addr 0x9ebc114, size 0x30, virtual true, abstract: false, final true
inline int32_t SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor) ;

/// @brief Method SetSharedReverbWetLevel, addr 0x9ebc1d0, size 0x30, virtual true, abstract: false, final true
inline int32_t SetSharedReverbWetLevel(float_t  linearLevel) ;

constexpr ::System::IntPtr const& __cordl_internal_get_context_() const;

constexpr ::System::IntPtr& __cordl_internal_get_context_() ;

constexpr void __cordl_internal_set_context_(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x9ebb464, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getOrCreateGlobalOvrAudioContext, addr 0x9ebb400, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr getOrCreateGlobalOvrAudioContext() ;

/// @brief Method get_context, addr 0x9ebbf08, size 0x20, virtual false, abstract: false, final false
inline ::System::IntPtr get_context() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* i___GlobalNamespace__MetaXRAudioNativeInterface_NativeInterface() noexcept;

/// @brief Method ovrAudio_Enable, addr 0x9ebc2c8, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Audio::EnableFlag  what, int32_t  enable) ;

/// @brief Method ovrAudio_Enable, addr 0x9ebc200, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable) ;

/// @brief Method ovrAudio_GetRaycastHits, addr 0x9ebc764, size 0xac, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetRaycastHits(::System::IntPtr  context, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length) ;

/// @brief Method ovrAudio_GetRoomDimensions, addr 0x9ebc670, size 0xac, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetRoomDimensions(::System::IntPtr  context, ::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method ovrAudio_SetAdvancedBoxRoomParametersUnity, addr 0x9ebbf28, size 0xe4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetAdvancedBoxRoomParametersUnity(::System::IntPtr  context, float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, float_t  positionX, float_t  positionY, float_t  positionZ, ::ArrayW<float_t>  wallMaterials) ;

/// @brief Method ovrAudio_SetDynamicRoomInterpSpeed, addr 0x9ebc444, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomInterpSpeed(::System::IntPtr  context, float_t  InterpSpeed) ;

/// @brief Method ovrAudio_SetDynamicRoomMaxWallDistance, addr 0x9ebc500, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomMaxWallDistance(::System::IntPtr  context, float_t  MaxWallDistance) ;

/// @brief Method ovrAudio_SetDynamicRoomRaysPerSecond, addr 0x9ebc390, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomRaysPerSecond(::System::IntPtr  context, int32_t  RaysPerSecond) ;

/// @brief Method ovrAudio_SetDynamicRoomRaysRayCacheSize, addr 0x9ebc5bc, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomRaysRayCacheSize(::System::IntPtr  context, int32_t  RayCacheSize) ;

/// @brief Method ovrAudio_SetRoomClutterFactor, addr 0x9ebc08c, size 0x88, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetRoomClutterFactor(::System::IntPtr  context, ::ArrayW<float_t>  clutterFactor) ;

/// @brief Method ovrAudio_SetSharedReverbWetLevel, addr 0x9ebc144, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetSharedReverbWetLevel(::System::IntPtr  context, float_t  linearLevel) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioNativeInterface_WwisePluginInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface_WwisePluginInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioNativeInterface_WwisePluginInterface(MetaXRAudioNativeInterface_WwisePluginInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface_WwisePluginInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioNativeInterface_WwisePluginInterface(MetaXRAudioNativeInterface_WwisePluginInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29948};

/// @brief Field binaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  binaryName{u"MetaXRAudioWwise"};

/// @brief Field context_, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___context_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface, ___context_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioNativeInterface/UnityNativeInterface
class CORDL_TYPE MetaXRAudioNativeInterface_UnityNativeInterface : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_context)) ::System::IntPtr  context;

/// @brief Field context_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context_, put=__cordl_internal_set_context_)) ::System::IntPtr  context_;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr operator  ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*() noexcept;

/// @brief Method GetRaycastHits, addr 0x9ebbebc, size 0x4c, virtual true, abstract: false, final true
inline int32_t GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length) ;

/// @brief Method GetRoomDimensions, addr 0x9ebbdc4, size 0x4c, virtual true, abstract: false, final true
inline int32_t GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position) ;

static inline ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface* New_ctor() ;

/// @brief Method SetAdvancedBoxRoomParameters, addr 0x9ebb690, size 0x84, virtual true, abstract: false, final true
inline int32_t SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials) ;

/// @brief Method SetDynamicRoomInterpSpeed, addr 0x9ebbb6c, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomInterpSpeed(float_t  InterpSpeed) ;

/// @brief Method SetDynamicRoomMaxWallDistance, addr 0x9ebbc2c, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance) ;

/// @brief Method SetDynamicRoomRaysPerSecond, addr 0x9ebbaac, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond) ;

/// @brief Method SetDynamicRoomRaysRayCacheSize, addr 0x9ebbce4, size 0x34, virtual true, abstract: false, final true
inline int32_t SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize) ;

/// @brief Method SetEnabled, addr 0x9ebb9ec, size 0x3c, virtual false, abstract: false, final false
inline int32_t SetEnabled(::Meta::XR::Audio::EnableFlag  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x9ebb920, size 0x3c, virtual true, abstract: false, final true
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

/// @brief Method SetRoomClutterFactor, addr 0x9ebb79c, size 0x34, virtual true, abstract: false, final true
inline int32_t SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor) ;

/// @brief Method SetSharedReverbWetLevel, addr 0x9ebb85c, size 0x34, virtual true, abstract: false, final true
inline int32_t SetSharedReverbWetLevel(float_t  linearLevel) ;

constexpr ::System::IntPtr const& __cordl_internal_get_context_() const;

constexpr ::System::IntPtr& __cordl_internal_get_context_() ;

constexpr void __cordl_internal_set_context_(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x9ebb4f8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_context, addr 0x9ebb50c, size 0x24, virtual false, abstract: false, final false
inline ::System::IntPtr get_context() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* i___GlobalNamespace__MetaXRAudioNativeInterface_NativeInterface() noexcept;

/// @brief Method ovrAudio_Enable, addr 0x9ebb95c, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Audio::EnableFlag  what, int32_t  enable) ;

/// @brief Method ovrAudio_Enable, addr 0x9ebb890, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable) ;

/// @brief Method ovrAudio_GetPluginContext, addr 0x9ebb530, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context) ;

/// @brief Method ovrAudio_GetRaycastHits, addr 0x9ebbe10, size 0xac, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetRaycastHits(::System::IntPtr  context, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length) ;

/// @brief Method ovrAudio_GetRoomDimensions, addr 0x9ebbd18, size 0xac, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetRoomDimensions(::System::IntPtr  context, ::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method ovrAudio_SetAdvancedBoxRoomParametersUnity, addr 0x9ebb5ac, size 0xe4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetAdvancedBoxRoomParametersUnity(::System::IntPtr  context, float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, float_t  positionX, float_t  positionY, float_t  positionZ, ::ArrayW<float_t>  wallMaterials) ;

/// @brief Method ovrAudio_SetDynamicRoomInterpSpeed, addr 0x9ebbae0, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomInterpSpeed(::System::IntPtr  context, float_t  InterpSpeed) ;

/// @brief Method ovrAudio_SetDynamicRoomMaxWallDistance, addr 0x9ebbba0, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomMaxWallDistance(::System::IntPtr  context, float_t  MaxWallDistance) ;

/// @brief Method ovrAudio_SetDynamicRoomRaysPerSecond, addr 0x9ebba28, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomRaysPerSecond(::System::IntPtr  context, int32_t  RaysPerSecond) ;

/// @brief Method ovrAudio_SetDynamicRoomRaysRayCacheSize, addr 0x9ebbc60, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetDynamicRoomRaysRayCacheSize(::System::IntPtr  context, int32_t  RayCacheSize) ;

/// @brief Method ovrAudio_SetRoomClutterFactor, addr 0x9ebb714, size 0x88, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetRoomClutterFactor(::System::IntPtr  context, ::ArrayW<float_t>  clutterFactor) ;

/// @brief Method ovrAudio_SetSharedReverbWetLevel, addr 0x9ebb7d0, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetSharedReverbWetLevel(::System::IntPtr  context, float_t  linearLevel) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioNativeInterface_UnityNativeInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface_UnityNativeInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioNativeInterface_UnityNativeInterface(MetaXRAudioNativeInterface_UnityNativeInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface_UnityNativeInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioNativeInterface_UnityNativeInterface(MetaXRAudioNativeInterface_UnityNativeInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29947};

/// @brief Field binaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  binaryName{u"MetaXRAudioUnity"};

/// @brief Field context_, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___context_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface, ___context_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioNativeInterface/NativeInterface
class CORDL_TYPE MetaXRAudioNativeInterface_NativeInterface {
public:
// Declarations
/// @brief Method GetRaycastHits, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length) ;

/// @brief Method GetRoomDimensions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method SetAdvancedBoxRoomParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials) ;

/// @brief Method SetDynamicRoomInterpSpeed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetDynamicRoomInterpSpeed(float_t  InterpSpeed) ;

/// @brief Method SetDynamicRoomMaxWallDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance) ;

/// @brief Method SetDynamicRoomRaysPerSecond, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond) ;

/// @brief Method SetDynamicRoomRaysRayCacheSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize) ;

/// @brief Method SetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

/// @brief Method SetRoomClutterFactor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor) ;

/// @brief Method SetSharedReverbWetLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetSharedReverbWetLevel(float_t  linearLevel) ;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioNativeInterface_NativeInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioNativeInterface_NativeInterface(MetaXRAudioNativeInterface_NativeInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29946};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
