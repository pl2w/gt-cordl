#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureConfigBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBuilder_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TransformFeatureConfigBuilder)
namespace Oculus::Interaction::PoseDetection {
template<typename TBuildState>
class FeatureConfigBuilder_BuildCondition_1;
}
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfigBuilder_TrueFalseStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfigBuilder___c;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfigBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfigBuilder_TrueFalseStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfigBuilder___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder*, "Oculus.Interaction.PoseDetection", "TransformFeatureConfigBuilder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*, "Oculus.Interaction.PoseDetection", "TransformFeatureConfigBuilder/TrueFalseStateBuilder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c*, "Oculus.Interaction.PoseDetection", "TransformFeatureConfigBuilder/<>c");
// Dependencies Oculus.Interaction.PoseDetection.FeatureConfigBuilder
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder
class CORDL_TYPE TransformFeatureConfigBuilder : public ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder {
public:
// Declarations
using TrueFalseStateBuilder = ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder;

using __c = ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c;

/// @brief Field <FingersDown>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__FingersDown_k__BackingField, put=setStaticF__FingersDown_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _FingersDown_k__BackingField;

/// @brief Field <FingersUp>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__FingersUp_k__BackingField, put=setStaticF__FingersUp_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _FingersUp_k__BackingField;

/// @brief Field <PalmAwayFromFace>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PalmAwayFromFace_k__BackingField, put=setStaticF__PalmAwayFromFace_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _PalmAwayFromFace_k__BackingField;

/// @brief Field <PalmDown>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PalmDown_k__BackingField, put=setStaticF__PalmDown_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _PalmDown_k__BackingField;

/// @brief Field <PalmTowardsFace>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PalmTowardsFace_k__BackingField, put=setStaticF__PalmTowardsFace_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _PalmTowardsFace_k__BackingField;

/// @brief Field <PalmUp>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PalmUp_k__BackingField, put=setStaticF__PalmUp_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _PalmUp_k__BackingField;

/// @brief Field <PinchClear>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PinchClear_k__BackingField, put=setStaticF__PinchClear_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _PinchClear_k__BackingField;

/// @brief Field <WristDown>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WristDown_k__BackingField, put=setStaticF__WristDown_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _WristDown_k__BackingField;

/// @brief Field <WristUp>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WristUp_k__BackingField, put=setStaticF__WristUp_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  _WristUp_k__BackingField;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder* New_ctor() ;

/// @brief Method .ctor, addr 0xa49a3c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__FingersDown_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__FingersUp_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__PalmAwayFromFace_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__PalmDown_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__PalmTowardsFace_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__PalmUp_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__PinchClear_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__WristDown_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* getStaticF__WristUp_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_FingersDown, addr 0xa49a314, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_FingersDown() ;

/// [CompilerGenerated]
/// @brief Method get_FingersUp, addr 0xa49a2bc, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_FingersUp() ;

/// [CompilerGenerated]
/// @brief Method get_PalmAwayFromFace, addr 0xa49a264, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_PalmAwayFromFace() ;

/// [CompilerGenerated]
/// @brief Method get_PalmDown, addr 0xa49a15c, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_PalmDown() ;

/// [CompilerGenerated]
/// @brief Method get_PalmTowardsFace, addr 0xa49a20c, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_PalmTowardsFace() ;

/// [CompilerGenerated]
/// @brief Method get_PalmUp, addr 0xa49a1b4, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_PalmUp() ;

/// [CompilerGenerated]
/// @brief Method get_PinchClear, addr 0xa49a36c, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_PinchClear() ;

/// [CompilerGenerated]
/// @brief Method get_WristDown, addr 0xa49a104, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_WristDown() ;

/// [CompilerGenerated]
/// @brief Method get_WristUp, addr 0xa49a0ac, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>* get_WristUp() ;

static inline void setStaticF__FingersDown_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__FingersUp_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__PalmAwayFromFace_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__PalmDown_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__PalmTowardsFace_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__PalmUp_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__PinchClear_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__WristDown_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

static inline void setStaticF__WristUp_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureConfigBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureConfigBuilder(TransformFeatureConfigBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureConfigBuilder(TransformFeatureConfigBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c
class CORDL_TYPE TransformFeatureConfigBuilder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c*  __9;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c* New_ctor() ;

/// @brief Method <.cctor>b__29_0, addr 0xa49ab54, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_0(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_1, addr 0xa49abb0, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_1(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_2, addr 0xa49ac0c, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_2(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_3, addr 0xa49ac68, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_3(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_4, addr 0xa49acc4, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_4(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_5, addr 0xa49ad20, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_5(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_6, addr 0xa49ad7c, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_6(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_7, addr 0xa49add8, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_7(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__29_8, addr 0xa49ae34, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* __cctor_b__29_8(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method .ctor, addr 0xa49ab4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c* getStaticF___9() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureConfigBuilder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigBuilder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureConfigBuilder___c(TransformFeatureConfigBuilder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigBuilder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureConfigBuilder___c(TransformFeatureConfigBuilder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateActiveMode, Oculus.Interaction.PoseDetection.FeatureStateDescription, Oculus.Interaction.PoseDetection.TransformFeature, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder
class CORDL_TYPE TransformFeatureConfigBuilder_TrueFalseStateBuilder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Closed)) ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  Closed;

 __declspec(property(get=get_Open)) ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  Open;

/// @brief Field _mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  _mode;

/// @brief Field _states, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__states, put=__cordl_internal_set__states)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  _states;

/// @brief Field _transformFeature, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__transformFeature, put=__cordl_internal_set__transformFeature)) ::Oculus::Interaction::PoseDetection::TransformFeature  _transformFeature;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder* New_ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  featureStateActiveMode, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature) ;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode const& __cordl_internal_get__mode() const;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode& __cordl_internal_get__mode() ;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> const& __cordl_internal_get__states() const;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>& __cordl_internal_get__states() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeature const& __cordl_internal_get__transformFeature() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeature& __cordl_internal_get__transformFeature() ;

constexpr void __cordl_internal_set__mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value) ;

constexpr void __cordl_internal_set__states(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value) ;

constexpr void __cordl_internal_set__transformFeature(::Oculus::Interaction::PoseDetection::TransformFeature  value) ;

/// @brief Method .ctor, addr 0xa49a834, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  featureStateActiveMode, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature) ;

/// @brief Method get_Closed, addr 0xa49aa28, size 0xbc, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfig* get_Closed() ;

/// @brief Method get_Open, addr 0xa49a970, size 0xb8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfig* get_Open() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureConfigBuilder_TrueFalseStateBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigBuilder_TrueFalseStateBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureConfigBuilder_TrueFalseStateBuilder(TransformFeatureConfigBuilder_TrueFalseStateBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigBuilder_TrueFalseStateBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureConfigBuilder_TrueFalseStateBuilder(TransformFeatureConfigBuilder_TrueFalseStateBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16094};

/// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  ____mode;

/// @brief Field _transformFeature, offset: 0x14, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::TransformFeature  ____transformFeature;

/// @brief Field _states, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  ____states;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder, ____mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder, ____transformFeature) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder, ____states) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigBuilder_TrueFalseStateBuilder) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
