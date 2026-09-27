#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureStateCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformFeatureStateCollection)
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class FeatureStateProvider_2;
}
namespace Oculus::Interaction::PoseDetection {
class TransformConfig;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateCollection_TransformStateInfo;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateCollection___c;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateCollection___c__DisplayClass2_0;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace Oculus::Interaction::PoseDetection {
class TransformJointData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class TransformFeatureStateCollection;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateCollection_TransformStateInfo;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateCollection___c;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateCollection___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateCollection");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateCollection/TransformStateInfo");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateCollection/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateCollection/<>c__DisplayClass2_0");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection
class CORDL_TYPE TransformFeatureStateCollection : public ::System::Object {
public:
// Declarations
using TransformStateInfo = ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo;

using __c = ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c;

using __c__DisplayClass2_0 = ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0;

/// @brief Field _idToTransformStateInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__idToTransformStateInfo, put=__cordl_internal_set__idToTransformStateInfo)) ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>*  _idToTransformStateInfo;

/// @brief Method GetConfig, addr 0xa4a6f4c, size 0x64, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformConfig* GetConfig(int32_t  configId) ;

/// @brief Method GetStateProvider, addr 0xa4a6e70, size 0x68, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* GetStateProvider(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection* New_ctor() ;

/// @brief Method RegisterConfig, addr 0xa4a6b2c, size 0x29c, virtual false, abstract: false, final false
inline void RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig, ::Oculus::Interaction::PoseDetection::TransformJointData*  jointData, ::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method SetConfig, addr 0xa4a6ed8, size 0x74, virtual false, abstract: false, final false
inline void SetConfig(int32_t  configId, ::Oculus::Interaction::PoseDetection::TransformConfig*  config) ;

/// @brief Method UnRegisterConfig, addr 0xa4a6e14, size 0x5c, virtual false, abstract: false, final false
inline void UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method UpdateFeatureStates, addr 0xa4a6fb0, size 0x1b4, virtual false, abstract: false, final false
inline void UpdateFeatureStates(int32_t  lastUpdatedFrameId, bool  disableProactiveEvaluation) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>* const& __cordl_internal_get__idToTransformStateInfo() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>*& __cordl_internal_get__idToTransformStateInfo() ;

constexpr void __cordl_internal_set__idToTransformStateInfo(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>*  value) ;

/// @brief Method .ctor, addr 0xa4a7164, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateCollection(TransformFeatureStateCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateCollection(TransformFeatureStateCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16164};

/// @brief Field _idToTransformStateInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo*>*  ____idToTransformStateInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection, ____idToTransformStateInfo) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0
class CORDL_TYPE TransformFeatureStateCollection___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field jointData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_jointData, put=__cordl_internal_set_jointData)) ::Oculus::Interaction::PoseDetection::TransformJointData*  jointData;

/// @brief Field transformConfig, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformConfig, put=__cordl_internal_set_transformConfig)) ::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <RegisterConfig>b__0, addr 0xa4a7264, size 0x6c, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> _RegisterConfig_b__0(::Oculus::Interaction::PoseDetection::TransformFeature  feature) ;

constexpr ::Oculus::Interaction::PoseDetection::TransformJointData* const& __cordl_internal_get_jointData() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformJointData*& __cordl_internal_get_jointData() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformConfig* const& __cordl_internal_get_transformConfig() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformConfig*& __cordl_internal_get_transformConfig() ;

constexpr void __cordl_internal_set_jointData(::Oculus::Interaction::PoseDetection::TransformJointData*  value) ;

constexpr void __cordl_internal_set_transformConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  value) ;

/// @brief Method .ctor, addr 0xa4a6dc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateCollection___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateCollection___c__DisplayClass2_0(TransformFeatureStateCollection___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateCollection___c__DisplayClass2_0(TransformFeatureStateCollection___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16163};

/// @brief Field jointData, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformJointData*  ___jointData;

/// @brief Field transformConfig, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformConfig*  ___transformConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0, ___jointData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0, ___transformConfig) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c__DisplayClass2_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c
class CORDL_TYPE TransformFeatureStateCollection___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*  __9;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>*  __9__2_1;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c* New_ctor() ;

/// @brief Method <RegisterConfig>b__2_1, addr 0xa4a725c, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterConfig_b__2_1(::Oculus::Interaction::PoseDetection::TransformFeature  feature) ;

/// @brief Method .ctor, addr 0xa4a7254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c* getStaticF___9() ;

static inline ::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>* getStaticF___9__2_1() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c*  value) ;

static inline void setStaticF___9__2_1(::System::Func_2<::Oculus::Interaction::PoseDetection::TransformFeature,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateCollection___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateCollection___c(TransformFeatureStateCollection___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateCollection___c(TransformFeatureStateCollection___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16162};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo
class CORDL_TYPE TransformFeatureStateCollection_TransformStateInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Config, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::Oculus::Interaction::PoseDetection::TransformConfig*  Config;

/// @brief Field StateProvider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_StateProvider, put=__cordl_internal_set_StateProvider)) ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  StateProvider;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo* New_ctor(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  stateProvider) ;

constexpr ::Oculus::Interaction::PoseDetection::TransformConfig* const& __cordl_internal_get_Config() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformConfig*& __cordl_internal_get_Config() ;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* const& __cordl_internal_get_StateProvider() const;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*& __cordl_internal_get_StateProvider() ;

constexpr void __cordl_internal_set_Config(::Oculus::Interaction::PoseDetection::TransformConfig*  value) ;

constexpr void __cordl_internal_set_StateProvider(::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa4a6dd0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  stateProvider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateCollection_TransformStateInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection_TransformStateInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateCollection_TransformStateInfo(TransformFeatureStateCollection_TransformStateInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateCollection_TransformStateInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateCollection_TransformStateInfo(TransformFeatureStateCollection_TransformStateInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16161};

/// @brief Field Config, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformConfig*  ___Config;

/// @brief Field StateProvider, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*  ___StateProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo, ___Config) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo, ___StateProvider) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection_TransformStateInfo) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
