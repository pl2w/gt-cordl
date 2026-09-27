#pragma once
// IWYU pragma private; include "Meta/WitAi/UnityEventExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityEventExtensions)
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Meta::WitAi {
class UnityEventExtensions;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::UnityEventExtensions*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::UnityEventExtensions*, "Meta.WitAi", "UnityEventExtensions");
// [Extension]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.UnityEventExtensions
class CORDL_TYPE UnityEventExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method SetListener, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetListener(::UnityEngine::Events::UnityEvent_1<T>*  baseEvent, ::UnityEngine::Events::UnityAction_1<T>*  call, bool  add) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventExtensions(UnityEventExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventExtensions(UnityEventExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::UnityEventExtensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
