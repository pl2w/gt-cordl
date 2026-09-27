#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/IVCBindingEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVCBindingEvents)
// Forward declare root types
namespace Oculus::Voice::Bindings::Android {
class IVCBindingEvents;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Bindings::Android::IVCBindingEvents*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Bindings::Android::IVCBindingEvents*, "Oculus.Voice.Bindings.Android", "IVCBindingEvents");
// Dependencies 
namespace Oculus::Voice::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Bindings.Android.IVCBindingEvents
class CORDL_TYPE IVCBindingEvents {
public:
// Declarations
/// @brief Method OnServiceNotAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnServiceNotAvailable(::StringW  error, ::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "IVCBindingEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVCBindingEvents(IVCBindingEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31698};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Voice::Bindings::Android
