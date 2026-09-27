#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestProgressDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VRequestProgressDelegate)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class VRequestProgressDelegate;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::VRequestProgressDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequestProgressDelegate*, "Meta.WitAi.Requests", "VRequestProgressDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequestProgressDelegate
class CORDL_TYPE VRequestProgressDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e87714, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  progress) ;

static inline ::Meta::WitAi::Requests::VRequestProgressDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e87674, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequestProgressDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequestProgressDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequestProgressDelegate(VRequestProgressDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequestProgressDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequestProgressDelegate(VRequestProgressDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Requests::VRequestProgressDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
