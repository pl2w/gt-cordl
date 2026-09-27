#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/UnionClippedPlaneSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnionClippedPlaneSurface)
namespace Oculus::Interaction::Surfaces {
class IBoundsClipper;
}
namespace Oculus::Interaction::Surfaces {
template<typename TClipper>
class IClippedSurface_1;
}
namespace Oculus::Interaction::Surfaces {
class ISurfacePatch;
}
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
class PlaneSurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace Oculus::Interaction::Surfaces {
class UnionClippedPlaneSurface___c;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class UnionClippedPlaneSurface;
}
namespace Oculus::Interaction::Surfaces {
class UnionClippedPlaneSurface___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface*);
MARK_REF_T(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface*, "Oculus.Interaction.Surfaces", "UnionClippedPlaneSurface");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c*, "Oculus.Interaction.Surfaces", "UnionClippedPlaneSurface/<>c");
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.UnionClippedPlaneSurface
class CORDL_TYPE UnionClippedPlaneSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c;

 __declspec(property(get=get_BackingSurface)) ::Oculus::Interaction::Surfaces::ISurface*  BackingSurface;

 __declspec(property(get=get_Clippers, put=set_Clippers)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  Clippers;

/// @brief Field InfiniteBounds, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_InfiniteBounds, put=setStaticF_InfiniteBounds)) ::UnityEngine::Bounds  InfiniteBounds;

/// @brief Field PlaneBounds, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_PlaneBounds, put=setStaticF_PlaneBounds)) ::UnityEngine::Bounds  PlaneBounds;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field <Clippers>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Clippers_k__BackingField, put=__cordl_internal_set__Clippers_k__BackingField)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  _Clippers_k__BackingField;

/// @brief Field _clippers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__clippers, put=__cordl_internal_set__clippers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _clippers;

/// @brief Field _planeSurface, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__planeSurface, put=__cordl_internal_set__planeSurface)) ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  _planeSurface;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>"
constexpr operator  ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept;

/// @brief Method Awake, addr 0xa42cb20, size 0x114, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClampPoint, addr 0xa42cf44, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClampPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method ClosestSurfacePoint, addr 0xa42d014, size 0x4b0, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method GetClippers, addr 0xa42ca04, size 0x11c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* GetClippers() ;

/// [Obsolete("Use the non-alloc version instead")]
/// @brief Method GetLocalBounds, addr 0xa42cc38, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Bounds>* GetLocalBounds() ;

/// @brief Method GetLocalBoundsNonAlloc, addr 0xa42ccc0, size 0x284, virtual false, abstract: false, final false
inline void GetLocalBoundsNonAlloc(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>  clipBounds) ;

/// @brief Method InjectAllClippedPlaneSurface, addr 0xa42d7d8, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllClippedPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  clippers) ;

/// @brief Method InjectClippers, addr 0xa42d804, size 0x19c, virtual false, abstract: false, final false
inline void InjectClippers(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  clippers) ;

/// @brief Method InjectPlaneSurface, addr 0xa42d9a0, size 0x8, virtual false, abstract: false, final false
inline void InjectPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface) ;

static inline ::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa42db84, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa42db80, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0xa42d4c4, size 0x314, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Start, addr 0xa42cc34, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* const& __cordl_internal_get__Clippers_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*& __cordl_internal_get__Clippers_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__clippers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__clippers() ;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface> const& __cordl_internal_get__planeSurface() const;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>& __cordl_internal_get__planeSurface() ;

constexpr void __cordl_internal_set__Clippers_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value) ;

constexpr void __cordl_internal_set__clippers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__planeSurface(::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  value) ;

/// @brief Method .ctor, addr 0xa42d9a8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Bounds getStaticF_InfiniteBounds() ;

static inline ::UnityEngine::Bounds getStaticF_PlaneBounds() ;

/// @brief Method get_BackingSurface, addr 0xa42c9e4, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Surfaces::ISurface* get_BackingSurface() ;

/// [CompilerGenerated]
/// @brief Method get_Clippers, addr 0xa42c9d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* get_Clippers() ;

/// @brief Method get_Transform, addr 0xa42c9ec, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>"
constexpr ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* i___Oculus__Interaction__Surfaces__IClippedSurface_1___Oculus__Interaction__Surfaces__IBoundsClipper__() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept;

static inline void setStaticF_InfiniteBounds(::UnityEngine::Bounds  value) ;

static inline void setStaticF_PlaneBounds(::UnityEngine::Bounds  value) ;

/// [CompilerGenerated]
/// @brief Method set_Clippers, addr 0xa42c9dc, size 0x8, virtual false, abstract: false, final false
inline void set_Clippers(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnionClippedPlaneSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnionClippedPlaneSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnionClippedPlaneSurface(UnionClippedPlaneSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnionClippedPlaneSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnionClippedPlaneSurface(UnionClippedPlaneSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28265};

/// [Tooltip("The Plane Surface to be clipped.")]
/// [SerializeField]
/// @brief Field _planeSurface, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  ____planeSurface;

/// [Tooltip("The clippers that will be used to clip the Plane Surface.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Surfaces.IBoundsClipper), new[] {  })]
/// @brief Field _clippers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____clippers;

/// [CompilerGenerated]
/// @brief Field <Clippers>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  ____Clippers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface, ____planeSurface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface, ____clippers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface, ____Clippers_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.UnionClippedPlaneSurface/<>c
class CORDL_TYPE UnionClippedPlaneSurface___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*  __9__12_0;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*  __9__13_0;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>*  __9__22_0;

static inline ::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c* New_ctor() ;

/// @brief Method <Awake>b__13_0, addr 0xa42dc40, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::IBoundsClipper* _Awake_b__13_0(::UnityEngine::Object*  clipper) ;

/// @brief Method <GetClippers>b__12_0, addr 0xa42dbf8, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::IBoundsClipper* _GetClippers_b__12_0(::UnityEngine::Object*  clipper) ;

/// @brief Method <InjectClippers>b__22_0, addr 0xa42dc88, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectClippers_b__22_0(::Oculus::Interaction::Surfaces::IBoundsClipper*  c) ;

/// @brief Method .ctor, addr 0xa42dbf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c* getStaticF___9() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>* getStaticF___9__12_0() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>* getStaticF___9__13_0() ;

static inline ::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c*  value) ;

static inline void setStaticF___9__12_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value) ;

static inline void setStaticF___9__13_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value) ;

static inline void setStaticF___9__22_0(::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnionClippedPlaneSurface___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnionClippedPlaneSurface___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnionClippedPlaneSurface___c(UnionClippedPlaneSurface___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnionClippedPlaneSurface___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnionClippedPlaneSurface___c(UnionClippedPlaneSurface___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
