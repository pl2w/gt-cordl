#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureConfigBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBuilder_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FingerFeatureConfigBuilder)
namespace Oculus::Interaction::PoseDetection {
template<typename TBuildState>
class FeatureConfigBuilder_BuildCondition_1;
}
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder_AbductionStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder_OpenCloseStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder_OppositionStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder___c;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder_AbductionStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder_OpenCloseStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder_OppositionStateBuilder;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureConfigBuilder___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder*, "Oculus.Interaction.PoseDetection", "FingerFeatureConfigBuilder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder*, "Oculus.Interaction.PoseDetection", "FingerFeatureConfigBuilder/AbductionStateBuilder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*, "Oculus.Interaction.PoseDetection", "FingerFeatureConfigBuilder/OpenCloseStateBuilder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder*, "Oculus.Interaction.PoseDetection", "FingerFeatureConfigBuilder/OppositionStateBuilder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c*, "Oculus.Interaction.PoseDetection", "FingerFeatureConfigBuilder/<>c");
// Dependencies Oculus.Interaction.PoseDetection.FeatureConfigBuilder
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder
class CORDL_TYPE FingerFeatureConfigBuilder : public ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder {
public:
// Declarations
using AbductionStateBuilder = ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder;

using OpenCloseStateBuilder = ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder;

using OppositionStateBuilder = ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder;

using __c = ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c;

/// @brief Field <Abduction>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Abduction_k__BackingField, put=setStaticF__Abduction_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder*>*  _Abduction_k__BackingField;

/// @brief Field <Curl>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Curl_k__BackingField, put=setStaticF__Curl_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>*  _Curl_k__BackingField;

/// @brief Field <Flexion>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Flexion_k__BackingField, put=setStaticF__Flexion_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>*  _Flexion_k__BackingField;

/// @brief Field <Opposition>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Opposition_k__BackingField, put=setStaticF__Opposition_k__BackingField)) ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder*>*  _Opposition_k__BackingField;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder* New_ctor() ;

/// @brief Method .ctor, addr 0xa49928c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder*>* getStaticF__Abduction_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>* getStaticF__Curl_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>* getStaticF__Flexion_k__BackingField() ;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder*>* getStaticF__Opposition_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Abduction, addr 0xa4991dc, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder*>* get_Abduction() ;

/// [CompilerGenerated]
/// @brief Method get_Curl, addr 0xa49912c, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>* get_Curl() ;

/// [CompilerGenerated]
/// @brief Method get_Flexion, addr 0xa499184, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>* get_Flexion() ;

/// [CompilerGenerated]
/// @brief Method get_Opposition, addr 0xa499234, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder*>* get_Opposition() ;

static inline void setStaticF__Abduction_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder*>*  value) ;

static inline void setStaticF__Curl_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>*  value) ;

static inline void setStaticF__Flexion_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder*>*  value) ;

static inline void setStaticF__Opposition_k__BackingField(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureConfigBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureConfigBuilder(FingerFeatureConfigBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureConfigBuilder(FingerFeatureConfigBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder/<>c
class CORDL_TYPE FingerFeatureConfigBuilder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c*  __9;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c* New_ctor() ;

/// @brief Method <.cctor>b__16_0, addr 0xa499f3c, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder* __cctor_b__16_0(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__16_1, addr 0xa499f98, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder* __cctor_b__16_1(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__16_2, addr 0xa499ff4, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder* __cctor_b__16_2(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method <.cctor>b__16_3, addr 0xa49a050, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder* __cctor_b__16_3(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method .ctor, addr 0xa499f34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c* getStaticF___9() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureConfigBuilder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureConfigBuilder___c(FingerFeatureConfigBuilder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureConfigBuilder___c(FingerFeatureConfigBuilder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16092};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateActiveMode, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder/OppositionStateBuilder
class CORDL_TYPE FingerFeatureConfigBuilder_OppositionStateBuilder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Near)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  Near;

 __declspec(property(get=get_None)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  None;

 __declspec(property(get=get_Touching)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  Touching;

/// @brief Field _mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  _mode;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder* New_ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode const& __cordl_internal_get__mode() const;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode& __cordl_internal_get__mode() ;

constexpr void __cordl_internal_set__mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value) ;

/// @brief Method .ctor, addr 0xa499bf0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method get_Near, addr 0xa499cfc, size 0xe8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_Near() ;

/// @brief Method get_None, addr 0xa499de4, size 0xe8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_None() ;

/// @brief Method get_Touching, addr 0xa499c18, size 0xe4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_Touching() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureConfigBuilder_OppositionStateBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder_OppositionStateBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureConfigBuilder_OppositionStateBuilder(FingerFeatureConfigBuilder_OppositionStateBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder_OppositionStateBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureConfigBuilder_OppositionStateBuilder(FingerFeatureConfigBuilder_OppositionStateBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16091};

/// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  ____mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder, ____mode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OppositionStateBuilder) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateActiveMode, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder/AbductionStateBuilder
class CORDL_TYPE FingerFeatureConfigBuilder_AbductionStateBuilder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Closed)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  Closed;

 __declspec(property(get=get_None)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  None;

 __declspec(property(get=get_Open)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  Open;

/// @brief Field _mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  _mode;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder* New_ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode const& __cordl_internal_get__mode() const;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode& __cordl_internal_get__mode() ;

constexpr void __cordl_internal_set__mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value) ;

/// @brief Method .ctor, addr 0xa499914, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

/// @brief Method get_Closed, addr 0xa499a20, size 0xe8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_Closed() ;

/// @brief Method get_None, addr 0xa49993c, size 0xe4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_None() ;

/// @brief Method get_Open, addr 0xa499b08, size 0xe8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_Open() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureConfigBuilder_AbductionStateBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder_AbductionStateBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureConfigBuilder_AbductionStateBuilder(FingerFeatureConfigBuilder_AbductionStateBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder_AbductionStateBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureConfigBuilder_AbductionStateBuilder(FingerFeatureConfigBuilder_AbductionStateBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16090};

/// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  ____mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder, ____mode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_AbductionStateBuilder) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateActiveMode, Oculus.Interaction.PoseDetection.FeatureStateDescription, Oculus.Interaction.PoseDetection.FingerFeature, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder/OpenCloseStateBuilder
class CORDL_TYPE FingerFeatureConfigBuilder_OpenCloseStateBuilder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Closed)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  Closed;

 __declspec(property(get=get_Neutral)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  Neutral;

 __declspec(property(get=get_Open)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  Open;

/// @brief Field _fingerFeature, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingerFeature, put=__cordl_internal_set__fingerFeature)) ::Oculus::Interaction::PoseDetection::FingerFeature  _fingerFeature;

/// @brief Field _mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  _mode;

/// @brief Field _states, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__states, put=__cordl_internal_set__states)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  _states;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder* New_ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  featureStateActiveMode, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature) ;

constexpr ::Oculus::Interaction::PoseDetection::FingerFeature const& __cordl_internal_get__fingerFeature() const;

constexpr ::Oculus::Interaction::PoseDetection::FingerFeature& __cordl_internal_get__fingerFeature() ;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode const& __cordl_internal_get__mode() const;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode& __cordl_internal_get__mode() ;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> const& __cordl_internal_get__states() const;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>& __cordl_internal_get__states() ;

constexpr void __cordl_internal_set__fingerFeature(::Oculus::Interaction::PoseDetection::FingerFeature  value) ;

constexpr void __cordl_internal_set__mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value) ;

constexpr void __cordl_internal_set__states(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value) ;

/// @brief Method .ctor, addr 0xa49956c, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  featureStateActiveMode, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature) ;

/// @brief Method get_Closed, addr 0xa49985c, size 0xb8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_Closed() ;

/// @brief Method get_Neutral, addr 0xa4997a4, size 0xb8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_Neutral() ;

/// @brief Method get_Open, addr 0xa4996a8, size 0xb4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* get_Open() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureConfigBuilder_OpenCloseStateBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder_OpenCloseStateBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureConfigBuilder_OpenCloseStateBuilder(FingerFeatureConfigBuilder_OpenCloseStateBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureConfigBuilder_OpenCloseStateBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureConfigBuilder_OpenCloseStateBuilder(FingerFeatureConfigBuilder_OpenCloseStateBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16089};

/// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  ____mode;

/// @brief Field _fingerFeature, offset: 0x14, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::FingerFeature  ____fingerFeature;

/// @brief Field _states, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  ____states;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder, ____mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder, ____fingerFeature) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder, ____states) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureConfigBuilder_OpenCloseStateBuilder) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
