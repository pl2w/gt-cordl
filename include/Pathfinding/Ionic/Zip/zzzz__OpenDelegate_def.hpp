#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/OpenDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpenDelegate)
namespace System::IO {
class Stream;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class OpenDelegate;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::OpenDelegate*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::OpenDelegate*, "Pathfinding.Ionic.Zip", "OpenDelegate");
// Dependencies System.MulticastDelegate
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.OpenDelegate
class CORDL_TYPE OpenDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa68bd30, size 0x14, virtual true, abstract: false, final false
inline ::System::IO::Stream* Invoke(::StringW  entryName) ;

static inline ::Pathfinding::Ionic::Zip::OpenDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa68bc80, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenDelegate(OpenDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenDelegate(OpenDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28138};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::OpenDelegate) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
