#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/IAnimationJobData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimationJobData)
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class IAnimationJobData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::IAnimationJobData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::IAnimationJobData*, "UnityEngine.Animations.Rigging", "IAnimationJobData");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.IAnimationJobData
class CORDL_TYPE IAnimationJobData {
public:
// Declarations
/// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsValid() ;

// Ctor Parameters [CppParam { name: "", ty: "IAnimationJobData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnimationJobData(IAnimationJobData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32292};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations::Rigging
