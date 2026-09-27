#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableDebugGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointableDebugGizmos)
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
class PointableDebugGizmos_PointData;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableDebugGizmos;
}
namespace Oculus::Interaction {
class PointableDebugGizmos_PointData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableDebugGizmos*);
MARK_REF_T(::Oculus::Interaction::PointableDebugGizmos_PointData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableDebugGizmos*, "Oculus.Interaction", "PointableDebugGizmos");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableDebugGizmos_PointData*, "Oculus.Interaction", "PointableDebugGizmos/PointData");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableDebugGizmos
class CORDL_TYPE PointableDebugGizmos : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PointData = ::Oculus::Interaction::PointableDebugGizmos_PointData;

 __declspec(property(get=get_DrawAxes, put=set_DrawAxes)) bool  DrawAxes;

 __declspec(property(get=get_HoverColor, put=set_HoverColor)) ::UnityEngine::Color  HoverColor;

/// @brief Field Pointable, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pointable, put=__cordl_internal_set_Pointable)) ::Oculus::Interaction::IPointable*  Pointable;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_SelectColor, put=set_SelectColor)) ::UnityEngine::Color  SelectColor;

/// @brief Field _drawAxes, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__drawAxes, put=__cordl_internal_set__drawAxes)) bool  _drawAxes;

/// @brief Field _hoverColor, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _pointable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointable, put=__cordl_internal_set__pointable)) ::UnityW<::UnityEngine::Object>  _pointable;

/// @brief Field _points, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>*  _points;

/// @brief Field _radius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _selectColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor, put=__cordl_internal_set__selectColor)) ::UnityEngine::Color  _selectColor;

/// @brief Field _started, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa46b154, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandlePointerEventRaised, addr 0xa46b458, size 0x1f4, virtual false, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllPointableDebugGizmos, addr 0xa46b150, size 0x4, virtual false, abstract: false, final false
inline void InjectAllPointableDebugGizmos(::Oculus::Interaction::IPointable*  pointable) ;

/// @brief Method InjectPointable, addr 0xa46b8b0, size 0xd0, virtual false, abstract: false, final false
inline void InjectPointable(::Oculus::Interaction::IPointable*  pointable) ;

/// @brief Method LateUpdate, addr 0xa46b654, size 0x25c, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::PointableDebugGizmos* New_ctor() ;

/// @brief Method OnDisable, addr 0xa46b358, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa46b25c, size 0xfc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xa46b0fc, size 0x54, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa46b1bc, size 0xa0, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IPointable* const& __cordl_internal_get_Pointable() const;

constexpr ::Oculus::Interaction::IPointable*& __cordl_internal_get_Pointable() ;

constexpr bool const& __cordl_internal_get__drawAxes() const;

constexpr bool& __cordl_internal_get__drawAxes() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pointable() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pointable() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>* const& __cordl_internal_get__points() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>*& __cordl_internal_get__points() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Pointable(::Oculus::Interaction::IPointable*  value) ;

constexpr void __cordl_internal_set__drawAxes(bool  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pointable(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__points(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>*  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa46b980, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DrawAxes, addr 0xa46b0ec, size 0x8, virtual false, abstract: false, final false
inline bool get_DrawAxes() ;

/// @brief Method get_HoverColor, addr 0xa46b0bc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor() ;

/// @brief Method get_Radius, addr 0xa46b0ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_SelectColor, addr 0xa46b0d4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor() ;

/// @brief Method set_DrawAxes, addr 0xa46b0f4, size 0x8, virtual false, abstract: false, final false
inline void set_DrawAxes(bool  value) ;

/// @brief Method set_HoverColor, addr 0xa46b0c8, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor(::UnityEngine::Color  value) ;

/// @brief Method set_Radius, addr 0xa46b0b4, size 0x8, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_SelectColor, addr 0xa46b0e0, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableDebugGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableDebugGizmos(PointableDebugGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableDebugGizmos(PointableDebugGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15906};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointable), new[] {  })]
/// @brief Field _pointable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pointable;

/// [SerializeField]
/// @brief Field _radius, offset: 0x28, size: 0x4, def value: None
 float_t  ____radius;

/// [SerializeField]
/// @brief Field _hoverColor, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// [SerializeField]
/// @brief Field _selectColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor;

/// [SerializeField]
/// @brief Field _drawAxes, offset: 0x4c, size: 0x1, def value: None
 bool  ____drawAxes;

/// @brief Field _points, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>*  ____points;

/// @brief Field Pointable, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::IPointable*  ___Pointable;

/// @brief Field _started, offset: 0x60, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ____pointable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ____radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ____hoverColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ____selectColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ____drawAxes) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ____points) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ___Pointable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos, ____started) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableDebugGizmos) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableDebugGizmos/PointData
class CORDL_TYPE PointableDebugGizmos_PointData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pose, put=set_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Selecting, put=set_Selecting)) bool  Selecting;

/// @brief Field <Pose>k__BackingField, offset 0x10, size 0x1c 
 __declspec(property(get=__cordl_internal_get__Pose_k__BackingField, put=__cordl_internal_set__Pose_k__BackingField)) ::UnityEngine::Pose  _Pose_k__BackingField;

/// @brief Field <Selecting>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Selecting_k__BackingField, put=__cordl_internal_set__Selecting_k__BackingField)) bool  _Selecting_k__BackingField;

static inline ::Oculus::Interaction::PointableDebugGizmos_PointData* New_ctor() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__Pose_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__Pose_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Selecting_k__BackingField() const;

constexpr bool& __cordl_internal_get__Selecting_k__BackingField() ;

constexpr void __cordl_internal_set__Pose_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__Selecting_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xa46b64c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Pose, addr 0xa46b9b0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Pose() ;

/// [CompilerGenerated]
/// @brief Method get_Selecting, addr 0xa46b9e0, size 0x8, virtual false, abstract: false, final false
inline bool get_Selecting() ;

/// [CompilerGenerated]
/// @brief Method set_Pose, addr 0xa46b9c4, size 0x1c, virtual false, abstract: false, final false
inline void set_Pose(::UnityEngine::Pose  value) ;

/// [CompilerGenerated]
/// @brief Method set_Selecting, addr 0xa46b9e8, size 0x8, virtual false, abstract: false, final false
inline void set_Selecting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableDebugGizmos_PointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugGizmos_PointData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableDebugGizmos_PointData(PointableDebugGizmos_PointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugGizmos_PointData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableDebugGizmos_PointData(PointableDebugGizmos_PointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15905};

/// [CompilerGenerated]
/// @brief Field <Pose>k__BackingField, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____Pose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Selecting>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____Selecting_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos_PointData, ____Pose_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugGizmos_PointData, ____Selecting_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableDebugGizmos_PointData) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
