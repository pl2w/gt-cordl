#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SpaceMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceMap)
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace Meta::XR::MRUtilityKit {
class SpaceMap__CalculatePixels_d__19;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class SpaceMap;
}
namespace Meta::XR::MRUtilityKit {
class SpaceMap__CalculatePixels_d__19;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SpaceMap*);
MARK_REF_T(::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SpaceMap*, "Meta.XR.MRUtilityKit", "SpaceMap");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*, "Meta.XR.MRUtilityKit", "SpaceMap/<CalculatePixels>d__19");
// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.MRUK::RoomFilter, UnityEngine.Bounds, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SpaceMap
class CORDL_TYPE SpaceMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CalculatePixels_d__19 = ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19;

/// @brief Field CreateOnStart, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CreateOnStart, put=__cordl_internal_set_CreateOnStart)) ::GlobalNamespace::MRUK_RoomFilter  CreateOnStart;

/// @brief Field InnerBorder, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_InnerBorder, put=__cordl_internal_set_InnerBorder)) float_t  InnerBorder;

/// @brief Field MapBorder, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_MapBorder, put=__cordl_internal_set_MapBorder)) float_t  MapBorder;

/// @brief Field MapBounds, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_MapBounds, put=__cordl_internal_set_MapBounds)) ::UnityEngine::Bounds  MapBounds;

/// @brief Field MapGradient, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_MapGradient, put=__cordl_internal_set_MapGradient)) ::UnityEngine::Gradient*  MapGradient;

/// @brief [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
 __declspec(property(get=get_Offset)) ::UnityEngine::Vector2  Offset;

/// @brief Field OuterBorder, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_OuterBorder, put=__cordl_internal_set_OuterBorder)) float_t  OuterBorder;

/// @brief Field PixelDimensions, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PixelDimensions, put=__cordl_internal_set_PixelDimensions)) int32_t  PixelDimensions;

/// @brief Field Pixels, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pixels, put=__cordl_internal_set_Pixels)) ::System::Object*  Pixels;

/// @brief [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
 __declspec(property(get=get_Scale)) ::UnityEngine::Vector2  Scale;

/// @brief Field TextureMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TextureMap, put=__cordl_internal_set_TextureMap)) ::UnityW<::UnityEngine::Texture2D>  TextureMap;

/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU\'s \'StartSpaceMap\' method instead.", false)]
/// @brief Method CalculateMap, addr 0x9f47a14, size 0x158, virtual false, abstract: false, final false
inline void CalculateMap(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [IteratorStateMachine(typeof(Meta.XR.MRUtilityKit.SpaceMap::<CalculatePixels>d__19))]
/// @brief Method CalculatePixels, addr 0x9f47f28, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CalculatePixels(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU\'s \'GetColorAtPosition\' method instead.", false)]
/// @brief Method GetColorAtPosition, addr 0x9f483c0, size 0x1a8, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorAtPosition(::UnityEngine::Vector3  worldPosition, bool  getBilinear) ;

/// @brief Method GetPixelFromWorldPosition, addr 0x9f48568, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetPixelFromWorldPosition(::UnityEngine::Vector3  worldPosition, bool  normalizedUV) ;

/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Method GetSurfaceDistance, addr 0x9f47fb0, size 0x354, virtual false, abstract: false, final false
inline float_t GetSurfaceDistance(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::UnityEngine::Vector3  worldPosition) ;

/// @brief Method InitializeMapValues, addr 0x9f47b6c, size 0x3bc, virtual false, abstract: false, final false
inline void InitializeMapValues(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

static inline ::Meta::XR::MRUtilityKit::SpaceMap* New_ctor() ;

/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Method ResetFreespace, addr 0x9f4832c, size 0x94, virtual false, abstract: false, final false
inline void ResetFreespace() ;

/// @brief Method Start, addr 0x9f47890, size 0x184, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__15_0, addr 0x9f48638, size 0xcc, virtual false, abstract: false, final false
inline void _Start_b__15_0() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_CreateOnStart() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_CreateOnStart() ;

constexpr float_t const& __cordl_internal_get_InnerBorder() const;

constexpr float_t& __cordl_internal_get_InnerBorder() ;

constexpr float_t const& __cordl_internal_get_MapBorder() const;

constexpr float_t& __cordl_internal_get_MapBorder() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_MapBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_MapBounds() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_MapGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_MapGradient() ;

constexpr float_t const& __cordl_internal_get_OuterBorder() const;

constexpr float_t& __cordl_internal_get_OuterBorder() ;

constexpr int32_t const& __cordl_internal_get_PixelDimensions() const;

constexpr int32_t& __cordl_internal_get_PixelDimensions() ;

constexpr ::System::Object* const& __cordl_internal_get_Pixels() const;

constexpr ::System::Object*& __cordl_internal_get_Pixels() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_TextureMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_TextureMap() ;

constexpr void __cordl_internal_set_CreateOnStart(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_InnerBorder(float_t  value) ;

constexpr void __cordl_internal_set_MapBorder(float_t  value) ;

constexpr void __cordl_internal_set_MapBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_MapGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_OuterBorder(float_t  value) ;

constexpr void __cordl_internal_set_PixelDimensions(int32_t  value) ;

constexpr void __cordl_internal_set_Pixels(::System::Object*  value) ;

constexpr void __cordl_internal_set_TextureMap(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x9f485b4, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Offset, addr 0x9f47858, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Offset() ;

/// @brief Method get_Scale, addr 0x9f47864, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Scale() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceMap(SpaceMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceMap(SpaceMap const& ) = delete;

/// @brief Field MATERIAL_PROPERTY_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  MATERIAL_PROPERTY_NAME{u"_SpaceMap"};

/// @brief Field PARAMETER_PROPERTY_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAMETER_PROPERTY_NAME{u"_SpaceMapParams"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25902};

/// [Tooltip("When the scene data is loaded, this controls what room(s) the prefabs will spawn in.")]
/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Field CreateOnStart, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___CreateOnStart;

/// [Tooltip("Texture requirements: Read/Write enabled, RGBA 32 bit format. Texture suggestions: Wrap Mode = Clamped, size small (<128x128)")]
/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Field TextureMap, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___TextureMap;

/// @brief Field MapBounds, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___MapBounds;

/// @brief Field Pixels, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ___Pixels;

/// @brief Field PixelDimensions, offset: 0x50, size: 0x4, def value: None
 int32_t  ___PixelDimensions;

/// [Tooltip("The gradient of the generated map.")]
/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Field MapGradient, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___MapGradient;

/// [Tooltip("How far inside the room the left end of the Texture Gradient should appear. 0 is at the surface, negative is inside the room.")]
/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Field InnerBorder, offset: 0x60, size: 0x4, def value: None
 float_t  ___InnerBorder;

/// [Tooltip("How far outside the room the right end of the Texture Gradient should appear. 0 is at the surface, positive is outside the room.")]
/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Field OuterBorder, offset: 0x64, size: 0x4, def value: None
 float_t  ___OuterBorder;

/// [Tooltip("How much the texture map should extend from the room bounds, in meters. Should ideally be greater than or equal to outerPosition.")]
/// [Obsolete("SpaceMap is deprecated. Please use SpaceMapGPU instead.", false)]
/// @brief Field MapBorder, offset: 0x68, size: 0x4, def value: None
 float_t  ___MapBorder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___CreateOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___TextureMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___MapBounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___Pixels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___PixelDimensions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___MapGradient) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___InnerBorder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___OuterBorder) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap, ___MapBorder) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SpaceMap) == 0x70, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SpaceMap/<CalculatePixels>d__19
class CORDL_TYPE SpaceMap__CalculatePixels_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::XR::MRUtilityKit::SpaceMap>  __4__this;

/// @brief Field room, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_room, put=__cordl_internal_set_room)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  room;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9f48708, size 0x1e4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9f488ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9f488f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9f4892c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9f48704, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMap> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMap>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& __cordl_internal_get_room() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& __cordl_internal_get_room() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::SpaceMap>  value) ;

constexpr void __cordl_internal_set_room(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9f48304, size 0x28, virtual false, abstract: false, final false
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
constexpr SpaceMap__CalculatePixels_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceMap__CalculatePixels_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceMap__CalculatePixels_d__19(SpaceMap__CalculatePixels_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceMap__CalculatePixels_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceMap__CalculatePixels_d__19(SpaceMap__CalculatePixels_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25901};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SpaceMap>  _____4__this;

/// @brief Field room, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  ___room;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19, ___room) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19) == 0x30, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
