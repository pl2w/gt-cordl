#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ClippedCylinderSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClippedCylinderSurface)
namespace Oculus::Interaction::Surfaces {
class ClippedCylinderSurface___c;
}
namespace Oculus::Interaction::Surfaces {
struct CylinderSegment;
}
namespace Oculus::Interaction::Surfaces {
class CylinderSurface;
}
namespace Oculus::Interaction::Surfaces {
template<typename TClipper>
class IClippedSurface_1;
}
namespace Oculus::Interaction::Surfaces {
class ICylinderClipper;
}
namespace Oculus::Interaction::Surfaces {
class ISurfacePatch;
}
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace Oculus::Interaction {
class Cylinder;
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
class ClippedCylinderSurface;
}
namespace Oculus::Interaction::Surfaces {
class ClippedCylinderSurface___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::ClippedCylinderSurface*);
MARK_REF_T(::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::ClippedCylinderSurface*, "Oculus.Interaction.Surfaces", "ClippedCylinderSurface");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*, "Oculus.Interaction.Surfaces", "ClippedCylinderSurface/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.ClippedCylinderSurface
class CORDL_TYPE ClippedCylinderSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c;

 __declspec(property(get=get_BackingSurface)) ::Oculus::Interaction::Surfaces::ISurface*  BackingSurface;

 __declspec(property(get=get_Clippers, put=set_Clippers)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  Clippers;

 __declspec(property(get=get_Cylinder)) ::UnityW<::Oculus::Interaction::Cylinder>  Cylinder;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field <Clippers>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Clippers_k__BackingField, put=__cordl_internal_set__Clippers_k__BackingField)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  _Clippers_k__BackingField;

/// @brief Field _clippers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__clippers, put=__cordl_internal_set__clippers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _clippers;

/// @brief Field _cylinderSurface, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cylinderSurface, put=__cordl_internal_set__cylinderSurface)) ::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface>  _cylinderSurface;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>"
constexpr operator  ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept;

/// @brief Method Awake, addr 0xa4b4274, size 0x114, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestSurfacePoint, addr 0xa4b3c5c, size 0x618, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method GetClipped, addr 0xa4b438c, size 0x2c8, virtual false, abstract: false, final false
inline bool GetClipped(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>  clipped) ;

/// @brief Method GetClippers, addr 0xa4b39f0, size 0x11c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* GetClippers() ;

/// @brief Method InjectAllClippedCylinderSurface, addr 0xa4b46a0, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllClippedCylinderSurface(::Oculus::Interaction::Surfaces::CylinderSurface*  surface, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  clippers) ;

/// @brief Method InjectClippers, addr 0xa4b46cc, size 0x19c, virtual false, abstract: false, final false
inline void InjectClippers(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  clippers) ;

/// @brief Method InjectCylinderSurface, addr 0xa4b4868, size 0x8, virtual false, abstract: false, final false
inline void InjectCylinderSurface(::Oculus::Interaction::Surfaces::CylinderSurface*  surface) ;

static inline ::Oculus::Interaction::Surfaces::ClippedCylinderSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b48fc, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b48f8, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0xa4b3b0c, size 0x150, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Start, addr 0xa4b4388, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* const& __cordl_internal_get__Clippers_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*& __cordl_internal_get__Clippers_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__clippers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__clippers() ;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface> const& __cordl_internal_get__cylinderSurface() const;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface>& __cordl_internal_get__cylinderSurface() ;

constexpr void __cordl_internal_set__Clippers_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value) ;

constexpr void __cordl_internal_set__clippers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__cylinderSurface(::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface>  value) ;

/// @brief Method .ctor, addr 0xa4b4870, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BackingSurface, addr 0xa4b39d0, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Surfaces::ISurface* get_BackingSurface() ;

/// [CompilerGenerated]
/// @brief Method get_Clippers, addr 0xa4b3984, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* get_Clippers() ;

/// @brief Method get_Cylinder, addr 0xa4b39d8, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Cylinder> get_Cylinder() ;

/// @brief Method get_Transform, addr 0xa4b3994, size 0x24, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>"
constexpr ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* i___Oculus__Interaction__Surfaces__IClippedSurface_1___Oculus__Interaction__Surfaces__ICylinderClipper__() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Clippers, addr 0xa4b398c, size 0x8, virtual false, abstract: false, final false
inline void set_Clippers(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClippedCylinderSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClippedCylinderSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClippedCylinderSurface(ClippedCylinderSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClippedCylinderSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClippedCylinderSurface(ClippedCylinderSurface const& ) = delete;

/// @brief Field EPSILON offset 0xffffffff size 0x4
static constexpr float_t  EPSILON{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16218};

/// [Tooltip("The Cylinder Surface to be clipped.")]
/// [SerializeField]
/// @brief Field _cylinderSurface, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface>  ____cylinderSurface;

/// [Tooltip("The clippers that will be used to clip the Cylinder Surface.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Surfaces.ICylinderClipper), new[] {  })]
/// @brief Field _clippers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____clippers;

/// [CompilerGenerated]
/// @brief Field <Clippers>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  ____Clippers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::ClippedCylinderSurface, ____cylinderSurface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::ClippedCylinderSurface, ____clippers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::ClippedCylinderSurface, ____Clippers_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::ClippedCylinderSurface) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.ClippedCylinderSurface/<>c
class CORDL_TYPE ClippedCylinderSurface___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*  __9__13_0;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*  __9__15_0;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>*  __9__21_0;

static inline ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c* New_ctor() ;

/// @brief Method <Awake>b__15_0, addr 0xa4b49b8, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::ICylinderClipper* _Awake_b__15_0(::UnityEngine::Object*  clipper) ;

/// @brief Method <GetClippers>b__13_0, addr 0xa4b4970, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::ICylinderClipper* _GetClippers_b__13_0(::UnityEngine::Object*  clipper) ;

/// @brief Method <InjectClippers>b__21_0, addr 0xa4b4a00, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectClippers_b__21_0(::Oculus::Interaction::Surfaces::ICylinderClipper*  c) ;

/// @brief Method .ctor, addr 0xa4b4968, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c* getStaticF___9() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>* getStaticF___9__13_0() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>* getStaticF___9__15_0() ;

static inline ::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>* getStaticF___9__21_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*  value) ;

static inline void setStaticF___9__13_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value) ;

static inline void setStaticF___9__15_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value) ;

static inline void setStaticF___9__21_0(::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClippedCylinderSurface___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClippedCylinderSurface___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClippedCylinderSurface___c(ClippedCylinderSurface___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClippedCylinderSurface___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClippedCylinderSurface___c(ClippedCylinderSurface___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16217};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
