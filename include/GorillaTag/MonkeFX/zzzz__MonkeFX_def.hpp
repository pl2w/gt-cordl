#pragma once
// IWYU pragma private; include "GorillaTag/MonkeFX/MonkeFX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeFX)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
struct MonkeFX_ElementsRange;
}
namespace GorillaTag::MonkeFX {
class MonkeFXSettingsSO;
}
namespace GorillaTag {
class GTLogErrorLimiter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GorillaTag::MonkeFX {
class MonkeFX;
}
// Write type traits
MARK_REF_T(::GorillaTag::MonkeFX::MonkeFX*);
DEFINE_IL2CPP_CLASS(::GorillaTag::MonkeFX::MonkeFX*, "GorillaTag.MonkeFX", "MonkeFX");
// Dependencies System.Object, UnityEngine.Transform, VRRig
namespace GorillaTag::MonkeFX {
// Is value type: false
// CS Name: GorillaTag.MonkeFX.MonkeFX
class CORDL_TYPE MonkeFX : public ::System::Object {
public:
// Declarations
using ElementsRange = ::GlobalNamespace::MonkeFX_ElementsRange;

 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field _boneNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__boneNames, put=setStaticF__boneNames)) ::ArrayW<::StringW>  _boneNames;

/// @brief Field _bones, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bones, put=setStaticF__bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _bones;

/// @brief Field _errorLog_nullBone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__errorLog_nullBone, put=setStaticF__errorLog_nullBone)) ::GorillaTag::GTLogErrorLimiter*  _errorLog_nullBone;

/// @brief Field _errorLog_nullMainSkin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__errorLog_nullMainSkin, put=setStaticF__errorLog_nullMainSkin)) ::GorillaTag::GTLogErrorLimiter*  _errorLog_nullMainSkin;

/// @brief Field _errorLog_nullVRRigFromVRRigCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__errorLog_nullVRRigFromVRRigCache, put=setStaticF__errorLog_nullVRRigFromVRRigCache)) ::GorillaTag::GTLogErrorLimiter*  _errorLog_nullVRRigFromVRRigCache;

/// @brief Field <hasInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInstance_k__BackingField, put=setStaticF__hasInstance_k__BackingField)) bool  _hasInstance_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::GorillaTag::MonkeFX::MonkeFX*  _instance_k__BackingField;

/// @brief Field _meshId_to_settingsUsers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshId_to_settingsUsers, put=__cordl_internal_set__meshId_to_settingsUsers)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>*  _meshId_to_settingsUsers;

/// @brief Field _rigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rigs, put=setStaticF__rigs)) ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  _rigs;

/// @brief Field _rigsHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__rigsHash, put=setStaticF__rigsHash)) int32_t  _rigsHash;

/// @brief Field _settingsSOs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsSOs, put=__cordl_internal_set__settingsSOs)) ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*  _settingsSOs;

/// @brief Field _srcMeshId_to_elemRange, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__srcMeshId_to_elemRange, put=__cordl_internal_set__srcMeshId_to_elemRange)) ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>*  _srcMeshId_to_elemRange;

/// @brief Field _srcMeshId_to_sourceMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__srcMeshId_to_sourceMesh, put=__cordl_internal_set__srcMeshId_to_sourceMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  _srcMeshId_to_sourceMesh;

/// @brief Field _srcMeshInst_to_meshId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__srcMeshInst_to_meshId, put=__cordl_internal_set__srcMeshInst_to_meshId)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _srcMeshInst_to_meshId;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method EnsureInstance, addr 0x5d43204, size 0x12c, virtual false, abstract: false, final false
static inline void EnsureInstance() ;

/// @brief Method GetScaleToFitInBounds, addr 0x5d43330, size 0x60, virtual false, abstract: false, final false
static inline float_t GetScaleToFitInBounds(::UnityEngine::Mesh*  mesh) ;

/// @brief Method ITickSystemPost.PostTick, addr 0x5d437ec, size 0x80, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5d4386c, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5d43874, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

/// @brief Method InitBonesArray, addr 0x5d42778, size 0x738, virtual false, abstract: false, final false
static inline void InitBonesArray() ;

static inline ::GorillaTag::MonkeFX::MonkeFX* New_ctor() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)0)]
/// @brief Method OnAfterFirstSceneLoaded, addr 0x5d4371c, size 0xd0, virtual false, abstract: false, final false
static inline void OnAfterFirstSceneLoaded() ;

/// @brief Method Pack0To1Floats, addr 0x5d43390, size 0x3c, virtual false, abstract: false, final false
static inline float_t Pack0To1Floats(float_t  x, float_t  y) ;

/// @brief Method PauseTick, addr 0x5d4387c, size 0x17c, virtual false, abstract: false, final false
static inline void PauseTick() ;

/// @brief Method Register, addr 0x5d42eb8, size 0x34c, virtual false, abstract: false, final false
static inline void Register(::GorillaTag::MonkeFX::MonkeFXSettingsSO*  settingsSO) ;

/// @brief Method ResumeTick, addr 0x5d439f8, size 0x17c, virtual false, abstract: false, final false
static inline void ResumeTick() ;

/// @brief Method UpdateBone, addr 0x5d42eb4, size 0x4, virtual false, abstract: false, final false
static inline void UpdateBone() ;

/// @brief Method UpdateBones, addr 0x5d42eb0, size 0x4, virtual false, abstract: false, final false
static inline void UpdateBones() ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>* const& __cordl_internal_get__meshId_to_settingsUsers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>*& __cordl_internal_get__meshId_to_settingsUsers() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>* const& __cordl_internal_get__settingsSOs() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*& __cordl_internal_get__settingsSOs() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>* const& __cordl_internal_get__srcMeshId_to_elemRange() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>*& __cordl_internal_get__srcMeshId_to_elemRange() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get__srcMeshId_to_sourceMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get__srcMeshId_to_sourceMesh() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get__srcMeshInst_to_meshId() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get__srcMeshInst_to_meshId() ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__meshId_to_settingsUsers(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>*  value) ;

constexpr void __cordl_internal_set__settingsSOs(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*  value) ;

constexpr void __cordl_internal_set__srcMeshId_to_elemRange(::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>*  value) ;

constexpr void __cordl_internal_set__srcMeshId_to_sourceMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set__srcMeshInst_to_meshId(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5d4353c, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF__boneNames() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Transform>> getStaticF__bones() ;

static inline ::GorillaTag::GTLogErrorLimiter* getStaticF__errorLog_nullBone() ;

static inline ::GorillaTag::GTLogErrorLimiter* getStaticF__errorLog_nullMainSkin() ;

static inline ::GorillaTag::GTLogErrorLimiter* getStaticF__errorLog_nullVRRigFromVRRigCache() ;

static inline bool getStaticF__hasInstance_k__BackingField() ;

static inline ::GorillaTag::MonkeFX::MonkeFX* getStaticF__instance_k__BackingField() ;

static inline ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> getStaticF__rigs() ;

static inline int32_t getStaticF__rigsHash() ;

/// [CompilerGenerated]
/// @brief Method get_hasInstance, addr 0x5d43484, size 0x58, virtual false, abstract: false, final false
static inline bool get_hasInstance() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5d433cc, size 0x58, virtual false, abstract: false, final false
static inline ::GorillaTag::MonkeFX::MonkeFX* get_instance() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

static inline void setStaticF__boneNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF__bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

static inline void setStaticF__errorLog_nullBone(::GorillaTag::GTLogErrorLimiter*  value) ;

static inline void setStaticF__errorLog_nullMainSkin(::GorillaTag::GTLogErrorLimiter*  value) ;

static inline void setStaticF__errorLog_nullVRRigFromVRRigCache(::GorillaTag::GTLogErrorLimiter*  value) ;

static inline void setStaticF__hasInstance_k__BackingField(bool  value) ;

static inline void setStaticF__instance_k__BackingField(::GorillaTag::MonkeFX::MonkeFX*  value) ;

static inline void setStaticF__rigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value) ;

static inline void setStaticF__rigsHash(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasInstance, addr 0x5d434dc, size 0x60, virtual false, abstract: false, final false
static inline void set_hasInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5d43424, size 0x60, virtual false, abstract: false, final false
static inline void set_instance(::GorillaTag::MonkeFX::MonkeFX*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeFX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeFX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeFX(MonkeFX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeFX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeFX(MonkeFX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4712};

/// @brief Field _k16BitFactor offset 0xffffffff size 0x4
static constexpr float_t  _k16BitFactor{static_cast<float_t>(65536.0f)};

/// @brief Field _settingsSOs, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*  ____settingsSOs;

/// @brief Field _srcMeshInst_to_meshId, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ____srcMeshInst_to_meshId;

/// @brief Field _srcMeshId_to_sourceMesh, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ____srcMeshId_to_sourceMesh;

/// @brief Field _srcMeshId_to_elemRange, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>*  ____srcMeshId_to_elemRange;

/// @brief Field _meshId_to_settingsUsers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>*  ____meshId_to_settingsUsers;

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFX, ____settingsSOs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFX, ____srcMeshInst_to_meshId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFX, ____srcMeshId_to_sourceMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFX, ____srcMeshId_to_elemRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFX, ____meshId_to_settingsUsers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFX, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::MonkeFX::MonkeFX) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::MonkeFX
