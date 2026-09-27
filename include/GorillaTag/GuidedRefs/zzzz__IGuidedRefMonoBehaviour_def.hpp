#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefMonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGuidedRefMonoBehaviour)
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*, "GorillaTag.GuidedRefs", "IGuidedRefMonoBehaviour");
// Dependencies 
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour
class CORDL_TYPE IGuidedRefMonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Method get_transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IGuidedRefMonoBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGuidedRefMonoBehaviour(IGuidedRefMonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::GuidedRefs
