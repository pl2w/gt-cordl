#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RigUtils)
namespace GlobalNamespace {
struct RigUtils_RigSyncSceneToStreamData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Animations::Rigging {
class IAnimationJobBinder;
}
namespace UnityEngine::Animations::Rigging {
class IAnimationJobData;
}
namespace UnityEngine::Animations::Rigging {
class IRigConstraint;
}
namespace UnityEngine::Animations::Rigging {
class IRigLayer;
}
namespace UnityEngine::Animations::Rigging {
struct PropertyDescriptor;
}
namespace UnityEngine::Animations::Rigging {
struct Property;
}
namespace UnityEngine::Animations::Rigging {
class RigUtils___c;
}
namespace UnityEngine::Animations::Rigging {
class Rig;
}
namespace UnityEngine::Animations::Rigging {
struct SyncableProperties;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class RigUtils;
}
namespace UnityEngine::Animations::Rigging {
class RigUtils___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::RigUtils*);
MARK_REF_T(::UnityEngine::Animations::Rigging::RigUtils___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigUtils*, "UnityEngine.Animations.Rigging", "RigUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigUtils___c*, "UnityEngine.Animations.Rigging", "RigUtils/<>c");
// Dependencies System.Object
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigUtils
class CORDL_TYPE RigUtils : public ::System::Object {
public:
// Declarations
using RigSyncSceneToStreamData = ::GlobalNamespace::RigUtils_RigSyncSceneToStreamData;

using __c = ::UnityEngine::Animations::Rigging::RigUtils___c;

/// @brief Field <syncSceneToStreamBinder>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__syncSceneToStreamBinder_k__BackingField, put=setStaticF__syncSceneToStreamBinder_k__BackingField)) ::UnityEngine::Animations::Rigging::IAnimationJobBinder*  _syncSceneToStreamBinder_k__BackingField;

/// @brief Field s_SupportedPropertyTypeToDescriptor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SupportedPropertyTypeToDescriptor, put=setStaticF_s_SupportedPropertyTypeToDescriptor)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>*  s_SupportedPropertyTypeToDescriptor;

/// @brief Method CreateAnimationJobs, addr 0xae7add4, size 0x178, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Animations::IAnimationJob*> CreateAnimationJobs(::UnityEngine::Animator*  animator, ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  constraints) ;

/// @brief Method CreateSyncSceneToStreamData, addr 0xae7d8cc, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::Rigging::IAnimationJobData* CreateSyncSceneToStreamData(::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers) ;

/// @brief Method DestroyAnimationJobs, addr 0xae7b10c, size 0x118, virtual false, abstract: false, final false
static inline void DestroyAnimationJobs(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  constraints, ::ArrayW<::UnityEngine::Animations::IAnimationJob*>  jobs) ;

/// @brief Method ExtractAllSyncableData, addr 0xae7ca74, size 0xe58, virtual false, abstract: false, final false
static inline void ExtractAllSyncableData(::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>  syncableTransforms, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::SyncableProperties>*>  syncableProperties) ;

/// @brief Method ExtractNestedPropertyType, addr 0xae7c4b0, size 0x5c4, virtual false, abstract: false, final false
static inline bool ExtractNestedPropertyType(::UnityEngine::Animator*  animator, ::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  syncableTransforms, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*  syncableProperties, ::StringW  namePrefix) ;

/// @brief Method ExtractPropertyType, addr 0xae7ba18, size 0x184, virtual false, abstract: false, final false
static inline bool ExtractPropertyType(::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*  syncableProperties, ::StringW  namePrefix) ;

/// @brief Method ExtractTransformType, addr 0xae7b3d8, size 0x640, virtual false, abstract: false, final false
static inline bool ExtractTransformType(::UnityEngine::Animator*  animator, ::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  syncableTransforms) ;

/// @brief Method ExtractWeightedTransforms, addr 0xae7bbe8, size 0x8c8, virtual false, abstract: false, final false
static inline bool ExtractWeightedTransforms(::UnityEngine::Animator*  animator, ::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  syncableTransforms, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*  syncableProperties) ;

/// @brief Method GetConstraints, addr 0xae7abb8, size 0x21c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> GetConstraints(::UnityEngine::Animations::Rigging::Rig*  rig) ;

/// @brief Method GetSyncableRigTransforms, addr 0xae7b2a8, size 0x130, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GetSyncableRigTransforms(::UnityEngine::Animator*  animator) ;

static inline ::UnityEngine::Animations::Rigging::IAnimationJobBinder* getStaticF__syncSceneToStreamBinder_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>* getStaticF_s_SupportedPropertyTypeToDescriptor() ;

/// [CompilerGenerated]
/// @brief Method get_syncSceneToStreamBinder, addr 0xae7dc5c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::Rigging::IAnimationJobBinder* get_syncSceneToStreamBinder() ;

static inline void setStaticF__syncSceneToStreamBinder_k__BackingField(::UnityEngine::Animations::Rigging::IAnimationJobBinder*  value) ;

static inline void setStaticF_s_SupportedPropertyTypeToDescriptor(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigUtils(RigUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigUtils(RigUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32311};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::RigUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigUtils/<>c
class CORDL_TYPE RigUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Animations::Rigging::RigUtils___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  __9__6_0;

static inline ::UnityEngine::Animations::Rigging::RigUtils___c* New_ctor() ;

/// @brief Method <ExtractNestedPropertyType>b__6_0, addr 0xae7e220, size 0x54, virtual false, abstract: false, final false
inline bool _ExtractNestedPropertyType_b__6_0(::System::Reflection::FieldInfo*  info) ;

/// @brief Method .ctor, addr 0xae7e218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Animations::Rigging::RigUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::UnityEngine::Animations::Rigging::RigUtils___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigUtils___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigUtils___c(RigUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigUtils___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigUtils___c(RigUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::RigUtils___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
