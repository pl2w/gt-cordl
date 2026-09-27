#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRPokeLogic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRPokeLogic)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace Unity::XR::CoreUtils::Collections {
template<typename T>
class HashSetList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic/CalculateInteractionPoint_00001083$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic/CalculateInteractionPoint_00001083$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic/CalculatePokeParams_00001082$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic/CalculatePokeParams_00001082$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic/IsVelocitySufficient_00001085$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic/IsVelocitySufficient_00001085$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic
class CORDL_TYPE XRPokeLogic : public ::System::Object {
public:
// Declarations
using CalculateInteractionPoint_00001083$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall;

using CalculateInteractionPoint_00001083$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate;

using CalculatePokeParams_00001082$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall;

using CalculatePokeParams_00001082$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate;

using IsVelocitySufficient_00001085$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall;

using IsVelocitySufficient_00001085$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate;

/// @brief Field <interactionAxisLength>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__interactionAxisLength_k__BackingField, put=__cordl_internal_set__interactionAxisLength_k__BackingField)) float_t  _interactionAxisLength_k__BackingField;

 __declspec(property(get=get_interactionAxisLength, put=set_interactionAxisLength)) float_t  interactionAxisLength;

/// @brief Field m_HoldingHoverCheck, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoldingHoverCheck, put=__cordl_internal_set_m_HoldingHoverCheck)) ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  m_HoldingHoverCheck;

/// @brief Field m_HoveredInteractorsOnThisTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoveredInteractorsOnThisTransform, put=__cordl_internal_set_m_HoveredInteractorsOnThisTransform)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>*  m_HoveredInteractorsOnThisTransform;

/// @brief Field m_InitialTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InitialTransform, put=__cordl_internal_set_m_InitialTransform)) ::UnityW<::UnityEngine::Transform>  m_InitialTransform;

/// @brief Field m_LastHoveredTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastHoveredTransform, put=__cordl_internal_set_m_LastHoveredTransform)) ::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>*  m_LastHoveredTransform;

/// @brief Field m_LastInteractorPressDepth, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastInteractorPressDepth, put=__cordl_internal_set_m_LastInteractorPressDepth)) ::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>*  m_LastInteractorPressDepth;

/// @brief Field m_LastRequirementsMet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastRequirementsMet, put=__cordl_internal_set_m_LastRequirementsMet)) ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  m_LastRequirementsMet;

/// @brief Field m_PokeStateData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeStateData, put=__cordl_internal_set_m_PokeStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  m_PokeStateData;

/// @brief Field m_PokeThresholdData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeThresholdData, put=__cordl_internal_set_m_PokeThresholdData)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  m_PokeThresholdData;

/// @brief Field m_SelectEntranceVectorDotThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectEntranceVectorDotThreshold, put=__cordl_internal_set_m_SelectEntranceVectorDotThreshold)) float_t  m_SelectEntranceVectorDotThreshold;

 __declspec(property(get=get_pokeStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  pokeStateData;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BoundsLocalToWorld, addr 0xb4a8760, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds BoundsLocalToWorld(::UnityEngine::Bounds  targetBounds, ::UnityEngine::Transform*  targetTransform, bool  rotateBoundsScale) ;

/// [BurstCompile]
/// @brief Method CalculateDepthPercent, addr 0xb4a7df8, size 0x24, virtual false, abstract: false, final false
inline float_t CalculateDepthPercent(float_t  interactionDepth, float_t  entranceVectorDot, float_t  axisLength) ;

/// @brief Method CalculateHoverRequirements, addr 0xb4a7e1c, size 0xe0, virtual false, abstract: false, final false
inline bool CalculateHoverRequirements(::System::Object*  interactor, bool  isOverObject, ::Unity::Mathematics::float3  axisNormal) ;

/// @brief Method CalculateInteractionPoint, addr 0xb4a7d4c, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateInteractionPoint(::UnityEngine::Vector3  pokerAttachPosition, ::UnityEngine::Vector3  axisNormal, float_t  pokeInteractionOffset) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic::CalculateInteractionPoint_00001083$PostfixBurstDelegate))]
/// @brief Method CalculateInteractionPoint, addr 0xb4a7478, size 0x4, virtual false, abstract: false, final false
static inline void CalculateInteractionPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint) ;

/// [BurstCompile]
/// @brief Method CalculateInteractionPoint$BurstManaged, addr 0xb4a8c38, size 0x2c, virtual false, abstract: false, final false
static inline void CalculateInteractionPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic::CalculatePokeParams_00001082$PostfixBurstDelegate))]
/// @brief Method CalculatePokeParams, addr 0xb4a7474, size 0x4, virtual false, abstract: false, final false
static inline void CalculatePokeParams(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot) ;

/// [BurstCompile]
/// @brief Method CalculatePokeParams$BurstManaged, addr 0xb4a8a94, size 0x1a4, virtual false, abstract: false, final false
static inline void CalculatePokeParams$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot) ;

/// @brief Method CalculateRequirements, addr 0xb4a7efc, size 0xbc, virtual false, abstract: false, final false
inline bool CalculateRequirements(::by_ref<bool>  meetsHoverRequirements, float_t  clampedDepthPercent, ::System::Object*  interactor) ;

/// @brief Method CheckVelocity, addr 0xb4a82f0, size 0x200, virtual false, abstract: false, final false
inline bool CheckVelocity(::System::Object*  interactor, bool  isOverObject, ::UnityEngine::Vector3  axisNormal) ;

/// @brief Method ComputeBounds, addr 0xb4a7498, size 0x340, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds ComputeBounds(::UnityEngine::Collider*  targetCollider, bool  rotateBoundsScale, ::UnityEngine::Space  targetSpace) ;

/// @brief Method ComputeInteractionAxisLength, addr 0xb4a77d8, size 0x124, virtual false, abstract: false, final false
inline float_t ComputeInteractionAxisLength(::UnityEngine::Bounds  bounds) ;

/// @brief Method ComputeRotatedDepthEvaluationAxis, addr 0xb4a7b18, size 0x234, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeRotatedDepthEvaluationAxis(::UnityEngine::Transform*  associatedTransform, bool  isWorldSpace) ;

/// @brief Method Dispose, addr 0xb4a63ac, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DrawGizmos, addr 0xb4a888c, size 0x208, virtual false, abstract: false, final false
inline void DrawGizmos() ;

/// @brief Method Initialize, addr 0xb4a7024, size 0xec, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::Transform*  associatedTransform, ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  pokeThresholdData, ::UnityEngine::Collider*  collider) ;

/// @brief Method IsPokeDataValid, addr 0xb4a7aa0, size 0x78, virtual false, abstract: false, final false
inline bool IsPokeDataValid(::UnityEngine::Transform*  pokedTransform) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic::IsVelocitySufficient_00001085$PostfixBurstDelegate))]
/// @brief Method IsVelocitySufficient, addr 0xb4a747c, size 0x4, virtual false, abstract: false, final false
static inline bool IsVelocitySufficient(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold) ;

/// [BurstCompile]
/// @brief Method IsVelocitySufficient$BurstManaged, addr 0xb4a8c64, size 0x28, virtual false, abstract: false, final false
static inline bool IsVelocitySufficient$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold) ;

/// @brief Method MeetsRequirementsForSelectAction, addr 0xb4a65dc, size 0x208, virtual false, abstract: false, final false
inline bool MeetsRequirementsForSelectAction(::System::Object*  interactor, ::UnityEngine::Vector3  pokableAttachPosition, ::UnityEngine::Vector3  pokerAttachPosition, float_t  pokeInteractionOffset, ::UnityEngine::Transform*  pokedTransform) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* New_ctor() ;

/// @brief Method OnHoverEntered, addr 0xb4a6a78, size 0x1a8, virtual false, abstract: false, final false
inline void OnHoverEntered(::System::Object*  interactor, ::UnityEngine::Pose  updatedPose, ::UnityEngine::Transform*  pokedTransform) ;

/// @brief Method OnHoverExited, addr 0xb4a6c58, size 0x1a4, virtual false, abstract: false, final false
inline void OnHoverExited(::System::Object*  interactor) ;

/// @brief Method ResetPokeStateData, addr 0xb4a78fc, size 0x19c, virtual false, abstract: false, final false
inline void ResetPokeStateData(::UnityEngine::Transform*  transform) ;

/// @brief Method SetPokeDepth, addr 0xb4a7a98, size 0x8, virtual false, abstract: false, final false
inline void SetPokeDepth(float_t  pokeDepth) ;

/// @brief Method UpdatePokeStateData, addr 0xb4a7fb8, size 0x338, virtual false, abstract: false, final false
inline void UpdatePokeStateData(bool  meetsRequirements, bool  meetsHoverRequirements, float_t  clampedDepthPercent, ::System::Object*  interactor, ::UnityEngine::Vector3  pokerAttachPosition, ::UnityEngine::Vector3  pokableAttachPosition, ::UnityEngine::Vector3  axisNormal, ::UnityEngine::Transform*  pokedTransform) ;

constexpr float_t const& __cordl_internal_get__interactionAxisLength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__interactionAxisLength_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>* const& __cordl_internal_get_m_HoldingHoverCheck() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*& __cordl_internal_get_m_HoldingHoverCheck() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>* const& __cordl_internal_get_m_HoveredInteractorsOnThisTransform() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>*& __cordl_internal_get_m_HoveredInteractorsOnThisTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_InitialTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_InitialTransform() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_m_LastHoveredTransform() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_LastHoveredTransform() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>* const& __cordl_internal_get_m_LastInteractorPressDepth() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>*& __cordl_internal_get_m_LastInteractorPressDepth() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>* const& __cordl_internal_get_m_LastRequirementsMet() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*& __cordl_internal_get_m_LastRequirementsMet() ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* const& __cordl_internal_get_m_PokeStateData() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*& __cordl_internal_get_m_PokeStateData() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* const& __cordl_internal_get_m_PokeThresholdData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*& __cordl_internal_get_m_PokeThresholdData() ;

constexpr float_t const& __cordl_internal_get_m_SelectEntranceVectorDotThreshold() const;

constexpr float_t& __cordl_internal_get_m_SelectEntranceVectorDotThreshold() ;

constexpr void __cordl_internal_set__interactionAxisLength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_HoldingHoverCheck(::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  value) ;

constexpr void __cordl_internal_set_m_HoveredInteractorsOnThisTransform(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_m_InitialTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LastHoveredTransform(::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_m_LastInteractorPressDepth(::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>*  value) ;

constexpr void __cordl_internal_set_m_LastRequirementsMet(::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  value) ;

constexpr void __cordl_internal_set_m_PokeStateData(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  value) ;

constexpr void __cordl_internal_set_m_PokeThresholdData(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  value) ;

constexpr void __cordl_internal_set_m_SelectEntranceVectorDotThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0xb4a6dfc, size 0x228, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_interactionAxisLength, addr 0xb4a7480, size 0x8, virtual false, abstract: false, final false
inline float_t get_interactionAxisLength() ;

/// @brief Method get_pokeStateData, addr 0xb4a7490, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_interactionAxisLength, addr 0xb4a7488, size 0x8, virtual false, abstract: false, final false
inline void set_interactionAxisLength(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeLogic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeLogic(XRPokeLogic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeLogic(XRPokeLogic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11562};

/// @brief Field k_DepthPercentActivationThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_DepthPercentActivationThreshold{static_cast<float_t>(0.025f)};

/// @brief Field k_SquareVelocityHoverThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_SquareVelocityHoverThreshold{static_cast<float_t>(0.0001f)};

/// [CompilerGenerated]
/// @brief Field <interactionAxisLength>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____interactionAxisLength_k__BackingField;

/// @brief Field m_PokeStateData, offset: 0x18, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  ___m_PokeStateData;

/// @brief Field m_InitialTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_InitialTransform;

/// @brief Field m_PokeThresholdData, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  ___m_PokeThresholdData;

/// @brief Field m_SelectEntranceVectorDotThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_SelectEntranceVectorDotThreshold;

/// @brief Field m_LastHoveredTransform, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>*  ___m_LastHoveredTransform;

/// @brief Field m_HoldingHoverCheck, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  ___m_HoldingHoverCheck;

/// @brief Field m_HoveredInteractorsOnThisTransform, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>*  ___m_HoveredInteractorsOnThisTransform;

/// @brief Field m_LastInteractorPressDepth, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>*  ___m_LastInteractorPressDepth;

/// @brief Field m_LastRequirementsMet, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  ___m_LastRequirementsMet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ____interactionAxisLength_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_PokeStateData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_InitialTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_PokeThresholdData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_SelectEntranceVectorDotThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_LastHoveredTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_HoldingHoverCheck) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_HoveredInteractorsOnThisTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_LastInteractorPressDepth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_LastRequirementsMet) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic/IsVelocitySufficient_00001085$BurstDirectCall
class CORDL_TYPE XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4a94cc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4a93dc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a86a8, size 0xb8, virtual false, abstract: false, final false
static inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall(XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall(XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic/IsVelocitySufficient_00001085$PostfixBurstDelegate
class CORDL_TYPE XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4a9304, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0xb4a93b4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a92f0, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4a923c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate(XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate(XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11560};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic/CalculateInteractionPoint_00001083$BurstDirectCall
class CORDL_TYPE XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4a9224, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4a9134, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a85cc, size 0xdc, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall(XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall(XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11559};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic/CalculateInteractionPoint_00001083$PostfixBurstDelegate
class CORDL_TYPE XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4a903c, size 0xec, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb4a9128, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a9028, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4a8f74, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate(XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate(XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11558};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic/CalculatePokeParams_00001082$BurstDirectCall
class CORDL_TYPE XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4a8f5c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4a8e6c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a84f0, size 0xdc, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall(XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall(XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11557};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic/CalculatePokeParams_00001082$PostfixBurstDelegate
class CORDL_TYPE XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4a8d54, size 0x10c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb4a8e60, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4a8d40, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4a8c8c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate(XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate(XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11556};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
