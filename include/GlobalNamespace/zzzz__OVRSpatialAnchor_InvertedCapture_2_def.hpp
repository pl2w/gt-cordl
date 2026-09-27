#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_InvertedCapture_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSpatialAnchor_InvertedCapture_2)
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult,typename TCapture>
struct OVRSpatialAnchor_InvertedCapture_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2, "", "OVRSpatialAnchor/InvertedCapture`2");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TResult,typename TCapture>
// Is value type: true
// CS Name: OVRSpatialAnchor/InvertedCapture`2<TResult,TCapture>
struct CORDL_TYPE OVRSpatialAnchor_InvertedCapture_2 {
public:
// Declarations
/// @brief Field s_delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_delegate, put=setStaticF_s_delegate)) ::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>*  s_delegate;

/// @brief Method ContinueTaskWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ContinueTaskWith(::GlobalNamespace::OVRTask_1<TResult>  task, ::System::Action_2<TCapture,TResult>*  onCompleted, TCapture  state) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Invoke(TResult  result, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>  invertedCapture) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_2<TCapture,TResult>*  callback, TCapture  capture) ;

static inline ::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>* getStaticF_s_delegate() ;

static inline void setStaticF_s_delegate(::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_InvertedCapture_2() ;

// Ctor Parameters [CppParam { name: "_capture", ty: "TCapture", modifiers: "", def_value: None, comment: None }, CppParam { name: "_callback", ty: "::System::Action_2<TCapture,TResult>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor_InvertedCapture_2(TCapture  _capture, ::System::Action_2<TCapture,TResult>*  _callback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _capture, offset: 0x0, size: 0x8, def value: None
 TCapture  _capture;

/// @brief Field _callback, offset: 0x8, size: 0x8, def value: None
 ::System::Action_2<TCapture,TResult>*  _callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
