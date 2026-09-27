#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Events/UnityEventString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityEventString)
// Forward declare root types
namespace UnityEngine::Localization::Events {
class UnityEventString;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Events::UnityEventString*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Events::UnityEventString*, "UnityEngine.Localization.Events", "UnityEventString");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::Localization::Events {
// Is value type: false
// CS Name: UnityEngine.Localization.Events.UnityEventString
class CORDL_TYPE UnityEventString : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::UnityEngine::Localization::Events::UnityEventString* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ecd0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventString(UnityEventString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventString(UnityEventString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25316};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Events::UnityEventString) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Events
