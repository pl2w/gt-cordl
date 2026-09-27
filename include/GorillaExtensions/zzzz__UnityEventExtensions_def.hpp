#pragma once
// IWYU pragma private; include "GorillaExtensions/UnityEventExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityEventExtensions)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaExtensions {
class UnityEventExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::UnityEventExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::UnityEventExtensions*, "GorillaExtensions", "UnityEventExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.UnityEventExtensions
class CORDL_TYPE UnityEventExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method InvokeAll, addr 0x5cf75bc, size 0x2a0, virtual false, abstract: false, final false
static inline void InvokeAll(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent*>*  events) ;

/// [Extension]
/// @brief Method InvokeAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TArg>
static inline void InvokeAll(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent_1<TArg>*>*  events, TArg  arg) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::UnityEventExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
