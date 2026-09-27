#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestResponseDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(VRequestResponseDelegate)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class VRequestResponseDelegate;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::VRequestResponseDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequestResponseDelegate*, "Meta.WitAi.Requests", "VRequestResponseDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequestResponseDelegate
class CORDL_TYPE VRequestResponseDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e877c4, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Meta::WitAi::Requests::VRequestResponseDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e87728, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequestResponseDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequestResponseDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequestResponseDelegate(VRequestResponseDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequestResponseDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequestResponseDelegate(VRequestResponseDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25592};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Requests::VRequestResponseDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
