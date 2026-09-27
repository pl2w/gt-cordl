#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Mirror.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Mirror)
namespace UnityEngine::Localization::Pseudo {
class IPseudoLocalizationMethod;
}
namespace UnityEngine::Localization::Pseudo {
class Message;
}
namespace UnityEngine::Localization::Pseudo {
class WritableMessageFragment;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class Mirror;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::Mirror*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::Mirror*, "UnityEngine.Localization.Pseudo", "Mirror");
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.Mirror
class CORDL_TYPE Mirror : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr operator  ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept;

/// @brief Method MirrorFragment, addr 0xb025d9c, size 0x1c0, virtual false, abstract: false, final false
inline void MirrorFragment(::UnityEngine::Localization::Pseudo::WritableMessageFragment*  writableMessageFragment) ;

static inline ::UnityEngine::Localization::Pseudo::Mirror* New_ctor() ;

/// @brief Method Transform, addr 0xb025c2c, size 0x170, virtual true, abstract: false, final true
inline void Transform(::UnityEngine::Localization::Pseudo::Message*  message) ;

/// @brief Method .ctor, addr 0xb025f5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mirror() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mirror(Mirror && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mirror(Mirror const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25130};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::Mirror) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
