#pragma once
// IWYU pragma private; include "GlobalNamespace/SnowballMaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
#include "GlobalNamespace/zzzz__SnowballThrowable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SnowballMaker)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class SnowballThrowable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SnowballMaker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnowballMaker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnowballMaker*, "", "SnowballMaker");
// Dependencies MonoBehaviourPostTick, SnowballThrowable
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnowballMaker
class CORDL_TYPE SnowballMaker : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
/// @brief Field <leftHandInstance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__leftHandInstance_k__BackingField, put=setStaticF__leftHandInstance_k__BackingField)) ::UnityW<::GlobalNamespace::SnowballMaker>  _leftHandInstance_k__BackingField;

/// @brief Field <rightHandInstance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rightHandInstance_k__BackingField, put=setStaticF__rightHandInstance_k__BackingField)) ::UnityW<::GlobalNamespace::SnowballMaker>  _rightHandInstance_k__BackingField;

/// @brief Field <snowballs>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__snowballs_k__BackingField, put=__cordl_internal_set__snowballs_k__BackingField)) ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>  _snowballs_k__BackingField;

/// @brief Field handTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTransform, put=__cordl_internal_set_handTransform)) ::UnityW<::UnityEngine::Transform>  handTransform;

/// @brief Field isLeftHand, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field lastGroundContactTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGroundContactTime, put=__cordl_internal_set_lastGroundContactTime)) float_t  lastGroundContactTime;

/// @brief Field m_hasGrowingSnowball, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasGrowingSnowball, put=__cordl_internal_set_m_hasGrowingSnowball)) bool  m_hasGrowingSnowball;

/// @brief Field matSnowballLookup, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_matSnowballLookup, put=__cordl_internal_set_matSnowballLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  matSnowballLookup;

/// @brief Field requiresFreshMaterialContact, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_requiresFreshMaterialContact, put=__cordl_internal_set_requiresFreshMaterialContact)) bool  requiresFreshMaterialContact;

/// @brief Field snowballByThrowableIndex, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowballByThrowableIndex, put=__cordl_internal_set_snowballByThrowableIndex)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  snowballByThrowableIndex;

/// @brief Field snowballCreationCooldownTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_snowballCreationCooldownTime, put=__cordl_internal_set_snowballCreationCooldownTime)) float_t  snowballCreationCooldownTime;

/// @brief Field snowballPlayfabIdByMaterialIndex, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowballPlayfabIdByMaterialIndex, put=__cordl_internal_set_snowballPlayfabIdByMaterialIndex)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  snowballPlayfabIdByMaterialIndex;

/// @brief Field snowballPlayfabIdByThrowableIndex, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowballPlayfabIdByThrowableIndex, put=__cordl_internal_set_snowballPlayfabIdByThrowableIndex)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  snowballPlayfabIdByThrowableIndex;

 __declspec(property(get=get_snowballs, put=set_snowballs)) ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>  snowballs;

/// @brief Field velocityEstimator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Method Awake, addr 0x5e03204, size 0x2bc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitializeSnowballFromMatIndex, addr 0x5e03e60, size 0xfc, virtual false, abstract: false, final false
inline void InitializeSnowballFromMatIndex(int32_t  matIndex) ;

static inline ::GlobalNamespace::SnowballMaker* New_ctor() ;

/// @brief Method PostTick, addr 0x5e03764, size 0x6fc, virtual true, abstract: false, final false
inline void PostTick() ;

/// @brief Method SetupThrowables, addr 0x5e035dc, size 0x188, virtual false, abstract: false, final false
inline void SetupThrowables(::ArrayW<::GlobalNamespace::SnowballThrowable*>  newThrowables) ;

/// @brief Method Start, addr 0x5e034c0, size 0x11c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryCreateSnowball, addr 0x5e0278c, size 0x3d8, virtual false, abstract: false, final false
inline bool TryCreateSnowball(int32_t  materialIndex, ::by_ref<::GlobalNamespace::SnowballThrowable*>  result) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>> const& __cordl_internal_get__snowballs_k__BackingField() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>& __cordl_internal_get__snowballs_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handTransform() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr float_t const& __cordl_internal_get_lastGroundContactTime() const;

constexpr float_t& __cordl_internal_get_lastGroundContactTime() ;

constexpr bool const& __cordl_internal_get_m_hasGrowingSnowball() const;

constexpr bool& __cordl_internal_get_m_hasGrowingSnowball() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>* const& __cordl_internal_get_matSnowballLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*& __cordl_internal_get_matSnowballLookup() ;

constexpr bool const& __cordl_internal_get_requiresFreshMaterialContact() const;

constexpr bool& __cordl_internal_get_requiresFreshMaterialContact() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>* const& __cordl_internal_get_snowballByThrowableIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*& __cordl_internal_get_snowballByThrowableIndex() ;

constexpr float_t const& __cordl_internal_get_snowballCreationCooldownTime() const;

constexpr float_t& __cordl_internal_get_snowballCreationCooldownTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* const& __cordl_internal_get_snowballPlayfabIdByMaterialIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*& __cordl_internal_get_snowballPlayfabIdByMaterialIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* const& __cordl_internal_get_snowballPlayfabIdByThrowableIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*& __cordl_internal_get_snowballPlayfabIdByThrowableIndex() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set__snowballs_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>  value) ;

constexpr void __cordl_internal_set_handTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_lastGroundContactTime(float_t  value) ;

constexpr void __cordl_internal_set_m_hasGrowingSnowball(bool  value) ;

constexpr void __cordl_internal_set_matSnowballLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  value) ;

constexpr void __cordl_internal_set_requiresFreshMaterialContact(bool  value) ;

constexpr void __cordl_internal_set_snowballByThrowableIndex(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  value) ;

constexpr void __cordl_internal_set_snowballCreationCooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_snowballPlayfabIdByMaterialIndex(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_snowballPlayfabIdByThrowableIndex(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5e03f5c, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::SnowballMaker> getStaticF__leftHandInstance_k__BackingField() ;

static inline ::UnityW<::GlobalNamespace::SnowballMaker> getStaticF__rightHandInstance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_leftHandInstance, addr 0x5e030bc, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SnowballMaker> get_leftHandInstance() ;

/// [CompilerGenerated]
/// @brief Method get_rightHandInstance, addr 0x5e0315c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SnowballMaker> get_rightHandInstance() ;

/// [CompilerGenerated]
/// @brief Method get_snowballs, addr 0x5e031f4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>> get_snowballs() ;

static inline void setStaticF__leftHandInstance_k__BackingField(::UnityW<::GlobalNamespace::SnowballMaker>  value) ;

static inline void setStaticF__rightHandInstance_k__BackingField(::UnityW<::GlobalNamespace::SnowballMaker>  value) ;

/// [CompilerGenerated]
/// @brief Method set_leftHandInstance, addr 0x5e03104, size 0x58, virtual false, abstract: false, final false
static inline void set_leftHandInstance(::GlobalNamespace::SnowballMaker*  value) ;

/// [CompilerGenerated]
/// @brief Method set_rightHandInstance, addr 0x5e031a4, size 0x50, virtual false, abstract: false, final false
static inline void set_rightHandInstance(::GlobalNamespace::SnowballMaker*  value) ;

/// [CompilerGenerated]
/// @brief Method set_snowballs, addr 0x5e031fc, size 0x8, virtual false, abstract: false, final false
inline void set_snowballs(::ArrayW<::GlobalNamespace::SnowballThrowable*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnowballMaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnowballMaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnowballMaker(SnowballMaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnowballMaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnowballMaker(SnowballMaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{521};

/// @brief Field isLeftHand, offset: 0x21, size: 0x1, def value: None
 bool  ___isLeftHand;

/// [CompilerGenerated]
/// @brief Field <snowballs>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>  ____snowballs_k__BackingField;

/// @brief Field velocityEstimator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field snowballCreationCooldownTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___snowballCreationCooldownTime;

/// @brief Field lastGroundContactTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___lastGroundContactTime;

/// @brief Field requiresFreshMaterialContact, offset: 0x40, size: 0x1, def value: None
 bool  ___requiresFreshMaterialContact;

/// @brief Field handTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handTransform;

/// @brief Field matSnowballLookup, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  ___matSnowballLookup;

/// @brief Field snowballByThrowableIndex, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  ___snowballByThrowableIndex;

/// @brief Field snowballPlayfabIdByThrowableIndex, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  ___snowballPlayfabIdByThrowableIndex;

/// @brief Field snowballPlayfabIdByMaterialIndex, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  ___snowballPlayfabIdByMaterialIndex;

/// @brief Field m_hasGrowingSnowball, offset: 0x70, size: 0x1, def value: None
 bool  ___m_hasGrowingSnowball;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___isLeftHand) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ____snowballs_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___velocityEstimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___snowballCreationCooldownTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___lastGroundContactTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___requiresFreshMaterialContact) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___handTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___matSnowballLookup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___snowballByThrowableIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___snowballPlayfabIdByThrowableIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___snowballPlayfabIdByMaterialIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballMaker, ___m_hasGrowingSnowball) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnowballMaker) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
