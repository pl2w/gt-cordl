#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/IFingerFlexListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IFingerFlexListener)
namespace GlobalNamespace {
struct IFingerFlexListener_ComponentActivator;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class IFingerFlexListener;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::IFingerFlexListener*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::IFingerFlexListener*, "GorillaTag.Cosmetics", "IFingerFlexListener");
// Dependencies 
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.IFingerFlexListener
class CORDL_TYPE IFingerFlexListener {
public:
// Declarations
using ComponentActivator = ::GlobalNamespace::IFingerFlexListener_ComponentActivator;

/// @brief Method FingerFlexValidation, addr 0x5d99840, size 0x8, virtual true, abstract: false, final false
inline bool FingerFlexValidation(bool  isLeftHand) ;

/// @brief Method OnButtonPressStayed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnButtonPressStayed(bool  isLeftHand, float_t  value) ;

/// @brief Method OnButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnButtonPressed(bool  isLeftHand, float_t  value) ;

/// @brief Method OnButtonReleased, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnButtonReleased(bool  isLeftHand, float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IFingerFlexListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFingerFlexListener(IFingerFlexListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4946};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::Cosmetics
