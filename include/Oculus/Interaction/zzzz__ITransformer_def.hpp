#pragma once
// IWYU pragma private; include "Oculus/Interaction/ITransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITransformer)
namespace Oculus::Interaction {
class IGrabbable;
}
// Forward declare root types
namespace Oculus::Interaction {
class ITransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ITransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ITransformer*, "Oculus.Interaction", "ITransformer");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ITransformer
class CORDL_TYPE ITransformer {
public:
// Declarations
/// @brief Method BeginTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EndTransform() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method UpdateTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateTransform() ;

// Ctor Parameters [CppParam { name: "", ty: "ITransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransformer(ITransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
