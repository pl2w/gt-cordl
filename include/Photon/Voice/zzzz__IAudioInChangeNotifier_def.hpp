#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioInChangeNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IAudioInChangeNotifier)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class IAudioInChangeNotifier;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IAudioInChangeNotifier*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IAudioInChangeNotifier*, "Photon.Voice", "IAudioInChangeNotifier");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IAudioInChangeNotifier
class CORDL_TYPE IAudioInChangeNotifier {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_IsSupported)) bool  IsSupported;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Error() ;

/// @brief Method get_IsSupported, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSupported() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAudioInChangeNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioInChangeNotifier(IAudioInChangeNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28407};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
