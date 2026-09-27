#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Acoustics/zzzz__AcousticMapFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAcousticMap)
namespace GlobalNamespace {
class MetaXRAcousticMap__LoadMapAsync_d__35;
}
namespace GlobalNamespace {
struct MetaXRAcousticMap__LoadMapFromMemory_d__36;
}
namespace GlobalNamespace {
class MetaXRAcousticMap___c__DisplayClass36_0;
}
namespace GlobalNamespace {
class MetaXRAcousticSceneGroup;
}
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticMap;
}
namespace GlobalNamespace {
class MetaXRAcousticMap__LoadMapAsync_d__35;
}
namespace GlobalNamespace {
class MetaXRAcousticMap___c__DisplayClass36_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMap*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMap*, "", "MetaXRAcousticMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*, "", "MetaXRAcousticMap/<LoadMapAsync>d__35");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*, "", "MetaXRAcousticMap/<>c__DisplayClass36_0");
// Dependencies Meta.XR.Acoustics.AcousticMapFlags, System.IntPtr, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMap
class CORDL_TYPE MetaXRAcousticMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadMapAsync_d__35 = ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35;

using _LoadMapFromMemory_d__36 = ::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36;

using __c__DisplayClass36_0 = ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0;

 __declspec(property(get=get_AbsoluteFilePath, put=set_AbsoluteFilePath)) ::StringW  AbsoluteFilePath;

 __declspec(property(get=get_Diffraction, put=set_Diffraction)) bool  Diffraction;

/// @brief Field Flags, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Meta::XR::Acoustics::AcousticMapFlags  Flags;

 __declspec(property(get=get_GravityVector, put=set_GravityVector)) ::UnityEngine::Vector3  GravityVector;

/// @brief Field HeadHeight, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_HeadHeight, put=__cordl_internal_set_HeadHeight)) float_t  HeadHeight;

/// @brief Field IsLoaded, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsLoaded, put=__cordl_internal_set_IsLoaded)) bool  IsLoaded;

/// @brief Field MaxHeight, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxHeight, put=__cordl_internal_set_MaxHeight)) float_t  MaxHeight;

/// @brief Field MaxSpacing, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxSpacing, put=__cordl_internal_set_MaxSpacing)) float_t  MaxSpacing;

/// @brief Field MinSpacing, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinSpacing, put=__cordl_internal_set_MinSpacing)) float_t  MinSpacing;

 __declspec(property(get=get_NoFloating, put=set_NoFloating)) bool  NoFloating;

/// @brief Field ReflectionCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReflectionCount, put=__cordl_internal_set_ReflectionCount)) uint32_t  ReflectionCount;

 __declspec(property(get=get_RelativeFilePath)) ::StringW  RelativeFilePath;

/// @brief Field SceneGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneGroup, put=__cordl_internal_set_SceneGroup)) ::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup>  SceneGroup;

 __declspec(property(get=get_StaticOnly, put=set_StaticOnly)) bool  StaticOnly;

/// @brief Field customPointsEnabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_customPointsEnabled, put=__cordl_internal_set_customPointsEnabled)) bool  customPointsEnabled;

/// @brief Field delayedEnable, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_delayedEnable, put=__cordl_internal_set_delayedEnable)) ::System::Action*  delayedEnable;

/// @brief Field gravityVector, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_gravityVector, put=__cordl_internal_set_gravityVector)) ::UnityEngine::Vector3  gravityVector;

/// @brief Field mapHandle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapHandle, put=__cordl_internal_set_mapHandle)) ::System::IntPtr  mapHandle;

/// @brief Field relativeFilePath, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_relativeFilePath, put=__cordl_internal_set_relativeFilePath)) ::StringW  relativeFilePath;

/// @brief Method ApplyTransform, addr 0x9ea773c, size 0xf8, virtual false, abstract: false, final false
inline void ApplyTransform() ;

/// @brief Method DestroyInternal, addr 0x9ea7070, size 0x1d4, virtual false, abstract: false, final false
inline void DestroyInternal() ;

/// @brief Method LateUpdate, addr 0x9ea7ba4, size 0x5c, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// [IteratorStateMachine(typeof(MetaXRAcousticMap::<LoadMapAsync>d__35))]
/// @brief Method LoadMapAsync, addr 0x9ea76b4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadMapAsync(::StringW  streamingAssetsSubPath) ;

/// [AsyncStateMachine(typeof(MetaXRAcousticMap::<LoadMapFromMemory>d__36))]
/// @brief Method LoadMapFromMemory, addr 0x9ea785c, size 0xc0, virtual false, abstract: false, final false
inline void LoadMapFromMemory(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data) ;

static inline ::GlobalNamespace::MetaXRAcousticMap* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ea791c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9ea7a44, size 0x160, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9ea7920, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x9ea76ac, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartInternal, addr 0x9ea7244, size 0x468, virtual false, abstract: false, final false
inline void StartInternal(bool  autoLoad) ;

constexpr ::Meta::XR::Acoustics::AcousticMapFlags const& __cordl_internal_get_Flags() const;

constexpr ::Meta::XR::Acoustics::AcousticMapFlags& __cordl_internal_get_Flags() ;

constexpr float_t const& __cordl_internal_get_HeadHeight() const;

constexpr float_t& __cordl_internal_get_HeadHeight() ;

constexpr bool const& __cordl_internal_get_IsLoaded() const;

constexpr bool& __cordl_internal_get_IsLoaded() ;

constexpr float_t const& __cordl_internal_get_MaxHeight() const;

constexpr float_t& __cordl_internal_get_MaxHeight() ;

constexpr float_t const& __cordl_internal_get_MaxSpacing() const;

constexpr float_t& __cordl_internal_get_MaxSpacing() ;

constexpr float_t const& __cordl_internal_get_MinSpacing() const;

constexpr float_t& __cordl_internal_get_MinSpacing() ;

constexpr uint32_t const& __cordl_internal_get_ReflectionCount() const;

constexpr uint32_t& __cordl_internal_get_ReflectionCount() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup> const& __cordl_internal_get_SceneGroup() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup>& __cordl_internal_get_SceneGroup() ;

constexpr bool const& __cordl_internal_get_customPointsEnabled() const;

constexpr bool& __cordl_internal_get_customPointsEnabled() ;

constexpr ::System::Action* const& __cordl_internal_get_delayedEnable() const;

constexpr ::System::Action*& __cordl_internal_get_delayedEnable() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravityVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravityVector() ;

constexpr ::System::IntPtr const& __cordl_internal_get_mapHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_mapHandle() ;

constexpr ::StringW const& __cordl_internal_get_relativeFilePath() const;

constexpr ::StringW& __cordl_internal_get_relativeFilePath() ;

constexpr void __cordl_internal_set_Flags(::Meta::XR::Acoustics::AcousticMapFlags  value) ;

constexpr void __cordl_internal_set_HeadHeight(float_t  value) ;

constexpr void __cordl_internal_set_IsLoaded(bool  value) ;

constexpr void __cordl_internal_set_MaxHeight(float_t  value) ;

constexpr void __cordl_internal_set_MaxSpacing(float_t  value) ;

constexpr void __cordl_internal_set_MinSpacing(float_t  value) ;

constexpr void __cordl_internal_set_ReflectionCount(uint32_t  value) ;

constexpr void __cordl_internal_set_SceneGroup(::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup>  value) ;

constexpr void __cordl_internal_set_customPointsEnabled(bool  value) ;

constexpr void __cordl_internal_set_delayedEnable(::System::Action*  value) ;

constexpr void __cordl_internal_set_gravityVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mapHandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_relativeFilePath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9ea7c00, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AbsoluteFilePath, addr 0x9ea6e24, size 0x9c, virtual false, abstract: false, final false
inline ::StringW get_AbsoluteFilePath() ;

/// @brief Method get_Diffraction, addr 0x9ea6cf4, size 0xc, virtual false, abstract: false, final false
inline bool get_Diffraction() ;

/// @brief Method get_GravityVector, addr 0x9ea6d20, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_GravityVector() ;

/// @brief Method get_NoFloating, addr 0x9ea6cc8, size 0xc, virtual false, abstract: false, final false
inline bool get_NoFloating() ;

/// @brief Method get_RelativeFilePath, addr 0x9ea6e1c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RelativeFilePath() ;

/// @brief Method get_StaticOnly, addr 0x9ea6cac, size 0xc, virtual false, abstract: false, final false
inline bool get_StaticOnly() ;

/// @brief Method set_AbsoluteFilePath, addr 0x9ea6ec0, size 0x1b0, virtual false, abstract: false, final false
inline void set_AbsoluteFilePath(::StringW  value) ;

/// @brief Method set_Diffraction, addr 0x9ea6d00, size 0x20, virtual false, abstract: false, final false
inline void set_Diffraction(bool  value) ;

/// @brief Method set_GravityVector, addr 0x9ea6d2c, size 0xf0, virtual false, abstract: false, final false
inline void set_GravityVector(::UnityEngine::Vector3  value) ;

/// @brief Method set_NoFloating, addr 0x9ea6cd4, size 0x20, virtual false, abstract: false, final false
inline void set_NoFloating(bool  value) ;

/// @brief Method set_StaticOnly, addr 0x9ea6cb8, size 0x10, virtual false, abstract: false, final false
inline void set_StaticOnly(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMap(MetaXRAcousticMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMap(MetaXRAcousticMap const& ) = delete;

/// @brief Field DISTANCE_PARAMETER_MAX offset 0xffffffff size 0x4
static constexpr float_t  DISTANCE_PARAMETER_MAX{static_cast<float_t>(10000.0f)};

/// @brief Field FILE_EXTENSION offset 0xffffffff size 0x8
static constexpr ::ConstString  FILE_EXTENSION{u"xramap"};

/// @brief Field Success offset 0xffffffff size 0x4
static constexpr int32_t  Success{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29928};

/// [SerializeField]
/// @brief Field SceneGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup>  ___SceneGroup;

/// [SerializeField]
/// @brief Field customPointsEnabled, offset: 0x28, size: 0x1, def value: None
 bool  ___customPointsEnabled;

/// @brief Field IsLoaded, offset: 0x29, size: 0x1, def value: None
 bool  ___IsLoaded;

/// [SerializeField]
/// @brief Field Flags, offset: 0x2c, size: 0x4, def value: None
 ::Meta::XR::Acoustics::AcousticMapFlags  ___Flags;

/// [SerializeField]
/// @brief Field ReflectionCount, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___ReflectionCount;

/// [SerializeField]
/// [Range(0, 10000)]
/// @brief Field MinSpacing, offset: 0x34, size: 0x4, def value: None
 float_t  ___MinSpacing;

/// [SerializeField]
/// [Range(0, 10000)]
/// @brief Field MaxSpacing, offset: 0x38, size: 0x4, def value: None
 float_t  ___MaxSpacing;

/// [SerializeField]
/// [Range(0, 10000)]
/// @brief Field HeadHeight, offset: 0x3c, size: 0x4, def value: None
 float_t  ___HeadHeight;

/// [SerializeField]
/// [Range(0, 10000)]
/// @brief Field MaxHeight, offset: 0x40, size: 0x4, def value: None
 float_t  ___MaxHeight;

/// [SerializeField]
/// @brief Field gravityVector, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gravityVector;

/// [FormerlySerializedAs("relativeFilePath_")]
/// [SerializeField]
/// @brief Field relativeFilePath, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___relativeFilePath;

/// @brief Field mapHandle, offset: 0x58, size: 0x8, def value: None
 ::System::IntPtr  ___mapHandle;

/// @brief Field delayedEnable, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___delayedEnable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___SceneGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___customPointsEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___IsLoaded) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___Flags) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___ReflectionCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___MinSpacing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___MaxSpacing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___HeadHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___MaxHeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___gravityVector) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___relativeFilePath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___mapHandle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap, ___delayedEnable) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMap) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMap/<LoadMapAsync>d__35
class CORDL_TYPE MetaXRAcousticMap__LoadMapAsync_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MetaXRAcousticMap>  __4__this;

/// @brief Field <startTime>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Field <unityWebRequest>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__unityWebRequest_5__3, put=__cordl_internal_set__unityWebRequest_5__3)) ::UnityEngine::Networking::UnityWebRequest*  _unityWebRequest_5__3;

/// @brief Field streamingAssetsSubPath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_streamingAssetsSubPath, put=__cordl_internal_set_streamingAssetsSubPath)) ::StringW  streamingAssetsSubPath;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9ea803c, size 0x368, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9ea83a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9ea83ac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9ea83e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9ea8038, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__unityWebRequest_5__3() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__unityWebRequest_5__3() ;

constexpr ::StringW const& __cordl_internal_get_streamingAssetsSubPath() const;

constexpr ::StringW& __cordl_internal_get_streamingAssetsSubPath() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticMap>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set__unityWebRequest_5__3(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_streamingAssetsSubPath(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9ea7834, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMap__LoadMapAsync_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMap__LoadMapAsync_d__35", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMap__LoadMapAsync_d__35(MetaXRAcousticMap__LoadMapAsync_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMap__LoadMapAsync_d__35", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMap__LoadMapAsync_d__35(MetaXRAcousticMap__LoadMapAsync_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29926};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field streamingAssetsSubPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___streamingAssetsSubPath;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticMap>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____startTime_5__2;

/// @brief Field <unityWebRequest>5__3, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____unityWebRequest_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35, ___streamingAssetsSubPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35, ____startTime_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35, ____unityWebRequest_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, Unity.Collections.NativeArray`1::ReadOnly<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMap/<>c__DisplayClass36_0
class CORDL_TYPE MetaXRAcousticMap___c__DisplayClass36_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MetaXRAcousticMap>  __4__this;

/// @brief Field data, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data;

/// @brief Field result, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) int32_t  result;

static inline ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0* New_ctor() ;

/// @brief Method <LoadMapFromMemory>b__0, addr 0x9ea7c8c, size 0x248, virtual false, abstract: false, final false
inline void _LoadMapFromMemory_b__0() ;

/// @brief Method <LoadMapFromMemory>b__1, addr 0x9ea7ed4, size 0x164, virtual false, abstract: false, final false
inline void _LoadMapFromMemory_b__1() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_result() const;

constexpr int32_t& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticMap>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  value) ;

constexpr void __cordl_internal_set_result(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ea7c84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMap___c__DisplayClass36_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMap___c__DisplayClass36_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMap___c__DisplayClass36_0(MetaXRAcousticMap___c__DisplayClass36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMap___c__DisplayClass36_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMap___c__DisplayClass36_0(MetaXRAcousticMap___c__DisplayClass36_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29925};

/// @brief Field data, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  ___data;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticMap>  _____4__this;

/// @brief Field result, offset: 0x28, size: 0x4, def value: None
 int32_t  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0, ___result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
