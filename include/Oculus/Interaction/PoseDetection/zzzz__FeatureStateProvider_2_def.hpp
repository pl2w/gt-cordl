#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureStateProvider_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateProvider`2_FeatureStateSnapshot_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThresholds_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureStateProvider_2)
namespace GlobalNamespace {
template<typename TFeature,typename TFeatureState>
struct FeatureStateProvider_2_FeatureStateSnapshot;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeatureState>
class IFeatureStateThreshold_1;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureStateThresholds_2;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureThresholds_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class FeatureStateProvider_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::FeatureStateProvider_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::FeatureStateProvider_2, "Oculus.Interaction.PoseDetection", "FeatureStateProvider`2");
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateProvider`2::FeatureStateSnapshot<TFeature, TFeatureState>, Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature, TFeatureState>, System.Object
namespace Oculus::Interaction::PoseDetection {
// cpp template
template<typename TFeature,typename TFeatureState>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FeatureStateProvider`2<TFeature,TFeatureState>
class CORDL_TYPE FeatureStateProvider_2 : public ::System::Object {
public:
// Declarations
using FeatureStateSnapshot = ::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature, TFeatureState>;

/// @brief Field FeatureEnumValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FeatureEnumValues, put=setStaticF_FeatureEnumValues)) ::ArrayW<TFeature>  FeatureEnumValues;

 __declspec(property(get=get_LastUpdatedFrameId, put=set_LastUpdatedFrameId)) int32_t  LastUpdatedFrameId;

/// @brief Field <LastUpdatedFrameId>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastUpdatedFrameId_k__BackingField, put=__cordl_internal_set__LastUpdatedFrameId_k__BackingField)) int32_t  _LastUpdatedFrameId_k__BackingField;

/// @brief Field _featureThresholds, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureThresholds, put=__cordl_internal_set__featureThresholds)) ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*  _featureThresholds;

/// @brief Field _featureToCurrentState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureToCurrentState, put=__cordl_internal_set__featureToCurrentState)) ::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>>  _featureToCurrentState;

/// @brief Field _featureToInt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureToInt, put=__cordl_internal_set__featureToInt)) ::System::Func_2<TFeature,int32_t>*  _featureToInt;

/// @brief Field _featureToThresholds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureToThresholds, put=__cordl_internal_set__featureToThresholds)) ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>  _featureToThresholds;

/// @brief Field _timeProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _valueReader, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueReader, put=__cordl_internal_set__valueReader)) ::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  _valueReader;

/// @brief Method EnumToInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t EnumToInt(TFeature  value) ;

/// @brief Method GetCurrentFeatureState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TFeatureState GetCurrentFeatureState(TFeature  feature) ;

/// @brief Method GetFeatureThresholds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*> GetFeatureThresholds(TFeature  feature) ;

/// @brief Method InitializeStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InitializeStates() ;

/// @brief Method InitializeThresholds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InitializeThresholds(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*  featureThresholds) ;

static inline ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<TFeature,TFeatureState>* New_ctor(::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  valueReader, ::System::Func_2<TFeature,int32_t>*  featureToInt, ::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method ReadDesiredState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TFeatureState ReadDesiredState(float_t  value, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*  featureStateThresholds) ;

/// @brief Method ReadDesiredState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TFeatureState ReadDesiredState(float_t  value, ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*  featureStateThresholds, TFeatureState  previousState) ;

/// @brief Method ReadTouchedFeatureStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReadTouchedFeatureStates() ;

/// @brief Method ValidateFeatureThresholds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*> ValidateFeatureThresholds(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>*  featureStateThresholdsList) ;

constexpr int32_t const& __cordl_internal_get__LastUpdatedFrameId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastUpdatedFrameId_k__BackingField() ;

constexpr ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>* const& __cordl_internal_get__featureThresholds() const;

constexpr ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*& __cordl_internal_get__featureThresholds() ;

constexpr ::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>> const& __cordl_internal_get__featureToCurrentState() const;

constexpr ::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>>& __cordl_internal_get__featureToCurrentState() ;

constexpr ::System::Func_2<TFeature,int32_t>* const& __cordl_internal_get__featureToInt() const;

constexpr ::System::Func_2<TFeature,int32_t>*& __cordl_internal_get__featureToInt() ;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*> const& __cordl_internal_get__featureToThresholds() const;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>& __cordl_internal_get__featureToThresholds() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr ::System::Func_2<TFeature,::System::Nullable_1<float_t>>* const& __cordl_internal_get__valueReader() const;

constexpr ::System::Func_2<TFeature,::System::Nullable_1<float_t>>*& __cordl_internal_get__valueReader() ;

constexpr void __cordl_internal_set__LastUpdatedFrameId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__featureThresholds(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*  value) ;

constexpr void __cordl_internal_set__featureToCurrentState(::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>>  value) ;

constexpr void __cordl_internal_set__featureToInt(::System::Func_2<TFeature,int32_t>*  value) ;

constexpr void __cordl_internal_set__featureToThresholds(::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__valueReader(::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  valueReader, ::System::Func_2<TFeature,int32_t>*  featureToInt, ::System::Func_1<float_t>*  timeProvider) ;

static inline ::ArrayW<TFeature> getStaticF_FeatureEnumValues() ;

/// [CompilerGenerated]
/// @brief Method get_LastUpdatedFrameId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_LastUpdatedFrameId() ;

static inline void setStaticF_FeatureEnumValues(::ArrayW<TFeature>  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastUpdatedFrameId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_LastUpdatedFrameId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureStateProvider_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureStateProvider_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureStateProvider_2(FeatureStateProvider_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureStateProvider_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureStateProvider_2(FeatureStateProvider_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16102};

/// [CompilerGenerated]
/// @brief Field <LastUpdatedFrameId>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____LastUpdatedFrameId_k__BackingField;

/// @brief Field _featureToCurrentState, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>>  ____featureToCurrentState;

/// @brief Field _featureToThresholds, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>  ____featureToThresholds;

/// @brief Field _valueReader, offset: 0x28, size: 0x8, def value: None
 ::System::Func_2<TFeature,::System::Nullable_1<float_t>>*  ____valueReader;

/// @brief Field _featureToInt, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<TFeature,int32_t>*  ____featureToInt;

/// @brief Field _timeProvider, offset: 0x38, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _featureThresholds, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<TFeature,TFeatureState>*  ____featureThresholds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
