#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefTargetMonoTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefBasicTargetInfo_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidedRefTargetMonoTransform)
namespace GorillaTag::GuidedRefs {
struct GuidedRefBasicTargetInfo;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefTargetMono;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class GuidedRefTargetMonoTransform;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::GuidedRefTargetMonoTransform*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefTargetMonoTransform*, "GorillaTag.GuidedRefs", "GuidedRefTargetMonoTransform");
// Dependencies GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo, UnityEngine.MonoBehaviour
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.GuidedRefTargetMonoTransform
class CORDL_TYPE GuidedRefTargetMonoTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_GuidedRefs_IGuidedRefTargetMono_get_GRefTargetInfo, put=GorillaTag_GuidedRefs_IGuidedRefTargetMono_set_GRefTargetInfo)) ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  GorillaTag_GuidedRefs_IGuidedRefTargetMono_GRefTargetInfo;

 __declspec(property(get=get_GuidedRefTargetObject)) ::UnityW<::UnityEngine::Object>  GuidedRefTargetObject;

/// @brief Field guidedRefTargetInfo, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_guidedRefTargetInfo, put=__cordl_internal_set_guidedRefTargetInfo)) ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  guidedRefTargetInfo;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefTargetMono"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*() noexcept;

/// @brief Method Awake, addr 0x5d4580c, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform, addr 0x5d45994, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID, addr 0x5d4599c, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize, addr 0x5d45914, size 0x78, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefTargetMono.get_GRefTargetInfo, addr 0x5d457cc, size 0x14, virtual true, abstract: false, final true
inline ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo GorillaTag_GuidedRefs_IGuidedRefTargetMono_get_GRefTargetInfo() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefTargetMono.set_GRefTargetInfo, addr 0x5d457e0, size 0x24, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefTargetMono_set_GRefTargetInfo(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  value) ;

static inline ::GorillaTag::GuidedRefs::GuidedRefTargetMonoTransform* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d458a4, size 0x70, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo const& __cordl_internal_get_guidedRefTargetInfo() const;

constexpr ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo& __cordl_internal_get_guidedRefTargetInfo() ;

constexpr void __cordl_internal_set_guidedRefTargetInfo(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  value) ;

/// @brief Method .ctor, addr 0x5d4598c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GuidedRefTargetObject, addr 0x5d45804, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> get_GuidedRefTargetObject() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefTargetMono"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefTargetMono* i___GorillaTag__GuidedRefs__IGuidedRefTargetMono() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefTargetMonoTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefTargetMonoTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidedRefTargetMonoTransform(GuidedRefTargetMonoTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefTargetMonoTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidedRefTargetMonoTransform(GuidedRefTargetMonoTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4729};

/// [SerializeField]
/// @brief Field guidedRefTargetInfo, offset: 0x20, size: 0x18, def value: None
 ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  ___guidedRefTargetInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefTargetMonoTransform, ___guidedRefTargetInfo) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefTargetMonoTransform) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
