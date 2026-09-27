#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/EventSystemInstantiator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventSystemInstantiator)
// Forward declare root types
namespace Meta::WitAi::Utilities {
class EventSystemInstantiator;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::EventSystemInstantiator*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::EventSystemInstantiator*, "Meta.WitAi.Utilities", "EventSystemInstantiator");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.EventSystemInstantiator
class CORDL_TYPE EventSystemInstantiator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x9e84b40, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Meta::WitAi::Utilities::EventSystemInstantiator* New_ctor() ;

/// @brief Method .ctor, addr 0x9e84bc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventSystemInstantiator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventSystemInstantiator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSystemInstantiator(EventSystemInstantiator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemInstantiator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSystemInstantiator(EventSystemInstantiator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Utilities::EventSystemInstantiator) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
