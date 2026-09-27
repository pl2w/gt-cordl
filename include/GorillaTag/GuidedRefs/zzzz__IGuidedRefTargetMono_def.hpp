#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefTargetMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGuidedRefTargetMono)
namespace GorillaTag::GuidedRefs {
struct GuidedRefBasicTargetInfo;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class IGuidedRefTargetMono;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::IGuidedRefTargetMono*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::IGuidedRefTargetMono*, "GorillaTag.GuidedRefs", "IGuidedRefTargetMono");
// Dependencies 
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.IGuidedRefTargetMono
class CORDL_TYPE IGuidedRefTargetMono {
public:
// Declarations
 __declspec(property(get=get_GRefTargetInfo, put=set_GRefTargetInfo)) ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  GRefTargetInfo;

 __declspec(property(get=get_GuidedRefTargetObject)) ::UnityW<::UnityEngine::Object>  GuidedRefTargetObject;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Method get_GRefTargetInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo get_GRefTargetInfo() ;

/// @brief Method get_GuidedRefTargetObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Object> get_GuidedRefTargetObject() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

/// @brief Method set_GRefTargetInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_GRefTargetInfo(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IGuidedRefTargetMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGuidedRefTargetMono(IGuidedRefTargetMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4731};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::GuidedRefs
