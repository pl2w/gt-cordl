#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGeoHideShowTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverArrayInfo_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaGeoHideShowTrigger)
namespace GorillaTag::GuidedRefs {
struct GuidedRefTryResolveInfo;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefReceiverMono;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaGeoHideShowTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGeoHideShowTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGeoHideShowTrigger*, "", "GorillaGeoHideShowTrigger");
// Dependencies GorillaTag.GuidedRefs.GuidedRefReceiverArrayInfo, GorillaTriggerBox, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGeoHideShowTrigger
class CORDL_TYPE GorillaGeoHideShowTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
 __declspec(property(get=GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount, put=GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount)) int32_t  GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount;

/// @brief Field <GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefsWaitingToResolveCount>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField, put=__cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField)) int32_t  _GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;

/// @brief Field _guidedRefsAreFullyResolved, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__guidedRefsAreFullyResolved, put=__cordl_internal_set__guidedRefsAreFullyResolved)) bool  _guidedRefsAreFullyResolved;

/// @brief Field makeSureThisIsDisabled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsDisabled, put=__cordl_internal_set_makeSureThisIsDisabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsDisabled;

/// @brief Field makeSureThisIsDisabled_gRefs, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsDisabled_gRefs, put=__cordl_internal_set_makeSureThisIsDisabled_gRefs)) ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  makeSureThisIsDisabled_gRefs;

/// @brief Field makeSureThisIsEnabled, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsEnabled, put=__cordl_internal_set_makeSureThisIsEnabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsEnabled;

/// @brief Field makeSureThisIsEnabled_gRefs, offset 0x50, size 0x20 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsEnabled_gRefs, put=__cordl_internal_set_makeSureThisIsEnabled_gRefs)) ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  makeSureThisIsEnabled_gRefs;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*() noexcept;

/// @brief Method Awake, addr 0x5907a80, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform, addr 0x5907fbc, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID, addr 0x5907fc4, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize, addr 0x5907d30, size 0xe0, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefTryResolveReference, addr 0x5907e10, size 0x108, virtual true, abstract: false, final true
inline bool GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  target) ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnAllGuidedRefsResolved, addr 0x5907f18, size 0xc, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed, addr 0x5907f24, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed(int32_t  fieldId) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount, addr 0x5907f2c, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount, addr 0x5907f34, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount(int32_t  value) ;

static inline ::GlobalNamespace::GorillaGeoHideShowTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5907b18, size 0x218, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr int32_t const& __cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__guidedRefsAreFullyResolved() const;

constexpr bool& __cordl_internal_get__guidedRefsAreFullyResolved() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsDisabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsDisabled() ;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo const& __cordl_internal_get_makeSureThisIsDisabled_gRefs() const;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo& __cordl_internal_get_makeSureThisIsDisabled_gRefs() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsEnabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsEnabled() ;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo const& __cordl_internal_get_makeSureThisIsEnabled_gRefs() const;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo& __cordl_internal_get_makeSureThisIsEnabled_gRefs() ;

constexpr void __cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__guidedRefsAreFullyResolved(bool  value) ;

constexpr void __cordl_internal_set_makeSureThisIsDisabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsDisabled_gRefs(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  value) ;

constexpr void __cordl_internal_set_makeSureThisIsEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsEnabled_gRefs(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  value) ;

/// @brief Method .ctor, addr 0x5907f3c, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono* i___GorillaTag__GuidedRefs__IGuidedRefReceiverMono() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGeoHideShowTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGeoHideShowTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGeoHideShowTrigger(GorillaGeoHideShowTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGeoHideShowTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGeoHideShowTrigger(GorillaGeoHideShowTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2164};

/// [SerializeField]
/// @brief Field makeSureThisIsDisabled, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsDisabled;

/// [SerializeField]
/// @brief Field makeSureThisIsDisabled_gRefs, offset: 0x28, size: 0x20, def value: None
 ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  ___makeSureThisIsDisabled_gRefs;

/// [SerializeField]
/// @brief Field makeSureThisIsEnabled, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsEnabled;

/// [SerializeField]
/// @brief Field makeSureThisIsEnabled_gRefs, offset: 0x50, size: 0x20, def value: None
 ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  ___makeSureThisIsEnabled_gRefs;

/// @brief Field _guidedRefsAreFullyResolved, offset: 0x70, size: 0x1, def value: None
 bool  ____guidedRefsAreFullyResolved;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefsWaitingToResolveCount>k__BackingField, offset: 0x74, size: 0x4, def value: None
 int32_t  ____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGeoHideShowTrigger, ___makeSureThisIsDisabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGeoHideShowTrigger, ___makeSureThisIsDisabled_gRefs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGeoHideShowTrigger, ___makeSureThisIsEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGeoHideShowTrigger, ___makeSureThisIsEnabled_gRefs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGeoHideShowTrigger, ____guidedRefsAreFullyResolved) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGeoHideShowTrigger, ____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGeoHideShowTrigger) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
