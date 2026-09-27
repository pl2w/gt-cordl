#pragma once
// IWYU pragma private; include "Modio/Platforms/IVirtualKeyboardHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IVirtualKeyboardHandler)
namespace Modio::Platforms {
struct ModioVirtualKeyboardType;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Modio::Platforms {
class IVirtualKeyboardHandler;
}
// Write type traits
MARK_REF_T(::Modio::Platforms::IVirtualKeyboardHandler*);
DEFINE_IL2CPP_CLASS(::Modio::Platforms::IVirtualKeyboardHandler*, "Modio.Platforms", "IVirtualKeyboardHandler");
// Dependencies 
namespace Modio::Platforms {
// Is value type: false
// CS Name: Modio.Platforms.IVirtualKeyboardHandler
class CORDL_TYPE IVirtualKeyboardHandler {
public:
// Declarations
/// @brief Method OpenVirtualKeyboard, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OpenVirtualKeyboard(::StringW  title, ::StringW  text, ::StringW  placeholder, ::Modio::Platforms::ModioVirtualKeyboardType  virtualKeyboardType, int32_t  characterLimit, bool  multiline, ::System::Action_1<::StringW>*  onClose) ;

// Ctor Parameters [CppParam { name: "", ty: "IVirtualKeyboardHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVirtualKeyboardHandler(IVirtualKeyboardHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17558};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Platforms
