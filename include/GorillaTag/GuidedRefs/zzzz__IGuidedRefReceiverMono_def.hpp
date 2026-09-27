#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefReceiverMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IGuidedRefReceiverMono)
namespace GorillaTag::GuidedRefs {
struct GuidedRefTryResolveInfo;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class IGuidedRefReceiverMono;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*, "GorillaTag.GuidedRefs", "IGuidedRefReceiverMono");
// Dependencies 
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.IGuidedRefReceiverMono
class CORDL_TYPE IGuidedRefReceiverMono {
public:
// Declarations
 __declspec(property(get=get_GuidedRefsWaitingToResolveCount, put=set_GuidedRefsWaitingToResolveCount)) int32_t  GuidedRefsWaitingToResolveCount;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Method GuidedRefTryResolveReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  target) ;

/// @brief Method OnAllGuidedRefsResolved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnAllGuidedRefsResolved() ;

/// @brief Method OnGuidedRefTargetDestroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGuidedRefTargetDestroyed(int32_t  fieldId) ;

/// @brief Method get_GuidedRefsWaitingToResolveCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_GuidedRefsWaitingToResolveCount() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

/// @brief Method set_GuidedRefsWaitingToResolveCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_GuidedRefsWaitingToResolveCount(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IGuidedRefReceiverMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGuidedRefReceiverMono(IGuidedRefReceiverMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4730};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::GuidedRefs
