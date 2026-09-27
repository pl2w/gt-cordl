#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/SortingHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingHelpers)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class IAsyncResult;
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IInteractorDistanceEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers_ClosestPointOnColliderEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers_InteractableBasedEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers_SquareDistanceAttachPointEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers_ClosestPointOnColliderEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers_InteractableBasedEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers_SquareDistanceAttachPointEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers/ClosestPointOnColliderEvaluator");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers/InteractableBasedEvaluator");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers/SquareDistanceAttachPointEvaluator");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers/SquareDistanceAttachPointEvaluator/SqDistanceToInteractable_000017C3$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers/SquareDistanceAttachPointEvaluator/SqDistanceToInteractable_000017C3$PostfixBurstDelegate");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SortingHelpers
class CORDL_TYPE SortingHelpers : public ::System::Object {
public:
// Declarations
using ClosestPointOnColliderEvaluator = ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator;

using InteractableBasedEvaluator = ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator;

using SquareDistanceAttachPointEvaluator = ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator;

/// @brief Field closestPointOnColliderEvaluator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_closestPointOnColliderEvaluator, put=setStaticF_closestPointOnColliderEvaluator)) ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  closestPointOnColliderEvaluator;

/// @brief Field interactableBasedEvaluator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_interactableBasedEvaluator, put=setStaticF_interactableBasedEvaluator)) ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  interactableBasedEvaluator;

/// @brief Field s_InteractableDistanceComparison, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractableDistanceComparison, put=setStaticF_s_InteractableDistanceComparison)) ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  s_InteractableDistanceComparison;

/// @brief Field s_InteractableDistanceSqrMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractableDistanceSqrMap, put=setStaticF_s_InteractableDistanceSqrMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  s_InteractableDistanceSqrMap;

/// @brief Field squareDistanceAttachPointEvaluator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_squareDistanceAttachPointEvaluator, put=setStaticF_squareDistanceAttachPointEvaluator)) ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  squareDistanceAttachPointEvaluator;

/// @brief Method InteractableDistanceComparison, addr 0xb41c92c, size 0xc0, virtual false, abstract: false, final false
static inline int32_t InteractableDistanceComparison(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  x, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  y) ;

/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Sort(::System::Collections::Generic::IList_1<T>*  hits, ::System::Collections::Generic::IComparer_1<T>*  comparer) ;

/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Sort(::System::Collections::Generic::IList_1<T>*  hits, ::System::Collections::Generic::IComparer_1<T>*  comparer, int32_t  count) ;

/// @brief Method SortByDistanceToInteractor, addr 0xb41c5f4, size 0x70, virtual false, abstract: false, final false
static inline void SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactablesToSort) ;

/// @brief Method SortByDistanceToInteractor, addr 0xb41c664, size 0x2c8, virtual false, abstract: false, final false
static inline void SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactablesToSort, ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  distanceEvaluator) ;

/// @brief Method SortByDistanceToInteractor, addr 0xb41c198, size 0x78, virtual false, abstract: false, final false
static inline void SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  unsortedTargets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results) ;

/// @brief Method SortByDistanceToInteractor, addr 0xb41c210, size 0x3e4, virtual false, abstract: false, final false
static inline void SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  unsortedTargets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results, ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  distanceEvaluator) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* getStaticF_closestPointOnColliderEvaluator() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* getStaticF_interactableBasedEvaluator() ;

static inline ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* getStaticF_s_InteractableDistanceComparison() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* getStaticF_s_InteractableDistanceSqrMap() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* getStaticF_squareDistanceAttachPointEvaluator() ;

static inline void setStaticF_closestPointOnColliderEvaluator(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  value) ;

static inline void setStaticF_interactableBasedEvaluator(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  value) ;

static inline void setStaticF_s_InteractableDistanceComparison(::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

static inline void setStaticF_s_InteractableDistanceSqrMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value) ;

static inline void setStaticF_squareDistanceAttachPointEvaluator(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortingHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingHelpers(SortingHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingHelpers(SortingHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SortingHelpers/SquareDistanceAttachPointEvaluator
class CORDL_TYPE SortingHelpers_SquareDistanceAttachPointEvaluator : public ::System::Object {
public:
// Declarations
using SqDistanceToInteractable_000017C3$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall;

using SqDistanceToInteractable_000017C3$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*() noexcept;

/// @brief Method EvaluateDistance, addr 0xb41d0cc, size 0x180, virtual true, abstract: false, final true
inline float_t EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator* New_ctor() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.SortingHelpers::SquareDistanceAttachPointEvaluator::SqDistanceToInteractable_000017C3$PostfixBurstDelegate))]
/// @brief Method SqDistanceToInteractable, addr 0xb41d0c8, size 0x4, virtual false, abstract: false, final false
static inline float_t SqDistanceToInteractable(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition) ;

/// [BurstCompile]
/// @brief Method SqDistanceToInteractable$BurstManaged, addr 0xb41d308, size 0x2c, virtual false, abstract: false, final false
static inline float_t SqDistanceToInteractable$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition) ;

/// @brief Method .ctor, addr 0xb41cba0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* i___UnityEngine__XR__Interaction__Toolkit__IInteractorDistanceEvaluator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortingHelpers_SquareDistanceAttachPointEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers_SquareDistanceAttachPointEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingHelpers_SquareDistanceAttachPointEvaluator(SortingHelpers_SquareDistanceAttachPointEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers_SquareDistanceAttachPointEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingHelpers_SquareDistanceAttachPointEvaluator(SortingHelpers_SquareDistanceAttachPointEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11139};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SortingHelpers/SquareDistanceAttachPointEvaluator/SqDistanceToInteractable_000017C3$BurstDirectCall
class CORDL_TYPE SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb41d5bc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb41d4cc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41d24c, size 0xbc, virtual false, abstract: false, final false
static inline float_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall(SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall(SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11138};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SortingHelpers/SquareDistanceAttachPointEvaluator/SqDistanceToInteractable_000017C3$PostfixBurstDelegate
class CORDL_TYPE SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb41d3fc, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0xb41d4a4, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41d3e8, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb41d334, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate(SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate(SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SortingHelpers/ClosestPointOnColliderEvaluator
class CORDL_TYPE SortingHelpers_ClosestPointOnColliderEvaluator : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*() noexcept;

/// @brief Method EvaluateDistance, addr 0xb41cc60, size 0xe8, virtual true, abstract: false, final true
inline float_t EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator* New_ctor() ;

/// @brief Method .ctor, addr 0xb41cbb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* i___UnityEngine__XR__Interaction__Toolkit__IInteractorDistanceEvaluator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortingHelpers_ClosestPointOnColliderEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers_ClosestPointOnColliderEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingHelpers_ClosestPointOnColliderEvaluator(SortingHelpers_ClosestPointOnColliderEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers_ClosestPointOnColliderEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingHelpers_ClosestPointOnColliderEvaluator(SortingHelpers_ClosestPointOnColliderEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SortingHelpers/InteractableBasedEvaluator
class CORDL_TYPE SortingHelpers_InteractableBasedEvaluator : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*() noexcept;

/// @brief Method EvaluateDistance, addr 0xb41cbb8, size 0xa8, virtual true, abstract: false, final true
inline float_t EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator* New_ctor() ;

/// @brief Method .ctor, addr 0xb41cba8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* i___UnityEngine__XR__Interaction__Toolkit__IInteractorDistanceEvaluator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortingHelpers_InteractableBasedEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers_InteractableBasedEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingHelpers_InteractableBasedEvaluator(SortingHelpers_InteractableBasedEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingHelpers_InteractableBasedEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingHelpers_InteractableBasedEvaluator(SortingHelpers_InteractableBasedEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
