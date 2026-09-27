#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IGuidedRefObject)
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::IGuidedRefObject*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::IGuidedRefObject*, "GorillaTag.GuidedRefs", "IGuidedRefObject");
// Dependencies 
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.IGuidedRefObject
class CORDL_TYPE IGuidedRefObject {
public:
// Declarations
/// @brief Method GetInstanceID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetInstanceID() ;

/// @brief Method GuidedRefInitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GuidedRefInitialize() ;

// Ctor Parameters [CppParam { name: "", ty: "IGuidedRefObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGuidedRefObject(IGuidedRefObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4723};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::GuidedRefs
