#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/IPseudoLocalizationMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPseudoLocalizationMethod)
namespace UnityEngine::Localization::Pseudo {
class Message;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class IPseudoLocalizationMethod;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*, "UnityEngine.Localization.Pseudo", "IPseudoLocalizationMethod");
// Dependencies 
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.IPseudoLocalizationMethod
class CORDL_TYPE IPseudoLocalizationMethod {
public:
// Declarations
/// @brief Method Transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Transform(::UnityEngine::Localization::Pseudo::Message*  message) ;

// Ctor Parameters [CppParam { name: "", ty: "IPseudoLocalizationMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPseudoLocalizationMethod(IPseudoLocalizationMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25113};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Pseudo
